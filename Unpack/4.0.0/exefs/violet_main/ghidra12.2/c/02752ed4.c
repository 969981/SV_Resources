/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02752ed4; name: FUN_02752ed4
 */


void FUN_02752ed4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_047e1c50;
  for (plVar6 = *(long **)(param_1 + 0x98); (long *)(param_1 + 0x98) != plVar6;
      plVar6 = (long *)*plVar6) {
    if (-1 < *(int *)(plVar6 + 8)) {
      ppuVar3 = *(undefined ***)puVar1;
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar3 = &PTR_PTR_045cf540;
        *(undefined ***)puVar1 = &PTR_PTR_045cf540;
      }
      (**(code **)(*ppuVar3 + 0x10))();
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  while (plVar6 != (long *)(param_1 + 200)) {
    plVar4 = (long *)plVar6[2];
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)*plVar6;
      if (plVar6 == (long *)plVar4[2]) {
        plVar5 = (long *)*plVar4;
        bVar2 = plVar4 == (long *)plVar5[2];
        plVar6 = plVar4;
        plVar4 = plVar5;
        if (bVar2) {
          do {
            plVar6 = plVar5;
            plVar4 = (long *)*plVar6;
            plVar5 = plVar4;
          } while (plVar6 == (long *)plVar4[2]);
        }
      }
      if ((long *)plVar6[2] != plVar4) {
        plVar6 = plVar4;
      }
    }
    else {
      plVar5 = (long *)plVar4[1];
      plVar6 = plVar4;
      if (plVar5 != (long *)0x0) {
        plVar6 = plVar5;
        for (plVar4 = (long *)plVar5[1]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
          plVar6 = plVar4;
        }
      }
    }
  }
  return;
}


