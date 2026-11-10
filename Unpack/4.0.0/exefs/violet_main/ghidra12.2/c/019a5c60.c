/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a5c60; name: FUN_019a5c60
 */


undefined4 FUN_019a5c60(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_64 [16];
  undefined4 local_24;
  
  local_24 = 0;
  iVar1 = (**(code **)(*DAT_0483b098 + 0x28))(DAT_0483b098,local_64,0xffff,param_1,1);
  if (iVar1 == 0) {
    if (local_64[0] == 0) {
      uVar2 = 0;
    }
    else {
      local_24 = 1;
      uVar2 = 1;
      if ((param_2 & 1) != 0) {
        FUN_019a5cf0(&local_24,param_1);
        uVar2 = local_24;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


