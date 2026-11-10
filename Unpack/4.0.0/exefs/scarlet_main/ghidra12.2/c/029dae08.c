/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dae08; name: FUN_029dae08
 */


long FUN_029dae08(long param_1)

{
  long lVar1;
  uint *puVar2;
  
  if ((((*(long *)(param_1 + 0x2a8) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x2a8) + 0x1e8) & 1) == 0)) ||
      (*(long *)(param_1 + 0x2a8) == 0)) ||
     ((*(byte *)(*(long *)(param_1 + 0x2a8) + 0x1e8) & 1) == 0)) {
    lVar1 = 0;
  }
  else {
    puVar2 = (uint *)(**(code **)(**(long **)(param_1 + 0x2a8) + 0x70))();
    lVar1 = (long)puVar2 + (ulong)*puVar2;
  }
  return lVar1;
}


