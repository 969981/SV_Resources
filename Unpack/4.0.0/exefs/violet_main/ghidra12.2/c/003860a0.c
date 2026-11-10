/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003860a0; name: FUN_003860a0
 */


undefined8 FUN_003860a0(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  byte bVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  size_t sVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  uint uVar20;
  int *piVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  byte *pbVar32;
  long lVar33;
  long lVar34;
  undefined4 *puVar35;
  undefined1 *puVar36;
  size_t sVar37;
  ulong uVar38;
  ulong uVar39;
  ulong *puVar40;
  uint *puVar41;
  undefined1 *puVar42;
  int *piVar43;
  long *plVar44;
  undefined8 *puVar45;
  undefined4 *puVar46;
  uint *puVar47;
  int *piVar48;
  long *plVar49;
  undefined1 auVar50 [16];
  ulong local_b8;
  ulong local_b0 [3];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 *local_68;
  
  plVar29 = param_1 + 3;
  lVar16 = *plVar29;
  plVar30 = param_1 + 2;
  lVar17 = *plVar30;
  pvVar9 = (void *)FUN_0038ae80(param_2,&local_b8);
  if ((pvVar9 != (void *)0x0) && (local_b8 != 0)) {
    lVar13 = param_1[1];
    lVar18 = param_1[2];
    if ((ulong)(lVar18 - lVar13) < local_b8) {
      uVar39 = 0x80;
      do {
        uVar26 = uVar39;
        uVar39 = uVar26 << 1;
      } while (uVar26 < (local_b8 - lVar18) + *plVar29);
      sVar37 = *plVar29 - lVar13;
      lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar26);
      if (lVar13 == 0) goto LAB_00386128;
      if (sVar37 != 0) {
        memmove((void *)((lVar13 + uVar26) - sVar37),(void *)param_1[1],sVar37);
      }
      param_1[1] = lVar13;
      lVar18 = lVar13 + uVar26 + (param_1[2] - param_1[3]);
      param_1[2] = lVar18;
      param_1[3] = lVar13 + uVar26;
    }
    *plVar30 = (long)(lVar18 - local_b8);
    memcpy((void *)(lVar18 - local_b8),pvVar9,local_b8);
  }
