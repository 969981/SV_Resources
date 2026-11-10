/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00147e00; name: FUN_00147e00
 */


void FUN_00147e00(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_00122550(param_1,0xfff0b9d7);
  uVar1 = FUN_00c5d980(param_1);
  iVar2 = FUN_00147d20(param_1,uVar4,uVar1);
  if (-1 < iVar2) {
    return;
  }
  uVar3 = FUN_001233f0(uVar4);
  if (1 < uVar3) {
    iVar2 = FUN_0013b380(uVar4);
    FUN_00121ad0(uVar4,param_1,1);
    if (iVar2 == 4) goto LAB_00147ec0;
  }
  iVar2 = FUN_00d34290(param_1,0xffffffff);
  if (iVar2 == 4) {
    FUN_00123e10(param_1,1);
    FUN_00c5dcd0(param_1,0xfffffffe,1);
    FUN_001234b0(param_1,2);
  }
LAB_00147ec0:
  FUN_00123400(param_1);
  return;
}


