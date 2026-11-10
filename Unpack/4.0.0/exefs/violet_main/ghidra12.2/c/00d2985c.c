/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2985c; name: FUN_00d2985c
 */


undefined8 FUN_00d2985c(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar3 = (long *)(param_1 + 0x98);
  plVar4 = (long *)*plVar3;
  if (plVar3 == plVar4) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      if (plVar4[6] != lVar6) {
        return 0;
      }
      lVar6 = plVar4[7] + lVar6;
      plVar4 = (long *)*plVar4;
    } while (plVar3 != plVar4);
  }
  if (lVar6 != *(long *)(param_1 + 0xe8)) {
    return 0;
  }
  if (*(long **)(param_1 + 0xd0) != (long *)(param_1 + 200)) {
    uVar5 = 0;
    plVar3 = *(long **)(param_1 + 0xd0);
    do {
      puVar1 = (ulong *)(plVar3 + 5);
      if (*puVar1 < uVar5) {
        return 0;
      }
      plVar4 = (long *)plVar3[2];
      if (plVar4 == (long *)0x0) {
        plVar7 = (long *)*plVar3;
        if (plVar3 == (long *)plVar7[2]) {
          plVar4 = (long *)*plVar7;
          bVar2 = plVar7 == (long *)plVar4[2];
          plVar3 = plVar7;
          plVar7 = plVar4;
          if (bVar2) {
            do {
              plVar3 = plVar4;
              plVar7 = (long *)*plVar3;
              plVar4 = plVar7;
            } while (plVar3 == (long *)plVar7[2]);
          }
        }
        plVar4 = plVar3;
        if ((long *)plVar3[2] != plVar7) {
          plVar4 = plVar7;
        }
      }
      else {
        plVar3 = (long *)plVar4[1];
        if (plVar3 != (long *)0x0) {
          plVar4 = plVar3;
          for (plVar3 = (long *)plVar3[1]; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
            plVar4 = plVar3;
          }
        }
      }
      uVar5 = *puVar1;
      plVar3 = plVar4;
    } while (plVar4 != (long *)(param_1 + 200));
  }
  return 1;
}


