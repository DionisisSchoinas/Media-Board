# Important Information
**When Uploading code to the Arduino Pro Micro, the board needs to be reset for the Upload to succeed.**

Steps:
1. Close the circuit between Reset and GND pins
2. Start Upload
3. Wait until Upload reaches the state where it looks for the board
4. Open the circuit between Reset and GND pins

# Components
* Arduino Leonardo / Pro Micro
* Rotary Encoder Module Brick Sensor for Arduino KY-040 **(x2)**
* Dual-axis XY PS2 Joystick Module For Arduino
* B3F-4055 Push Button - Tactile Switch **(x3)**


# Libraries
* **HID-Project**  (https://github.com/NicoHood/HID)
	Added via Package Manager


# What are the shortcuts ?
*: is added to the app keybinds
<table>
    <thead>
        <th>Components</th>
        <th>Functions</th>
    </thead>
    <tbody>
        <tr>
            <td width=100px>
                <b>Buttons</b>
                <br>(Button 3 is used as a mode changer)
            </td>
            <td>
                <table>
                    <tbody>
                        <tr>
                            <td rowspan=3>Mode 1</td>
                            <td>Button 1</td>
                            <td>Tab Volume Mute</td>
                            <td><kbd>Ctrl</kbd>+<kbd>M</kbd></td>
                        </tr>
                        <tr>
                            <td>Button 2</td>
                            <td>Discord Mute*</td>
                            <td><kbd>Alt</kbd> + <kbd>Ctrl</kbd> + <kbd>Win</kbd> + <kbd>M</kbd></td>
                        </tr>
                        <tr>
                            <td>Button 3</td>
                            <td>Player Play-Pause</td>
                            <td>Media Play-Pause</td>
                        </tr>
                        <tr>
                            <td rowspan=3>Mode 2</td>
                            <td>Button 1</td>
                            <td>Previous Song</td>
                            <td>Media Prev</td>
                        </tr>
                        <tr>
                            <td>Button 2</td>
                            <td>Next Song</td>
                            <td>Media Next</td>
                        </tr>
                        <tr>
                            <td>Button 3</td>
                            <td>Mode stay in 2</td>
                            <td>Hold button</td>
                        </tr>
                    </tbody>
                </table>
            </td>
        </tr>
        <tr>
            <td>
                <b>Joystick</b>
            </td>
            <td>
                <table>
                    <tbody>
                        <tr>
                            <td>Push Up</td>
                            <td><kbd>Mouse Scroll Up</kbd></td>
                        </tr>
                        <tr>
                            <td>Push Down</td>
                            <td><kbd>Mouse Scroll Down</kbd></td>
                        </tr>
                        <tr>
                            <td>Push Right</td>
                            <td><kbd>Shift</kbd> + <kbd>Mouse Scroll Up</kbd></td>
                        </tr>
                        <tr>
                            <td>Push Left</td>
                            <td><kbd>Shift</kbd> + <kbd>Mouse Scroll Down</kbd></td>
                        </tr>
                        <tr>
                            <td>Press</td>
                            <td>Resets Arduino</td>
                        </tr>
                    </tbody>
                </table>
            </td>
        </tr>
        <tr>
            <td rowspan="6">
                <b>Rotary Encoders</b>
            </td>
            <td>
                <table>
	               <thead>
		               <th></th>
		               <th>Movement</th>
		               <th>Function</th>
		               <th>Shortcut</th>
	               </thead>     
                    <tbody>
                        <tr>
                            <td rowspan="3"> Rotary 1 </td>
                            <td>Rotate Right</td>
                            <td>System Volume Up</td>
                            <td>Media Volume Up</td>
                        </tr>
                        <tr>
                            <td>Rotate Left</td>
                            <td>System Volume Down</td>
                            <td>Media Volume Down</td>
                        </tr>
                        <tr>
                            <td>Press</td>
                            <td>System Volume Mute</td>
                            <td>Media Volume Mute</td>
                        </tr>
                        <tr>
                            <td rowspan="3"> Rotary 2 </td>
                            <td>Rotate Right</td>
                            <td>Zoom In</td>
                            <td><kbd>Ctrl</kbd> + <kbd>Mouse Scroll Up</kbd></td>
                        </tr>
                        <tr>
                            <td>Rotate Left</td>
                            <td>Zoom Out</td>
                            <td><kbd>Ctrl</kbd> + <kbd>Mouse Scroll Down</kbd></td>
                        </tr>
                        <tr>
                            <td>Press</td>
                            <td>Zoom Reset</td>
                            <td><kbd>Ctrl</kbd> + <kbd>0</kbd></td>
                        </tr>
                    </tbody>
                </table>
            </td>
        </tr>
    </tbody>
</table>

# Case for board
* https://cad.onshape.com/documents/1678670135acec579791f1e6/w/d268f6e968565c454c48c0a6/e/9d956e916faef2dee325c757
