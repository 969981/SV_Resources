/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030459c8; name: FUN_030459c8
 */


void FUN_030459c8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x2f0))(param_2,param_3);
  if (*plVar1 == -1 || plVar1[2] == -1) {
    return;
  }
  FUN_0304648c(param_1,param_2,*plVar1,plVar1[2],1);
  return;
}


