/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011385c0; name: FUN_011385c0
 */


void FUN_011385c0(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 param_6)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong *puVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  uint *puVar31;
  ulong uVar32;
  long lVar33;
  uint *puVar34;
  long lVar35;
  uint *puVar36;
  uint *puVar37;
  ulong *puVar38;
  byte *pbVar39;
  undefined8 *puVar40;
  undefined8 local_2b8;
  uint *local_290;
  uint *puStack_288;
  uint *local_258;
  long *local_250;
  undefined8 local_248;
  long *local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  pcVar15 = *(code **)(param_1 + 0xd8);
  if (pcVar15 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar15)(param_1 + 0xf0);
  }
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,param_1 + 0xf0);
    uVar16 = param_5[3];
    *(undefined8 *)(param_1 + 0xd8) = param_5[1];
    *(undefined8 *)(param_1 + 0xe8) = uVar16;
    uVar16 = *param_5;
    *(undefined8 *)(param_1 + 0xe0) = param_5[2];
    *(undefined8 *)(param_1 + 0xd0) = uVar16;
  }
  plVar29 = (long *)(param_1 + 0x18);
  lVar35 = *plVar29;
  lVar33 = *(long *)(param_1 + 0x20);
  if ((lVar33 != lVar35) && (FUN_01139754(lVar33 + -0x1d0), lVar33 + -0x1d0 != lVar35)) {
    do {
      FUN_01139754(lVar33 + -0x3a0);
      lVar33 = lVar33 + -0x1d0;
    } while (lVar35 + 0x1d0 != lVar33);
  }
  plVar17 = (long *)(param_1 + 0x50);
  lVar33 = *plVar17;
  *(long *)(param_1 + 0x20) = lVar35;
  lVar35 = *(long *)(param_1 + 0x58);
  if ((lVar35 != lVar33) && (FUN_01139754(lVar35 + -0x1d0), lVar35 + -0x1d0 != lVar33)) {
    do {
      FUN_01139754(lVar35 + -0x3a0);
      lVar35 = lVar35 + -0x1d0;
    } while (lVar33 + 0x1d0 != lVar35);
  }
  plVar18 = (long *)(param_1 + 0x88);
  lVar35 = *plVar18;
  *(long *)(param_1 + 0x58) = lVar33;
  lVar33 = *(long *)(param_1 + 0x90);
  if ((lVar33 != lVar35) && (FUN_01139754(lVar33 + -0x1d0), lVar33 + -0x1d0 != lVar35)) {
    do {
      FUN_01139754(lVar33 + -0x3a0);
      lVar33 = lVar33 + -0x1d0;
    } while (lVar35 + 0x1d0 != lVar33);
  }
  *(long *)(param_1 + 0x90) = lVar35;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (param_2 != (int *)0x0) {
    puVar19 = (ushort *)((long)param_2 - (long)*param_2);
    if (((4 < *puVar19) && ((ulong)puVar19[2] != 0)) &&
       (puVar1 = (uint *)((long)param_2 + (ulong)puVar19[2]),
       puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1), *puVar1 != 0)) {
      if ((*puVar19 < 0xb) || ((ulong)puVar19[5] == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)((long)param_2 + (ulong)puVar19[5]);
      }
      FUN_01139c64(plVar29,uVar14);
      if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
         (uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar20 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)((long)param_2 + uVar20);
      }
      FUN_01139c64(plVar17,uVar14);
      if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
         (uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar20 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)((long)param_2 + uVar20);
      }
      FUN_01139c64(plVar18,uVar14);
      if (*puVar1 != 0) {
        uVar20 = 0;
        puVar38 = (ulong *)PTR_DAT_047d8b70;
        pbVar39 = PTR_DAT_047d4240;
        puVar40 = (undefined8 *)PTR_DAT_047d4248;
LAB_01138778:
        local_258 = puVar1 + uVar20 + 1;
        piVar22 = (int *)((long)local_258 + (ulong)*local_258);
        puVar19 = (ushort *)((long)piVar22 - (long)*piVar22);
        lVar33 = -(long)*piVar22;
        uVar6 = *puVar19;
        if (uVar6 < 0xb) goto LAB_01138b34;
        uVar25 = (ulong)puVar19[5];
        if (((uVar25 != 0) && (*(long *)(param_1 + 8) != 0)) &&
           (puVar37 = (uint *)((long)piVar22 + uVar25),
           puVar37 = (uint *)((long)puVar37 + (ulong)*puVar37), *puVar37 != 0)) {
          uVar25 = 0;
          puVar36 = puVar37 + 1;
LAB_011387d4:
          puVar34 = puVar36 + uVar25;
          piVar22 = (int *)((long)puVar34 + (ulong)*puVar34);
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
             (uVar24 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar24 == 0)) {
            lVar33 = 0;
          }
          else {
            puVar31 = (uint *)((long)piVar22 + uVar24);
            lVar33 = (long)puVar31 + (ulong)*puVar31;
          }
          if (*(char *)(lVar33 + 4) == '\0') {
            plVar11 = (long *)FUN_00d44228();
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
          else {
            if (((*pbVar39 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar39), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,puVar40,&PTR_LOOP_04483000);
              __cxa_guard_release(pbVar39);
            }
            uVar16 = *puVar40;
            *(undefined8 *)PTR_DAT_047d4250 = uVar16;
            FUN_00cf9884(&local_250,uVar16,(char *)(lVar33 + 4));
            plVar11 = local_250;
          }
          piVar22 = (int *)((long)puVar34 + (ulong)*puVar34);
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 7) ||
             (uVar24 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[3], uVar24 == 0)) {
            lVar33 = 0;
          }
          else {
            puVar31 = (uint *)((long)piVar22 + uVar24);
            lVar33 = (long)puVar31 + (ulong)*puVar31;
          }
          if (*(char *)(lVar33 + 4) == '\0') {
            plVar12 = (long *)FUN_00d44228();
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
          }
          else {
            if (((*pbVar39 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar39), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,puVar40,&PTR_LOOP_04483000);
              __cxa_guard_release(pbVar39);
            }
            uVar16 = *puVar40;
            *(undefined8 *)PTR_DAT_047d4250 = uVar16;
            FUN_00cf9884(&local_250,uVar16,(char *)(lVar33 + 4));
            plVar12 = local_250;
          }
          local_78 = plVar11;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
          local_80 = plVar12;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
          if (*(long *)(param_1 + 8) != 0) {
            FUN_011396a4(&local_250,&local_78,&local_80);
            uVar24 = (*(long **)(param_1 + 8))[1];
            puVar4 = puVar38;
            if (local_250 != (long *)0x0) {
              puVar4 = (ulong *)(local_250 + 6);
            }
            if (uVar24 == 0) {
LAB_011389b8:
              puVar34 = (uint *)0x1;
            }
            else {
              uVar26 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
              uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
              uVar21 = *puVar4;
              uVar7 = 0;
              if (uVar24 != 0) {
                uVar7 = uVar21 / uVar24;
              }
              uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar26 < 2) {
                uVar30 = uVar24 - 1 & uVar21;
              }
              else {
                uVar30 = uVar21;
                if (uVar24 <= uVar21) {
                  uVar30 = uVar21 - uVar7 * uVar24;
                }
              }
              lVar33 = **(long **)(param_1 + 8);
              plVar27 = *(long **)(lVar33 + uVar30 * 8);
              if ((plVar27 == (long *)0x0) || (plVar27 = (long *)*plVar27, plVar27 == (long *)0x0))
              goto LAB_011389b8;
              uVar28 = uVar24 - 1;
              if (1 < uVar26) {
                do {
                  uVar32 = plVar27[1];
                  if (uVar21 == uVar32) {
                    puVar4 = puVar38;
                    if (plVar27[2] != 0) {
                      puVar4 = (ulong *)(plVar27[2] + 0x30);
                    }
                    if (*puVar4 == uVar21) goto LAB_011389e8;
                  }
                  else {
                    if (uVar24 <= uVar32) {
                      uVar8 = 0;
                      if (uVar24 != 0) {
                        uVar8 = uVar32 / uVar24;
                      }
                      uVar32 = uVar32 - uVar8 * uVar24;
                    }
                    if (uVar32 != uVar30) break;
                  }
                  plVar27 = (long *)*plVar27;
                } while (plVar27 != (long *)0x0);
                goto LAB_011389b8;
              }
              do {
                if (uVar21 == plVar27[1]) {
                  puVar4 = puVar38;
                  if (plVar27[2] != 0) {
                    puVar4 = (ulong *)(plVar27[2] + 0x30);
                  }
                  if (*puVar4 == uVar21) goto LAB_011389e8;
                }
                else if ((plVar27[1] & uVar28) != uVar30) goto LAB_011389b8;
                plVar27 = (long *)*plVar27;
                puVar34 = (uint *)0x1;
              } while (plVar27 != (long *)0x0);
            }
            goto LAB_011389bc;
          }
          iVar10 = 1;
          goto LAB_011389c0;
        }
        goto LAB_01138b3c;
      }
