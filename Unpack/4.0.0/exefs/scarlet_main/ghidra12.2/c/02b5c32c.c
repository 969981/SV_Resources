/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b5c32c; name: FUN_02b5c32c
 */


void FUN_02b5c32c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  *param_2 = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  lVar4 = param_1[3];
  *(undefined8 *)((long)param_2 + 0x1d) = *(undefined8 *)((long)param_1 + 0x1d);
  param_2[1] = lVar1;
  param_2[2] = lVar2;
  param_2[3] = lVar4;
  plVar3 = (long *)param_1[5];
  param_2[5] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  plVar3 = (long *)param_1[6];
  param_2[6] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  plVar3 = (long *)param_1[7];
  param_2[7] = (long)plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b5c3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


