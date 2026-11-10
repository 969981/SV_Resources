/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02161940; name: FUN_02161940
 */


void FUN_02161940(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_FUN_04599528;
  param_1[4] = (long)&PTR_LAB_04599678;
  param_1[5] = (long)&DAT_045996c8;
  FUN_0191cb38(param_1 + 0x4b,0);
  lVar3 = param_1[0x47];
  param_1[0x47] = 0;
  if (lVar3 != 0) {
    FUN_0174e8ac(param_1 + 0x48);
  }
  if ((long *)param_1[0x45] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x45] + 0x20))();
  }
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 0x20))();
  }
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 0x20))();
  }
  if ((long *)param_1[0x39] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39] + 0x20))();
  }
  if ((long *)param_1[0x34] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x34] + 0x20))();
  }
  if ((long *)param_1[0x30] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x30] + 0x20))();
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 0x20))();
  }
  puVar1 = PTR_DAT_047dd098 + 0x160;
  puVar2 = PTR_DAT_047dd098 + 0x1b0;
  *param_1 = (long)(PTR_DAT_047dd098 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  FUN_0116e6b0(param_1);
  return;
}


