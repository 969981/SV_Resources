/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01078964; name: FUN_01078964
 */


void FUN_01078964(long param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_2 + 0x38);
joined_r0x01078984:
  if (plVar9 == (long *)0x0) {
    *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
    *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_2 + 0x72);
    return;
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == 0) {
LAB_01078aec:
    plVar8 = (long *)0x0;
  }
  else {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar1 = *(ushort *)(plVar9 + 2);
    uVar3 = (ulong)uVar1;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = (int)uVar4 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 8) + uVar6 * 8);
    if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
    goto LAB_01078aec;
    if (uVar5 < 2) {
      do {
        if (plVar7[1] == uVar3) {
          if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_01078a10;
        }
        else if ((plVar7[1] & uVar4 - 1) != uVar6) goto LAB_01078aec;
        plVar7 = (long *)*plVar7;
        plVar8 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar3) {
          if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_01078a10;
        }
        else {
          if (uVar4 <= uVar5) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar5 / uVar4;
            }
            uVar5 = uVar5 - uVar2 * uVar4;
          }
          if (uVar5 != uVar6) goto LAB_01078aec;
        }
        plVar7 = (long *)*plVar7;
        plVar8 = (long *)0x0;
      } while (plVar7 != (long *)0x0);
    }
  }
  goto LAB_01078a14;
LAB_01078a10:
  plVar8 = plVar7;
LAB_01078a14:
  *(undefined2 *)(plVar8 + 5) = *(undefined2 *)(plVar9 + 5);
  *(undefined2 *)((long)plVar8 + 0x2a) = *(undefined2 *)((long)plVar9 + 0x2a);
  *(undefined2 *)((long)plVar8 + 0x2c) = *(undefined2 *)((long)plVar9 + 0x2c);
  memcpy(plVar8 + 6,plVar9 + 6,0x58);
  plVar9 = (long *)*plVar9;
  goto joined_r0x01078984;
}


