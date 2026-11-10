/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d899c; name: FUN_001d899c
 */


undefined8 FUN_001d899c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 != 0) {
    lVar2 = FUN_001ec338(1,0x10);
    if (lVar2 == 0) {
      return 0x1b;
    }
    *(long *)(lVar2 + 8) = param_2;
    plVar4 = *(long **)(param_1 + 0xef8);
    plVar3 = (long *)(param_1 + 0xef8);
    if ((plVar4 == (long *)0x0) || ((param_3 & 1) == 0)) {
      while (plVar4 != (long *)0x0) {
        *(ulong *)(plVar4[1] + 0xf40) = *(ulong *)(plVar4[1] + 0xf40) & 0xffefffffffffffff;
        plVar3 = (long *)*plVar3;
        plVar4 = (long *)*plVar3;
      }
    }
    else {
      do {
        *(long *)(plVar4[1] + 0xee8) = param_2;
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      plVar4 = (long *)(param_2 + 0xef8);
      do {
        plVar5 = plVar4;
        plVar4 = (long *)*plVar5;
      } while (plVar4 != (long *)0x0);
      *plVar5 = *plVar3;
      *plVar3 = 0;
    }
    *plVar3 = lVar2;
  }
  uVar1 = 0x10000000000000;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  *(long *)(param_2 + 0xee8) = param_1;
  *(ulong *)(param_2 + 0xf40) = *(ulong *)(param_2 + 0xf40) & 0xffefffffffffffff | uVar1;
  return 0;
}