LAB_01138dd8:
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      lVar33 = tpidr_el0;
      if (*(long *)(lVar33 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar33 + 0x30) = DAT_04859430;
      }
      local_250 = *(long **)(lVar33 + 0x30);
      local_248 = *(undefined8 *)(lVar33 + 0x38);
      *(undefined8 *)(lVar33 + 0x30) = uVar16;
      *(undefined2 *)(lVar33 + 0x38) = 1;
      puVar9 = PTR_nothrow_047cdb88;
      lVar35 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x20);
      uVar20 = (lVar5 - lVar35 >> 4) * 0x34f72c234f72c235;
      if (0 < lVar5 - lVar35) {
        uVar25 = uVar20;
        if (0x469ee58469ee57 < (long)uVar20) {
          uVar25 = 0x469ee58469ee58;
        }
        do {
          pvVar13 = operator_new(uVar25 * 0x1d0,(nothrow_t *)puVar9);
          if (pvVar13 != (void *)0x0) {
            FUN_0113a310(lVar35,lVar5,auStack_70,uVar20,pvVar13,uVar25);
            plVar29 = *(long **)(lVar33 + 0x30);
            if (plVar29 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar29 = DAT_04859430;
              *(long **)(lVar33 + 0x30) = DAT_04859430;
            }
            uVar20 = (**(code **)(*plVar29 + 0xf8))(plVar29);
            if (((uVar20 & 1) == 0) || (lVar35 = FUN_00c4e600(), *(int *)(lVar35 + 0x12c8) < 1)) {
              (**(code **)(*plVar29 + 0x18))(plVar29,pvVar13,0,8);
            }
            else {
              FUN_00c48fe8(plVar29,pvVar13,0,8);
            }
            goto LAB_01138ee8;
          }
          uVar25 = uVar25 >> 1;
        } while (uVar25 != 0);
      }
      FUN_0113a310(lVar35,lVar5,auStack_70,uVar20,0,0);
