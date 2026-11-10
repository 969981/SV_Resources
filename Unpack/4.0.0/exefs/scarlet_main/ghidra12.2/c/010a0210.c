/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a0210; name: FUN_010a0210
 */


void FUN_010a0210(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_010a0330(*(long *)(param_1 + 0x38) + 200);
  if (*plVar1 == 0) {
    FUN_010a0334(param_1,0);
  }
  else {
    FUN_02992374(param_1,0,plVar1);
  }
  plVar1 = (long *)FUN_010a0330(*(long *)(param_1 + 0x38) + 0x188);
  if (*plVar1 == 0) {
    FUN_010a0334(param_1,1);
  }
  else {
    FUN_02992374(param_1,1,plVar1);
  }
  plVar1 = (long *)FUN_010a0330(*(long *)(param_1 + 0x38) + 0x248);
  if (*plVar1 == 0) {
    FUN_010a0334(param_1,2);
  }
  else {
    FUN_02992374(param_1,2,plVar1);
  }
  plVar1 = (long *)FUN_010a0330(*(long *)(param_1 + 0x38) + 0x308);
  if (*plVar1 == 0) {
    FUN_010a0334(param_1,3);
  }
  else {
    FUN_02992374(param_1,3,plVar1);
  }
  plVar1 = (long *)FUN_010a0330(*(long *)(param_1 + 0x38) + 0x3c8);
  if (*plVar1 == 0) {
    FUN_010a0334(param_1,4);
    return;
  }
  FUN_02992374(param_1,4,plVar1);
  return;
}


