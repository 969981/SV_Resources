/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be5c48; name: FUN_01be5c48
 */


void FUN_01be5c48(long *param_1,char *param_2,long param_3)

{
  long *plVar1;
  
  if (((*param_2 != '\x01') && (*param_2 != '\0')) || (*(long *)(param_2 + 8) == 0)) {
    *param_1 = 0;
    return;
  }
  plVar1 = *(long **)(*(long *)(param_2 + 8) + param_3);
  *param_1 = (long)plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01be5c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


