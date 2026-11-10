/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbc0c0; name: FUN_02fbc0c0
 */


undefined8 FUN_02fbc0c0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined2 *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  char cVar10;
  undefined2 uVar11;
  undefined *puVar12;
  bool bVar13;
  int *__s;
  void *pvVar14;
  ushort *puVar15;
  long *plVar16;
  int iVar17;
  ushort *puVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ushort *puVar30;
  bool bVar31;
  ulong uVar32;
  uint uVar33;
  ushort *puVar34;
  ushort *puVar35;
  int iVar36;
  ushort *puVar37;
  uint uVar38;
  long *plVar39;
  long lVar40;
  ushort *puVar41;
  ulong uVar42;
  int iVar43;
  long *local_540;
  undefined8 local_528;
  ushort *local_468 [64];
  ushort *local_268 [65];
  
  uVar33 = *(uint *)(param_1 + 0x184);
  uVar42 = (ulong)uVar33;
  puVar41 = (ushort *)(long)(int)uVar33;
  *(undefined1 *)(param_1 + 0x120) = 0;
  if ((int)(*(uint *)(param_1 + 0x144) & 0x7fffffff) < (int)uVar33) {
    FUN_02fbe364(param_1 + 0x138,puVar41);
  }
  iVar36 = *(int *)(param_1 + 0x140);
  if (iVar36 < (int)uVar33) {
    pvVar14 = (void *)(*(long *)(param_1 + 0x138) + (long)iVar36);
    *(uint *)(param_1 + 0x140) = uVar33;
    memset(pvVar14,0,(size_t)((long)puVar41 + (*(long *)(param_1 + 0x138) - (long)pvVar14)));
  }
  else if ((int)uVar33 < iVar36) {
    *(uint *)(param_1 + 0x140) = uVar33;
  }
  lVar40 = tpidr_el0;
  lVar19 = *(long *)(lVar40 + 0x1000b8);
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    *(long *)(lVar40 + 0x1000b8) = lVar19;
  }
  lVar19 = *(long *)(*(long *)(lVar19 + 0x3d0) + 0x10);
  if (*(long *)(lVar19 + 8) == 0) {
    puVar37 = (ushort *)((long)puVar41 * 8);
    local_468[0] = puVar37;
    if (lVar19 == 0) goto LAB_02fbc1ec;
    local_268[0] = (ushort *)((ulong)((long)puVar37 + 0x3f) & 0xffffffffffffffc0);
    if (*(ushort **)(lVar19 + 0x28) < local_268[0]) {
LAB_02fbc1a8:
      __s = (int *)FUN_031cf3b4(lVar19,local_268);
    }
    else {
      __s = *(int **)(lVar19 + 0x38);
      if (*(undefined1 **)(lVar19 + 0x40) < (undefined1 *)((long)local_268[0] + (long)__s))
      goto LAB_02fbc1a8;
      *(undefined1 **)(lVar19 + 0x38) = (undefined1 *)((long)local_268[0] + (long)__s);
    }
  }
  else {
    local_468[0] = (ushort *)((long)puVar41 << 3);
LAB_02fbc1ec:
    puVar37 = local_468[0];
    __s = (int *)(**(code **)PTR_DAT_047d1a08)(1,local_468,0x40);
    lVar19 = 0;
  }
  if ((int)uVar33 < 1) {
    iVar36 = 0;
    uVar38 = 0;
    iVar43 = 0;
  }
  else {
    memset(__s,0xff,(long)puVar41 << 3);
    uVar20 = 0;
    iVar36 = 0;
    uVar38 = 0;
    iVar43 = 0;
    do {
      lVar27 = *(long *)(param_1 + 0x38);
      if (*(int *)(lVar27 + uVar20 * 0x70 + 8) == 0x7fffffff) {
LAB_02fbc440:
        *(undefined1 *)(param_1 + 0x120) = 1;
        uVar26 = 0x80040200;
        goto joined_r0x02fbc454;
      }
      lVar25 = lVar27 + uVar20 * 0x70;
      uVar6 = *(ushort *)(lVar25 + 0xc);
      if ((short)uVar6 < 0) goto LAB_02fbc440;
      lVar28 = *(long *)(param_1 + 8);
      lVar2 = lVar28 + (ulong)uVar6 * 0x10;
      bVar5 = *(byte *)(lVar25 + 0x19);
      sVar8 = *(short *)(lVar25 + 0xe);
      iVar24 = (uint)bVar5 * (uint)bVar5;
      iVar36 = iVar36 + 1;
      uVar23 = (uint)bVar5;
      if (*(char *)(lVar2 + 0xf) == '\0') {
        uVar7 = *(ushort *)(lVar2 + 0xc);
        bVar13 = (int)(short)uVar7 < (int)uVar33;
        bVar31 = true;
        if ((-1 < (short)uVar7) && ((int)(short)uVar7 < (int)uVar33)) {
          iVar17 = 0;
          do {
            lVar25 = lVar27 + (ulong)uVar7 * 0x70;
            bVar13 = uVar20 == ((long)(short)uVar7 & 0xffffffffU);
            uVar4 = uVar23;
            if (bVar13) {
              uVar4 = 0;
            }
            iVar24 = iVar24 + uVar4 * *(byte *)(lVar25 + 0x19);
            if (!bVar13) {
              iVar36 = iVar36 + 1;
            }
            puVar30 = (ushort *)(lVar25 + 0x10);
            if (*(ushort *)(lVar25 + 0xc) != uVar6) {
              puVar30 = (ushort *)(lVar25 + 0x12);
            }
            uVar7 = *puVar30;
            bVar13 = (int)(short)uVar7 < (int)uVar33;
            bVar31 = iVar17 <= (int)uVar33;
          } while (((iVar17 <= (int)uVar33) && (-1 < (short)uVar7)) &&
                  (iVar17 = iVar17 + 1, (int)(short)uVar7 < (int)uVar33));
        }
        if (!bVar13 || !bVar31) goto LAB_02fbc440;
      }
      if (sVar8 < 0) goto LAB_02fbc440;
      if (*(char *)(lVar28 + (ulong)(uint)(int)sVar8 * 0x10 + 0xf) == '\0') {
        bVar31 = true;
        uVar6 = *(ushort *)(lVar28 + ((long)sVar8 & 0xffffffffU) * 0x10 + 0xc);
        bVar13 = (int)(short)uVar6 < (int)uVar33;
        if ((-1 < (short)uVar6) && ((int)(short)uVar6 < (int)uVar33)) {
          iVar17 = 0;
          do {
            lVar25 = lVar27 + (ulong)uVar6 * 0x70;
            bVar13 = uVar20 == ((long)(short)uVar6 & 0xffffffffU);
            uVar4 = uVar23;
            if (bVar13) {
              uVar4 = 0;
            }
            iVar24 = iVar24 + uVar4 * *(byte *)(lVar25 + 0x19);
            if (!bVar13) {
              iVar36 = iVar36 + 1;
            }
            puVar30 = (ushort *)(lVar25 + 0x10);
            if (*(short *)(lVar25 + 0xc) != sVar8) {
              puVar30 = (ushort *)(lVar25 + 0x12);
            }
            uVar6 = *puVar30;
            bVar13 = (int)(short)uVar6 < (int)uVar33;
            bVar31 = iVar17 <= (int)uVar33;
          } while (((iVar17 <= (int)uVar33) && (-1 < (short)uVar6)) &&
                  (iVar17 = iVar17 + 1, (int)(short)uVar6 < (int)uVar33));
        }
        if ((!bVar13) || (!bVar31)) goto LAB_02fbc440;
      }
      uVar38 = uVar38 + uVar23;
      __s[uVar20 * 2] = (int)uVar20;
      (__s + uVar20 * 2)[1] = iVar24;
      uVar20 = uVar20 + 1;
      iVar43 = iVar24 + iVar43;
    } while (uVar20 != uVar42);
    if (*(long *)(param_1 + 0xd8) == 0) {
      lVar27 = *(long *)(lVar40 + 0x1000b8);
      if (lVar27 == 0) {
        lVar27 = FUN_00e5d3b4();
        *(long *)(lVar40 + 0x1000b8) = lVar27;
      }
      lVar40 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
      local_528 = puVar41;
      local_468[0] = puVar41;
      if (*(long *)(lVar40 + 8) == 0) {
        if (lVar40 == 0) goto LAB_02fbcc9c;
        local_268[0] = (ushort *)((ulong)((long)puVar41 + 0x3f) & 0xffffffffffffffc0);
        if (*(ushort **)(lVar40 + 0x28) < local_268[0]) {
LAB_02fbc430:
          pvVar14 = (void *)FUN_031cf3b4(lVar40,local_268);
          goto LAB_02fbccb8;
        }
        pvVar14 = *(void **)(lVar40 + 0x38);
        if (*(undefined1 **)(lVar40 + 0x40) < (undefined1 *)((long)local_268[0] + (long)pvVar14))
        goto LAB_02fbc430;
        *(undefined1 **)(lVar40 + 0x38) = (undefined1 *)((long)local_268[0] + (long)pvVar14);
      }
      else {
        lVar40 = 0;
LAB_02fbcc9c:
        pvVar14 = (void *)(**(code **)PTR_DAT_047d1a08)(1,local_468,0x40);
LAB_02fbccb8:
      }
      memset(pvVar14,0,(ulong)(uVar33 - 1) + 1);
      FUN_02fbcdc0(param_1,0,pvVar14,(undefined1 *)((long)pvVar14 + (long)puVar41));
      if (lVar40 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1,pvVar14);
      }
      else {
        uVar20 = (ulong)((long)local_528 + 0x3f) & 0xffffffffffffffc0;
        if ((*(ulong *)(lVar40 + 0x28) < uVar20) ||
           (*(long *)(lVar40 + 0x38) != uVar20 + (long)pvVar14)) {
          if (pvVar14 != (void *)0x0) {
            if (*(ulong *)(lVar40 + 0x28) < uVar20 + 0x40) {
              *(int *)(*(long *)(lVar40 + 0x30) + 0x20) =
                   *(int *)(*(long *)(lVar40 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(lVar40 + 0x10) + 0x18))
                        (*(long **)(lVar40 + 0x10),
                         (long)pvVar14 - (long)*(int *)((long)pvVar14 + -4),uVar20 + 0x44);
            }
            else {
              if (*(long *)(lVar40 + 0x38) == uVar20 + (long)pvVar14) {
                *(void **)(lVar40 + 0x38) = pvVar14;
                goto LAB_02fbcda4;
              }
              FUN_031cf778(lVar40,pvVar14);
            }
          }
        }
        else {
          *(void **)(lVar40 + 0x38) = pvVar14;
          if (*(void **)(lVar40 + 0x48) == pvVar14) {
LAB_02fbcda4:
            FUN_031cf578(lVar40);
          }
        }
      }
    }
  }
  local_540 = (long *)(param_1 + 0xd8);
  plVar39 = (long *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0x110) = uVar38;
  if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) < (int)uVar33) {
    FUN_02e8bb18(plVar39,PTR_PTR_047d1a50,puVar41);
  }
  if (*(uint *)(param_1 + 0xc0) != uVar33) {
    *(uint *)(param_1 + 0xc0) = uVar33;
  }
  plVar1 = (long *)(param_1 + 200);
  if ((int)(*(uint *)(param_1 + 0xd4) & 0x7fffffff) < (int)uVar33) {
    FUN_02e8bb18(plVar1,PTR_PTR_047d1a50,puVar41);
  }
  if (*(uint *)(param_1 + 0xd0) != uVar33) {
    *(uint *)(param_1 + 0xd0) = uVar33;
  }
  if (((((int)uVar33 < 5) || (uVar38 < 0x1f)) || ((int)(uVar38 * uVar38) <= iVar43 * 2)) ||
     (*(char *)(param_1 + 0x174) == '\x01')) {
    if (*(char *)(param_1 + 0x174) != '\x02') {
      if ((int)uVar33 < 1) {
        bVar13 = false;
      }
      else {
        uVar20 = 0;
        if (uVar33 != 1) {
          do {
            sVar8 = (short)uVar20;
            *(short *)(*plVar39 + uVar20 * 2) = sVar8;
            *(short *)(*plVar1 + uVar20 * 2) = sVar8;
            *(short *)(*plVar39 + uVar20 * 2 + 2) = sVar8 + 1;
            lVar40 = uVar20 * 2;
            uVar20 = uVar20 + 2;
            *(short *)(*plVar1 + lVar40 + 2) = sVar8 + 1;
          } while ((uVar42 & 0xfffffffe) != uVar20);
        }
        bVar13 = false;
        if ((uVar33 & 1) != 0) {
          *(short *)(*plVar39 + uVar20 * 2) = (short)uVar20;
          *(short *)(*plVar1 + uVar20 * 2) = (short)uVar20;
        }
      }
      goto LAB_02fbc754;
    }
    if (1 < (int)uVar33) goto LAB_02fbc584;
  }
  else {
LAB_02fbc584:
    uVar38 = 0;
    iVar43 = 1;
    uVar23 = uVar33;
    do {
      uVar23 = uVar23 - 1;
      if (uVar33 + ~uVar38 == 1) {
        uVar20 = 0;
        bVar13 = false;
      }
      else {
        uVar20 = 0;
        bVar13 = false;
        piVar22 = __s + 3;
        do {
          if (*piVar22 < piVar22[-2]) {
            uVar26 = *(undefined8 *)(piVar22 + -3);
            *(undefined8 *)(piVar22 + -3) = *(undefined8 *)(piVar22 + -1);
            bVar13 = true;
            *(undefined8 *)(piVar22 + -1) = uVar26;
          }
          uVar20 = uVar20 + 2;
          if (piVar22[2] < *piVar22) {
            uVar26 = *(undefined8 *)(piVar22 + -1);
            *(undefined8 *)(piVar22 + -1) = *(undefined8 *)(piVar22 + 1);
            bVar13 = true;
            *(undefined8 *)(piVar22 + 1) = uVar26;
          }
          piVar22 = piVar22 + 4;
        } while (((ulong)uVar23 & 0xfffffffe) != uVar20);
      }
      if (((uVar33 + ~uVar38 & 1) != 0) &&
         (lVar40 = uVar20 + 1, __s[lVar40 * 2 + 1] < __s[uVar20 * 2 + 1])) {
        uVar26 = *(undefined8 *)(__s + lVar40 * 2);
        *(undefined8 *)(__s + lVar40 * 2) = *(undefined8 *)(__s + uVar20 * 2);
        *(undefined8 *)(__s + uVar20 * 2) = uVar26;
        bVar13 = true;
      }
      iVar43 = iVar43 + 1;
    } while ((iVar43 < (int)uVar33) && (uVar38 = uVar38 + 1, bVar13));
  }
  if (0 < (int)uVar33) {
    uVar20 = 0;
    piVar22 = __s;
    do {
      *(short *)(*plVar39 + (long)*piVar22 * 2) = (short)uVar20;
      *(short *)(*plVar1 + uVar20 * 2) = (short)*piVar22;
      uVar20 = uVar20 + 1;
      piVar22 = piVar22 + 2;
    } while (uVar42 != uVar20);
  }
  bVar13 = true;
