/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b7fcc; name: FUN_007b7fcc
 */


void FUN_007b7fcc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[0x230];
  *param_1 = (long)(PTR_DAT_047d0f08 + 0x10);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    param_1[0x230] = 0;
  }
  lVar3 = param_1[0x231];
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    param_1[0x231] = 0;
  }
  puVar1 = PTR_DAT_047d0860;
  lVar3 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  if (lVar3 != 0) {
    lVar3 = FUN_007f74c0(*(undefined8 *)puVar1);
    if (*(long *)(lVar3 + 0x10) != 0) {
      FUN_007ae4cc();
    }
    lVar3 = FUN_007f74c0(*(undefined8 *)puVar1);
    if (*(long *)(lVar3 + 8) != 0) {
      FUN_007a5444();
    }
  }
  plVar2 = (long *)FUN_007be730();
  (**(code **)(*plVar2 + 0x18))();
  FUN_007be730();
  FUN_00799c28();
  FUN_0284e3d4(param_1 + 0x247);
  FUN_0284e3d4(param_1 + 0x243);
  FUN_0079213c((long)param_1 + 0x11f4);
  FUN_0079213c(param_1 + 0x23c);
  FUN_0079213c((long)param_1 + 0x11cc);
  FUN_0079a828(param_1);
  return;
}


