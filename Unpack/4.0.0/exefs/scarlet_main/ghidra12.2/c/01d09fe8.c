/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d09fe8; name: FUN_01d09fe8
 */


void FUN_01d09fe8(int *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_18;
  
  local_18 = 0;
  nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_18);
  lVar1 = local_18;
  iVar2 = FUN_01d090a0(param_2);
  local_18 = lVar1 + iVar2;
  uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  *param_1 = (int)(short)uVar3;
  param_1[1] = ((int)uVar3 << 8) >> 0x18;
  param_1[2] = (int)uVar3 >> 0x18;
  param_1[3] = (int)((ulong)uVar3 >> 8) >> 0x18;
  param_1[4] = (int)((ulong)uVar3 >> 0x10) >> 0x18;
  param_1[5] = (int)((ulong)uVar3 >> 0x18) >> 0x18;
  return;
}


