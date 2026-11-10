/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d6610; name: FUN_001d6610
 */


long * FUN_001d6610(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001ec338(1,*(long *)(param_2 + 0x28) + 0x10);
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = param_3;
    iVar1 = (**(code **)(param_2 + 0x10))(param_1,plVar2);
    if (iVar1 != 0) {
      FUN_001ec308(plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}


