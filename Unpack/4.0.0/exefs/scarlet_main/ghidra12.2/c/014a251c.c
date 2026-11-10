/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a251c; name: FUN_014a251c
 */


void FUN_014a251c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  FUN_00eeb618(&DAT_04836758,param_1);
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  if (DAT_04836760 != (long *)0x0) {
    lVar1 = *DAT_04836760;
    DAT_04836760 = plVar2;
    (**(code **)(lVar1 + 0x60))();
    plVar2 = DAT_04836760;
  }
  DAT_04836760 = plVar2;
  FUN_014a958c();
  return;
}


