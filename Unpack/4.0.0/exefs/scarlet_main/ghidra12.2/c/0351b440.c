/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351b440; name: FUN_0351b440
 */


void FUN_0351b440(long *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x28))();
  iVar1 = *param_2;
  if (iVar1 == 2) {
    FUN_03517ec0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 *(undefined1 *)((long)param_2 + 0x22),param_2[4]);
  }
  else if (iVar1 == 1) {
    FUN_03517d78(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar1 == 0) {
    FUN_03517be0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  if ((*(char *)((long)param_2 + 0x23) != '\0') && (*(char *)((long)param_2 + 0x21) != '\0')) {
    iVar1 = *param_2;
    if ((iVar1 == 0) || (iVar1 == 2)) {
      uVar2 = 0;
    }
    else {
      if (iVar1 != 1) goto LAB_0351b4fc;
      uVar2 = 1;
    }
    FUN_034dbac0(param_1 + 4,uVar2);
  }
LAB_0351b4fc:
                    /* WARNING: Could not recover jumptable at 0x0351b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


