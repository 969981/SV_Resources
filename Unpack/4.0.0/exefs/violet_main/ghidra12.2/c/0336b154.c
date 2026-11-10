/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336b154; name: FUN_0336b154
 */


/* WARNING: Removing unreachable block (ram,0x0336bce0) */
/* WARNING: Removing unreachable block (ram,0x0336bcec) */
/* WARNING: Removing unreachable block (ram,0x0336bd00) */
/* WARNING: Removing unreachable block (ram,0x0336bd08) */
/* WARNING: Removing unreachable block (ram,0x0336bd24) */
/* WARNING: Removing unreachable block (ram,0x0336bd2c) */
/* WARNING: Removing unreachable block (ram,0x0336bd40) */
/* WARNING: Removing unreachable block (ram,0x0336bd4c) */
/* WARNING: Removing unreachable block (ram,0x0336bd60) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0336b154(undefined8 *param_1,long *param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 **ppuVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  void *pvVar13;
  size_t sVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  ulong uVar19;
  char *pcVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  uint uVar30;
  ulong *puVar31;
  undefined8 **local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  long local_298;
  undefined1 local_290;
  int local_220;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 ***local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined **local_b0;
  long *plStack_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  long *local_70;
  
  *(undefined1 *)(param_1 + 0x13) = 1;
  uVar26 = 0x80040200;
  if (*(char *)((long)param_2 + 0x34) != '\0') {
    local_78 = 0;
    local_90 = 0;
    local_88 = -0x8000000000000000;
    local_80 = &DAT_03d7702c;
    local_70 = param_2;
    FUN_0334026c(&local_90);
    if (0 < (int)*(uint *)(param_2 + 6)) {
      plVar1 = param_1 + 0xd;
      puVar2 = param_1 + 7;
      uVar19 = (ulong)*(uint *)(param_2 + 6);
LAB_0336b1e8:
      puVar6 = PTR_DAT_047d1a08;
      lVar16 = param_2[5];
      uVar27 = uVar19 - 1;
      cVar5 = *(char *)(lVar16 + uVar27 * 0x10);
      switch(cVar5) {
      case '\x01':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 == (undefined8 *)0x0) break;
        if ((*(int *)(puVar22 + 2) == 0xb) && (*(int *)(puVar22 + 5) == 0)) {
          uVar30 = *(uint *)(param_1 + 6);
          uVar28 = (ulong)uVar30;
          if (param_3 == 1) {
            if (0 < (int)uVar30) {
              puVar24 = (undefined8 *)param_1[5];
              do {
                pcVar20 = (char *)(*(ulong *)*puVar24 & 0xfffffffffffffffe);
                if (pcVar20 != (char *)0x0) {
                  pvVar13 = (void *)*puVar22;
                  sVar14 = puVar22[1] - (long)pvVar13;
                  sVar12 = strlen(pcVar20);
                  if ((sVar12 == sVar14) && (iVar11 = memcmp(pvVar13,pcVar20,sVar14), iVar11 == 0))
                  goto LAB_0336becc;
                }
                puVar24 = puVar24 + 1;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) break;
              } while( true );
            }
          }
          else if (0 < (int)uVar30) {
            lVar23 = param_1[5];
            lVar16 = 0;
            do {
              pcVar20 = (char *)(**(ulong **)(lVar23 + lVar16) & 0xfffffffffffffffe);
              if (pcVar20 != (char *)0x0) {
                pvVar13 = (void *)*puVar22;
                sVar14 = puVar22[1] - (long)pvVar13;
                sVar12 = strlen(pcVar20);
                if ((sVar12 == sVar14) && (iVar11 = memcmp(pvVar13,pcVar20,sVar14), iVar11 == 0))
                goto LAB_0336bef4;
              }
              lVar16 = lVar16 + 8;
              if (uVar28 * 8 == lVar16) break;
            } while( true );
          }
        }
        goto LAB_0336c2f8;
      case '\x02':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 == (undefined8 *)0x0) break;
        if ((*(int *)(puVar22 + 2) != 0xb) || (*(int *)(puVar22 + 5) != 0)) goto LAB_0336c2f8;
        iVar11 = *(int *)(param_1 + 6);
        if (0 < iVar11) {
          lVar16 = 0;
          bVar8 = false;
          do {
            puVar31 = *(ulong **)(param_1[5] + lVar16 * 8);
            pcVar20 = (char *)(*puVar31 & 0xfffffffffffffffe);
            if (pcVar20 != (char *)0x0) {
              pvVar13 = (void *)*puVar22;
              sVar14 = puVar22[1] - (long)pvVar13;
              sVar12 = strlen(pcVar20);
              if ((sVar12 == sVar14) && (iVar9 = memcmp(pvVar13,pcVar20,sVar14), iVar9 == 0)) {
                if ((puVar31[4] & 1) != 0) goto LAB_0336c2f8;
                local_2a8 = &local_90;
                local_2b0 = (undefined8 **)&PTR_FUN_047ad5d0;
                local_2a0 = param_1;
                local_298 = (**(code **)(*(long *)*param_1 + 0x40))();
                lVar23 = FUN_03364b58(&local_2b0,puVar22,puVar22 + 3);
                if (lVar23 != 0) {
                  *(byte *)(lVar23 + 0x20) = *(byte *)(lVar23 + 0x20) | 2;
                  puVar31 = *(ulong **)(param_1[5] + lVar16 * 8);
                  *(long *)(param_1[5] + lVar16 * 8) = lVar23;
                  puVar6 = PTR_DAT_047d1a08;
                  if (puVar31 != (ulong *)0x0) {
                    if (((*(uint *)((long)puVar31 + 0x1c) < 6) &&
                        ((1 << (ulong)(*(uint *)((long)puVar31 + 0x1c) & 0x1f) & 0x32U) != 0)) &&
                       (uVar28 = puVar31[2], uVar28 != 0)) {
                      FUN_03364aa0(uVar28);
                      (**(code **)(puVar6 + 8))(0,uVar28,0);
                    }
                    if ((puVar31[1] & 1) != 0) {
                      (**(code **)(puVar6 + 8))(0,puVar31[1] - 1,0);
                    }
                    if ((*puVar31 & 1) != 0) {
                      (**(code **)(puVar6 + 8))(0,*puVar31 - 1,0);
                    }
                    (**(code **)(puVar6 + 8))(0,puVar31,0);
                  }
                  bVar8 = true;
                }
                iVar11 = *(int *)(param_1 + 6);
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < iVar11);
          if (bVar8) goto LAB_0336c194;
        }
        puVar24 = puVar22 + 3;
        goto LAB_0336c184;
      case '\x03':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 != (undefined8 *)0x0) {
          uVar30 = *(uint *)(param_1 + 6);
          uVar28 = (ulong)uVar30;
          if (0 < (int)uVar30) {
            puVar24 = (undefined8 *)param_1[5];
            do {
              pcVar20 = (char *)(*(ulong *)*puVar24 & 0xfffffffffffffffe);
              if (pcVar20 != (char *)0x0) {
                pvVar13 = (void *)puVar22[2];
                sVar14 = puVar22[3] - (long)pvVar13;
                sVar12 = strlen(pcVar20);
                if ((sVar12 == sVar14) && (iVar11 = memcmp(pvVar13,pcVar20,sVar14), iVar11 == 0)) {
                  FUN_031ca644(*puVar24,*puVar22,puVar22[1]);
                  uVar30 = *(uint *)(param_1 + 6);
                  bVar8 = true;
                  goto LAB_0336bde4;
                }
              }
              puVar24 = puVar24 + 1;
              uVar28 = uVar28 - 1;
            } while (uVar28 != 0);
            bVar8 = false;
LAB_0336bde4:
            if (0 < (int)uVar30) {
              lVar23 = param_1[5];
              lVar16 = 0;
              do {
                pcVar20 = (char *)(**(ulong **)(lVar23 + lVar16 * 8) & 0xfffffffffffffffe);
                if (pcVar20 != (char *)0x0) {
                  pvVar13 = (void *)puVar22[2];
                  sVar14 = puVar22[3] - (long)pvVar13;
                  sVar12 = strlen(pcVar20);
                  if ((sVar12 == sVar14) && (iVar11 = memcmp(pvVar13,pcVar20,sVar14), iVar11 == 0))
                  goto LAB_0336c2f8;
                }
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)uVar30);
            }
            if (bVar8) goto LAB_0336c194;
          }
          goto LAB_0336c2f8;
        }
        break;
      case '\a':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 == (undefined8 *)0x0) break;
        sVar12 = puVar22[1] - (long)*puVar22;
        if ((sVar12 != 0) &&
           (pvVar13 = memchr((void *)*puVar22,0x24,sVar12), pvVar13 != (void *)0x0)) {
          local_2a8 = &local_90;
          local_2b0 = (undefined8 **)&PTR_FUN_047ad5d0;
          local_2a0 = param_1;
          local_298 = (**(code **)(*(long *)*param_1 + 0x40))();
          local_b0 = (undefined **)0x3c60861;
          plStack_a8 = (long *)0x3c6086b;
          puVar31 = (ulong *)FUN_03364b58(&local_2b0,&local_b0,puVar22);
          puVar6 = PTR_DAT_047d1a08;
          if (puVar31 != (ulong *)0x0) {
            if (((*(uint *)((long)puVar31 + 0x1c) < 6) &&
                ((1 << (ulong)(*(uint *)((long)puVar31 + 0x1c) & 0x1f) & 0x32U) != 0)) &&
               (uVar28 = puVar31[2], uVar28 != 0)) {
              FUN_03364aa0(uVar28);
              (**(code **)(puVar6 + 8))(0,uVar28,0);
            }
            if ((puVar31[1] & 1) != 0) {
              (**(code **)(puVar6 + 8))(0,puVar31[1] - 1,0);
            }
            if ((*puVar31 & 1) != 0) {
              (**(code **)(puVar6 + 8))(0,*puVar31 - 1,0);
            }
            (**(code **)(puVar6 + 8))(0,puVar31,0);
          }
        }
        goto LAB_0336c194;
      case '\b':
        plVar17 = *(long **)(lVar16 + uVar27 * 0x10 + 8);
        if (plVar17 != (long *)0x0) {
          if ((*(int *)(param_1 + 8) == 1) && (*(char *)((long)param_1 + 0x99) != '\0')) {
            plVar29 = plVar17 + 2;
            if ((char *)*plVar29 != (char *)plVar17[3]) {
              if (*(char *)*plVar29 == '$') {
                uVar28 = FUN_0220e630(&DAT_047ad580,"Not implemented");
                if ((uVar28 & 1) != 0) {
                  CallSupervisor(0x26);
                }
              }
              else {
                iVar11 = FUN_0333d8d0(&local_90,plVar29);
                if (-1 < iVar11) {
                  uVar26 = (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,plVar29,iVar11);
                  *(undefined8 *)param_1[7] = uVar26;
                }
              }
            }
          }
          if ((char *)*plVar17 == (char *)plVar17[1]) {
            uVar30 = *(uint *)(param_1 + 8);
            if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= (int)uVar30) {
              FUN_0336122c(puVar2,PTR_PTR_047d1a50,(long)(int)uVar30 + 1);
            }
            puVar22 = (undefined8 *)*puVar2;
            if (0 < (int)uVar30) {
              FUN_031d0240(puVar22 + 1,puVar22,(ulong)uVar30 << 3);
            }
            *puVar22 = 0;
            *(int *)(param_1 + 8) = (int)((long)(int)uVar30 + 1);
          }
          else if (*(char *)*plVar17 == '$') {
            uVar28 = FUN_0220e630(&DAT_047ad5a0,"Not implemented");
            if ((uVar28 & 1) != 0) {
              CallSupervisor(0x26);
            }
          }
          else {
            local_2b0 = (undefined8 **)*plVar17;
            local_2a8 = (long *)plVar17[1];
            iVar11 = FUN_0333d8d0(&local_90,&local_2b0);
            if (iVar11 < 0) {
              uVar30 = *(uint *)(param_1 + 8);
              lVar16 = (long)(int)uVar30 + 1;
              if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= (int)uVar30) {
                FUN_0336122c(puVar2,PTR_PTR_047d1a50,lVar16);
              }
              puVar22 = (undefined8 *)*puVar2;
              if (0 < (int)uVar30) {
                FUN_031d0240(puVar22 + 1,puVar22,(ulong)uVar30 << 3);
              }
              uVar26 = 0;
            }
            else {
              uVar26 = (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&local_2b0,iVar11);
              uVar30 = *(uint *)(param_1 + 8);
              lVar16 = (long)(int)uVar30 + 1;
              if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= (int)uVar30) {
                FUN_0336122c(puVar2,PTR_PTR_047d1a50,lVar16);
              }
              puVar22 = (undefined8 *)*puVar2;
              if (0 < (int)uVar30) {
                FUN_031d0240(puVar22 + 1,puVar22,(ulong)uVar30 << 3);
              }
            }
            *puVar22 = uVar26;
            *(int *)(param_1 + 8) = (int)lVar16;
          }
          goto LAB_0336c194;
        }
        break;
      case '\t':
      case '\x12':
        if (*(long *)(lVar16 + uVar27 * 0x10 + 8) != 0) goto LAB_0336c194;
        break;
      case '\r':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 == (undefined8 *)0x0) break;
        uVar30 = *(uint *)(param_1 + 6);
        uVar28 = (ulong)uVar30;
        if (param_3 == 1) {
          if (0 < (int)uVar30) {
            puVar24 = (undefined8 *)param_1[5];
            do {
              pcVar20 = (char *)(*(ulong *)*puVar24 & 0xfffffffffffffffe);
              if (pcVar20 != (char *)0x0) {
                pvVar13 = (void *)*puVar22;
                sVar14 = puVar22[1] - (long)pvVar13;
                sVar12 = strlen(pcVar20);
                if ((sVar12 == sVar14) && (iVar11 = memcmp(pvVar13,pcVar20,sVar14), iVar11 == 0))
                goto LAB_0336be9c;
              }
              puVar24 = puVar24 + 1;
              uVar28 = uVar28 - 1;
              if (uVar28 == 0) break;
            } while( true );
          }
          goto LAB_0336c2f8;
        }
        if (0 < (int)uVar30) {
          pvVar13 = (void *)*puVar22;
          lVar16 = 0;
          lVar23 = param_1[5];
          sVar12 = puVar22[1] - (long)pvVar13;
          do {
            pcVar20 = (char *)(**(ulong **)(lVar23 + lVar16) & 0xfffffffffffffffe);
            if (pcVar20 == (char *)0x0) {
              if (sVar12 == 0) goto LAB_0336be44;
            }
            else {
              sVar14 = strlen(pcVar20);
              if ((sVar14 == sVar12) && (iVar11 = memcmp(pvVar13,pcVar20,sVar12), iVar11 == 0)) {
LAB_0336be44:
                local_220 = 1;
                local_2a8 = (long *)0x8000008000000002;
                local_2a0 = (undefined8 *)CONCAT62(local_2a0._2_6_,0x23);
                puVar31 = *(ulong **)(lVar23 + lVar16);
                pcVar20 = (char *)(*puVar31 & 0xfffffffffffffffe);
                local_2b0 = &local_2a0;
                if (pcVar20 != (char *)0x0) {
                  sVar12 = strlen(pcVar20);
                  iVar9 = (int)sVar12;
                  iVar11 = iVar9 + 2;
                  if (iVar9 < 0x7f) {
                    iVar10 = 2;
                  }
                  else {
                    FUN_030b4a20(&local_2b0,PTR_PTR_047d1a50 + 0x20,(long)iVar11);
                    iVar10 = (int)local_2a8;
                  }
                  if (iVar10 <= (int)((long)iVar9 + 1) || iVar11 < iVar10) {
                    local_2a8 = (long *)CONCAT44(local_2a8._4_4_,iVar11);
                  }
                  *(undefined1 *)((long)local_2b0 + (long)iVar9 + 1) = 0;
                  memmove((void *)((long)local_2b0 + 1),pcVar20,(long)((int)local_2a8 + -2));
                  puVar31 = *(ulong **)(param_1[5] + lVar16);
                }
                FUN_031ca768(puVar31,&local_2b0);
                uVar28 = (ulong)local_2a8;
                local_2a8 = (long *)((ulong)local_2a8 & 0xffffffff00000000);
                if ((-1 < (long)uVar28) && (local_2b0 != (undefined8 **)0x0)) {
                  (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                }
                break;
              }
            }
            lVar16 = lVar16 + 8;
          } while (uVar28 * 8 != lVar16);
        }
        goto LAB_0336c180;
      case '\x0e':
      case '\x0f':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 != (undefined8 *)0x0) {
          pcVar20 = (char *)*param_2;
          if ((int)(param_2[1] - (long)pcVar20) < 1) {
            iVar11 = 0;
          }
          else {
            iVar9 = 0;
            iVar11 = 0;
            uVar28 = param_2[1] - (long)pcVar20 & 0xffffffff;
            do {
              cVar3 = *pcVar20;
              if (cVar3 == '>') {
                iVar9 = iVar9 + -1;
              }
              else if (cVar3 == '<') {
                bVar8 = iVar9 == 0;
                iVar9 = iVar9 + 1;
                if (bVar8) {
                  iVar11 = iVar11 + 1;
                }
              }
              else {
                uVar30 = (uint)(iVar9 == 1 && cVar3 == ',');
                iVar11 = iVar11 + uVar30;
                if (uVar30 != 0) {
                  iVar9 = 1;
                }
              }
              uVar28 = uVar28 - 1;
              pcVar20 = pcVar20 + 1;
            } while (uVar28 != 0);
          }
          pcVar20 = (char *)param_2[2];
          if ((int)(param_2[3] - (long)pcVar20) < 1) {
            iVar9 = 0;
          }
          else {
            iVar10 = 0;
            iVar9 = 0;
            uVar28 = param_2[3] - (long)pcVar20 & 0xffffffff;
            do {
              cVar3 = *pcVar20;
              if (cVar3 == '>') {
                iVar10 = iVar10 + -1;
              }
              else if (cVar3 == '<') {
                bVar8 = iVar10 == 0;
                iVar10 = iVar10 + 1;
                if (bVar8) {
                  iVar9 = iVar9 + 1;
                }
              }
              else {
                uVar30 = (uint)(iVar10 == 1 && cVar3 == ',');
                iVar9 = iVar9 + uVar30;
                if (uVar30 != 0) {
                  iVar10 = 1;
                }
              }
              uVar28 = uVar28 - 1;
              pcVar20 = pcVar20 + 1;
            } while (uVar28 != 0);
          }
          if ((param_3 == 1) && (iVar11 < iVar9)) {
            if (((cVar5 == '\x0f') || (cVar5 == '\x0e')) && (puVar22 != (undefined8 *)0x0)) {
              pvVar13 = (void *)*puVar22;
              lVar16 = puVar22[1];
            }
            else {
              lVar16 = 0;
              pvVar13 = (void *)0x0;
            }
            iVar11 = *(int *)(param_1 + 0xe);
            if (0 < iVar11) {
              lVar23 = 0;
              iVar9 = -1;
              do {
                lVar25 = param_1[0xd];
                uVar28 = *(ulong *)(lVar25 + lVar23 * 0x28);
                pcVar20 = (char *)(uVar28 & 0xfffffffffffffffe);
                if (pcVar20 == (char *)0x0) {
                  pcVar18 = (char *)0x0;
                }
                else {
                  sVar12 = strlen(pcVar20);
                  pcVar18 = pcVar20 + sVar12;
                }
                if (((long)pcVar18 - (long)pcVar20 == lVar16 - (long)pvVar13) &&
                   (iVar10 = memcmp(pcVar20,pvVar13,lVar16 - (long)pvVar13), iVar10 == 0)) {
                  puVar31 = *(ulong **)(lVar25 + lVar23 * 0x28 + 8);
                  if (puVar31 != (ulong *)0x0) {
                    if ((*(uint *)((long)puVar31 + 0x1c) < 6 &&
                         (1 << (ulong)(*(uint *)((long)puVar31 + 0x1c) & 0x1f) & 0x32U) != 0) &&
                       (uVar28 = puVar31[2], uVar28 != 0)) {
                      FUN_03364aa0(uVar28);
                      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar28,0);
                    }
                    if ((puVar31[1] & 1) != 0) {
                      (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar31[1] - 1,0);
                    }
                    if ((*puVar31 & 1) != 0) {
                      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*puVar31 - 1,0);
                    }
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar31,0);
                    uVar28 = *(ulong *)(lVar25 + lVar23 * 0x28);
                  }
                  if ((uVar28 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar28 - 1,0);
                  }
                  iVar10 = *(int *)(param_1 + 0xe);
                  iVar11 = iVar10 + -1;
                  uVar30 = (uint)lVar23;
                  *(int *)(param_1 + 0xe) = iVar11;
                  if ((int)uVar30 < iVar11) {
                    puVar22 = (undefined8 *)(param_1[0xd] + lVar23 * 0x28);
                    if (iVar10 != uVar30 + 2) {
                      iVar11 = -(iVar10 + iVar9 & 0xfffffffeU);
                      puVar24 = puVar22;
                      do {
                        iVar11 = iVar11 + 2;
                        *puVar24 = puVar24[5];
                        puVar24[1] = puVar24[6];
                        puVar24[2] = puVar24[7];
                        puVar24[3] = puVar24[8];
                        *(undefined1 *)(puVar24 + 4) = *(undefined1 *)(puVar24 + 9);
                        puVar22 = puVar24 + 10;
                        uVar21 = *puVar22;
                        *puVar22 = 0;
                        uVar26 = puVar24[0xb];
                        puVar24[0xb] = 0;
                        *(undefined1 *)(puVar24 + 9) = *(undefined1 *)(puVar24 + 0xe);
                        puVar24[5] = uVar21;
                        puVar24[6] = uVar26;
                        puVar24[7] = puVar24[0xc];
                        puVar24[8] = puVar24[0xd];
                        puVar24 = puVar22;
                      } while (iVar11 != 0);
                    }
                    if ((iVar10 + ~uVar30 & 1) != 0) {
                      *puVar22 = puVar22[5];
                      puVar22[1] = puVar22[6];
                      puVar22[5] = 0;
                      puVar22[6] = 0;
                      *(undefined1 *)(puVar22 + 4) = *(undefined1 *)(puVar22 + 9);
                      puVar22[2] = puVar22[7];
                      puVar22[3] = puVar22[8];
                    }
                    iVar11 = *(int *)(param_1 + 0xe);
                  }
                }
                lVar23 = lVar23 + 1;
                iVar9 = iVar9 + -1;
              } while (lVar23 < iVar11);
            }
          }
          goto LAB_0336c194;
        }
        break;
      case '\x13':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 != (undefined8 *)0x0) {
          local_b0 = (undefined **)*puVar22;
          plStack_a8 = (long *)puVar22[1];
          local_2a8 = &local_90;
          local_2b0 = (undefined8 **)&PTR_FUN_047ad5d0;
          local_2a0 = param_1;
          local_298 = (**(code **)(*(long *)*param_1 + 0x40))();
          lVar16 = FUN_03364b58(&local_2b0,&local_b0,puVar22 + 2);
          if (lVar16 != 0) {
            iVar11 = *(int *)(param_1 + 0x10);
            lVar23 = (long)iVar11;
            if ((int)(*(uint *)((long)param_1 + 0x84) & 0x7fffffff) <= iVar11) {
              FUN_0336fcfc(param_1 + 0xf,lVar23 + 1);
              iVar11 = *(int *)(param_1 + 0x10);
            }
            lVar25 = param_1[0xf] + (long)iVar11 * 0x28;
            FUN_031ca554(lVar25,local_b0,plStack_a8);
            *(long *)(lVar25 + 8) = lVar16;
            *(undefined8 *)(lVar25 + 0x10) = 0;
            *(undefined8 *)(lVar25 + 0x18) = 0;
            *(undefined1 *)(lVar25 + 0x20) = 0;
            *(int *)(param_1 + 0x10) = (int)(lVar23 + 1);
          }
          goto LAB_0336c194;
        }
        break;
      case '\x14':
        puVar22 = *(undefined8 **)(lVar16 + uVar27 * 0x10 + 8);
        if (puVar22 != (undefined8 *)0x0) {
          if (0 < *(int *)(param_1 + 0xe)) {
            lVar23 = 0;
            lVar16 = 0;
LAB_0336b7f8:
            lVar25 = *plVar1;
            pcVar20 = (char *)(*(ulong *)(lVar25 + lVar23) & 0xfffffffffffffffe);
            if (pcVar20 == (char *)0x0) {
              pcVar18 = (char *)0x0;
            }
            else {
              sVar12 = strlen(pcVar20);
              pcVar18 = pcVar20 + sVar12;
            }
            if (((long)pcVar18 - (long)pcVar20 == puVar22[1] - (long)*puVar22) &&
               (iVar11 = memcmp(pcVar20,(void *)*puVar22,(long)pcVar18 - (long)pcVar20), iVar11 == 0
               )) {
              lVar25 = lVar25 + lVar23;
              bVar4 = *(byte *)(lVar25 + 0x20);
              if ((bVar4 >> 1 & 1) == 0) {
                *(byte *)(lVar25 + 0x20) = bVar4 | 2;
              }
            }
            plStack_a8 = &local_90;
            local_b0 = &PTR_FUN_047ad5d0;
            local_a0 = param_1;
            local_98 = (**(code **)(*(long *)*param_1 + 0x40))();
            lVar25 = FUN_03364b58(&local_b0,puVar22 + 2,puVar22 + 2);
            if (lVar25 == 0) goto code_r0x0336b890;
            FUN_031ca554(&local_2b0,pcVar20,pcVar18);
            local_290 = 0;
            local_2a0 = (undefined8 *)0x0;
            local_298 = 0;
            uVar28 = (ulong)*(int *)(param_1 + 0xe);
            lVar16 = uVar28 + 1;
            local_2a8 = (long *)lVar25;
            if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= *(int *)(param_1 + 0xe)) {
              FUN_0336fcfc(plVar1,lVar16);
              uVar28 = (ulong)*(uint *)(param_1 + 0xe);
            }
            puVar6 = PTR_DAT_047d1a08;
            plVar17 = (long *)*plVar1;
            iVar11 = (int)uVar28;
            if (iVar11 != 0) {
              if (0 < iVar11) {
                puVar31 = (ulong *)(plVar17 + (long)(iVar11 + -1) * 5);
                do {
                  puVar31[5] = *puVar31;
                  puVar31[6] = puVar31[1];
                  *puVar31 = 0;
                  puVar31[1] = 0;
                  *(char *)(puVar31 + 9) = (char)puVar31[4];
                  puVar31[7] = puVar31[2];
                  puVar31[8] = puVar31[3];
                  if ((*puVar31 & 1) != 0) {
                    (**(code **)(puVar6 + 8))(0,*puVar31 - 1,0);
                  }
                  puVar31 = puVar31 + -5;
                  uVar30 = (int)uVar28 - 1;
                  uVar28 = (ulong)uVar30;
                } while (uVar30 != 0);
                plVar17 = (long *)*plVar1;
                lVar25 = (long)local_2a8;
              }
            }
            *plVar17 = (long)local_2b0;
            plVar17[1] = lVar25;
            local_2b0 = (undefined8 **)0x0;
            local_2a8 = (long *)0x0;
            *(undefined1 *)(plVar17 + 4) = local_290;
            plVar17[2] = (long)local_2a0;
            plVar17[3] = local_298;
            *(int *)(param_1 + 0xe) = (int)lVar16;
          }
          goto LAB_0336c194;
        }
      }
      local_e0 = 1;
      local_d8 = 0;
      local_d0 = &local_2b0;
      local_f0 = PTR_DAT_047e34b8 + 0x10;
      local_e8 = 0xffffffff;
      local_b8 = 0;
      local_c8 = 0;
      local_c0 = 0x1bf;
      memset(&local_2b0,0,0x1c0);
      FUN_0322bd4c(&local_f0,"Unknown Component",0x11);
      iVar11 = FUN_03226f50(0x2e53f5e2,&local_2b0,
                            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionedTypeBuilder.cpp"
                            ,0x544);
      if (iVar11 != 0) {
        CallSupervisor(0x26);
      }
LAB_0336c2f8:
      uVar26 = 0x80040200;
      goto LAB_0336c4e8;
    }
LAB_0336c234:
    local_2a0 = (undefined8 *)((ulong)local_2a0 & 0xffffffffffffff00);
    local_2b0 = &local_2a0;
    local_2a8 = (long *)0x8000008000000001;
    local_220 = 1;
    pcVar20 = (char *)(param_1[1] & 0xfffffffffffffffe);
    if (pcVar20 == (char *)0x0) {
      pcVar18 = (char *)0x0;
    }
    else {
      sVar12 = strlen(pcVar20);
      pcVar18 = pcVar20 + sVar12;
    }
    lVar23 = param_2[2];
    uVar19 = (long)pcVar18 - (long)pcVar20;
    lVar16 = param_2[3];
    FUN_031c6afc(&local_2b0,pcVar20,uVar19 & 0xffffffff);
    ppuVar7 = local_2b0;
    pvVar13 = memchr(local_2b0,0x3c,(long)(int)local_2a8 - 1);
    uVar30 = (int)pvVar13 - (int)ppuVar7;
    if (pvVar13 == (void *)0x0) {
      uVar30 = 0xffffffff;
    }
    FUN_031c6afc(&local_2b0,lVar23,(int)lVar16 - (int)lVar23);
    ppuVar7 = local_2b0;
    if (-1 < (int)uVar30) {
      iVar11 = (int)local_2a8;
      sVar12 = (long)(int)local_2a8 - 1;
      pvVar13 = memchr(local_2b0,0x3c,sVar12);
      if ((pvVar13 == (void *)0x0) || ((int)pvVar13 - (int)ppuVar7 < 0)) {
        uVar27 = (ulong)uVar30;
        if (uVar19 <= uVar30) {
          uVar27 = uVar19;
        }
        if (pcVar20 != (char *)0x0) {
          pcVar18 = pcVar20 + uVar27;
          iVar9 = ((int)pcVar20 + (int)uVar19) - (int)pcVar18;
          if (iVar9 < 0) {
            sVar14 = strlen(pcVar18);
            iVar9 = (int)sVar14;
          }
          iVar9 = iVar9 + (int)sVar12;
          iVar15 = (local_2a8._4_4_ & 0x7fffffff) - 1;
          iVar10 = iVar9;
          if (iVar15 <= iVar9) {
            iVar10 = iVar15;
          }
          if (local_220 != 0) {
            iVar10 = iVar9;
          }
          iVar9 = iVar10 + 1;
          iVar15 = iVar11;
          if ((int)(local_2a8._4_4_ & 0x7fffffff) <= iVar10) {
            FUN_030b4a20(&local_2b0,PTR_PTR_047d1a50 + 0x20,(long)iVar9);
            iVar15 = (int)local_2a8;
          }
          if ((iVar15 <= iVar10) || (iVar9 < iVar15)) {
            local_2a8 = (long *)CONCAT44(local_2a8._4_4_,iVar9);
          }
          *(undefined1 *)((long)local_2b0 + (long)iVar10) = 0;
          memmove((void *)((long)local_2b0 + sVar12),pcVar18,(long)((int)local_2a8 - iVar11));
        }
      }
    }
    ppuVar7 = local_2b0;
    uVar19 = param_1[1];
    if (local_2b0 != (undefined8 **)(uVar19 & 0xfffffffffffffffe)) {
      if (local_2b0 == (undefined8 **)0x0) {
        uVar27 = 0;
      }
      else {
        sVar12 = strlen((char *)local_2b0);
        sVar12 = (size_t)((int)sVar12 + 1);
        pvVar13 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar12);
        memcpy(pvVar13,ppuVar7,sVar12);
        uVar27 = (ulong)pvVar13 | 1;
      }
      param_1[1] = uVar27;
      if ((uVar19 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar19 - 1,0);
      }
    }
    uVar19 = (ulong)local_2a8;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + 0x24);
    local_2a8 = (long *)((ulong)local_2a8 & 0xffffffff00000000);
    if ((-1 < (long)uVar19) && (local_2b0 != (undefined8 **)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    uVar26 = 0;
LAB_0336c4e8:
    if ((local_80 != (undefined *)0x0) && (*(int *)(local_80 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_80,0);
      local_80 = &DAT_03d7702c;
      local_78 = 0;
    }
    puVar6 = PTR_DAT_047d1a08;
    if ((int)local_88 != 0) {
      lVar16 = (long)(int)local_88 << 4;
      lVar23 = local_90 + -0x10;
      do {
        uVar19 = *(ulong *)(lVar23 + lVar16);
        if ((uVar19 & 1) != 0) {
          (**(code **)(puVar6 + 8))(0,uVar19 - 1,0);
        }
        lVar16 = lVar16 + -0x10;
      } while (lVar16 != 0);
    }
    lVar16 = local_88;
    uVar19 = (ulong)local_88._4_4_;
    local_88 = (ulong)local_88._4_4_ << 0x20;
    if ((-1 < lVar16) && (local_90 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar19 << 4);
    }
  }
  return uVar26;
code_r0x0336b890:
  lVar16 = lVar16 + 1;
  lVar23 = lVar23 + 0x28;
  if (*(int *)(param_1 + 0xe) <= lVar16) goto LAB_0336c194;
  goto LAB_0336b7f8;
LAB_0336be9c:
  puVar31 = (ulong *)*puVar24;
  uVar28 = *puVar31;
  if ((uVar28 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar28 - 1,0);
  }
  *puVar31 = 0;
LAB_0336c180:
  puVar24 = puVar22 + 2;
LAB_0336c184:
  FUN_0336ae48(param_1,&local_90,puVar22,puVar24);
LAB_0336c194:
  bVar8 = (long)uVar19 < 2;
  uVar19 = uVar27;
  if (bVar8) goto LAB_0336c234;
  goto LAB_0336b1e8;
LAB_0336becc:
  puVar31 = (ulong *)*puVar24;
  uVar28 = *puVar31;
  if ((uVar28 & 1) != 0) {
    (**(code **)(puVar6 + 8))(0,uVar28 - 1,0);
  }
  *puVar31 = 0;
  goto LAB_0336c194;
LAB_0336bef4:
  local_220 = 1;
  local_2a8 = (long *)0x8000008000000002;
  local_2a0 = (undefined8 *)CONCAT62(local_2a0._2_6_,0x23);
  puVar31 = *(ulong **)(lVar23 + lVar16);
  pcVar20 = (char *)(*puVar31 & 0xfffffffffffffffe);
  local_2b0 = &local_2a0;
  if (pcVar20 != (char *)0x0) {
    sVar12 = strlen(pcVar20);
    iVar9 = (int)sVar12;
    iVar11 = iVar9 + 2;
    if (iVar9 < 0x7f) {
      iVar10 = 2;
    }
    else {
      FUN_030b4a20(&local_2b0,PTR_PTR_047d1a50 + 0x20,(long)iVar11);
      iVar10 = (int)local_2a8;
    }
    if ((iVar10 <= (int)((long)iVar9 + 1)) || (iVar11 < iVar10)) {
      local_2a8 = (long *)CONCAT44(local_2a8._4_4_,iVar11);
    }
    *(undefined1 *)((long)local_2b0 + (long)iVar9 + 1) = 0;
    memmove((void *)((long)local_2b0 + 1),pcVar20,(long)((int)local_2a8 + -2));
    puVar31 = *(ulong **)(param_1[5] + lVar16);
  }
  FUN_031ca768(puVar31,&local_2b0);
  uVar28 = (ulong)local_2a8;
  local_2a8 = (long *)((ulong)local_2a8 & 0xffffffff00000000);
  if ((-1 < (long)uVar28) && (local_2b0 != (undefined8 **)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  goto LAB_0336c194;
}