LAB_00386128:
  if ((ulong)*(ushort *)((long)param_3 + 0x12) != 0) {
    plVar2 = param_1 + 1;
    uVar39 = (ulong)*(ushort *)((long)param_3 + 0x12);
    do {
      uVar26 = uVar39 - 1;
      lVar18 = param_3[1];
      piVar21 = (int *)(lVar18 + uVar26 * 0xc);
      bVar6 = *(byte *)((long)piVar21 + 0xb);
      if ((~bVar6 & 3) != 0) {
        if (bVar6 == 4) {
          lVar18 = lVar18 + uVar26 * 0xc;
          pbVar32 = *(byte **)(param_2 + (ulong)*(ushort *)(lVar18 + 4));
          if (pbVar32 != (byte *)0x0) {
            lVar18 = *(long *)(*param_3 + (ulong)*(ushort *)(lVar18 + 8) * 8);
            lVar13 = *(long *)(lVar18 + 8);
            FUN_0038b410(auStack_78,pbVar32 + 8);
            uVar22 = FUN_0038b470(auStack_78);
            if ((uVar22 & 1) == 0) {
              do {
                lVar33 = *plVar30;
                lVar34 = *plVar29;
                auVar50 = FUN_0038b4c0(auStack_78);
                puVar10 = (undefined8 *)FUN_0038b690(auStack_78);
                if ((ulong)*pbVar32 != 0) {
                  memcpy(local_98,auVar50._0_8_,(ulong)*pbVar32);
                  auVar50 = local_98;
                }
                local_68 = puVar10;
                if ((ulong)pbVar32[1] == 0) {
                  uStack_80 = puVar10[1];
                  local_88 = *puVar10;
                }
                else {
                  local_98 = auVar50;
                  memcpy(&local_88,&local_68,(ulong)pbVar32[1]);
                  auVar50 = local_98;
                }
                local_98 = auVar50;
                uVar22 = FUN_003895e0(param_1,&local_88,lVar18,lVar13 + 0xc,0);
                if ((uVar22 & 1) == 0) {
                  return 0;
                }
                uVar22 = FUN_003895e0(param_1,local_98,lVar18,lVar13,0);
                if ((uVar22 & 1) == 0) {
                  return 0;
                }
                lVar23 = *plVar30;
                lVar31 = *plVar29 - lVar23;
                if ((ulong)(lVar23 - *plVar2) < 10) {
                  uVar22 = 0x80;
                  do {
                    uVar38 = uVar22;
                    uVar22 = uVar38 << 1;
                  } while (uVar38 < lVar31 + 10U);
                  sVar37 = *plVar29 - *plVar2;
                  lVar11 = (**(code **)*param_1)();
                  if (lVar11 == 0) {
                    return 0;
                  }
                  if (sVar37 != 0) {
                    memmove((void *)((lVar11 + uVar38) - sVar37),(void *)*plVar2,sVar37);
                  }
                  lVar23 = lVar11 + uVar38 + (*plVar30 - *plVar29);
                  *plVar30 = lVar23;
                  *plVar29 = lVar11 + uVar38;
                  *plVar2 = lVar11;
                }
                uVar22 = lVar31 + (lVar33 - lVar34);
                puVar25 = (undefined1 *)(lVar23 + -10);
                *plVar30 = (long)puVar25;
                if (uVar22 < 0x80) {
                  *puVar25 = (char)uVar22;
                  sVar14 = 1;
                }
                else {
                  sVar37 = 0;
                  do {
                    bVar6 = (byte)uVar22;
                    uVar22 = uVar22 >> 7;
                    sVar14 = sVar37 + 1;
                    puVar25[sVar37] = bVar6 & 0x7f | (uVar22 != 0) << 7;
                    sVar37 = sVar14;
                  } while (uVar22 != 0);
                }
                pvVar9 = (void *)(*plVar30 + (10 - sVar14));
                memmove(pvVar9,(void *)*plVar30,sVar14);
                *plVar30 = (long)pvVar9;
                lVar33 = *plVar2;
                iVar4 = *piVar21;
                if ((ulong)((long)pvVar9 - lVar33) < 10) {
                  uVar22 = 0x80;
                  do {
                    uVar38 = uVar22;
                    uVar22 = uVar38 << 1;
                  } while (uVar38 < (*plVar29 - (long)pvVar9) + 10U);
                  sVar37 = *plVar29 - lVar33;
                  lVar33 = (**(code **)*param_1)((undefined8 *)*param_1,lVar33,sVar37,uVar38);
                  if (lVar33 == 0) {
                    return 0;
                  }
                  if (sVar37 != 0) {
                    memmove((void *)((lVar33 + uVar38) - sVar37),(void *)*plVar2,sVar37);
                  }
                  pvVar9 = (void *)(lVar33 + uVar38 + (*plVar30 - *plVar29));
                  *plVar30 = (long)pvVar9;
                  *plVar29 = lVar33 + uVar38;
                  *plVar2 = lVar33;
                }
                uVar20 = iVar4 << 3 | 2;
                uVar22 = (ulong)(int)uVar20;
                puVar25 = (undefined1 *)((long)pvVar9 + -10);
                *plVar30 = (long)puVar25;
                if (uVar20 < 0x80) {
                  sVar37 = 1;
                  *puVar25 = (char)uVar20;
                }
                else {
                  sVar14 = 0;
                  do {
                    bVar6 = (byte)uVar22;
                    uVar22 = uVar22 >> 7;
                    sVar37 = sVar14 + 1;
                    puVar25[sVar14] = bVar6 & 0x7f | (uVar22 != 0) << 7;
                    sVar14 = sVar37;
                  } while (uVar22 != 0);
                }
                pvVar9 = (void *)(*plVar30 + (10 - sVar37));
                memmove(pvVar9,(void *)*plVar30,sVar37);
                *plVar30 = (long)pvVar9;
                FUN_0038b6b0(auStack_78);
                uVar22 = FUN_0038b470(auStack_78);
              } while ((uVar22 & 1) == 0);
            }
          }
        }
        else {
          uVar7 = *(ushort *)(lVar18 + uVar26 * 0xc + 6);
          if ((ulong)uVar7 == 0) {
            uVar15 = 1;
LAB_00386594:
            uVar22 = FUN_003895e0(param_1,param_2 + (ulong)*(ushort *)(lVar18 + uVar26 * 0xc + 4),
                                  param_3,piVar21,uVar15);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
          }
          else if ((short)uVar7 < 1) {
            if (*(int *)(param_2 + (short)~uVar7) == *piVar21) goto LAB_00386588;
          }
          else if ((*(byte *)(param_2 + (ulong)(uVar7 >> 3)) >> ((ulong)uVar7 & 7) & 1) != 0) {
LAB_00386588:
            uVar15 = 0;
            goto LAB_00386594;
          }
        }
        goto LAB_00386160;
      }
      puVar27 = *(ulong **)(param_2 + (ulong)*(ushort *)(lVar18 + uVar26 * 0xc + 4));
      if ((puVar27 == (ulong *)0x0) || (uVar22 = puVar27[1], uVar22 == 0)) goto LAB_00386160;
      switch(*(undefined1 *)(lVar18 + uVar26 * 0xc + 10)) {
      case 1:
        uVar38 = uVar22 * 8;
        puVar10 = (undefined8 *)(*puVar27 & 0xfffffffffffffff8);
        if (bVar6 == 7) {
          if (uVar38 != 0) {
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < uVar38) {
              uVar12 = 0x80;
              do {
                uVar28 = uVar12;
                uVar12 = uVar28 << 1;
              } while (uVar28 < (uVar38 - lVar18) + *plVar29);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar28);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar28) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar28 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar28;
              *plVar2 = lVar13;
            }
            pvVar9 = (void *)(lVar18 + uVar22 * -8);
            *plVar30 = (long)pvVar9;
            memcpy(pvVar9,puVar10,uVar38);
          }
          lVar13 = *plVar30;
          lVar18 = *plVar2;
          if ((ulong)(lVar13 - lVar18) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - lVar13) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar12);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar13 = lVar18 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar13;
            *plVar29 = lVar18 + uVar12;
            *plVar2 = lVar18;
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          else {
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          if (0x7f < uVar38) {
            sVar37 = 0;
            do {
              bVar8 = (byte)uVar38;
              uVar38 = uVar38 >> 7;
              sVar14 = sVar37 + 1;
              puVar25[sVar37] = bVar8 & 0x7f | (uVar38 != 0) << 7;
              sVar37 = sVar14;
            } while (uVar38 != 0);
            break;
          }
LAB_00386af8:
          *puVar25 = (char)uVar38;
LAB_00388c14:
          sVar14 = 1;
          break;
        }
        puVar45 = puVar10 + uVar22;
        puVar25 = (undefined1 *)*plVar30;
        uVar20 = *piVar21 << 3 | 1;
        if (uVar20 < 0x80) {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 8) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 8U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -8);
            puVar45 = puVar45 + -1;
            *(undefined8 *)(puVar25 + -8) = *puVar45;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            *(char *)(lVar18 + -10) = (char)uVar20;
            puVar25 = (undefined1 *)*plVar30 + 9;
            *puVar25 = *(undefined1 *)*plVar30;
            *plVar30 = (long)puVar25;
          } while (puVar45 != puVar10);
        }
        else {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 8) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 8U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -8);
            puVar45 = puVar45 + -1;
            *(undefined8 *)(puVar25 + -8) = *puVar45;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            lVar13 = 0;
            pbVar32 = (byte *)(lVar18 + -10);
            uVar22 = (ulong)uVar20;
            do {
              lVar18 = lVar13;
              bVar8 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              lVar13 = lVar18 + -1;
              *pbVar32 = bVar8 & 0x7f | (uVar22 != 0) << 7;
              pbVar32 = pbVar32 + 1;
            } while (uVar22 != 0);
            puVar25 = (undefined1 *)(*plVar30 + lVar18 + 9);
            memmove(puVar25,(void *)*plVar30,-lVar13);
            *plVar30 = (long)puVar25;
          } while (puVar45 != puVar10);
        }
        goto switchD_003861dc_default;
      case 2:
        uVar38 = uVar22 * 4;
        puVar35 = (undefined4 *)(*puVar27 & 0xfffffffffffffff8);
        if (bVar6 == 7) {
          if (uVar38 != 0) {
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < uVar38) {
              uVar12 = 0x80;
              do {
                uVar28 = uVar12;
                uVar12 = uVar28 << 1;
              } while (uVar28 < (uVar38 - lVar18) + *plVar29);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar28);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar28) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar28 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar28;
              *plVar2 = lVar13;
            }
            pvVar9 = (void *)(lVar18 + uVar22 * -4);
            *plVar30 = (long)pvVar9;
            memcpy(pvVar9,puVar35,uVar38);
          }
          lVar13 = *plVar30;
          lVar18 = *plVar2;
          if ((ulong)(lVar13 - lVar18) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - lVar13) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar12);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar13 = lVar18 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar13;
            *plVar29 = lVar18 + uVar12;
            *plVar2 = lVar18;
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          else {
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          if (uVar38 < 0x80) goto LAB_00386af8;
          sVar37 = 0;
          do {
            bVar8 = (byte)uVar38;
            uVar38 = uVar38 >> 7;
            sVar14 = sVar37 + 1;
            puVar25[sVar37] = bVar8 & 0x7f | (uVar38 != 0) << 7;
            sVar37 = sVar14;
          } while (uVar38 != 0);
          break;
        }
        puVar46 = puVar35 + uVar22;
        puVar25 = (undefined1 *)*plVar30;
        uVar20 = *piVar21 << 3 | 5;
        if (uVar20 < 0x80) {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 4) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 4U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -4);
            puVar46 = puVar46 + -1;
            *(undefined4 *)(puVar25 + -4) = *puVar46;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            *(char *)(lVar18 + -10) = (char)uVar20;
            puVar25 = (undefined1 *)*plVar30 + 9;
            *puVar25 = *(undefined1 *)*plVar30;
            *plVar30 = (long)puVar25;
          } while (puVar46 != puVar35);
        }
        else {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 4) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 4U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -4);
            puVar46 = puVar46 + -1;
            *(undefined4 *)(puVar25 + -4) = *puVar46;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            lVar13 = 0;
            pbVar32 = (byte *)(lVar18 + -10);
            uVar22 = (ulong)uVar20;
            do {
              lVar18 = lVar13;
              bVar8 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              lVar13 = lVar18 + -1;
              *pbVar32 = bVar8 & 0x7f | (uVar22 != 0) << 7;
              pbVar32 = pbVar32 + 1;
            } while (uVar22 != 0);
            puVar25 = (undefined1 *)(*plVar30 + lVar18 + 9);
            memmove(puVar25,(void *)*plVar30,-lVar13);
            *plVar30 = (long)puVar25;
          } while (puVar46 != puVar35);
        }
        goto switchD_003861dc_default;
      case 3:
      case 4:
        puVar40 = (ulong *)(*puVar27 & 0xfffffffffffffff8);
        lVar18 = *plVar29;
        puVar25 = (undefined1 *)*plVar30;
        puVar27 = puVar40 + uVar22;
        if (bVar6 == 7) {
          uVar20 = 0;
        }
        else {
          uVar20 = *piVar21 << 3;
        }
        puVar24 = puVar25;
