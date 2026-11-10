/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f885c; name: FUN_007f885c
 */


int FUN_007f885c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined *local_48 [3];
  undefined2 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  FUN_007f8d0c(param_1,(long)&local_28 + 4,&local_28,param_2,param_3);
  iVar3 = local_28._4_4_;
  if ((int)local_28 == 0 && local_28._4_4_ == 0) {
    local_48[0] = PTR_DAT_047d08c0 + 0x10;
    FUN_0284e360(local_48,0xffffffff);
    local_30 = 0;
    FUN_007f8d0c(param_1,(long)&local_28 + 4,&local_28,local_48,param_3);
    FUN_0284e3d4(local_48);
    iVar3 = local_28._4_4_;
  }
  uVar1 = (int)local_28 - iVar3;
  uVar2 = FUN_007c7184(param_1 + 0x78);
  return iVar3 + (int)((uVar2 & 0xffffffff) * (ulong)uVar1 >> 0x20);
}


