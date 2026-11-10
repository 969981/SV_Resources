/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f2fb0; name: FUN_026f2fb0
 */


void FUN_026f2fb0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  lVar3 = lVar4;
  if (lVar5 != lVar4) {
    FUN_011afb4c(lVar5 + -0x10);
    if ((lVar5 + -0x10 != lVar4) && (FUN_011afb4c(lVar5 + -0x20), lVar5 + -0x20 != lVar4)) {
      do {
        FUN_011afb4c(lVar5 + -0x30);
        lVar5 = lVar5 + -0x10;
      } while (lVar4 + 0x20 != lVar5);
    }
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = FUN_00c4e564(plVar1);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x026f3044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


