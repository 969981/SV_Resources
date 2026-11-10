/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010da6e8; name: FUN_010da6e8
 */


void FUN_010da6e8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  float fVar20;
  undefined1 auStack_78 [24];
  
  *param_1 = param_3;
  param_1[2] = 0;
  plVar15 = param_1 + 1;
  *plVar15 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  lVar6 = tpidr_el0;
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar6 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = lVar4;
  param_1[7] = 0;
  param_1[4] = 0x3ffffffffffffff;
  param_1[5] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar6 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  plVar12 = param_1 + 0xe;
  *plVar12 = 0;
  param_1[8] = lVar4;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0x3ffffffffffffff;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xf] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar6 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x10] = lVar4;
  param_1[0x14] = 0;
  param_1[0x11] = 0x3ffffffffffffff;
  param_1[0x12] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar6 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  plVar14 = param_1 + 0x1b;
  *plVar14 = 0;
  param_1[0x15] = lVar4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0x3ffffffffffffff;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1c] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar6 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = lVar4;
  param_1[0x21] = 0;
  param_1[0x1e] = 0x3ffffffffffffff;
  param_1[0x1f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar6 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar6 + 0x30) = DAT_04859430;
  }
  param_1[0x22] = lVar4;
  piVar8 = (int *)*param_1;
  param_1[0x23] = 0x3ffffffffffffff;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  if (piVar8 != (int *)0x0) {
    if ((4 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
       (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar13 != 0)) {
      puVar1 = (uint *)((long)piVar8 + uVar13);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      fVar20 = (float)NEON_ucvtf(*puVar1);
      FUN_010dbbb0(plVar15,(long)(fVar20 / *(float *)(param_1 + 0xd)));
      puVar17 = puVar1 + 1;
      if ((ulong)*puVar1 != 0) {
        puVar1 = puVar17 + *puVar1;
        plVar11 = param_1 + 7;
        do {
          uVar13 = (ulong)*puVar17;
          puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xf0,8);
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010db9f0;
          *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          FUN_010dbcbc(puVar5,(long)puVar17 + uVar13);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          uVar16 = puVar5[1];
          uVar19 = param_1[2];
          if (uVar19 == 0) {
LAB_010daa3c:
            plVar10 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x50,8);
            if (plVar10 == (long *)0x0) {
              (**(code **)(*(long *)param_1[8] + 0xe8))();
            }
            uVar18 = param_1[8];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar6 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar6 != 0) {
              if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010db9f0;
              *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            }
            plVar10[2] = puVar5[1];
            plVar10[3] = puVar5[2];
            plVar10[4] = puVar5[3];
            plVar7 = (long *)puVar5[4];
            plVar10[5] = (long)plVar7;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x18))();
            }
            plVar10[6] = (long)puVar5;
            plVar10[7] = (long)param_2;
            plVar10[8] = 0xf0;
            plVar10[9] = 8;
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            }
            *plVar10 = 0;
            plVar10[1] = uVar16;
            if ((uVar19 == 0) ||
               (*(float *)(param_1 + 0xd) * (float)uVar19 < (float)(param_1[0xc] + 1))) {
              uVar13 = (ulong)(uVar19 < 3 || (uVar19 & uVar19 - 1) != 0) | uVar19 << 1;
              uVar19 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
              if (uVar19 <= uVar13) {
                uVar19 = uVar13;
              }
              FUN_010dbbb0(plVar15,uVar19);
              uVar19 = param_1[2];
              if ((uVar19 & uVar19 - 1) == 0) {
                uVar13 = uVar19 - 1 & uVar16;
              }
              else if (uVar16 < uVar19) {
                uVar13 = uVar16;
              }
              else {
                uVar13 = 0;
                if (uVar19 != 0) {
                  uVar13 = uVar16 / uVar19;
                }
                uVar13 = uVar16 - uVar13 * uVar19;
              }
            }
            plVar7 = *(long **)(*plVar15 + uVar13 * 8);
            if (plVar7 == (long *)0x0) {
              *plVar10 = *plVar11;
              *plVar11 = (long)plVar10;
              *(long **)(*plVar15 + uVar13 * 8) = plVar11;
              if (*plVar10 != 0) {
                uVar13 = *(ulong *)(*plVar10 + 8);
                if ((uVar19 & uVar19 - 1) == 0) {
                  uVar13 = uVar13 & uVar19 - 1;
                }
                else if (uVar19 <= uVar13) {
                  uVar16 = 0;
                  if (uVar19 != 0) {
                    uVar16 = uVar13 / uVar19;
                  }
                  uVar13 = uVar13 - uVar16 * uVar19;
                }
                plVar7 = (long *)(*plVar15 + uVar13 * 8);
                goto LAB_010dabc4;
              }
            }
            else {
              *plVar10 = *plVar7;
LAB_010dabc4:
              *plVar7 = (long)plVar10;
            }
            param_1[0xc] = param_1[0xc] + 1;
          }
          else {
            uVar9 = uVar19 - 1;
            if ((uVar19 & uVar9) == 0) {
              uVar13 = uVar9 & uVar16;
              plVar10 = *(long **)(*plVar15 + uVar13 * 8);
              if (plVar10 == (long *)0x0) goto LAB_010daa3c;
              do {
                plVar10 = (long *)*plVar10;
                if ((plVar10 == (long *)0x0) ||
                   (plVar10[1] != uVar16 && (plVar10[1] & uVar9) != uVar13)) goto LAB_010daa3c;
              } while (plVar10[2] != uVar16);
            }
            else {
              uVar13 = uVar16;
              if (uVar19 <= uVar16) {
                uVar13 = 0;
                if (uVar19 != 0) {
                  uVar13 = uVar16 / uVar19;
                }
                uVar13 = uVar16 - uVar13 * uVar19;
              }
              plVar10 = *(long **)(*plVar15 + uVar13 * 8);
              if (plVar10 == (long *)0x0) goto LAB_010daa3c;
              do {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) goto LAB_010daa3c;
                uVar9 = plVar10[1];
                if (uVar9 != uVar16) {
                  if (uVar19 <= uVar9) {
                    uVar2 = 0;
                    if (uVar19 != 0) {
                      uVar2 = uVar9 / uVar19;
                    }
                    uVar9 = uVar9 - uVar2 * uVar19;
                  }
                  if (uVar9 != uVar13) goto LAB_010daa3c;
                }
              } while (plVar10[2] != uVar16);
            }
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00c4e5a0(auStack_78,0);
              (**(code **)*puVar5)(puVar5);
              uVar13 = FUN_00c4e564(param_2);
              if ((uVar13 & 1) == 0) {
                (**(code **)(*param_2 + 0x18))(param_2,puVar5,0xf0,8);
              }
              else {
                FUN_00c48fe8(param_2,puVar5,0xf0,8);
              }
              FUN_00c4e70c(auStack_78);
            }
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar1);
      }
    }
    piVar8 = (int *)*param_1;
    if ((6 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
       (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar13 != 0)) {
      puVar1 = (uint *)((long)piVar8 + uVar13);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      fVar20 = (float)NEON_ucvtf(*puVar1);
      FUN_010dc01c(plVar12,(long)(fVar20 / *(float *)(param_1 + 0x1a)));
      puVar17 = puVar1 + 1;
      if ((ulong)*puVar1 != 0) {
        puVar1 = puVar17 + *puVar1;
        plVar15 = param_1 + 0x14;
        do {
          uVar13 = (ulong)*puVar17;
          puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010db9f0;
          *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          FUN_010dcfec(puVar5,param_2,param_1,(long)puVar17 + uVar13);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          uVar19 = puVar5[1];
          uVar16 = param_1[0xf];
          if (uVar16 == 0) {
LAB_010dad98:
            plVar11 = (long *)(**(code **)(*(long *)param_1[0x15] + 0x10))
                                        ((long *)param_1[0x15],0x50,8);
            if (plVar11 == (long *)0x0) {
              (**(code **)(*(long *)param_1[0x15] + 0xe8))();
            }
            uVar18 = param_1[0x15];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar6 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar6 != 0) {
              if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010db9f0;
              *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            }
            plVar11[2] = puVar5[1];
            plVar11[3] = puVar5[2];
            plVar11[4] = puVar5[3];
            plVar10 = (long *)puVar5[4];
            plVar11[5] = (long)plVar10;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x18))();
            }
            plVar11[6] = (long)puVar5;
            plVar11[7] = (long)param_2;
            plVar11[8] = 0x70;
            plVar11[9] = 8;
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            }
            *plVar11 = 0;
            plVar11[1] = uVar19;
            if ((uVar16 == 0) ||
               (*(float *)(param_1 + 0x1a) * (float)uVar16 < (float)(param_1[0x19] + 1))) {
              uVar13 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
              uVar16 = (ulong)((float)(param_1[0x19] + 1) / *(float *)(param_1 + 0x1a));
              if (uVar16 <= uVar13) {
                uVar16 = uVar13;
              }
              FUN_010dc01c(plVar12,uVar16);
              uVar16 = param_1[0xf];
              if ((uVar16 & uVar16 - 1) == 0) {
                uVar13 = uVar16 - 1 & uVar19;
              }
              else if (uVar19 < uVar16) {
                uVar13 = uVar19;
              }
              else {
                uVar13 = 0;
                if (uVar16 != 0) {
                  uVar13 = uVar19 / uVar16;
                }
                uVar13 = uVar19 - uVar13 * uVar16;
              }
            }
            plVar10 = *(long **)(*plVar12 + uVar13 * 8);
            if (plVar10 == (long *)0x0) {
              *plVar11 = *plVar15;
              *plVar15 = (long)plVar11;
              *(long **)(*plVar12 + uVar13 * 8) = plVar15;
              if (*plVar11 != 0) {
                uVar13 = *(ulong *)(*plVar11 + 8);
                if ((uVar16 & uVar16 - 1) == 0) {
                  uVar13 = uVar13 & uVar16 - 1;
                }
                else if (uVar16 <= uVar13) {
                  uVar19 = 0;
                  if (uVar16 != 0) {
                    uVar19 = uVar13 / uVar16;
                  }
                  uVar13 = uVar13 - uVar19 * uVar16;
                }
                plVar10 = (long *)(*plVar12 + uVar13 * 8);
                goto LAB_010daecc;
              }
            }
            else {
              *plVar11 = *plVar10;
LAB_010daecc:
              *plVar10 = (long)plVar11;
            }
            param_1[0x19] = param_1[0x19] + 1;
          }
          else {
            uVar9 = uVar16 - 1;
            if ((uVar16 & uVar9) == 0) {
              uVar13 = uVar9 & uVar19;
              plVar11 = *(long **)(*plVar12 + uVar13 * 8);
              if (plVar11 == (long *)0x0) goto LAB_010dad98;
              do {
                plVar11 = (long *)*plVar11;
                if ((plVar11 == (long *)0x0) ||
                   (plVar11[1] != uVar19 && (plVar11[1] & uVar9) != uVar13)) goto LAB_010dad98;
              } while (plVar11[2] != uVar19);
            }
            else {
              uVar13 = uVar19;
              if (uVar16 <= uVar19) {
                uVar13 = 0;
                if (uVar16 != 0) {
                  uVar13 = uVar19 / uVar16;
                }
                uVar13 = uVar19 - uVar13 * uVar16;
              }
              plVar11 = *(long **)(*plVar12 + uVar13 * 8);
              if (plVar11 == (long *)0x0) goto LAB_010dad98;
              do {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_010dad98;
                uVar9 = plVar11[1];
                if (uVar9 != uVar19) {
                  if (uVar16 <= uVar9) {
                    uVar2 = 0;
                    if (uVar16 != 0) {
                      uVar2 = uVar9 / uVar16;
                    }
                    uVar9 = uVar9 - uVar2 * uVar16;
                  }
                  if (uVar9 != uVar13) goto LAB_010dad98;
                }
              } while (plVar11[2] != uVar19);
            }
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00c4e5a0(auStack_78,0);
              (**(code **)*puVar5)(puVar5);
              uVar13 = FUN_00c4e564(param_2);
              if ((uVar13 & 1) == 0) {
                (**(code **)(*param_2 + 0x18))(param_2,puVar5,0x70,8);
              }
              else {
                FUN_00c48fe8(param_2,puVar5,0x70,8);
              }
              FUN_00c4e70c(auStack_78);
            }
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar1);
      }
    }
    piVar8 = (int *)*param_1;
    if ((8 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
       (uVar13 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar13 != 0)) {
      puVar1 = (uint *)((long)piVar8 + uVar13);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      fVar20 = (float)NEON_ucvtf(*puVar1);
      FUN_010dc120(plVar14,(long)(fVar20 / *(float *)(param_1 + 0x27)));
      puVar17 = puVar1 + 1;
      if ((ulong)*puVar1 != 0) {
        puVar1 = puVar17 + *puVar1;
        plVar15 = param_1 + 0x21;
        do {
          uVar13 = (ulong)*puVar17;
          puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
          if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010db9f0;
          *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          FUN_010dc4c8(puVar5,param_2,param_1,(long)puVar17 + uVar13);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          uVar19 = puVar5[1];
          uVar16 = param_1[0x1c];
          if (uVar16 == 0) {
LAB_010db06c:
            plVar12 = (long *)(**(code **)(*(long *)param_1[0x22] + 0x10))
                                        ((long *)param_1[0x22],0x50,8);
            if (plVar12 == (long *)0x0) {
              (**(code **)(*(long *)param_1[0x22] + 0xe8))();
            }
            uVar18 = param_1[0x22];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar6 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar6 != 0) {
              if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_010db9f0:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            }
            plVar12[2] = puVar5[1];
            plVar12[3] = puVar5[2];
            plVar12[4] = puVar5[3];
            plVar11 = (long *)puVar5[4];
            plVar12[5] = (long)plVar11;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x18))();
            }
            plVar12[6] = (long)puVar5;
            plVar12[7] = (long)param_2;
            plVar12[8] = 0x70;
            plVar12[9] = 8;
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            }
            *plVar12 = 0;
            plVar12[1] = uVar19;
            if ((uVar16 == 0) ||
               (*(float *)(param_1 + 0x27) * (float)uVar16 < (float)(param_1[0x26] + 1))) {
              uVar13 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
              uVar16 = (ulong)((float)(param_1[0x26] + 1) / *(float *)(param_1 + 0x27));
              if (uVar16 <= uVar13) {
                uVar16 = uVar13;
              }
              FUN_010dc120(plVar14,uVar16);
              uVar16 = param_1[0x1c];
              if ((uVar16 & uVar16 - 1) == 0) {
                uVar13 = uVar16 - 1 & uVar19;
              }
              else if (uVar19 < uVar16) {
                uVar13 = uVar19;
              }
              else {
                uVar13 = 0;
                if (uVar16 != 0) {
                  uVar13 = uVar19 / uVar16;
                }
                uVar13 = uVar19 - uVar13 * uVar16;
              }
            }
            plVar11 = *(long **)(*plVar14 + uVar13 * 8);
            if (plVar11 == (long *)0x0) {
              *plVar12 = *plVar15;
              *plVar15 = (long)plVar12;
              *(long **)(*plVar14 + uVar13 * 8) = plVar15;
              if (*plVar12 != 0) {
                uVar13 = *(ulong *)(*plVar12 + 8);
                if ((uVar16 & uVar16 - 1) == 0) {
                  uVar13 = uVar13 & uVar16 - 1;
                }
                else if (uVar16 <= uVar13) {
                  uVar19 = 0;
                  if (uVar16 != 0) {
                    uVar19 = uVar13 / uVar16;
                  }
                  uVar13 = uVar13 - uVar19 * uVar16;
                }
                plVar11 = (long *)(*plVar14 + uVar13 * 8);
                goto LAB_010db1ec;
              }
            }
            else {
              *plVar12 = *plVar11;
LAB_010db1ec:
              *plVar11 = (long)plVar12;
            }
            param_1[0x26] = param_1[0x26] + 1;
          }
          else {
            uVar9 = uVar16 - 1;
            if ((uVar16 & uVar9) == 0) {
              uVar13 = uVar9 & uVar19;
              plVar12 = *(long **)(*plVar14 + uVar13 * 8);
              if (plVar12 == (long *)0x0) goto LAB_010db06c;
              do {
                plVar12 = (long *)*plVar12;
                if ((plVar12 == (long *)0x0) ||
                   (plVar12[1] != uVar19 && (plVar12[1] & uVar9) != uVar13)) goto LAB_010db06c;
              } while (plVar12[2] != uVar19);
            }
            else {
              uVar13 = uVar19;
              if (uVar16 <= uVar19) {
                uVar13 = 0;
                if (uVar16 != 0) {
                  uVar13 = uVar19 / uVar16;
                }
                uVar13 = uVar19 - uVar13 * uVar16;
              }
              plVar12 = *(long **)(*plVar14 + uVar13 * 8);
              if (plVar12 == (long *)0x0) goto LAB_010db06c;
              do {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_010db06c;
                uVar9 = plVar12[1];
                if (uVar9 != uVar19) {
                  if (uVar16 <= uVar9) {
                    uVar2 = 0;
                    if (uVar16 != 0) {
                      uVar2 = uVar9 / uVar16;
                    }
                    uVar9 = uVar9 - uVar2 * uVar16;
                  }
                  if (uVar9 != uVar13) goto LAB_010db06c;
                }
              } while (plVar12[2] != uVar19);
            }
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00c4e5a0(auStack_78,0);
              (**(code **)*puVar5)(puVar5);
              uVar13 = FUN_00c4e564(param_2);
              if ((uVar13 & 1) == 0) {
                (**(code **)(*param_2 + 0x18))(param_2,puVar5,0x70,8);
              }
              else {
                FUN_00c48fe8(param_2,puVar5,0x70,8);
              }
              FUN_00c4e70c(auStack_78);
            }
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar1);
      }
    }
  }
  return;
}


