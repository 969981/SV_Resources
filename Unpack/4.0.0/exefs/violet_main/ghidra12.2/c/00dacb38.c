/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dacb38; name: FUN_00dacb38
 */


void FUN_00dacb38(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  ulong uVar15;
  long local_1e0;
  ulong local_1d8;
  long local_1d0;
  long local_1c8;
  long *local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [104];
  undefined1 auStack_148 [56];
  long local_110;
  undefined1 auStack_108 [104];
  undefined1 auStack_a0 [64];
  
  *param_1 = param_2;
  param_1[2] = 0;
  plVar11 = param_1 + 1;
  *plVar11 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  uVar12 = tpidr_el0;
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(uVar12 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(uVar12 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar5;
  param_1[4] = 0xa0a0a0a0a0a0a0;
  param_1[5] = 0;
  param_1[7] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(uVar12 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(uVar12 + 0x30) = DAT_04859430;
  }
  param_1[8] = lVar5;
  piVar6 = (int *)*param_1;
  param_1[9] = 0xa0a0a0a0a0a0a0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  if (((piVar6 != (int *)0x0) && (6 < *(ushort *)((long)piVar6 - (long)*piVar6))) &&
     (uVar10 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar10 != 0)) {
    puVar2 = (uint *)((long)piVar6 + uVar10);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      FUN_00dad484(plVar11,(long)(float)*puVar2);
      puVar14 = puVar2 + 1;
      if ((ulong)*puVar2 != 0) {
        puVar2 = puVar14 + *puVar2;
        plVar1 = param_1 + 7;
        do {
          FUN_00dad594(&local_1e0,(long)puVar14 + (ulong)*puVar14);
          uVar10 = local_1d8;
          uVar15 = param_1[2];
          if (uVar15 == 0) {
LAB_00dacd00:
            plVar8 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x1a8,8);
            if (plVar8 == (long *)0x0) {
              (**(code **)(*(long *)param_1[8] + 0xe8))();
            }
            uVar13 = param_1[8];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar5 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar5 != 0) {
              if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            }
            plVar8[2] = local_1d8;
            plVar8[3] = local_1d0;
            plVar8[4] = local_1c8;
            plVar8[5] = (long)local_1c0;
            if (local_1c0 != (long *)0x0) {
              (**(code **)(*local_1c0 + 0x18))();
            }
            plVar8[6] = local_1e0;
            plVar8[7] = local_1d8;
            plVar8[8] = local_1d0;
            plVar8[9] = local_1c8;
            plVar8[10] = (long)local_1c0;
            if (local_1c0 != (long *)0x0) {
              (**(code **)(*local_1c0 + 0x18))();
            }
            plVar8[0xb] = local_1b8;
            FUN_00dad708(plVar8 + 0xc,auStack_1b0);
            FUN_00dad1cc(plVar8 + 0x19,auStack_148);
            plVar8[0x20] = local_110;
            FUN_00dad708(plVar8 + 0x21,auStack_108);
            FUN_00dad1cc(plVar8 + 0x2e,auStack_a0);
            if (lVar5 != 0) {
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            }
            *plVar8 = 0;
            plVar8[1] = uVar10;
            if ((uVar15 == 0) ||
               (*(float *)(param_1 + 0xd) * (float)uVar15 < (float)(param_1[0xc] + 1))) {
              uVar12 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
              uVar15 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
              if (uVar15 <= uVar12) {
                uVar15 = uVar12;
              }
              FUN_00dad484(plVar11,uVar15);
              uVar15 = param_1[2];
              if ((uVar15 & uVar15 - 1) == 0) {
                uVar12 = uVar15 - 1 & uVar10;
              }
              else if (uVar10 < uVar15) {
                uVar12 = uVar10;
              }
              else {
                uVar12 = 0;
                if (uVar15 != 0) {
                  uVar12 = uVar10 / uVar15;
                }
                uVar12 = uVar10 - uVar12 * uVar15;
              }
            }
            plVar9 = *(long **)(*plVar11 + uVar12 * 8);
            if (plVar9 == (long *)0x0) {
              *plVar8 = *plVar1;
              *plVar1 = (long)plVar8;
              *(long **)(*plVar11 + uVar12 * 8) = plVar1;
              if (*plVar8 != 0) {
                uVar10 = *(ulong *)(*plVar8 + 8);
                if ((uVar15 & uVar15 - 1) == 0) {
                  uVar10 = uVar10 & uVar15 - 1;
                }
                else if (uVar15 <= uVar10) {
                  uVar7 = 0;
                  if (uVar15 != 0) {
                    uVar7 = uVar10 / uVar15;
                  }
                  uVar10 = uVar10 - uVar7 * uVar15;
                }
                plVar9 = (long *)(*plVar11 + uVar10 * 8);
                goto LAB_00dacedc;
              }
            }
            else {
              *plVar8 = *plVar9;
LAB_00dacedc:
              *plVar9 = (long)plVar8;
            }
            param_1[0xc] = param_1[0xc] + 1;
          }
          else {
            uVar7 = uVar15 - 1;
            if ((uVar15 & uVar7) == 0) {
              uVar12 = uVar7 & local_1d8;
              plVar8 = *(long **)(*plVar11 + uVar12 * 8);
              if (plVar8 == (long *)0x0) goto LAB_00dacd00;
              do {
                plVar8 = (long *)*plVar8;
                if ((plVar8 == (long *)0x0) ||
                   (plVar8[1] != local_1d8 && (plVar8[1] & uVar7) != uVar12)) goto LAB_00dacd00;
              } while (plVar8[2] != local_1d8);
            }
            else {
              uVar12 = local_1d8;
              if (uVar15 <= local_1d8) {
                uVar12 = 0;
                if (uVar15 != 0) {
                  uVar12 = local_1d8 / uVar15;
                }
                uVar12 = local_1d8 - uVar12 * uVar15;
              }
              plVar8 = *(long **)(*plVar11 + uVar12 * 8);
              if (plVar8 == (long *)0x0) goto LAB_00dacd00;
              do {
                plVar8 = (long *)*plVar8;
                if (plVar8 == (long *)0x0) goto LAB_00dacd00;
                uVar7 = plVar8[1];
                if (uVar7 != local_1d8) {
                  if (uVar15 <= uVar7) {
                    uVar3 = 0;
                    if (uVar15 != 0) {
                      uVar3 = uVar7 / uVar15;
                    }
                    uVar7 = uVar7 - uVar3 * uVar15;
                  }
                  if (uVar7 != uVar12) goto LAB_00dacd00;
                }
              } while (plVar8[2] != local_1d8);
            }
          }
          FUN_00dad2bc(&local_110);
          FUN_00dad2bc(&local_1b8);
          if (local_1c0 != (long *)0x0) {
            (**(code **)(*local_1c0 + 0x20))();
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
    }
  }
  return;
}


