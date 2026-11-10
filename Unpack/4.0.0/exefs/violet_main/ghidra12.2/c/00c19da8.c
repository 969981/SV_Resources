/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c19da8; name: FUN_00c19da8
 */


void FUN_00c19da8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  
  uVar3 = 0;
  if (param_1[1] != 0) {
    uVar7 = 0;
    lVar1 = tpidr_el0;
    do {
      lVar5 = param_1[4];
      puVar8 = *(undefined8 **)(lVar5 + uVar7 * 8);
      if (puVar8 == (undefined8 *)0x0) {
LAB_00c1a0b0:
        uVar14 = uVar7;
      }
      else {
        if (puVar8 != *(undefined8 **)(lVar5 + (uVar7 ^ 1) * 8)) {
          *(undefined8 *)(lVar5 + uVar7 * 8) = 0;
          do {
            puVar9 = (undefined8 *)puVar8[3];
            if ((*(int *)(puVar8 + 1) == 9) && (pbVar10 = (byte *)*puVar8, pbVar10 != (byte *)0x0))
            {
              if (((*pbVar10 & 1) != 0) && (lVar5 = *(long *)(pbVar10 + 0x10), lVar5 != 0)) {
                plVar12 = *(long **)(lVar1 + 0x30);
                if (plVar12 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar12 = DAT_04859430;
                  *(long **)(lVar1 + 0x30) = DAT_04859430;
                }
                uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
                if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                  (**(code **)(*plVar12 + 0x18))(plVar12,lVar5,0,8);
                }
                else {
                  FUN_00c48fe8(plVar12,lVar5,0,8);
                }
              }
              plVar12 = *(long **)(lVar1 + 0x30);
              if (plVar12 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar12 = DAT_04859430;
                *(long **)(lVar1 + 0x30) = DAT_04859430;
              }
              uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,pbVar10,0,8);
              }
              else {
                FUN_00c48fe8(plVar12,pbVar10,0,8);
              }
            }
            if ((param_1[5] == 0) && (puVar8 != (undefined8 *)0x0)) {
              plVar12 = *(long **)(lVar1 + 0x30);
              if (plVar12 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar12 = DAT_04859430;
                *(long **)(lVar1 + 0x30) = DAT_04859430;
              }
              uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0,8);
              }
              else {
                FUN_00c48fe8(plVar12,puVar8,0,8);
              }
            }
            puVar8 = puVar9;
          } while (puVar9 != (undefined8 *)0x0);
          goto LAB_00c1a0b0;
        }
        uVar14 = uVar7 + 1;
        *(undefined8 *)(lVar5 + uVar14 * 8) = 0;
        *(undefined8 *)(param_1[4] + uVar7 * 8) = 0;
        plVar12 = (long *)*puVar8;
        do {
          puVar9 = (undefined8 *)plVar12[4];
          plVar13 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar13 = plVar12 + 2;
            plVar11 = (long *)*plVar13;
            if ((long *)*plVar11 != plVar12) {
              do {
                lVar5 = *plVar13;
                plVar13 = (long *)(lVar5 + 0x10);
                plVar11 = (long *)*plVar13;
              } while (*plVar11 != lVar5);
            }
          }
          else {
            do {
              plVar11 = plVar13;
              plVar13 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          plVar13 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar13 = plVar12 + 2;
            plVar6 = (long *)*plVar13;
            if ((long *)*plVar6 != plVar12) {
              do {
                lVar5 = *plVar13;
                plVar13 = (long *)(lVar5 + 0x10);
                plVar6 = (long *)*plVar13;
              } while (*plVar6 != lVar5);
            }
          }
          else {
            do {
              plVar6 = plVar13;
              plVar13 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          if ((long *)*puVar8 == plVar12) {
            *puVar8 = plVar6;
          }
          puVar8[3] = puVar8[3] + -1;
          FUN_01336080(puVar8[1],plVar12);
          if ((puVar8[2] == 0) && (plVar12 != (long *)0x0)) {
            plVar13 = *(long **)(lVar1 + 0x30);
            if (plVar13 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar13 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            uVar3 = (**(code **)(*plVar13 + 0xf8))(plVar13);
            if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0,8);
            }
            else {
              FUN_00c48fe8(plVar13,plVar12,0,8);
            }
          }
          if ((*(int *)(puVar9 + 1) == 9) && (pbVar10 = (byte *)*puVar9, pbVar10 != (byte *)0x0)) {
            if (((*pbVar10 & 1) != 0) && (lVar5 = *(long *)(pbVar10 + 0x10), lVar5 != 0)) {
              plVar12 = *(long **)(lVar1 + 0x30);
              if (plVar12 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar12 = DAT_04859430;
                *(long **)(lVar1 + 0x30) = DAT_04859430;
              }
              uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,lVar5,0,8);
              }
              else {
                FUN_00c48fe8(plVar12,lVar5,0,8);
              }
            }
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,pbVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,pbVar10,0,8);
            }
          }
          if (param_1[5] == 0) {
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,puVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,puVar9,0,8);
            }
          }
          plVar12 = plVar11;
        } while (plVar11 != puVar8 + 1);
        lVar5 = param_1[5];
        FUN_00c1a630(puVar8,puVar8[1]);
        if (lVar5 == 0) {
          plVar12 = *(long **)(lVar1 + 0x30);
          if (plVar12 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar12 = DAT_04859430;
            *(long **)(lVar1 + 0x30) = DAT_04859430;
          }
          uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar12,puVar8,0,8);
          }
        }
      }
      uVar3 = param_1[1];
      uVar7 = uVar14 + 1;
    } while (uVar7 < uVar3);
  }
  *param_1 = 0;
  param_1[3] = uVar3;
  return;
}


