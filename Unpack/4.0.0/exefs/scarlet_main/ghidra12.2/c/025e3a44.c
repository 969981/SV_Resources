/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025e3a44; name: FUN_025e3a44
 */


void FUN_025e3a44(int *param_1)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  short local_8;
  char cStack_6;
  char cStack_5;
  char cStack_4;
  char cStack_3;
  char cStack_2;
  
  _local_8 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = FUN_025e3a20();
  nn::time::ToCalendarTime
            ((CalendarTime *)&local_8,(CalendarAdditionalInfo *)&local_38,(PosixTime *)&local_40);
  *param_1 = (int)local_8;
  param_1[1] = (int)cStack_6;
  param_1[2] = (int)cStack_5;
  param_1[3] = (int)cStack_4;
  param_1[4] = (int)cStack_3;
  param_1[5] = (int)cStack_2;
  return;
}


