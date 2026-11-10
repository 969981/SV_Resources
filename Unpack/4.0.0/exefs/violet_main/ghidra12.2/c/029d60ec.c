/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


