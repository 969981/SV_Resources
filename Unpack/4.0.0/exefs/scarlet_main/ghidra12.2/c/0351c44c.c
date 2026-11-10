/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351c44c; name: FUN_0351c44c
 */


void FUN_0351c44c(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = param_1[6];
  lVar4 = 0;
  lVar5 = lVar3;
  if ((lVar3 != 0) && (lVar3 != param_2)) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 8);
    } while (lVar5 != 0 && lVar5 != param_2);
  }
  if (lVar5 != 0) {
    plVar1 = param_1 + 6;
    if (lVar5 != lVar3) {
      plVar1 = (long *)(lVar4 + 8);
    }
    *plVar1 = *(long *)(lVar5 + 8);
    iVar2 = (int)param_1[9] + -1;
    *(int *)(param_1 + 9) = iVar2;
    if (iVar2 == 0) {
      if (param_1[2] == 0) {
        FUN_03518540(param_1);
      }
      else {
        FUN_0351c44c(param_1[2],param_1);
        param_1[2] = 0;
      }
      (**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0351c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
      return;
    }
  }
  return;
}


