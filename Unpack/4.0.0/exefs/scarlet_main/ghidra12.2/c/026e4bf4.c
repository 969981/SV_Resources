/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e4bf4; name: FUN_026e4bf4
 */


void FUN_026e4bf4(long *param_1,char *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (((*param_1 == 0) || (plVar1 = (long *)FUN_026e4c70(*param_1 + 8), plVar1 == (long *)0x0)) ||
     (uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar2 & 1) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x026e4c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x180))(plVar1,*param_2 != '\0');
  return;
}


