/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a31290; name: FUN_00a31290
 */


void FUN_00a31290(int *param_1,long param_2)

{
  undefined8 local_40;
  CalendarAdditionalInfo aCStack_38 [24];
  CalendarTime local_8 [8];
  
  local_40 = *(undefined8 *)(param_2 + 0x48);
  nn::time::ToCalendarTime(local_8,aCStack_38,(PosixTime *)&local_40);
  *param_1 = (int)local_8._0_2_;
  param_1[1] = (local_8._0_4_ << 8) >> 0x18;
  param_1[2] = local_8._0_4_ >> 0x18;
  param_1[3] = local_8._1_4_ >> 0x18;
  param_1[4] = local_8._2_4_ >> 0x18;
  param_1[5] = local_8._3_4_ >> 0x18;
  return;
}


