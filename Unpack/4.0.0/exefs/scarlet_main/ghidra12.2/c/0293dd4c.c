/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293dd4c; name: FUN_0293dd4c
 */


void FUN_0293dd4c(undefined8 param_1,undefined1 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_2 = 0;
  if (*(int *)(param_3 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_014813f4(param_1);
  }
  FUN_01582534(param_1);
  uVar3 = FUN_014813e4();
  uVar4 = FUN_01481400(uVar3,*(undefined4 *)(param_3 + 2));
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)FUN_014813f4(param_1,*(undefined4 *)(param_3 + 2));
    uVar4 = (**(code **)(*plVar5 + 0x200))();
    if (((uVar4 & 1) == 0) &&
       (uVar4 = FUN_029836f8(param_1,plVar5,uVar2,*param_3,*(undefined1 *)(param_3 + 6)),
       (uVar4 & 1) != 0)) {
      iVar1 = FUN_0124b1e4(param_3 + 8);
      if (iVar1 != 0) {
        uVar2 = FUN_01243584(param_1);
        FUN_0124b0ac(uVar2,*(undefined4 *)(param_3 + 2),param_3 + 8);
      }
      *param_2 = 1;
    }
  }
  return;
}