LAB_01138ee8:
      puVar9 = PTR_nothrow_047cdb88;
      lVar35 = *(long *)(param_1 + 0x50);
      lVar5 = *(long *)(param_1 + 0x58);
      uVar20 = (lVar5 - lVar35 >> 4) * 0x34f72c234f72c235;
      if (0 < lVar5 - lVar35) {
        uVar25 = uVar20;
        if (0x469ee58469ee57 < (long)uVar20) {
          uVar25 = 0x469ee58469ee58;
        }
        do {
          pvVar13 = operator_new(uVar25 * 0x1d0,(nothrow_t *)puVar9);
          if (pvVar13 != (void *)0x0) {
            FUN_01139f50(lVar35,lVar5,auStack_70,uVar20,pvVar13,uVar25);
            plVar29 = *(long **)(lVar33 + 0x30);
            if (plVar29 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar29 = DAT_04859430;
              *(long **)(lVar33 + 0x30) = DAT_04859430;
            }
            uVar20 = (**(code **)(*plVar29 + 0xf8))(plVar29);
            if (((uVar20 & 1) == 0) || (lVar35 = FUN_00c4e600(), *(int *)(lVar35 + 0x12c8) < 1)) {
              (**(code **)(*plVar29 + 0x18))(plVar29,pvVar13,0,8);
            }
            else {
              FUN_00c48fe8(plVar29,pvVar13,0,8);
            }
            goto LAB_01138f20;
          }
          uVar25 = uVar25 >> 1;
        } while (uVar25 != 0);
      }
      FUN_01139f50(lVar35,lVar5,auStack_70,uVar20,0,0);
