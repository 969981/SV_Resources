/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f73a90; name: FUN_00f73a90
 */


long FUN_00f73a90(long param_1,ulong param_2,ushort param_3)

{
  uint *puVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x70);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar8 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (param_2 & 0xffff) * 10000 + (ulong)param_3;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar6 = (int)uVar4 - 1 & uVar5;
    }
    else if (uVar5 < uVar4) {
      uVar6 = uVar5;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar5 / uVar4;
      }
      uVar6 = uVar5 - uVar6 * uVar4;
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x68) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar7[1] == uVar5) {
            if (plVar7[2] == uVar5) goto LAB_00f73bd0;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar5) {
            if (plVar7[2] == uVar5) goto LAB_00f73bd0;
          }
          else {
            if (uVar4 <= uVar8) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar2 * uVar4;
            }
            if (uVar8 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)(param_1 + 0xd0);
LAB_00f73b4c:
  piVar3 = (int *)*plVar7;
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x3b) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x1d], uVar4 == 0)) {
    return 0;
  }
  puVar1 = (uint *)((long)piVar3 + uVar4);
  return (long)puVar1 + (ulong)*puVar1;
LAB_00f73bd0:
  plVar7 = plVar7 + 3;
  goto LAB_00f73b4c;
}


