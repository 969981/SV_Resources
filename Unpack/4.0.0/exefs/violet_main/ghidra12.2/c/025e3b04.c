/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025e3b04; name: FUN_025e3b04
 */


void FUN_025e3b04(int *param_1)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = FUN_025e3a20();
  uVar1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
  *param_1 = (int)(short)uVar1;
  param_1[1] = ((int)uVar1 << 8) >> 0x18;
  param_1[2] = (int)uVar1 >> 0x18;
  param_1[3] = (int)((ulong)uVar1 >> 8) >> 0x18;
  param_1[4] = (int)((ulong)uVar1 >> 0x10) >> 0x18;
  param_1[5] = (int)((ulong)uVar1 >> 0x18) >> 0x18;
  return;
}


