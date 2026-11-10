/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00490970; name: FUN_00490970
 */


void FUN_00490970(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  if (*piVar4 == 1) {
    if (*piVar3 == 1) {
      iVar1 = FUN_003e0620(**(undefined8 **)(piVar4 + 2),**(undefined8 **)(piVar3 + 2));
      if (iVar1 == 0) {
        FUN_003e0620(*(undefined8 *)(*(long *)(piVar4 + 2) + 8),
                     *(undefined8 *)(*(long *)(piVar3 + 2) + 8));
        return;
      }
      return;
    }
  }
  else if (*piVar4 == 0) {
    uVar2 = *(undefined8 *)(piVar4 + 2);
    if (*piVar3 != 0) {
      FUN_003e0620(uVar2,**(undefined8 **)(piVar3 + 2));
      return;
    }
    goto LAB_004909e8;
  }
  uVar2 = **(undefined8 **)(piVar4 + 2);
LAB_004909e8:
  FUN_003e0620(uVar2,*(undefined8 *)(piVar3 + 2));
  return;
}