LAB_01138f20:
      puVar9 = PTR_nothrow_047cdb88;
      lVar35 = *(long *)(param_1 + 0x88);
      lVar5 = *(long *)(param_1 + 0x90);
      uVar20 = (lVar5 - lVar35 >> 4) * 0x34f72c234f72c235;
      if (0 < lVar5 - lVar35) {
        uVar25 = uVar20;
        if (0x469ee58469ee57 < (long)uVar20) {
          uVar25 = 0x469ee58469ee58;
        }
        do {
          pvVar13 = operator_new(uVar25 * 0x1d0,(nothrow_t *)puVar9);
          if (pvVar13 != (void *)0x0) {
            FUN_0113a120(lVar35,lVar5,auStack_70,uVar20,pvVar13,uVar25);
            plVar29 = *(long **)(lVar33 + 0x30);
            if (plVar29 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar29 = DAT_04859430;
              *(long **)(lVar33 + 0x30) = DAT_04859430;
            }
            uVar20 = (**(code **)(*plVar29 + 0xf8))(plVar29);
            if (((uVar20 & 1) == 0) || (lVar35 = FUN_00c4e600(), *(int *)(lVar35 + 0x12c8) < 1)) {
              (**(code **)(*plVar29 + 0x18))(plVar29,pvVar13,0,8);
            }
            else {
              FUN_00c48fe8(plVar29,pvVar13,0,8);
            }
            goto LAB_01138f58;
          }
          uVar25 = uVar25 >> 1;
        } while (uVar25 != 0);
      }
      FUN_0113a120(lVar35,lVar5,auStack_70,uVar20,0,0);
LAB_01138f58:
      *(long **)(lVar33 + 0x30) = local_250;
      *(undefined2 *)(lVar33 + 0x38) = (undefined2)local_248;
    }
  }
  return;
LAB_011389e8:
  if (uVar26 < 2) {
    uVar30 = uVar28 & uVar21;
  }
  else {
    uVar30 = uVar21;
    if (uVar24 <= uVar21) {
      uVar30 = uVar21 - uVar7 * uVar24;
    }
  }
  plVar27 = *(long **)(lVar33 + uVar30 * 8);
  if ((plVar27 == (long *)0x0) || (plVar27 = (long *)*plVar27, plVar27 == (long *)0x0)) {
LAB_01139560:
    FUN_0216f4f0();
    goto LAB_01139564;
  }
  if (uVar26 < 2) {
    do {
      if (uVar21 == plVar27[1]) {
        puVar4 = puVar38;
        if (plVar27[2] != 0) {
          puVar4 = (ulong *)(plVar27[2] + 0x30);
        }
        if (*puVar4 == uVar21) goto LAB_01138a68;
      }
      else if ((plVar27[1] & uVar28) != uVar30) goto LAB_01139560;
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) goto LAB_01139560;
    } while( true );
  }
  do {
    uVar26 = plVar27[1];
    if (uVar21 == uVar26) {
      puVar4 = puVar38;
      if (plVar27[2] != 0) {
        puVar4 = (ulong *)(plVar27[2] + 0x30);
      }
      if (*puVar4 == uVar21) break;
    }
    else {
      if (uVar24 <= uVar26) {
        uVar7 = 0;
        if (uVar24 != 0) {
          uVar7 = uVar26 / uVar24;
        }
        uVar26 = uVar26 - uVar7 * uVar24;
      }
      if (uVar26 != uVar30) goto LAB_01139560;
    }
    plVar27 = (long *)*plVar27;
    if (plVar27 == (long *)0x0) goto LAB_01139560;
  } while( true );
