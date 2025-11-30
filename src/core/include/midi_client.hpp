#include <iostream>
#include <CoreMIDI/CoreMIDI.h>

class MidiClient{
    public:
        MidiClient(const std::string& clientName);
        ~MidiClient();

        OSStatus connectToDevice(int inputPortIndex, int outputPortIndex);

    private:
        MIDIClientRef _client;
        MIDIPortRef _inputPort;
        MIDIPortRef _outputPort;
};