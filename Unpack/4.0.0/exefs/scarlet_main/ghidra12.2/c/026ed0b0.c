/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ed0b0; name: FUN_026ed0b0
 */


void FUN_026ed0b0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_2 = (long)plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_00e3c378(param_2 + 1,param_1 + 1);
  lVar1 = param_1[8];
  *(undefined2 *)((long)param_2 + 0x44) = *(undefined2 *)((long)param_1 + 0x44);
  *(int *)(param_2 + 8) = (int)lVar1;
  return;
}


