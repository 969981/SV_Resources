/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bea80; name: FUN_034bea80
 */


void FUN_034bea80(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong *param_5,
                 undefined8 *param_6)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  
  uVar6 = *param_5;
  uVar11 = param_4 & 0xffffffff;
  if (((((uVar6 == 0) && ((int)param_5[1] == 0)) && ((int)param_5[2] == 0)) &&
      (((char)param_5[3] == -1 && ((char)param_5[4] == -1)))) && (param_5[5] == 0)) {
    lVar8 = *(long *)(param_3 + 8);
    uVar13 = 1L << (param_4 & 0x3f);
    uVar5 = *(uint *)(lVar8 + 0x18);
    uVar6 = (ulong)uVar5;
    lVar4 = *(long *)(lVar8 + 0x10);
    uVar9 = *(ulong *)(lVar8 + 8) & uVar13;
    if (param_6 == (undefined8 *)0x0) {
      if (uVar9 == 0) {
        if (uVar5 != 0) {
          lVar8 = uVar6 << 4;
          puVar12 = (undefined8 *)(lVar4 + 8);
          do {
            if ((puVar12[-1] & uVar13) != 0) {
              (**(code **)(*(long *)*puVar12 + 0x10))
                        (param_1,param_2,(long *)*puVar12,*(undefined4 *)(param_3 + 0x10),uVar11);
            }
            lVar8 = lVar8 + -0x10;
            puVar12 = puVar12 + 2;
          } while (lVar8 != 0);
        }
      }
      else if (uVar5 != 0) {
        lVar8 = uVar6 << 4;
        puVar12 = (undefined8 *)(lVar4 + 8);
        do {
          (**(code **)(*(long *)*puVar12 + 0x10))
                    (param_1,param_2,(long *)*puVar12,*(undefined4 *)(param_3 + 0x10),uVar11);
          lVar8 = lVar8 + -0x10;
          puVar12 = puVar12 + 2;
        } while (lVar8 != 0);
      }
    }
    else if (uVar9 == 0) {
      if (uVar5 != 0) {
        lVar8 = uVar6 << 4;
        plVar14 = (long *)(lVar4 + 8);
        do {
          if (((plVar14[-1] & uVar13) != 0) &&
             (uVar6 = (**(code **)*param_6)(param_6,*plVar14 + 0x10), (uVar6 & 1) == 0)) {
            (**(code **)(*(long *)*plVar14 + 0x10))
                      (param_1,param_2,(long *)*plVar14,*(undefined4 *)(param_3 + 0x10),uVar11);
          }
          lVar8 = lVar8 + -0x10;
          plVar14 = plVar14 + 2;
        } while (lVar8 != 0);
      }
    }
    else if (uVar5 != 0) {
      lVar8 = uVar6 << 4;
      plVar14 = (long *)(lVar4 + 8);
      do {
        uVar6 = (**(code **)*param_6)(param_6,*plVar14 + 0x10);
        if ((uVar6 & 1) == 0) {
          (**(code **)(*(long *)*plVar14 + 0x10))
                    (param_1,param_2,(long *)*plVar14,*(undefined4 *)(param_3 + 0x10),uVar11);
        }
        lVar8 = lVar8 + -0x10;
        plVar14 = plVar14 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
    if (param_6 == (undefined8 *)0x0) {
      FUN_034bf050(param_1,param_2,param_3,uVar11,param_5);
      return;
    }
    lVar8 = *(long *)(param_3 + 8);
    uVar13 = 1L << (param_4 & 0x3f);
    lVar4 = *(long *)(lVar8 + 0x10);
    uVar5 = *(uint *)(lVar8 + 0x18);
    uVar9 = (ulong)uVar5;
    if ((*(ulong *)(lVar8 + 8) & uVar13) == 0) {
      if (lVar4 == 0) {
        puVar15 = (ulong *)0x0;
      }
      else {
        if (0 < (int)uVar5) {
          iVar10 = 0;
          do {
            iVar1 = iVar10 + uVar5;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            uVar3 = iVar1 >> 1;
            lVar8 = *(long *)(lVar4 + (long)(int)uVar3 * 0x10 + 8);
            if ((*(ulong *)(lVar8 + 0x10) < uVar6) ||
               ((*(ulong *)(lVar8 + 0x10) == uVar6 &&
                ((*(uint *)(lVar8 + 0x18) < (uint)param_5[1] ||
                 ((*(uint *)(lVar8 + 0x18) == (uint)param_5[1] &&
                  ((*(uint *)(lVar8 + 0x20) < (uint)param_5[2] ||
                   ((*(uint *)(lVar8 + 0x20) == (uint)param_5[2] &&
                    (((*(char *)(lVar8 + 0x28) + 1U & 0x1f) < ((char)param_5[3] + 1U & 0x1f) ||
                     ((*(char *)(lVar8 + 0x28) == (char)param_5[3] &&
                      (((byte)(*(char *)(lVar8 + 0x30) + 1U) < (byte)((char)param_5[4] + 1U) ||
                       ((*(char *)(lVar8 + 0x30) == (char)param_5[4] &&
                        (*(ulong *)(lVar8 + 0x38) < param_5[5])))))))))))))))))))) {
              iVar10 = uVar3 + 1;
            }
            else {
              uVar5 = uVar3;
            }
          } while (iVar10 < (int)uVar5);
        }
        puVar15 = (ulong *)(lVar4 + (long)(int)uVar5 * 0x10);
      }
      puVar2 = (ulong *)(lVar4 + uVar9 * 0x10);
      if (puVar15 != puVar2) {
        while( true ) {
          uVar9 = puVar15[1];
          if ((((((uVar6 != 0) && (*(ulong *)(uVar9 + 0x10) != uVar6)) ||
                (((int)param_5[1] != 0 && (*(int *)(uVar9 + 0x18) != (int)param_5[1])))) ||
               (((int)param_5[2] != 0 && (*(int *)(uVar9 + 0x20) != (int)param_5[2])))) ||
              (((char)param_5[3] != -1 && (*(char *)(uVar9 + 0x28) != (char)param_5[3])))) ||
             ((((char)param_5[4] != -1 && (*(char *)(uVar9 + 0x30) != (char)param_5[4])) ||
              ((param_5[5] != 0 && (*(ulong *)(uVar9 + 0x38) != param_5[5])))))) break;
          if (((*puVar15 & uVar13) != 0) &&
             (uVar6 = (**(code **)*param_6)(param_6), (uVar6 & 1) == 0)) {
            (**(code **)(*(long *)puVar15[1] + 0x10))
                      (param_1,param_2,(long *)puVar15[1],*(undefined4 *)(param_3 + 0x10),uVar11);
          }
          if (puVar2 + -2 == puVar15) {
            return;
          }
          uVar6 = *param_5;
          puVar15 = puVar15 + 2;
        }
      }
    }
    else {
      if (lVar4 == 0) {
        lVar8 = 0;
      }
      else {
        if (0 < (int)uVar5) {
          iVar10 = 0;
          do {
            iVar1 = iVar10 + uVar5;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            uVar3 = iVar1 >> 1;
            lVar8 = *(long *)(lVar4 + (long)(int)uVar3 * 0x10 + 8);
            if ((*(ulong *)(lVar8 + 0x10) < uVar6) ||
               ((*(ulong *)(lVar8 + 0x10) == uVar6 &&
                ((*(uint *)(lVar8 + 0x18) < (uint)param_5[1] ||
                 ((*(uint *)(lVar8 + 0x18) == (uint)param_5[1] &&
                  ((*(uint *)(lVar8 + 0x20) < (uint)param_5[2] ||
                   ((*(uint *)(lVar8 + 0x20) == (uint)param_5[2] &&
                    (((*(char *)(lVar8 + 0x28) + 1U & 0x1f) < ((char)param_5[3] + 1U & 0x1f) ||
                     ((*(char *)(lVar8 + 0x28) == (char)param_5[3] &&
                      (((byte)(*(char *)(lVar8 + 0x30) + 1U) < (byte)((char)param_5[4] + 1U) ||
                       ((*(char *)(lVar8 + 0x30) == (char)param_5[4] &&
                        (*(ulong *)(lVar8 + 0x38) < param_5[5])))))))))))))))))))) {
              iVar10 = uVar3 + 1;
            }
            else {
              uVar5 = uVar3;
            }
          } while (iVar10 < (int)uVar5);
        }
        lVar8 = lVar4 + (long)(int)uVar5 * 0x10;
      }
      lVar4 = lVar4 + uVar9 * 0x10;
      if (lVar8 != lVar4) {
        while( true ) {
          lVar7 = *(long *)(lVar8 + 8);
          if (((((uVar6 != 0) && (*(ulong *)(lVar7 + 0x10) != uVar6)) ||
               (((int)param_5[1] != 0 && (*(int *)(lVar7 + 0x18) != (int)param_5[1])))) ||
              ((((int)param_5[2] != 0 && (*(int *)(lVar7 + 0x20) != (int)param_5[2])) ||
               (((char)param_5[3] != -1 && (*(char *)(lVar7 + 0x28) != (char)param_5[3])))))) ||
             ((((char)param_5[4] != -1 && (*(char *)(lVar7 + 0x30) != (char)param_5[4])) ||
              ((param_5[5] != 0 && (*(ulong *)(lVar7 + 0x38) != param_5[5])))))) break;
          uVar6 = (**(code **)*param_6)(param_6);
          if ((uVar6 & 1) == 0) {
            (**(code **)(**(long **)(lVar8 + 8) + 0x10))
                      (param_1,param_2,*(long **)(lVar8 + 8),*(undefined4 *)(param_3 + 0x10),uVar11)
            ;
          }
          if (lVar4 == lVar8 + 0x10) {
            return;
          }
          uVar6 = *param_5;
          lVar8 = lVar8 + 0x10;
        }
      }
    }
  }
  return;
}


