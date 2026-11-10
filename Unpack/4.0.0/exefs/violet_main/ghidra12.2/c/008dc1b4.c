/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dc1b4; name: FUN_008dc1b4
 */


long FUN_008dc1b4(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  do {
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 != 0) {
      plVar4 = *(long **)(param_1 + 0xb8);
      while (plVar4 != (long *)0x0) {
        if (*plVar4 == param_2) {
          return lVar3;
        }
        puVar1 = (uint *)(plVar4 + 1);
        plVar2 = (long *)((long)plVar4 + (ulong)*puVar1);
        plVar4 = (long *)0x0;
        if (*puVar1 != 0) {
          plVar4 = plVar2;
        }
        lVar3 = lVar3 + 0x90;
      }
    }
    param_1 = *(long *)(param_1 + 0x4a8);
  } while (param_1 != 0);
  return 0;
}


