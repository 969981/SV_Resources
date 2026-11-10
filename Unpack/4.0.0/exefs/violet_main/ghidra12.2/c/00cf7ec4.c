/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf7ec4; name: FUN_00cf7ec4
 */


void FUN_00cf7ec4(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  uint *puVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  lVar8 = *param_1;
  puVar2 = (uint *)*param_3;
  piVar3 = *(int **)(lVar8 + 0xd0);
  if ((((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 5)) ||
      (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 == 0)) ||
     (*(char *)((long)piVar3 + uVar5) == '\0')) {
    uVar10 = 0;
  }
  else {
    if ((*(long *)(lVar8 + 0x130) != 0) && (uVar5 = *(ulong *)(lVar8 + 0xe0), uVar5 != 0)) {
      uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar4 = *param_2;
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar7 = uVar5 - 1 & uVar4;
      }
      else if (uVar4 < uVar5) {
        uVar7 = uVar4;
      }
      else {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar7 = uVar4 - uVar7 * uVar5;
      }
      plVar9 = *(long **)(*(long *)(lVar8 + 0xd8) + uVar7 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar6 < 2) {
          do {
            if (plVar9[1] == uVar4) {
              if (plVar9[2] == uVar4) goto LAB_00cf800c;
            }
            else if ((plVar9[1] & uVar5 - 1) != uVar7) goto LAB_00cf7f00;
            plVar9 = (long *)*plVar9;
            uVar10 = 1;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar9[1];
            if (uVar6 == uVar4) {
              if (plVar9[2] == uVar4) goto LAB_00cf800c;
            }
            else {
              if (uVar5 <= uVar6) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar6 / uVar5;
                }
                uVar6 = uVar6 - uVar1 * uVar5;
              }
              if (uVar6 != uVar7) goto LAB_00cf7f00;
            }
            plVar9 = (long *)*plVar9;
            uVar10 = 1;
          } while (plVar9 != (long *)0x0);
        }
        goto LAB_00cf7f04;
      }
    }
LAB_00cf7f00:
    uVar10 = 1;
  }
LAB_00cf7f04:
  *puVar2 = uVar10;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return;
LAB_00cf800c:
  uVar10 = (uint)(plVar9[7] != uVar4);
  goto LAB_00cf7f04;
}


