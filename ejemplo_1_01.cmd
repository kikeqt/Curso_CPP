:: https://www.askix.com/advanced-batch_9.html
GOTO TurnEOff
GOTO MultipleGoto
echo This ECHO is going to be skipped.
:MultipleGoto
GOTO 3
:end
PAUSE
EXIT
:1
ECHO The End
GOTO END
:3
ECHO This will be displayed first
GOTO 2
:TurnEOff
@ECHO OFF
GOTO MultipleGoto
:2
ECHO This is second, even though it's last in the code.
GOTO 1