LAB_02fbc754:
  plVar1 = (long *)(param_1 + 0x148);
  if ((int)(*(uint *)(param_1 + 0x154) & 0x7fffffff) < iVar36) {
    FUN_02fbe4c4(plVar1,(long)iVar36);
  }
  iVar43 = *(int *)(param_1 + 0x150);
  if (iVar43 < iVar36) {
    pvVar14 = (void *)(*(long *)(param_1 + 0x148) + (long)iVar43 * 4);
    *(int *)(param_1 + 0x150) = iVar36;
    memset(pvVar14,0,
           (*(long *)(param_1 + 0x148) + (long)iVar36 * 4) - (long)pvVar14 & 0xfffffffffffffffc);
  }
  else if (iVar36 < iVar43) {
    *(int *)(param_1 + 0x150) = iVar36;
  }
  if (0 < (int)uVar33) {
    uVar20 = 0;
    iVar36 = 0;
    do {
      uVar6 = *(ushort *)(*(long *)(param_1 + 200) + uVar20 * 2);
      uVar29 = (ulong)uVar6;
      uVar11 = (undefined2)uVar20;
      local_528 = (ushort *)CONCAT62(local_528._2_6_,uVar11);
      lVar25 = *(long *)(param_1 + 0x38) + uVar29 * 0x70;
      *(undefined1 *)(*(long *)(param_1 + 0x138) + uVar20) = *(undefined1 *)(lVar25 + 0x19);
      sVar8 = *(short *)(lVar25 + 0xc);
      lVar27 = *(long *)(param_1 + 8);
      lVar40 = lVar27 + (long)sVar8 * 0x10;
      sVar9 = *(short *)(lVar25 + 0xe);
      iVar43 = iVar36 + 1;
      if ((*(char *)(lVar40 + 0xf) == '\0') &&
         (uVar7 = *(ushort *)(lVar40 + 0xc), -1 < (short)uVar7)) {
        lVar40 = *(long *)(param_1 + 0x38);
        iVar24 = 1;
        do {
          if (uVar6 == uVar7) {
            uVar32 = uVar29;
          }
          else {
            uVar32 = (ulong)uVar7;
            iVar43 = iVar43 + 1;
            *(undefined2 *)((long)&local_528 + (long)iVar24 * 2) =
                 *(undefined2 *)(*plVar39 + uVar32 * 2);
            iVar24 = iVar24 + 1;
          }
          lVar25 = lVar40 + uVar32 * 0x70;
          puVar41 = (ushort *)(lVar25 + 0x10);
          if (*(short *)(lVar25 + 0xc) != sVar8) {
            puVar41 = (ushort *)(lVar25 + 0x12);
          }
          uVar7 = *puVar41;
        } while (-1 < (short)uVar7);
      }
      else {
        iVar24 = 1;
      }
      lVar27 = lVar27 + (long)sVar9 * 0x10;
      if ((*(char *)(lVar27 + 0xf) == '\0') &&
         (uVar7 = *(ushort *)(lVar27 + 0xc), -1 < (short)uVar7)) {
        lVar40 = *(long *)(param_1 + 0x38);
        do {
          if (uVar6 == uVar7) {
            uVar32 = uVar29;
          }
          else {
            uVar32 = (ulong)uVar7;
            iVar43 = iVar43 + 1;
            *(undefined2 *)((long)&local_528 + (long)iVar24 * 2) =
                 *(undefined2 *)(*plVar39 + uVar32 * 2);
            iVar24 = iVar24 + 1;
          }
          lVar27 = lVar40 + uVar32 * 0x70;
          puVar41 = (ushort *)(lVar27 + 0x10);
          if (*(short *)(lVar27 + 0xc) != sVar9) {
            puVar41 = (ushort *)(lVar27 + 0x12);
          }
          uVar7 = *puVar41;
        } while (-1 < (short)uVar7);
      }
      if (1 < iVar24) {
        puVar30 = (ushort *)&local_528;
        puVar41 = puVar30 + (iVar24 - 1);
        uVar33 = 0;
        local_268[0] = puVar30;
        local_468[0] = puVar41;
LAB_02fbc99c:
        lVar40 = (long)(int)uVar33;
LAB_02fbc9a0:
        do {
          puVar15 = puVar41;
          do {
            puVar41 = puVar15;
            uVar6 = puVar30[(long)puVar41 - (long)puVar30 >> 2];
            puVar15 = puVar41;
            puVar35 = puVar30;
            do {
              do {
                puVar34 = puVar35;
                puVar35 = puVar34 + 1;
              } while (*puVar34 < uVar6);
              puVar18 = puVar15 + 1;
              do {
                puVar15 = puVar18;
                puVar18 = puVar15 + -1;
                uVar7 = *puVar18;
              } while (uVar6 < uVar7);
              if (puVar18 < puVar34) {
                puVar15 = puVar18;
                puVar35 = puVar34;
              }
              else {
                puVar15 = puVar15 + -2;
                if (puVar34 != puVar18) {
                  *puVar18 = *puVar34;
                  *puVar34 = uVar7;
                }
              }
            } while (puVar35 <= puVar15);
            if (puVar15 <= puVar30) {
              puVar30 = puVar35;
              if (puVar35 < puVar41) goto LAB_02fbc9a0;
              uVar33 = (int)lVar40 - 1;
              if ((int)lVar40 < 1) goto LAB_02fbc8dc;
              puVar30 = local_268[uVar33];
              puVar41 = local_468[uVar33];
              goto LAB_02fbc99c;
            }
          } while (puVar41 <= puVar35);
          puVar34 = puVar15;
          puVar18 = puVar30;
          if ((long)puVar41 - (long)puVar35 <= (long)puVar15 - (long)puVar30) {
            puVar34 = puVar41;
            puVar18 = puVar35;
            puVar41 = puVar15;
            puVar35 = puVar30;
          }
          local_268[lVar40] = puVar35;
          local_468[lVar40] = puVar41;
          lVar40 = lVar40 + 1;
          puVar30 = puVar18;
          puVar41 = puVar34;
        } while( true );
      }
LAB_02fbc8dc:
      if (iVar36 < iVar43) {
        uVar29 = (ulong)iVar36;
        uVar32 = ~uVar29;
        if ((iVar43 - iVar36 & 1U) != 0) {
          *(undefined2 *)(*plVar1 + uVar29 * 4) = uVar11;
          lVar40 = uVar29 * 4;
          uVar29 = uVar29 + 1;
          *(ushort *)(*plVar1 + lVar40 + 2) = (ushort)local_528;
        }
        if (uVar32 + (long)iVar43 != 0) {
          lVar27 = (long)iVar43 - uVar29;
          lVar40 = uVar29 << 1;
          do {
            *(undefined2 *)(*plVar1 + lVar40 * 2) = uVar11;
            puVar3 = (undefined2 *)((long)&local_528 + lVar40 + uVar32 * 2 + 2);
            *(undefined2 *)(*plVar1 + lVar40 * 2 + 2) = *puVar3;
            *(undefined2 *)(*plVar1 + lVar40 * 2 + 4) = uVar11;
            lVar25 = lVar40 * 2;
            lVar27 = lVar27 + -2;
            lVar40 = lVar40 + 4;
            *(undefined2 *)(*plVar1 + lVar25 + 6) = puVar3[1];
          } while (lVar27 != 0);
        }
      }
      uVar20 = uVar20 + 1;
      iVar36 = iVar43;
    } while (uVar20 != uVar42);
  }
  puVar12 = PTR_DAT_047d1a08;
  plVar39 = (long *)*local_540;
  if (plVar39 == (long *)0x0) {
    if (bVar13) {
      local_268[0] = (ushort *)&DAT_00000090;
      plVar39 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
      pcVar21 = *(code **)(puVar12 + 0x10);
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(plVar39,"BaseBlockSquaredMatrix");
      }
      plVar39[2] = 1;
      plVar39[3] = 0;
      plVar39[6] = 0;
      plVar39[7] = -0x8000000000000000;
      plVar39[8] = 0;
      plVar39[9] = -0x8000000000000000;
      plVar39[10] = 0;
      plVar39[0xb] = -0x8000000000000000;
      *plVar39 = (long)&PTR_LAB_04611e98;
      plVar39[1] = 0xffffffff;
      plVar39[0xc] = 0;
      plVar39[0xd] = -0x8000000000000000;
      plVar39[0xe] = 0;
      plVar39[0xf] = -0x8000000000000000;
      plVar39[0x10] = 0;
      plVar39[0x11] = -0x8000000000000000;
      plVar39[4] = 0;
      plVar39[5] = 0;
    }
    else {
      local_268[0] = (ushort *)&DAT_00000060;
      plVar39 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_268,0);
      pcVar21 = *(code **)(puVar12 + 0x10);
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(plVar39,"BaseBlockSquaredMatrix");
      }
      plVar39[2] = 1;
      plVar39[3] = 0;
      plVar39[6] = 0;
      plVar39[7] = -0x8000000000000000;
      plVar39[8] = 0;
      plVar39[9] = -0x8000000000000000;
      plVar39[10] = 0;
      plVar39[0xb] = -0x8000000000000000;
      *plVar39 = (long)&PTR_LAB_04611e50;
      plVar39[1] = 0xffffffff;
      plVar39[4] = 0;
      plVar39[5] = 0;
      plVar16 = (long *)*local_540;
      *local_540 = (long)plVar39;
      if (plVar16 != (long *)0x0) {
        if (plVar16[1] != 0) {
          plVar39 = plVar16 + 2;
          do {
            lVar40 = *plVar39;
            cVar10 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar13) {
              *plVar39 = lVar40 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar40 + -1 == 0) {
            (**(code **)(*plVar16 + 0x18))();
          }
        }
        plVar39 = (long *)*local_540;
      }
      if ((plVar39 != (long *)0x0) && (plVar39[1] != 0)) {
        plVar16 = plVar39 + 2;
        do {
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar13) {
            *plVar16 = *plVar16 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
    }
    plVar16 = (long *)*local_540;
    *local_540 = (long)plVar39;
    if (plVar16 != (long *)0x0) {
      if (plVar16[1] != 0) {
        plVar39 = plVar16 + 2;
        do {
          lVar40 = *plVar39;
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar13) {
            *plVar39 = lVar40 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar40 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))();
        }
      }
      plVar39 = (long *)*local_540;
    }
  }
  (**(code **)(*plVar39 + 0x20))(plVar39,param_1 + 0x138,plVar1);
  uVar26 = 0;
joined_r0x02fbc454:
  if (lVar19 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,__s,puVar37);
    return uVar26;
  }
  uVar42 = (ulong)((long)puVar37 + 0x3f) & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar19 + 0x28) < uVar42) || (*(long *)(lVar19 + 0x38) != uVar42 + (long)__s)) {
    if (__s == (int *)0x0) {
      return uVar26;
    }
    if (*(ulong *)(lVar19 + 0x28) < uVar42 + 0x40) {
      *(int *)(*(long *)(lVar19 + 0x30) + 0x20) = *(int *)(*(long *)(lVar19 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar19 + 0x10) + 0x18))
                (*(long **)(lVar19 + 0x10),(long)__s - (long)__s[-1],uVar42 + 0x44);
      return uVar26;
    }
    if (*(long *)(lVar19 + 0x38) != uVar42 + (long)__s) {
      FUN_031cf778(lVar19,__s);
      return uVar26;
    }
    *(int **)(lVar19 + 0x38) = __s;
  }
  else {
    *(int **)(lVar19 + 0x38) = __s;
    if (*(int **)(lVar19 + 0x48) != __s) {
      return uVar26;
    }
  }
  FUN_031cf578(lVar19);
  return uVar26;
}


