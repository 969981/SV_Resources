/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215a410; name: FUN_0215a410
 */


void FUN_0215a410(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
  if (*(code **)(param_1 + 0x3d0) != (code *)0x0) {
    (**(code **)(param_1 + 0x3d0))(param_1 + 0x3f0);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
  iVar3 = FUN_0215b880(*(undefined8 *)(param_1 + 0x930),uVar1);
  iVar4 = FUN_0215b880(*(undefined8 *)(param_1 + 0x930),uVar2);
  if (iVar4 < iVar3 && iVar4 < *(int *)(*(long *)(param_1 + 0x930) + 0x10)) {
    FUN_01733b00((float)iVar4,*(undefined8 *)(param_1 + 0x880),*(undefined4 *)(param_1 + 0xa30));
    return;
  }
  return;
}


