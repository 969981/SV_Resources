/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c5504; name: FUN_001c5504
 */


void FUN_001c5504(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(param_1 + lVar2 * 8);
      while (plVar1 != (long *)0x0) {
        plVar1 = (long *)*plVar1;
        FUN_001c4c88();
      }
      *(undefined8 *)(param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x100);
    *(undefined8 *)(param_1 + 0x810) = 0;
  }
  return;
}