LAB_00387090:
        do {
          puVar27 = puVar27 + -1;
          uVar22 = *puVar27;
          if ((ulong)((long)puVar24 - *plVar2) < 10) {
            uVar38 = 0x80;
            do {
              uVar12 = uVar38;
              uVar38 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - (long)puVar24) + 10U);
            sVar37 = *plVar29 - *plVar2;
            lVar13 = (**(code **)*param_1)();
            if (lVar13 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar13 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar33 = lVar13 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar33;
            *plVar29 = lVar13 + uVar12;
            *plVar2 = lVar13;
            puVar24 = (undefined1 *)(lVar33 + -10);
            *plVar30 = (long)puVar24;
            if (0x7f < uVar22) goto LAB_00387154;
LAB_003870b4:
            *puVar24 = (char)uVar22;
            sVar37 = 1;
          }
          else {
            puVar24 = puVar24 + -10;
            *plVar30 = (long)puVar24;
            if (uVar22 < 0x80) goto LAB_003870b4;
LAB_00387154:
            sVar14 = 0;
            do {
              bVar8 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar24[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          puVar19 = (undefined1 *)(*plVar30 - sVar37);
          puVar24 = puVar19 + 10;
          memmove(puVar24,(void *)*plVar30,sVar37);
          *plVar30 = (long)puVar24;
          if (uVar20 != 0) {
            lVar13 = *plVar2;
            if ((ulong)((long)puVar24 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar33 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar33;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
              puVar19 = (undefined1 *)(lVar33 + -10);
              *plVar30 = (long)puVar19;
              if (0x7f < uVar20) goto LAB_00387258;
LAB_003871b8:
              *puVar19 = (char)uVar20;
              sVar37 = 1;
            }
            else {
              *plVar30 = (long)puVar19;
              if (uVar20 < 0x80) goto LAB_003871b8;
LAB_00387258:
              sVar14 = 0;
              uVar22 = (ulong)uVar20;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar37 = sVar14 + 1;
                puVar19[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar14 = sVar37;
              } while (uVar22 != 0);
            }
            puVar24 = (undefined1 *)(*plVar30 + (10 - sVar37));
            memmove(puVar24,(void *)*plVar30,sVar37);
            *plVar30 = (long)puVar24;
            if (puVar27 == puVar40) goto switchD_003861dc_default;
            goto LAB_00387090;
          }
        } while (puVar27 != puVar40);
        lVar13 = *plVar2;
        lVar33 = *plVar29 - (long)puVar24;
        if ((ulong)((long)puVar24 - lVar13) < 10) {
          uVar22 = 0x80;
          do {
            uVar38 = uVar22;
            uVar22 = uVar38 << 1;
          } while (uVar38 < lVar33 + 10U);
          sVar37 = *plVar29 - lVar13;
          lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
          if (lVar13 == 0) {
            return 0;
          }
          if (sVar37 != 0) {
            memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
          }
          puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
          *plVar30 = (long)puVar24;
          *plVar29 = lVar13 + uVar38;
          *plVar2 = lVar13;
        }
        puVar25 = puVar25 + (lVar33 - lVar18);
        puVar24 = puVar24 + -10;
        *plVar30 = (long)puVar24;
        if (puVar25 < (undefined1 *)0x80) {
LAB_00388c10:
          *puVar24 = (char)puVar25;
          goto LAB_00388c14;
        }
        sVar37 = 0;
        do {
          bVar8 = (byte)puVar25;
          puVar25 = (undefined1 *)((ulong)puVar25 >> 7);
          sVar14 = sVar37 + 1;
          puVar24[sVar37] = bVar8 & 0x7f | (puVar25 != (undefined1 *)0x0) << 7;
          sVar37 = sVar14;
        } while (puVar25 != (undefined1 *)0x0);
        break;
      case 5:
      case 0xe:
        puVar41 = (uint *)(*puVar27 & 0xfffffffffffffff8);
        lVar18 = *plVar29;
        puVar25 = (undefined1 *)*plVar30;
        puVar47 = puVar41 + uVar22;
        if (bVar6 == 7) {
          uVar20 = 0;
        }
        else {
          uVar20 = *piVar21 << 3;
        }
        puVar24 = puVar25;
LAB_003872c8:
        do {
          puVar47 = puVar47 + -1;
          uVar3 = *puVar47;
          uVar22 = (ulong)(int)uVar3;
          if ((ulong)((long)puVar24 - *plVar2) < 10) {
            uVar38 = 0x80;
            do {
              uVar12 = uVar38;
              uVar38 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - (long)puVar24) + 10U);
            sVar37 = *plVar29 - *plVar2;
            lVar13 = (**(code **)*param_1)();
            if (lVar13 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar13 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar33 = lVar13 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar33;
            *plVar29 = lVar13 + uVar12;
            *plVar2 = lVar13;
            puVar24 = (undefined1 *)(lVar33 + -10);
            *plVar30 = (long)puVar24;
            if (0x7f < uVar3) goto LAB_0038738c;
LAB_003872ec:
            *puVar24 = (char)uVar3;
            sVar37 = 1;
          }
          else {
            puVar24 = puVar24 + -10;
            *plVar30 = (long)puVar24;
            if (uVar3 < 0x80) goto LAB_003872ec;
LAB_0038738c:
            sVar14 = 0;
            do {
              bVar8 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar24[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          puVar19 = (undefined1 *)(*plVar30 - sVar37);
          puVar24 = puVar19 + 10;
          memmove(puVar24,(void *)*plVar30,sVar37);
          *plVar30 = (long)puVar24;
          if (uVar20 != 0) {
            lVar13 = *plVar2;
            if ((ulong)((long)puVar24 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar33 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar33;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
              puVar19 = (undefined1 *)(lVar33 + -10);
              *plVar30 = (long)puVar19;
              if (0x7f < uVar20) goto LAB_00387490;
LAB_003873f0:
              *puVar19 = (char)uVar20;
              sVar37 = 1;
            }
            else {
              *plVar30 = (long)puVar19;
              if (uVar20 < 0x80) goto LAB_003873f0;
LAB_00387490:
              sVar14 = 0;
              uVar22 = (ulong)uVar20;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar37 = sVar14 + 1;
                puVar19[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar14 = sVar37;
              } while (uVar22 != 0);
            }
            puVar24 = (undefined1 *)(*plVar30 + (10 - sVar37));
            memmove(puVar24,(void *)*plVar30,sVar37);
            *plVar30 = (long)puVar24;
            if (puVar47 == puVar41) goto switchD_003861dc_default;
            goto LAB_003872c8;
          }
        } while (puVar47 != puVar41);
        lVar13 = *plVar2;
        lVar33 = *plVar29 - (long)puVar24;
        if ((ulong)((long)puVar24 - lVar13) < 10) {
          uVar22 = 0x80;
          do {
            uVar38 = uVar22;
            uVar22 = uVar38 << 1;
          } while (uVar38 < lVar33 + 10U);
          sVar37 = *plVar29 - lVar13;
          lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
          if (lVar13 == 0) {
            return 0;
          }
          if (sVar37 != 0) {
            memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
          }
          puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
          *plVar30 = (long)puVar24;
          *plVar29 = lVar13 + uVar38;
          *plVar2 = lVar13;
        }
        puVar25 = puVar25 + (lVar33 - lVar18);
        puVar24 = puVar24 + -10;
        *plVar30 = (long)puVar24;
        if (puVar25 < (undefined1 *)0x80) goto LAB_00388c10;
        sVar37 = 0;
        do {
          bVar8 = (byte)puVar25;
          puVar25 = (undefined1 *)((ulong)puVar25 >> 7);
          sVar14 = sVar37 + 1;
          puVar24[sVar37] = bVar8 & 0x7f | (puVar25 != (undefined1 *)0x0) << 7;
          sVar37 = sVar14;
        } while (puVar25 != (undefined1 *)0x0);
        break;
      case 6:
      case 0x10:
        uVar38 = uVar22 * 8;
        puVar10 = (undefined8 *)(*puVar27 & 0xfffffffffffffff8);
        if (bVar6 == 7) {
          if (uVar38 != 0) {
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < uVar38) {
              uVar12 = 0x80;
              do {
                uVar28 = uVar12;
                uVar12 = uVar28 << 1;
              } while (uVar28 < (uVar38 - lVar18) + *plVar29);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar28);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar28) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar28 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar28;
              *plVar2 = lVar13;
            }
            pvVar9 = (void *)(lVar18 + uVar22 * -8);
            *plVar30 = (long)pvVar9;
            memcpy(pvVar9,puVar10,uVar38);
          }
          lVar13 = *plVar30;
          lVar18 = *plVar2;
          if ((ulong)(lVar13 - lVar18) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - lVar13) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar12);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar13 = lVar18 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar13;
            *plVar29 = lVar18 + uVar12;
            *plVar2 = lVar18;
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          else {
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          if (uVar38 < 0x80) goto LAB_00386af8;
          sVar37 = 0;
          do {
            bVar8 = (byte)uVar38;
            uVar38 = uVar38 >> 7;
            sVar14 = sVar37 + 1;
            puVar25[sVar37] = bVar8 & 0x7f | (uVar38 != 0) << 7;
            sVar37 = sVar14;
          } while (uVar38 != 0);
          break;
        }
        puVar45 = puVar10 + uVar22;
        puVar25 = (undefined1 *)*plVar30;
        uVar20 = *piVar21 << 3 | 1;
        if (uVar20 < 0x80) {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 8) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 8U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -8);
            puVar45 = puVar45 + -1;
            *(undefined8 *)(puVar25 + -8) = *puVar45;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            *(char *)(lVar18 + -10) = (char)uVar20;
            puVar25 = (undefined1 *)*plVar30 + 9;
            *puVar25 = *(undefined1 *)*plVar30;
            *plVar30 = (long)puVar25;
          } while (puVar45 != puVar10);
        }
        else {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 8) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 8U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -8);
            puVar45 = puVar45 + -1;
            *(undefined8 *)(puVar25 + -8) = *puVar45;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            lVar13 = 0;
            pbVar32 = (byte *)(lVar18 + -10);
            uVar22 = (ulong)uVar20;
            do {
              lVar18 = lVar13;
              bVar8 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              lVar13 = lVar18 + -1;
              *pbVar32 = bVar8 & 0x7f | (uVar22 != 0) << 7;
              pbVar32 = pbVar32 + 1;
            } while (uVar22 != 0);
            puVar25 = (undefined1 *)(*plVar30 + lVar18 + 9);
            memmove(puVar25,(void *)*plVar30,-lVar13);
            *plVar30 = (long)puVar25;
          } while (puVar45 != puVar10);
        }
        goto switchD_003861dc_default;
      case 7:
      case 0xf:
        uVar38 = uVar22 * 4;
        puVar35 = (undefined4 *)(*puVar27 & 0xfffffffffffffff8);
        if (bVar6 == 7) {
          if (uVar38 != 0) {
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < uVar38) {
              uVar12 = 0x80;
              do {
                uVar28 = uVar12;
                uVar12 = uVar28 << 1;
              } while (uVar28 < (uVar38 - lVar18) + *plVar29);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar28);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar28) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar28 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar28;
              *plVar2 = lVar13;
            }
            pvVar9 = (void *)(lVar18 + uVar22 * -4);
            *plVar30 = (long)pvVar9;
            memcpy(pvVar9,puVar35,uVar38);
          }
          lVar13 = *plVar30;
          lVar18 = *plVar2;
          if ((ulong)(lVar13 - lVar18) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - lVar13) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar12);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar13 = lVar18 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar13;
            *plVar29 = lVar18 + uVar12;
            *plVar2 = lVar18;
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          else {
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
          }
          if (uVar38 < 0x80) goto LAB_00386af8;
          sVar37 = 0;
          do {
            bVar8 = (byte)uVar38;
            uVar38 = uVar38 >> 7;
            sVar14 = sVar37 + 1;
            puVar25[sVar37] = bVar8 & 0x7f | (uVar38 != 0) << 7;
            sVar37 = sVar14;
          } while (uVar38 != 0);
          break;
        }
        puVar46 = puVar35 + uVar22;
        puVar25 = (undefined1 *)*plVar30;
        uVar20 = *piVar21 << 3 | 5;
        if (uVar20 < 0x80) {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 4) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 4U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -4);
            puVar46 = puVar46 + -1;
            *(undefined4 *)(puVar25 + -4) = *puVar46;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            *(char *)(lVar18 + -10) = (char)uVar20;
            puVar25 = (undefined1 *)*plVar30 + 9;
            *puVar25 = *(undefined1 *)*plVar30;
            *plVar30 = (long)puVar25;
          } while (puVar46 != puVar35);
        }
        else {
          do {
            lVar18 = *plVar2;
            if ((ulong)((long)puVar25 - lVar18) < 4) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar25) + 4U);
              sVar37 = *plVar29 - lVar18;
              lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar38);
              if (lVar18 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar18 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar25 = (undefined1 *)(lVar18 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar25;
              *plVar29 = lVar18 + uVar38;
              *plVar2 = lVar18;
            }
            *plVar30 = (long)(puVar25 + -4);
            puVar46 = puVar46 + -1;
            *(undefined4 *)(puVar25 + -4) = *puVar46;
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - lVar18) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = lVar18 + -10;
            lVar13 = 0;
            pbVar32 = (byte *)(lVar18 + -10);
            uVar22 = (ulong)uVar20;
            do {
              lVar18 = lVar13;
              bVar8 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              lVar13 = lVar18 + -1;
              *pbVar32 = bVar8 & 0x7f | (uVar22 != 0) << 7;
              pbVar32 = pbVar32 + 1;
            } while (uVar22 != 0);
            puVar25 = (undefined1 *)(*plVar30 + lVar18 + 9);
            memmove(puVar25,(void *)*plVar30,-lVar13);
            *plVar30 = (long)puVar25;
          } while (puVar46 != puVar35);
        }
        goto switchD_003861dc_default;
      case 8:
        puVar42 = (undefined1 *)(*puVar27 & 0xfffffffffffffff8);
        lVar18 = *plVar29;
        puVar25 = (undefined1 *)*plVar30;
        puVar19 = puVar42 + uVar22;
        if (bVar6 == 7) {
          uVar20 = 0;
        }
        else {
          uVar20 = *piVar21 << 3;
        }
        puVar24 = puVar25;
        do {
          while( true ) {
            puVar19 = puVar19 + -1;
            uVar5 = *puVar19;
            if ((ulong)((long)puVar24 - *plVar2) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - *plVar2;
              lVar13 = (**(code **)*param_1)();
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar24;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            *plVar30 = (long)(puVar24 + -10);
            puVar24[-10] = uVar5;
            puVar36 = (undefined1 *)*plVar30;
            puVar24 = puVar36 + 9;
            *puVar24 = *puVar36;
            *plVar30 = (long)puVar24;
            if (uVar20 == 0) break;
            lVar13 = *plVar2;
            if ((ulong)((long)puVar24 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar33 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar33;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
              puVar36 = (undefined1 *)(lVar33 + -10);
              *plVar30 = (long)puVar36;
              if (0x7f < uVar20) goto LAB_003883dc;
LAB_003882b4:
              *puVar36 = (char)uVar20;
              sVar37 = 1;
            }
            else {
              puVar36 = puVar36 + -1;
              *plVar30 = (long)puVar36;
              if (uVar20 < 0x80) goto LAB_003882b4;
LAB_003883dc:
              sVar14 = 0;
              uVar22 = (ulong)uVar20;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar37 = sVar14 + 1;
                puVar36[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar14 = sVar37;
              } while (uVar22 != 0);
            }
            puVar24 = (undefined1 *)(*plVar30 + (10 - sVar37));
            memmove(puVar24,(void *)*plVar30,sVar37);
            *plVar30 = (long)puVar24;
            if (puVar19 == puVar42) goto switchD_003861dc_default;
          }
        } while (puVar19 != puVar42);
        lVar13 = *plVar2;
        lVar33 = *plVar29 - (long)puVar24;
        if ((ulong)((long)puVar24 - lVar13) < 10) {
          uVar22 = 0x80;
          do {
            uVar38 = uVar22;
            uVar22 = uVar38 << 1;
          } while (uVar38 < lVar33 + 10U);
          sVar37 = *plVar29 - lVar13;
          lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
          if (lVar13 == 0) {
            return 0;
          }
          if (sVar37 != 0) {
            memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
          }
          puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
          *plVar30 = (long)puVar24;
          *plVar29 = lVar13 + uVar38;
          *plVar2 = lVar13;
        }
        puVar25 = puVar25 + (lVar33 - lVar18);
        puVar24 = puVar24 + -10;
        *plVar30 = (long)puVar24;
        if (puVar25 < (undefined1 *)0x80) goto LAB_00388c10;
        sVar37 = 0;
        do {
          bVar8 = (byte)puVar25;
          puVar25 = (undefined1 *)((ulong)puVar25 >> 7);
          sVar14 = sVar37 + 1;
          puVar24[sVar37] = bVar8 & 0x7f | (puVar25 != (undefined1 *)0x0) << 7;
          sVar37 = sVar14;
        } while (puVar25 != (undefined1 *)0x0);
        break;
      case 9:
      case 0xc:
        uVar38 = *puVar27;
        puVar10 = (undefined8 *)(uVar38 & 0xfffffffffffffff8) + uVar22 * 2;
        do {
          puVar45 = puVar10 + -2;
          pvVar9 = (void *)*puVar45;
          uVar22 = puVar10[-1];
          if (uVar22 == 0) {
            uVar22 = 0;
          }
          else {
            lVar18 = *plVar30;
            lVar13 = *plVar2;
            if ((ulong)(lVar18 - lVar13) < uVar22) {
              uVar12 = 0x80;
              do {
                uVar28 = uVar12;
                uVar12 = uVar28 << 1;
              } while (uVar28 < (uVar22 - lVar18) + *plVar29);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar28);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar28) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar18 = lVar13 + uVar28 + (*plVar30 - *plVar29);
              *plVar30 = lVar18;
              *plVar29 = lVar13 + uVar28;
              *plVar2 = lVar13;
            }
            *plVar30 = (long)(lVar18 - uVar22);
            memcpy((void *)(lVar18 - uVar22),pvVar9,uVar22);
            uVar22 = puVar10[-1];
          }
          lVar13 = *plVar30;
          lVar18 = *plVar2;
          if ((ulong)(lVar13 - lVar18) < 10) {
            uVar12 = 0x80;
            do {
              uVar28 = uVar12;
              uVar12 = uVar28 << 1;
            } while (uVar28 < (*plVar29 - lVar13) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar28);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar28) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar13 = lVar18 + uVar28 + (*plVar30 - *plVar29);
            *plVar30 = lVar13;
            *plVar29 = lVar18 + uVar28;
            *plVar2 = lVar18;
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
            if (0x7f < uVar22) goto LAB_0038684c;
LAB_003867ac:
            *puVar25 = (char)uVar22;
            sVar37 = 1;
          }
          else {
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
            if (uVar22 < 0x80) goto LAB_003867ac;
LAB_0038684c:
            sVar14 = 0;
            do {
              bVar6 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar25[sVar14] = bVar6 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          pvVar9 = (void *)(*plVar30 + (10 - sVar37));
          memmove(pvVar9,(void *)*plVar30,sVar37);
          *plVar30 = (long)pvVar9;
          lVar18 = *plVar2;
          iVar4 = *piVar21;
          if ((ulong)((long)pvVar9 - lVar18) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - (long)pvVar9) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar12);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            pvVar9 = (void *)(lVar18 + uVar12 + (*plVar30 - *plVar29));
            *plVar30 = (long)pvVar9;
            *plVar29 = lVar18 + uVar12;
            *plVar2 = lVar18;
          }
          uVar20 = iVar4 << 3 | 2;
          uVar22 = (ulong)(int)uVar20;
          puVar25 = (undefined1 *)((long)pvVar9 + -10);
          *plVar30 = (long)puVar25;
          if (uVar20 < 0x80) {
            *puVar25 = (char)uVar20;
            sVar37 = 1;
          }
          else {
            sVar14 = 0;
            do {
              bVar6 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar25[sVar14] = bVar6 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          pvVar9 = (void *)(*plVar30 + (10 - sVar37));
          memmove(pvVar9,(void *)*plVar30,sVar37);
          *plVar30 = (long)pvVar9;
          puVar10 = puVar45;
        } while (puVar45 != (undefined8 *)(uVar38 & 0xfffffffffffffff8));
        goto LAB_00386160;
      case 10:
        uVar38 = *puVar27;
        puVar10 = (undefined8 *)(uVar38 & 0xfffffffffffffff8) + uVar22;
        uVar15 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar18 + uVar26 * 0xc + 8) * 8);
        pvVar9 = (void *)*plVar30;
        do {
          lVar18 = *plVar2;
          iVar4 = *piVar21;
          if ((ulong)((long)pvVar9 - lVar18) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - (long)pvVar9) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar12);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            pvVar9 = (void *)(lVar18 + uVar12 + (*plVar30 - *plVar29));
            *plVar30 = (long)pvVar9;
            *plVar29 = lVar18 + uVar12;
            *plVar2 = lVar18;
          }
          uVar20 = iVar4 << 3 | 4;
          uVar22 = (ulong)(int)uVar20;
          puVar10 = puVar10 + -1;
          puVar25 = (undefined1 *)((long)pvVar9 + -10);
          *plVar30 = (long)puVar25;
          if (uVar20 < 0x80) {
            *puVar25 = (char)uVar20;
            sVar14 = 1;
          }
          else {
            sVar37 = 0;
            do {
              bVar6 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar14 = sVar37 + 1;
              puVar25[sVar37] = bVar6 & 0x7f | (uVar22 != 0) << 7;
              sVar37 = sVar14;
            } while (uVar22 != 0);
          }
          pvVar9 = (void *)((long)param_1[2] + (10 - sVar14));
          memmove(pvVar9,(void *)param_1[2],sVar14);
          param_1[2] = pvVar9;
          uVar22 = FUN_003860a0(param_1,*puVar10,uVar15,local_b0);
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          lVar18 = *plVar30;
          lVar13 = *plVar2;
          iVar4 = *piVar21;
          if ((ulong)(lVar18 - lVar13) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - lVar18) + 10U);
            sVar37 = *plVar29 - lVar13;
            lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar12);
            if (lVar13 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar13 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar18 = lVar13 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar18;
            *plVar29 = lVar13 + uVar12;
            *plVar2 = lVar13;
          }
          uVar20 = iVar4 << 3 | 3;
          uVar22 = (ulong)(int)uVar20;
          puVar25 = (undefined1 *)(lVar18 + -10);
          *plVar30 = (long)puVar25;
          if (uVar20 < 0x80) {
            sVar37 = 1;
            *puVar25 = (char)uVar20;
          }
          else {
            sVar14 = 0;
            do {
              bVar6 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar25[sVar14] = bVar6 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          pvVar9 = (void *)(*plVar30 + (10 - sVar37));
          memmove(pvVar9,(void *)*plVar30,sVar37);
          *plVar30 = (long)pvVar9;
        } while (puVar10 != (undefined8 *)(uVar38 & 0xfffffffffffffff8));
        goto LAB_00386160;
      case 0xb:
        uVar38 = *puVar27;
        puVar10 = (undefined8 *)(uVar38 & 0xfffffffffffffff8) + uVar22;
        uVar15 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar18 + uVar26 * 0xc + 8) * 8);
        do {
          puVar10 = puVar10 + -1;
          uVar12 = FUN_003860a0(param_1,*puVar10,uVar15,local_b0);
          uVar22 = local_b0[0];
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          lVar13 = *plVar30;
          lVar18 = *plVar2;
          if ((ulong)(lVar13 - lVar18) < 10) {
            uVar12 = 0x80;
            do {
              uVar28 = uVar12;
              uVar12 = uVar28 << 1;
            } while (uVar28 < (*plVar29 - lVar13) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar28);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar28) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar13 = lVar18 + uVar28 + (*plVar30 - *plVar29);
            *plVar30 = lVar13;
            *plVar29 = lVar18 + uVar28;
            *plVar2 = lVar18;
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
            if (0x7f < uVar22) goto LAB_00386ecc;
LAB_00386e2c:
            *puVar25 = (char)uVar22;
            sVar37 = 1;
          }
          else {
            puVar25 = (undefined1 *)(lVar13 + -10);
            *plVar30 = (long)puVar25;
            if (local_b0[0] < 0x80) goto LAB_00386e2c;
LAB_00386ecc:
            sVar14 = 0;
            do {
              bVar6 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar25[sVar14] = bVar6 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          pvVar9 = (void *)(*plVar30 + (10 - sVar37));
          memmove(pvVar9,(void *)*plVar30,sVar37);
          *plVar30 = (long)pvVar9;
          lVar18 = *plVar2;
          iVar4 = *piVar21;
          if ((ulong)((long)pvVar9 - lVar18) < 10) {
            uVar22 = 0x80;
            do {
              uVar12 = uVar22;
              uVar22 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - (long)pvVar9) + 10U);
            sVar37 = *plVar29 - lVar18;
            lVar18 = (**(code **)*param_1)((undefined8 *)*param_1,lVar18,sVar37,uVar12);
            if (lVar18 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar18 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            pvVar9 = (void *)(lVar18 + uVar12 + (*plVar30 - *plVar29));
            *plVar30 = (long)pvVar9;
            *plVar29 = lVar18 + uVar12;
            *plVar2 = lVar18;
          }
          uVar20 = iVar4 << 3 | 2;
          uVar22 = (ulong)(int)uVar20;
          puVar25 = (undefined1 *)((long)pvVar9 + -10);
          *plVar30 = (long)puVar25;
          if (uVar20 < 0x80) {
            sVar37 = 1;
            *puVar25 = (char)uVar20;
          }
          else {
            sVar14 = 0;
            do {
              bVar6 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar25[sVar14] = bVar6 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          pvVar9 = (void *)(*plVar30 + (10 - sVar37));
          memmove(pvVar9,(void *)*plVar30,sVar37);
          *plVar30 = (long)pvVar9;
        } while (puVar10 != (undefined8 *)(uVar38 & 0xfffffffffffffff8));
        goto LAB_00386160;
      case 0xd:
        puVar41 = (uint *)(*puVar27 & 0xfffffffffffffff8);
        lVar18 = *plVar29;
        puVar25 = (undefined1 *)*plVar30;
        puVar47 = puVar41 + uVar22;
        if (bVar6 == 7) {
          uVar20 = 0;
        }
        else {
          uVar20 = *piVar21 << 3;
        }
        puVar24 = puVar25;
LAB_0038844c:
        do {
          puVar47 = puVar47 + -1;
          uVar3 = *puVar47;
          uVar22 = (ulong)uVar3;
          if ((ulong)((long)puVar24 - *plVar2) < 10) {
            uVar38 = 0x80;
            do {
              uVar12 = uVar38;
              uVar38 = uVar12 << 1;
            } while (uVar12 < (*plVar29 - (long)puVar24) + 10U);
            sVar37 = *plVar29 - *plVar2;
            lVar13 = (**(code **)*param_1)();
            if (lVar13 == 0) {
              return 0;
            }
            if (sVar37 != 0) {
              memmove((void *)((lVar13 + uVar12) - sVar37),(void *)*plVar2,sVar37);
            }
            lVar33 = lVar13 + uVar12 + (*plVar30 - *plVar29);
            *plVar30 = lVar33;
            *plVar29 = lVar13 + uVar12;
            *plVar2 = lVar13;
            puVar24 = (undefined1 *)(lVar33 + -10);
            *plVar30 = (long)puVar24;
            if (0x7f < uVar3) goto LAB_00388510;
LAB_00388470:
            *puVar24 = (char)uVar3;
            sVar37 = 1;
          }
          else {
            puVar24 = puVar24 + -10;
            *plVar30 = (long)puVar24;
            if (uVar3 < 0x80) goto LAB_00388470;
LAB_00388510:
            sVar14 = 0;
            do {
              bVar8 = (byte)uVar22;
              uVar22 = uVar22 >> 7;
              sVar37 = sVar14 + 1;
              puVar24[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
              sVar14 = sVar37;
            } while (uVar22 != 0);
          }
          puVar19 = (undefined1 *)(*plVar30 - sVar37);
          puVar24 = puVar19 + 10;
          memmove(puVar24,(void *)*plVar30,sVar37);
          *plVar30 = (long)puVar24;
          if (uVar20 != 0) {
            lVar13 = *plVar2;
            if ((ulong)((long)puVar24 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar33 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar33;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
              puVar19 = (undefined1 *)(lVar33 + -10);
              *plVar30 = (long)puVar19;
              if (0x7f < uVar20) goto LAB_00388614;
LAB_00388574:
              *puVar19 = (char)uVar20;
              sVar37 = 1;
            }
            else {
              *plVar30 = (long)puVar19;
              if (uVar20 < 0x80) goto LAB_00388574;
LAB_00388614:
              sVar14 = 0;
              uVar22 = (ulong)uVar20;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar37 = sVar14 + 1;
                puVar19[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar14 = sVar37;
              } while (uVar22 != 0);
            }
            puVar24 = (undefined1 *)(*plVar30 + (10 - sVar37));
            memmove(puVar24,(void *)*plVar30,sVar37);
            *plVar30 = (long)puVar24;
            if (puVar47 == puVar41) goto switchD_003861dc_default;
            goto LAB_0038844c;
          }
        } while (puVar47 != puVar41);
        lVar13 = *plVar2;
        lVar33 = *plVar29 - (long)puVar24;
        if ((ulong)((long)puVar24 - lVar13) < 10) {
          uVar22 = 0x80;
          do {
            uVar38 = uVar22;
            uVar22 = uVar38 << 1;
          } while (uVar38 < lVar33 + 10U);
          sVar37 = *plVar29 - lVar13;
          lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
          if (lVar13 == 0) {
            return 0;
          }
          if (sVar37 != 0) {
            memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
          }
          puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
          *plVar30 = (long)puVar24;
          *plVar29 = lVar13 + uVar38;
          *plVar2 = lVar13;
        }
        puVar25 = puVar25 + (lVar33 - lVar18);
        puVar24 = puVar24 + -10;
        *plVar30 = (long)puVar24;
        if (puVar25 < (undefined1 *)0x80) goto LAB_00388c10;
        sVar37 = 0;
        do {
          bVar8 = (byte)puVar25;
          puVar25 = (undefined1 *)((ulong)puVar25 >> 7);
          sVar14 = sVar37 + 1;
          puVar24[sVar37] = bVar8 & 0x7f | (puVar25 != (undefined1 *)0x0) << 7;
          sVar37 = sVar14;
        } while (puVar25 != (undefined1 *)0x0);
        break;
      case 0x11:
        piVar43 = (int *)(*puVar27 & 0xfffffffffffffff8);
        lVar18 = *plVar29;
        puVar25 = (undefined1 *)*plVar30;
        piVar48 = piVar43 + uVar22;
        if (bVar6 == 7) {
          uVar20 = 0;
        }
        else {
          uVar20 = *piVar21 << 3;
        }
        puVar24 = puVar25;
        do {
          while( true ) {
            piVar48 = piVar48 + -1;
            iVar4 = *piVar48;
            if ((ulong)((long)puVar24 - *plVar2) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - *plVar2;
              lVar13 = (**(code **)*param_1)();
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar24;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
            }
            uVar3 = iVar4 << 1 ^ iVar4 >> 0x1f;
            uVar22 = (ulong)uVar3;
            puVar24 = puVar24 + -10;
            *plVar30 = (long)puVar24;
            if (uVar3 < 0x80) {
              *puVar24 = (char)uVar3;
              sVar14 = 1;
            }
            else {
              sVar37 = 0;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar14 = sVar37 + 1;
                puVar24[sVar37] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar37 = sVar14;
              } while (uVar22 != 0);
            }
            puVar19 = (undefined1 *)(*plVar30 - sVar14);
            puVar24 = puVar19 + 10;
            memmove(puVar24,(void *)*plVar30,sVar14);
            *plVar30 = (long)puVar24;
            if (uVar20 == 0) break;
            lVar13 = *plVar2;
            if ((ulong)((long)puVar24 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar33 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar33;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
              puVar19 = (undefined1 *)(lVar33 + -10);
              *plVar30 = (long)puVar19;
              if (0x7f < uVar20) goto LAB_00388848;
LAB_00388720:
              *puVar19 = (char)uVar20;
              sVar37 = 1;
            }
            else {
              *plVar30 = (long)puVar19;
              if (uVar20 < 0x80) goto LAB_00388720;
LAB_00388848:
              sVar14 = 0;
              uVar22 = (ulong)uVar20;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar37 = sVar14 + 1;
                puVar19[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar14 = sVar37;
              } while (uVar22 != 0);
            }
            puVar24 = (undefined1 *)(*plVar30 + (10 - sVar37));
            memmove(puVar24,(void *)*plVar30,sVar37);
            *plVar30 = (long)puVar24;
            if (piVar48 == piVar43) goto switchD_003861dc_default;
          }
        } while (piVar48 != piVar43);
        lVar13 = *plVar2;
        lVar33 = *plVar29 - (long)puVar24;
        if ((ulong)((long)puVar24 - lVar13) < 10) {
          uVar22 = 0x80;
          do {
            uVar38 = uVar22;
            uVar22 = uVar38 << 1;
          } while (uVar38 < lVar33 + 10U);
          sVar37 = *plVar29 - lVar13;
          lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
          if (lVar13 == 0) {
            return 0;
          }
          if (sVar37 != 0) {
            memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
          }
          puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
          *plVar30 = (long)puVar24;
          *plVar29 = lVar13 + uVar38;
          *plVar2 = lVar13;
        }
        puVar25 = puVar25 + (lVar33 - lVar18);
        puVar24 = puVar24 + -10;
        *plVar30 = (long)puVar24;
        if (puVar25 < (undefined1 *)0x80) goto LAB_00388c10;
        sVar37 = 0;
        do {
          bVar8 = (byte)puVar25;
          puVar25 = (undefined1 *)((ulong)puVar25 >> 7);
          sVar14 = sVar37 + 1;
          puVar24[sVar37] = bVar8 & 0x7f | (puVar25 != (undefined1 *)0x0) << 7;
          sVar37 = sVar14;
        } while (puVar25 != (undefined1 *)0x0);
        break;
      case 0x12:
        plVar44 = (long *)(*puVar27 & 0xfffffffffffffff8);
        lVar18 = *plVar29;
        puVar25 = (undefined1 *)*plVar30;
        plVar49 = plVar44 + uVar22;
        if (bVar6 == 7) {
          uVar20 = 0;
        }
        else {
          uVar20 = *piVar21 << 3;
        }
        puVar24 = puVar25;
        do {
          while( true ) {
            plVar49 = plVar49 + -1;
            lVar13 = *plVar49;
            if ((ulong)((long)puVar24 - *plVar2) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - *plVar2;
              lVar33 = (**(code **)*param_1)();
              if (lVar33 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar33 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              puVar24 = (undefined1 *)(lVar33 + uVar38 + (*plVar30 - *plVar29));
              *plVar30 = (long)puVar24;
              *plVar29 = lVar33 + uVar38;
              *plVar2 = lVar33;
            }
            uVar22 = lVar13 << 1 ^ lVar13 >> 0x3f;
            puVar24 = puVar24 + -10;
            *plVar30 = (long)puVar24;
            if (uVar22 < 0x80) {
              *puVar24 = (char)uVar22;
              sVar14 = 1;
            }
            else {
              sVar37 = 0;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar14 = sVar37 + 1;
                puVar24[sVar37] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar37 = sVar14;
              } while (uVar22 != 0);
            }
            puVar19 = (undefined1 *)(*plVar30 - sVar14);
            puVar24 = puVar19 + 10;
            memmove(puVar24,(void *)*plVar30,sVar14);
            *plVar30 = (long)puVar24;
            if (uVar20 == 0) break;
            lVar13 = *plVar2;
            if ((ulong)((long)puVar24 - lVar13) < 10) {
              uVar22 = 0x80;
              do {
                uVar38 = uVar22;
                uVar22 = uVar38 << 1;
              } while (uVar38 < (*plVar29 - (long)puVar24) + 10U);
              sVar37 = *plVar29 - lVar13;
              lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
              if (lVar13 == 0) {
                return 0;
              }
              if (sVar37 != 0) {
                memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
              }
              lVar33 = lVar13 + uVar38 + (*plVar30 - *plVar29);
              *plVar30 = lVar33;
              *plVar29 = lVar13 + uVar38;
              *plVar2 = lVar13;
              puVar19 = (undefined1 *)(lVar33 + -10);
              *plVar30 = (long)puVar19;
              if (0x7f < uVar20) goto LAB_00388a7c;
LAB_00388954:
              *puVar19 = (char)uVar20;
              sVar37 = 1;
            }
            else {
              *plVar30 = (long)puVar19;
              if (uVar20 < 0x80) goto LAB_00388954;
LAB_00388a7c:
              sVar14 = 0;
              uVar22 = (ulong)uVar20;
              do {
                bVar8 = (byte)uVar22;
                uVar22 = uVar22 >> 7;
                sVar37 = sVar14 + 1;
                puVar19[sVar14] = bVar8 & 0x7f | (uVar22 != 0) << 7;
                sVar14 = sVar37;
              } while (uVar22 != 0);
            }
            puVar24 = (undefined1 *)(*plVar30 + (10 - sVar37));
            memmove(puVar24,(void *)*plVar30,sVar37);
            *plVar30 = (long)puVar24;
            if (plVar49 == plVar44) goto switchD_003861dc_default;
          }
        } while (plVar49 != plVar44);
        lVar13 = *plVar2;
        lVar33 = *plVar29 - (long)puVar24;
        if ((ulong)((long)puVar24 - lVar13) < 10) {
          uVar22 = 0x80;
          do {
            uVar38 = uVar22;
            uVar22 = uVar38 << 1;
          } while (uVar38 < lVar33 + 10U);
          sVar37 = *plVar29 - lVar13;
          lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
          if (lVar13 == 0) {
            return 0;
          }
          if (sVar37 != 0) {
            memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
          }
          puVar24 = (undefined1 *)(lVar13 + uVar38 + (*plVar30 - *plVar29));
          *plVar30 = (long)puVar24;
          *plVar29 = lVar13 + uVar38;
          *plVar2 = lVar13;
        }
        puVar25 = puVar25 + (lVar33 - lVar18);
        puVar24 = puVar24 + -10;
        *plVar30 = (long)puVar24;
        if (puVar25 < (undefined1 *)0x80) goto LAB_00388c10;
        sVar37 = 0;
        do {
          bVar8 = (byte)puVar25;
          puVar25 = (undefined1 *)((ulong)puVar25 >> 7);
          sVar14 = sVar37 + 1;
          puVar24[sVar37] = bVar8 & 0x7f | (puVar25 != (undefined1 *)0x0) << 7;
          sVar37 = sVar14;
        } while (puVar25 != (undefined1 *)0x0);
        break;
      default:
        goto switchD_003861dc_default;
      }
      pvVar9 = (void *)(*plVar30 + (10 - sVar14));
      memmove(pvVar9,(void *)*plVar30,sVar14);
      *plVar30 = (long)pvVar9;
switchD_003861dc_default:
      if (bVar6 == 7) {
        lVar18 = *plVar30;
        lVar13 = *plVar2;
        iVar4 = *piVar21;
        if ((ulong)(lVar18 - lVar13) < 10) {
          uVar22 = 0x80;
          do {
            uVar38 = uVar22;
            uVar22 = uVar38 << 1;
          } while (uVar38 < (*plVar29 - lVar18) + 10U);
          sVar37 = *plVar29 - lVar13;
          lVar13 = (**(code **)*param_1)((undefined8 *)*param_1,lVar13,sVar37,uVar38);
          if (lVar13 == 0) {
            return 0;
          }
          if (sVar37 != 0) {
            memmove((void *)((lVar13 + uVar38) - sVar37),(void *)*plVar2,sVar37);
          }
          lVar18 = lVar13 + uVar38 + (*plVar30 - *plVar29);
          *plVar30 = lVar18;
          *plVar29 = lVar13 + uVar38;
          *plVar2 = lVar13;
        }
        uVar20 = iVar4 << 3 | 2;
        uVar22 = (ulong)(int)uVar20;
        puVar25 = (undefined1 *)(lVar18 + -10);
        *plVar30 = (long)puVar25;
        if (uVar20 < 0x80) {
          *puVar25 = (char)uVar20;
          sVar14 = 1;
        }
        else {
          sVar37 = 0;
          do {
            bVar6 = (byte)uVar22;
            uVar22 = uVar22 >> 7;
            sVar14 = sVar37 + 1;
            puVar25[sVar37] = bVar6 & 0x7f | (uVar22 != 0) << 7;
            sVar37 = sVar14;
          } while (uVar22 != 0);
        }
        pvVar9 = (void *)(*plVar30 + (10 - sVar14));
        memmove(pvVar9,(void *)*plVar30,sVar14);
        *plVar30 = (long)pvVar9;
      }
LAB_00386160:
      bVar1 = 1 < (long)uVar39;
      uVar39 = uVar26;
    } while (bVar1);
  }
  *param_4 = (lVar17 + *plVar29) - (lVar16 + *plVar30);
  return 1;
}