LAB_01138a68:
  puVar34 = (uint *)(ulong)((char)plVar27[3] != '\0');
LAB_011389bc:
  iVar10 = (int)puVar34;
  if (local_250 != (long *)0x0) {
    (**(code **)(*local_250 + 0x20))();
  }
LAB_011389c0:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (iVar10 == 0) goto LAB_01138d10;
  uVar25 = uVar25 + 1;
  if (*puVar37 <= uVar25) goto LAB_01138b18;
  goto LAB_011387d4;
LAB_01138b18:
  piVar22 = (int *)((long)local_258 + (ulong)*local_258);
  lVar33 = -(long)*piVar22;
  uVar6 = *(ushort *)((long)piVar22 - (long)*piVar22);
LAB_01138b34:
  if (8 < uVar6) {
LAB_01138b3c:
    uVar25 = (ulong)*(ushort *)((long)piVar22 + lVar33 + 8);
    if (uVar25 != 0) {
      uVar24 = (ulong)*(uint *)((long)piVar22 + uVar25);
      puVar34 = (uint *)((long)((long)piVar22 + uVar25) + uVar24);
      uVar23 = *puVar34;
      if (uVar23 != 0) {
        lVar33 = uVar24 + uVar25;
        puVar37 = (uint *)0x0;
        puVar31 = puVar34 + 1;
        uVar25 = (long)piVar22 + lVar33 + 8;
        puVar36 = (uint *)((long)piVar22 + lVar33 + 0x1a);
        local_290 = puVar31;
        puStack_288 = puVar34;
        do {
          uVar24 = (ulong)puVar31[(long)puVar37];
          piVar22 = (int *)((long)(puVar31 + (long)puVar37) + uVar24);
          if (8 < *(ushort *)((long)piVar22 - (long)*piVar22)) {
            uVar26 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[4];
            if (uVar26 != 0) {
              local_258 = (uint *)((long)piVar22 + uVar26);
              pbVar39 = (byte *)(ulong)*local_258;
              if (*(int *)((long)local_258 + (long)pbVar39) != 0) {
                lVar33 = uVar26 + uVar24;
                puVar38 = (ulong *)0x0;
                puVar40 = (undefined8 *)(uVar25 + lVar33);
                puVar34 = (uint *)((long)puVar36 + lVar33);
                do {
                  uVar24 = (ulong)*(uint *)((long)puVar40 + (long)pbVar39);
                  lVar33 = uVar24 - (long)*(int *)((long)puVar40 + (long)(pbVar39 + uVar24));
                  pbVar2 = (byte *)((long)puVar34 + (long)pbVar39);
                  pbVar3 = (byte *)((long)puVar40 + (long)pbVar39 + uVar24);
                  if (*(ushort *)(pbVar2 + lVar33 + -0x12) < 0x13) {
                    if (0xe < *(ushort *)(pbVar2 + lVar33 + -0x12)) goto LAB_01138c08;
LAB_01138c20:
                    FUN_01139a54(&local_250,pbVar3,param_3,param_4,*(undefined8 *)(param_1 + 0x10),
                                 param_6);
                    uVar24 = *(ulong *)(param_1 + 0x20);
                    if (uVar24 < *(ulong *)(param_1 + 0x28)) {
                      uVar16 = *(undefined8 *)(param_1 + 0x30);
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar33 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar33 == 0) {
                        FUN_0113987c(uVar24,&local_250);
                      }
                      else {
                        if (0xf < *(ulong *)(lVar33 + 0x80)) {
LAB_011395c4:
                    /* WARNING: Subroutine does not return */
                          abort();
                        }
                        *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = uVar16;
                        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
                        FUN_0113987c(uVar24,&local_250);
                        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
                      }
                      *(ulong *)(param_1 + 0x20) = uVar24 + 0x1d0;
                    }
                    else {
                      plVar11 = plVar29;
LAB_011391a0:
                      FUN_0113b558(plVar11,&local_250);
                    }
LAB_01138ca8:
                    FUN_01139754(&local_250);
                  }
                  else if (((ulong)*(ushort *)(pbVar2 + lVar33) == 0) ||
                          (*(byte *)((long)puVar40 +
                                    (long)(pbVar39 + uVar24 + *(ushort *)(pbVar2 + lVar33))) == 0))
                  {
LAB_01138c08:
                    if (((ulong)*(ushort *)(pbVar2 + lVar33 + -4) == 0) ||
                       (iVar10 = *(int *)((long)puVar40 +
                                         (long)(pbVar39 + uVar24 + *(ushort *)(pbVar2 + lVar33 + -4)
                                               )), iVar10 == 0)) goto LAB_01138c20;
                    if (iVar10 == 1) {
                      FUN_01139a54(&local_250,pbVar3,param_3,param_4,*(undefined8 *)(param_1 + 0x10)
                                   ,param_6);
                      uVar24 = *(ulong *)(param_1 + 0x58);
                      if (*(ulong *)(param_1 + 0x60) <= uVar24) {
                        plVar11 = plVar17;
                        goto LAB_011391a0;
                      }
                      local_2b8 = *(undefined8 *)(param_1 + 0x68);
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar33 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar33 == 0) {
                        FUN_0113987c(uVar24,&local_250);
                      }
                      else {
                        if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_011395c4;
                        *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = local_2b8;
                        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
                        FUN_0113987c(uVar24,&local_250);
                        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
                      }
                      *(ulong *)(param_1 + 0x58) = uVar24 + 0x1d0;
                    }
                    else {
                      if (iVar10 != 2) goto LAB_01138cb0;
                      FUN_01139a54(&local_250,pbVar3,param_3,param_4,*(undefined8 *)(param_1 + 0x10)
                                   ,param_6);
                      plVar11 = *(long **)(param_1 + 0x90);
                      if (*(long **)(param_1 + 0x98) <= plVar11) {
                        plVar11 = plVar18;
                        goto LAB_011391a0;
                      }
                      local_2b8 = *(undefined8 *)(param_1 + 0xa0);
                      if ((DAT_04865a38 & 1) == 0) {
LAB_01139564:
                        iVar10 = __cxa_guard_acquire(&DAT_04865a38);
                        if (iVar10 != 0) {
                          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                          __cxa_guard_release(&DAT_04865a38);
                        }
                      }
                      lVar33 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar33 == 0) {
                        FUN_0113987c(plVar11,&local_250);
                      }
                      else {
                        if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_011395c4;
                        *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = local_2b8;
                        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
                        FUN_0113987c(plVar11,&local_250);
                        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
                      }
                      *(long **)(param_1 + 0x90) = plVar11 + 0x3a;
                    }
                    goto LAB_01138ca8;
                  }
LAB_01138cb0:
                  puVar38 = (ulong *)((long)puVar38 + 1);
                  puVar40 = (undefined8 *)((long)puVar40 + 4);
                  puVar34 = puVar34 + 1;
                } while (puVar38 < (ulong *)(ulong)*(uint *)((long)local_258 + (long)pbVar39));
                uVar23 = *puStack_288;
                puVar31 = local_290;
              }
            }
          }
          puVar37 = (uint *)((long)puVar37 + 1);
          uVar25 = uVar25 + 4;
          puVar36 = puVar36 + 1;
          puVar38 = (ulong *)PTR_DAT_047d8b70;
          pbVar39 = PTR_DAT_047d4240;
          puVar40 = (undefined8 *)PTR_DAT_047d4248;
        } while (puVar37 < (uint *)(ulong)uVar23);
      }
    }
  }
LAB_01138d10:
  uVar20 = uVar20 + 1;
  if (*puVar1 <= uVar20) goto LAB_01138dd8;
  goto LAB_01138778;
}


