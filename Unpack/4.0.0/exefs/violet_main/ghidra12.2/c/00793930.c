/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00793930; name: FUN_00793930
 */


uint FUN_00793930(void)

{
  ulong uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98 [3];
  undefined4 local_80;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  uVar1 = nn::time::IsInitialized();
  if ((uVar1 & 1) == 0) {
    return 0xffffffff;
  }
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  nn::time::GetDeviceLocationName((LocationName *)&local_38);
  local_80 = 0;
  local_98[0] = PTR_DAT_047d09a8 + 0x10;
  FUN_0079439c(local_98);
  FUN_007943c8(local_98,&local_38,0x24);
  local_a8 = 0;
  local_a0 = 0;
  FUN_007944ac(local_98,&local_a8);
  return local_a0._4_4_ ^ (uint)local_a0 ^ local_a8._4_4_ ^ (uint)local_a8;
}


