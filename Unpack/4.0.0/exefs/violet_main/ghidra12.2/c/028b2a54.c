/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b2a54; name: FUN_028b2a54
 */


void FUN_028b2a54(long param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    uVar1 = *param_2;
    plVar3 = plVar4;
    do {
      bVar2 = *(uint *)((long)plVar5 + 0x1c) < uVar1;
      if (!bVar2) {
        plVar3 = plVar5;
      }
      plVar5 = (long *)plVar5[bVar2];
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (*(uint *)((long)plVar3 + 0x1c) <= uVar1)) {
      FUN_028b385c();
      return;
    }
  }
  return;
}


