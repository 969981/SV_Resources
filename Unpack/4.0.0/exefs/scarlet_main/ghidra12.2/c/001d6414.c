/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d6414; name: FUN_001d6414
 */


void FUN_001d6414(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  plVar1 = *(long **)(lVar2 + 0x1a0);
  while (plVar1 != (long *)0x0) {
    *(long *)(lVar2 + 0x1a0) = plVar1[1];
    (**(code **)(*plVar1 + 0x20))(param_1,plVar1);
    FUN_001ec308(plVar1);
    plVar1 = *(long **)(lVar2 + 0x1a0);
  }
  return;
}


