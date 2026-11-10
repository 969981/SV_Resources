/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e6720; name: FUN_002e6720
 */


void FUN_002e6720(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_2 + 0x10);
  while (plVar2 != (long *)(param_2 + 0x18)) {
    FUN_002e626c(param_1,*(undefined4 *)((long)plVar2 + 0x1c),(int)plVar2[4]);
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*(long *)*plVar3 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


