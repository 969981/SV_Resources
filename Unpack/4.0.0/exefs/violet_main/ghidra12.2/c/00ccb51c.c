/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccb51c; name: FUN_00ccb51c
 */


bool FUN_00ccb51c(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_70 [64];
  
  FUN_00ccb5d8(*(undefined8 *)param_1[0xc06],param_2 + 0x38);
  (**(code **)PTR_DAT_047e1908)(auStack_70);
  (**(code **)PTR_DAT_047e1910)(auStack_70,(ulong)*(byte *)(param_2 + 0x36) << 8);
  uVar2 = FUN_00ccb5e4(param_1[0xc05],param_1 + 2,auStack_70);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_00ccb610(param_1[0xc05],param_1 + 2);
    FUN_00ccb644(param_1);
    (**(code **)(*param_1 + 8))(param_1,param_2);
  }
  return bVar1;
}


