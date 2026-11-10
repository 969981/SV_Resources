/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b8008; name: FUN_028b8008
 */


long * FUN_028b8008(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar4;
    do {
      uVar2 = FUN_028b8114(param_1 + 0x18,(long)plVar5 + 0x1c,param_2);
      lVar1 = 8;
      if ((uVar2 & 1) == 0) {
        lVar1 = 0;
        plVar3 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) &&
       (uVar2 = FUN_028b8114(param_1 + 0x18,param_2,(long)plVar3 + 0x1c), (uVar2 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}


