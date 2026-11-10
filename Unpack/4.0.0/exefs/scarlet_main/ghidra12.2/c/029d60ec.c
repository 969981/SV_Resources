/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d60ec; name: FUN_029d60ec
 */


undefined8 FUN_029d60ec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((*(long *)(param_1 + 0x268) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x268) + 0x1e8) & 1) == 0)) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x268) + 0x220);
  if (lVar1 != 0) {
    for (plVar2 = *(long **)(lVar1 + 0x38); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (*(long *)plVar2[6] != 0) {
        return 1;
      }
    }
  }
  return 0;
}


