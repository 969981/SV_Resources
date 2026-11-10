/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351b33c; name: FUN_0351b33c
 */


void FUN_0351b33c(long *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x28))();
  iVar3 = *param_2;
  if (iVar3 == 2) {
    FUN_03517ec0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 *(undefined1 *)((long)param_2 + 0x22),param_2[4]);
  }
  else if (iVar3 == 1) {
    FUN_03517d78(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar3 == 0) {
    FUN_03517be0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  lVar2 = param_1[0x12];
  if ((lVar2 != 0) &&
     (((0 < *(short *)(lVar2 + 0x90) || (0 < *(short *)(lVar2 + 0x94))) &&
      (iVar3 = (int)param_1[0x21], iVar3 != 0)))) {
    lVar2 = (ulong)(iVar3 - 1) << 3;
    do {
      plVar1 = *(long **)(param_1[0x20] + lVar2);
      if (((char)param_2[8] == '\0') || (plVar1[0x14] == 0)) {
        (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
      }
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0351b43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


