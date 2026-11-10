/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00898bc0; name: FUN_00898bc0
 */


void FUN_00898bc0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == param_2) {
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar1 = (long *)param_2[2];
    lVar2 = *plVar1;
    *(long **)(param_2[1] + 8) = plVar1;
    *plVar1 = param_2[1];
    *(long **)(lVar2 + 8) = param_2 + 1;
    param_2[1] = lVar2;
  }
  (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00898c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2260)(param_2,*(undefined8 *)PTR_DAT_047d2268);
  return;
}


