# Milestone 1

The PC control program must:
- [ ] Provide the user with start and stop buttons that can be used to begin and end the buggy's run on the track.
- [ ] Provide an output area that displays telemetry received from the buggy during the run.


The buggy must:
- [ ] Start the run on receiving a GO command via WiFi  from the controlling PC
- [ ] Stop the run on receiving a STOP command via WiFi from the controlling PC
- [X] Traverse the track twice without derailing, using the IR sensors to follow the line of the track
- [X] Pause for obstacles as detected by the US rangefinder.
- [X] Report to the controlling PC when obstacles are detected and cleared.
