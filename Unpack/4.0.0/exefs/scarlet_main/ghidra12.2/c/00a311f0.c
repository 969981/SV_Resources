/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a311f0; name: FUN_00a311f0
 */


void FUN_00a311f0(int *param_1,long param_2)

{
  undefined8 local_40;
  CalendarAdditionalInfo aCStack_38 [24];
  CalendarTime local_8 [8];
  
  local_40 = *(undefined8 *)(param_2 + 0x40);
  nn::time::ToCalendarTime(local_8,aCStack_38,(PosixTime *)&local_40);
  *param_1 = (int)local_8._0_2_;
  param_1[1] = (local_8._0_4_ << 8) >> 0x18;
  param_1[2] = local_8._0_4_ >> 0x18;
  param_1[3] = local_8._1_4_ >> 0x18;
  param_1[4] = local_8._2_4_ >> 0x18;
  param_1[5] = local_8._3_4_ >> 0x18;
  return;
}


