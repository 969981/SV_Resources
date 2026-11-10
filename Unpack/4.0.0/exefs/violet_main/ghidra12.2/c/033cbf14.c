/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033cbf14; name: FUN_033cbf14
 */


/* WARNING: Removing unreachable block (ram,0x033cc5b0) */

void FUN_033cbf14(float param_1,long *param_2,long *param_3,int param_4,long *param_5,ulong param_6,
                 float *param_7)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  undefined4 uVar28;
  ulong uVar29;
  float *pfVar30;
  long lVar31;
  float *pfVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  float *pfVar39;
  float *pfVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  float *pfVar50;
  int iVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  long lVar54;
  long lVar55;
  undefined4 *puVar56;
  undefined4 *puVar57;
  void *pvVar58;
  void *pvVar59;
  uint uVar60;
  ulong uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  uint local_a4;
  
  if ((param_6 & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0x34) = 0;
    *(undefined1 *)((long)param_2 + 0x3c) = 1;
  }
  uVar16 = *(uint *)(param_2 + 6);
  uVar19 = uVar16 >> 2;
  pfVar1 = param_7 + 2;
  fVar65 = (float)uVar16 / (*(float *)((long)param_2 + 0x14) * 4.0);
  uVar61 = 0;
  do {
    bVar22 = *(char *)((long)param_2 + 0x3d) != '\0';
    lVar37 = *param_3;
    uVar26 = (uint)*(ushort *)((long)param_3 + 0x12);
    bVar23 = *(char *)((long)param_2 + 0x3c) != '\0';
    local_a4 = *(uint *)(param_2 + 7);
    uVar17 = *(ushort *)(param_3 + 2);
    lVar54 = *param_2;
    puVar43 = (uint *)(lVar54 + uVar61 * 0x78);
    puVar2 = puVar43 + 0x1c;
    puVar3 = puVar43 + 3;
    puVar4 = puVar43 + 0x19;
    uVar60 = (uint)*(ushort *)((long)param_5 + 0x12);
    fVar66 = *(float *)((long)param_2 + 0x34);
    lVar38 = *param_5;
    puVar5 = puVar43 + 0x16;
    puVar6 = puVar43 + 6;
    puVar7 = puVar43 + 1;
    puVar8 = puVar43 + 4;
    puVar9 = puVar43 + 0xc;
    uVar18 = *(ushort *)(param_5 + 2);
    puVar10 = puVar43 + 2;
    puVar11 = puVar43 + 9;
    puVar12 = puVar43 + 7;
    puVar13 = puVar43 + 8;
    iVar27 = param_4;
    do {
      uVar14 = uVar26;
      if (local_a4 <= uVar26) {
        uVar14 = local_a4;
      }
      local_a4 = local_a4 - uVar14;
      uVar26 = uVar26 - uVar14;
      if (((bVar22 != false) && (uVar26 == 0)) && (*(int *)((long)param_3 + 0xc) != 0x11)) {
LAB_033cd314:
        uVar26 = 0;
        bVar22 = true;
        break;
      }
      uVar36 = *puVar43;
      uVar34 = *puVar3;
      uVar42 = uVar36 - uVar34;
      if (uVar26 <= uVar36 - uVar34) {
        uVar42 = uVar26;
      }
      uVar41 = 0;
      if ((lVar37 != 0) && (uVar42 != 0)) {
        pvVar59 = (void *)(lVar37 + uVar61 * 4 * (ulong)uVar17 + (ulong)(uVar14 + iVar27) * 4);
        pvVar58 = *(void **)puVar8;
        uVar36 = uVar36 - *puVar7;
        uVar34 = uVar42;
        if (uVar36 <= uVar42) {
          uVar34 = uVar36;
        }
        if (uVar34 != 0) {
          memcpy((void *)((long)pvVar58 + (ulong)*puVar7 * 4),pvVar59,(ulong)(uVar34 << 2));
        }
        if (uVar42 - uVar34 != 0) {
          memcpy(pvVar58,(void *)((long)pvVar59 + (ulong)uVar34 * 4),(ulong)((uVar42 - uVar34) * 4))
          ;
        }
        uVar36 = *puVar43;
        uVar34 = 0;
        if (uVar36 != 0) {
          uVar34 = (*puVar7 + uVar42) / uVar36;
        }
        *puVar7 = (*puVar7 + uVar42) - uVar34 * uVar36;
        uVar34 = *puVar3 + uVar42;
        *puVar3 = uVar34;
        uVar41 = uVar42;
      }
      bVar22 = (bool)(bVar22 & uVar36 != uVar34);
      uVar26 = uVar26 - (uVar41 & 0xffff);
      if (((*(int *)((long)param_3 + 0xc) != 0x11) && (uVar26 == 0)) && (bVar22 != false))
      goto LAB_033cd314;
      bVar24 = *(int *)((long)param_3 + 0xc) == 0x11;
      bVar25 = uVar26 == 0;
      uVar33 = (ulong)(byte)*puVar2 & 1;
      if (*(char *)(lVar54 + uVar61 * 0x78 + uVar33 * 0x10 + 0x44) != '\0') goto LAB_033cc224;
      if (param_7 != (float *)0x0 && uVar16 != 0) {
        pvVar59 = *(void **)puVar8;
        if (bVar25 && bVar24) {
          if (uVar34 != 0) {
            if (uVar16 <= uVar34) {
              uVar34 = uVar16;
            }
            if (uVar16 - uVar34 != 0) {
              memset(param_7 + uVar34,0,(ulong)((uVar16 - uVar34) * 4));
              uVar36 = *puVar43;
            }
            goto LAB_033cc42c;
          }
        }
        else if (uVar16 <= uVar34) {
LAB_033cc42c:
          uVar36 = uVar36 - *puVar10;
          uVar34 = uVar16;
          if (uVar36 <= uVar16) {
            uVar34 = uVar36;
          }
          memcpy(param_7,(void *)((long)pvVar59 + (ulong)*puVar10 * 4),(ulong)(uVar34 << 2));
          if (uVar16 - uVar34 != 0) {
            memcpy(param_7 + uVar34,pvVar59,(ulong)((uVar16 - uVar34) * 4));
          }
          uVar42 = *puVar43;
          uVar36 = *puVar3;
          uVar34 = uVar19;
          if (uVar36 <= uVar19) {
            uVar34 = uVar36;
          }
          uVar35 = 0;
          if (uVar42 != 0) {
            uVar35 = (uVar34 + *puVar10) / uVar42;
          }
          *puVar10 = (uVar34 + *puVar10) - uVar35 * uVar42;
          *puVar3 = uVar36 - uVar34;
          uVar34 = *(uint *)(param_2 + 2);
          lVar31 = param_2[1];
          uVar42 = uVar34 >> 1;
          uVar33 = (ulong)uVar42;
          if (uVar42 != 0) {
            uVar29 = (ulong)(uVar34 >> 1) & 3;
            if (uVar33 - 1 < 3) {
              uVar46 = 0;
            }
            else {
              uVar46 = 0;
              pfVar30 = (float *)(lVar31 + 8);
              pfVar40 = pfVar1;
              do {
                uVar46 = uVar46 + 4;
                pfVar40[-2] = pfVar40[-2] * pfVar30[-2];
                pfVar40[-1] = pfVar40[-1] * pfVar30[-1];
                *pfVar40 = *pfVar40 * *pfVar30;
                pfVar32 = pfVar30 + 1;
                pfVar30 = pfVar30 + 4;
                pfVar40[1] = pfVar40[1] * *pfVar32;
                pfVar40 = pfVar40 + 4;
              } while ((uVar33 & 0x7ffffffc) != uVar46);
            }
            if ((uVar34 >> 1 & 3) != 0) {
              pfVar30 = (float *)(lVar31 + uVar46 * 4);
              pfVar40 = param_7 + uVar46;
              do {
                uVar29 = uVar29 - 1;
                *pfVar40 = *pfVar40 * *pfVar30;
                pfVar30 = pfVar30 + 1;
                pfVar40 = pfVar40 + 1;
              } while (uVar29 != 0);
            }
          }
          if (uVar42 < uVar34) {
            uVar29 = ~uVar33;
            if ((uVar34 - uVar42 & 3) != 0) {
              uVar36 = ~uVar42 + uVar34;
              lVar49 = -((ulong)(uVar34 - uVar42) & 3);
              do {
                uVar46 = (ulong)uVar36;
                uVar36 = uVar36 - 1;
                bVar21 = lVar49 != -1;
                lVar49 = lVar49 + 1;
                param_7[uVar33] = param_7[uVar33] * *(float *)(lVar31 + uVar46 * 4);
                uVar33 = uVar33 + 1;
              } while (bVar21);
            }
            if (2 < uVar29 + uVar34) {
              uVar36 = (uint)uVar33;
              iVar44 = -uVar36;
              pfVar30 = pfVar1 + uVar33;
              uVar42 = ~uVar36;
              iVar48 = -3 - uVar36;
              iVar51 = -2 - uVar36;
              do {
                iVar44 = iVar44 + -4;
                uVar36 = uVar34 + uVar42;
                uVar42 = uVar42 - 4;
                uVar35 = uVar34 + iVar51;
                iVar51 = iVar51 + -4;
                pfVar30[-2] = pfVar30[-2] * *(float *)(lVar31 + (ulong)uVar36 * 4);
                uVar36 = uVar34 + iVar48;
                iVar48 = iVar48 + -4;
                pfVar30[-1] = pfVar30[-1] * *(float *)(lVar31 + (ulong)uVar35 * 4);
                *pfVar30 = *pfVar30 * *(float *)(lVar31 + (ulong)uVar36 * 4);
                uVar33 = uVar33 + 4;
                pfVar30[1] = pfVar30[1] * *(float *)(lVar31 + (ulong)(uVar34 + iVar44) * 4);
                pfVar30 = pfVar30 + 4;
              } while (uVar34 != uVar33);
            }
          }
          uVar33 = (ulong)(byte)*puVar2 & 1;
          plVar15 = (long *)param_2[3];
          lVar45 = param_2[4];
          lVar49 = *(long *)(lVar54 + uVar61 * 0x78 + uVar33 * 0x10 + 0x38);
          puVar52 = (undefined8 *)*plVar15;
          puVar57 = (undefined4 *)plVar15[1];
          puVar56 = (undefined4 *)plVar15[2];
          puVar53 = (undefined8 *)plVar15[3];
          uVar34 = *(uint *)(plVar15 + 5);
          lVar31 = lVar45;
          if ((uVar34 & 1) != 0) {
            lVar31 = lVar49;
          }
          uVar42 = *(uint *)((long)plVar15 + 0x2c) >> ((int)plVar15[6] == 1);
          (*(code *)*puVar53)(uVar42,*puVar57,*puVar56,param_7,*puVar52,lVar31);
          if (1 < uVar34) {
            lVar55 = (ulong)uVar34 - 1;
            if ((uVar34 & 1) != 0) {
              lVar49 = lVar45;
            }
            do {
              lVar45 = lVar31;
              puVar57 = puVar57 + 1;
              puVar56 = puVar56 + 1;
              puVar53 = puVar53 + 1;
              puVar52 = puVar52 + 1;
              (*(code *)*puVar53)(uVar42,*puVar57,*puVar56,lVar45,*puVar52,lVar49);
              lVar55 = lVar55 + -1;
              lVar31 = lVar49;
              lVar49 = lVar45;
            } while (lVar55 != 0);
          }
          lVar31 = lVar54 + uVar61 * 0x78 + 0x38;
          *(undefined2 *)(lVar31 + uVar33 * 0x10 + 0xc) = 1;
          puVar52 = (undefined8 *)(lVar31 + ((ulong)(byte)*puVar2 & 1) * 0x10);
          FUN_033d1c54(puVar52,*puVar52);
          uVar33 = (ulong)((byte)*puVar2 & 1);
        }
LAB_033cc224:
        uVar29 = (ulong)((uint)uVar33 ^ 1);
        if ((*(char *)(lVar54 + uVar61 * 0x78 + uVar29 * 0x10 + 0x44) == '\0') &&
           (param_7 != (float *)0x0 && uVar16 != 0)) {
          pvVar59 = *(void **)puVar8;
          uVar34 = *puVar3;
          if (bVar25 && bVar24) {
            if (uVar34 != 0) {
              if (uVar16 <= uVar34) {
                uVar34 = uVar16;
              }
              if (uVar16 - uVar34 != 0) {
                memset(param_7 + uVar34,0,(ulong)((uVar16 - uVar34) * 4));
              }
              goto LAB_033cc4ec;
            }
          }
          else if (uVar16 <= uVar34) {
LAB_033cc4ec:
            uVar42 = *puVar43 - *puVar10;
            uVar34 = uVar16;
            if (uVar42 <= uVar16) {
              uVar34 = uVar42;
            }
            memcpy(param_7,(void *)((long)pvVar59 + (ulong)*puVar10 * 4),(ulong)(uVar34 << 2));
            if (uVar16 - uVar34 != 0) {
              memcpy(param_7 + uVar34,pvVar59,(ulong)((uVar16 - uVar34) * 4));
            }
            uVar42 = *puVar43;
            uVar36 = *puVar3;
            uVar34 = uVar19;
            if (uVar36 <= uVar19) {
              uVar34 = uVar36;
            }
            uVar35 = 0;
            if (uVar42 != 0) {
              uVar35 = (uVar34 + *puVar10) / uVar42;
            }
            *puVar10 = (uVar34 + *puVar10) - uVar35 * uVar42;
            *puVar3 = uVar36 - uVar34;
            uVar34 = *(uint *)(param_2 + 2);
            lVar31 = param_2[1];
            uVar42 = uVar34 >> 1;
            uVar33 = (ulong)uVar42;
            if (uVar42 != 0) {
              uVar29 = (ulong)(uVar34 >> 1) & 3;
              if (uVar33 - 1 < 3) {
                uVar46 = 0;
              }
              else {
                uVar46 = 0;
                pfVar30 = (float *)(lVar31 + 8);
                pfVar40 = pfVar1;
                do {
                  uVar46 = uVar46 + 4;
                  pfVar40[-2] = pfVar40[-2] * pfVar30[-2];
                  pfVar40[-1] = pfVar40[-1] * pfVar30[-1];
                  *pfVar40 = *pfVar40 * *pfVar30;
                  pfVar32 = pfVar30 + 1;
                  pfVar30 = pfVar30 + 4;
                  pfVar40[1] = pfVar40[1] * *pfVar32;
                  pfVar40 = pfVar40 + 4;
                } while ((uVar33 & 0x7ffffffc) != uVar46);
              }
              if ((uVar34 >> 1 & 3) != 0) {
                pfVar30 = (float *)(lVar31 + uVar46 * 4);
                pfVar40 = param_7 + uVar46;
                do {
                  uVar29 = uVar29 - 1;
                  *pfVar40 = *pfVar40 * *pfVar30;
                  pfVar30 = pfVar30 + 1;
                  pfVar40 = pfVar40 + 1;
                } while (uVar29 != 0);
              }
            }
            if (uVar42 < uVar34) {
              uVar29 = ~uVar33;
              if ((uVar34 - uVar42 & 3) != 0) {
                uVar36 = ~uVar42 + uVar34;
                lVar49 = -((ulong)(uVar34 - uVar42) & 3);
                do {
                  uVar46 = (ulong)uVar36;
                  uVar36 = uVar36 - 1;
                  bVar21 = lVar49 != -1;
                  lVar49 = lVar49 + 1;
                  param_7[uVar33] = param_7[uVar33] * *(float *)(lVar31 + uVar46 * 4);
                  uVar33 = uVar33 + 1;
                } while (bVar21);
              }
              if (2 < uVar29 + uVar34) {
                uVar36 = (uint)uVar33;
                iVar44 = -uVar36;
                pfVar30 = pfVar1 + uVar33;
                uVar42 = ~uVar36;
                iVar48 = -3 - uVar36;
                iVar51 = -2 - uVar36;
                do {
                  iVar44 = iVar44 + -4;
                  uVar36 = uVar34 + uVar42;
                  uVar42 = uVar42 - 4;
                  uVar35 = uVar34 + iVar51;
                  iVar51 = iVar51 + -4;
                  pfVar30[-2] = pfVar30[-2] * *(float *)(lVar31 + (ulong)uVar36 * 4);
                  uVar36 = uVar34 + iVar48;
                  iVar48 = iVar48 + -4;
                  pfVar30[-1] = pfVar30[-1] * *(float *)(lVar31 + (ulong)uVar35 * 4);
                  *pfVar30 = *pfVar30 * *(float *)(lVar31 + (ulong)uVar36 * 4);
                  uVar33 = uVar33 + 4;
                  pfVar30[1] = pfVar30[1] * *(float *)(lVar31 + (ulong)(uVar34 + iVar44) * 4);
                  pfVar30 = pfVar30 + 4;
                } while (uVar34 != uVar33);
              }
            }
            plVar15 = (long *)param_2[3];
            lVar45 = param_2[4];
            uVar34 = *(uint *)(plVar15 + 5);
            puVar52 = (undefined8 *)*plVar15;
            puVar57 = (undefined4 *)plVar15[1];
            uVar33 = (ulong)~(uint)(byte)*puVar2 & 1;
            puVar56 = (undefined4 *)plVar15[2];
            puVar53 = (undefined8 *)plVar15[3];
            lVar49 = *(long *)(lVar54 + uVar61 * 0x78 + uVar33 * 0x10 + 0x38);
            lVar31 = lVar45;
            if ((uVar34 & 1) != 0) {
              lVar31 = lVar49;
            }
            uVar42 = *(uint *)((long)plVar15 + 0x2c) >> ((int)plVar15[6] == 1);
            (*(code *)*puVar53)(uVar42,*puVar57,*puVar56,param_7,*puVar52,lVar31);
            if (1 < uVar34) {
              lVar55 = (ulong)uVar34 - 1;
              if ((uVar34 & 1) != 0) {
                lVar49 = lVar45;
              }
              do {
                lVar45 = lVar31;
                puVar57 = puVar57 + 1;
                puVar56 = puVar56 + 1;
                puVar53 = puVar53 + 1;
                puVar52 = puVar52 + 1;
                (*(code *)*puVar53)(uVar42,*puVar57,*puVar56,lVar45,*puVar52,lVar49);
                lVar55 = lVar55 + -1;
                lVar31 = lVar49;
                lVar49 = lVar45;
              } while (lVar55 != 0);
            }
            lVar31 = lVar54 + uVar61 * 0x78 + 0x38;
            *(undefined2 *)(lVar31 + uVar33 * 0x10 + 0xc) = 1;
            puVar52 = (undefined8 *)(lVar31 + ((ulong)~(uint)(byte)*puVar2 & 1) * 0x10);
            FUN_033d1c54(puVar52,*puVar52);
            uVar33 = (ulong)(byte)*puVar2 & 1;
            uVar29 = uVar33 ^ 1;
          }
        }
      }
      else {
        uVar29 = (ulong)((uint)uVar33 ^ 1);
      }
      if ((*(char *)(lVar54 + uVar61 * 0x78 + uVar29 * 0x10 + 0x44) == '\0') ||
         (*(char *)(lVar54 + uVar61 * 0x78 + uVar33 * 0x10 + 0x44) == '\0')) {
        if ((char)*puVar4 != '\0') goto LAB_033cc698;
LAB_033ccb88:
        if (!bVar25 || !bVar24) goto LAB_033ccc48;
LAB_033ccb8c:
        if ((*puVar3 != 0) || ((char)*puVar4 != '\0')) goto LAB_033ccc48;
        bVar21 = *puVar11 == 0;
      }
      else {
        if ((char)*puVar4 == '\0') {
          lVar31 = lVar54 + uVar61 * 0x78 + 0x38;
          lVar49 = *(long *)(lVar31 + uVar33 * 0x10);
          lVar45 = *(long *)puVar5;
          lVar31 = *(long *)(lVar31 + uVar29 * 0x10);
          pfVar30 = *(float **)(puVar43 + 0x1a);
          uVar34 = puVar43[0x18] >> 1;
          uVar33 = (ulong)uVar34 + 1;
          if (uVar34 == 0) {
            uVar29 = 0;
LAB_033cc390:
            lVar55 = uVar29 * 8;
            *(float *)(lVar45 + lVar55) =
                 *(float *)(lVar49 + lVar55) +
                 fVar66 * (*(float *)(lVar31 + lVar55) - *(float *)(lVar49 + lVar55));
          }
          else {
            uVar29 = 0;
            pfVar40 = (float *)(lVar49 + 8);
            pfVar32 = (float *)(lVar31 + 8);
            pfVar39 = (float *)(lVar45 + 8);
            do {
              uVar29 = uVar29 + 2;
              pfVar39[-2] = pfVar40[-2] + fVar66 * (pfVar32[-2] - pfVar40[-2]);
              *pfVar39 = *pfVar40 + fVar66 * (*pfVar32 - *pfVar40);
              pfVar40 = pfVar40 + 4;
              pfVar32 = pfVar32 + 4;
              pfVar39 = pfVar39 + 4;
            } while ((uVar33 & 0xfffffffe) != uVar29);
            if ((uVar33 & 1) != 0) goto LAB_033cc390;
          }
          if (bVar23) {
            uVar29 = uVar33 & 3;
            if ((ulong)uVar34 < 3) {
              uVar46 = 0;
            }
            else {
              uVar46 = 0;
              pfVar40 = pfVar30 + 2;
              pfVar32 = (float *)(lVar49 + 0x14);
              do {
                pfVar40[-2] = pfVar32[-4];
                pfVar40[-1] = pfVar32[-2];
                *pfVar40 = *pfVar32;
                pfVar39 = pfVar32 + 2;
                uVar46 = uVar46 + 4;
                pfVar32 = pfVar32 + 8;
                pfVar40[1] = *pfVar39;
                pfVar40 = pfVar40 + 4;
              } while ((uVar33 & 0xfffffffc) != uVar46);
            }
            if (uVar29 != 0) {
              pfVar40 = (float *)(lVar49 + uVar46 * 8 + 4);
              pfVar32 = pfVar30 + uVar46;
              do {
                uVar29 = uVar29 - 1;
                *pfVar32 = *pfVar40;
                pfVar40 = pfVar40 + 2;
                pfVar32 = pfVar32 + 1;
              } while (uVar29 != 0);
            }
          }
          pfVar40 = (float *)(lVar49 + 4);
          pfVar32 = (float *)(lVar31 + 4);
          pfVar39 = (float *)(lVar45 + 4);
          do {
            fVar62 = *pfVar32;
            fVar64 = *pfVar40;
            *pfVar39 = *pfVar30;
            fVar64 = *pfVar30 + (fVar62 - fVar64);
            fVar62 = fVar64;
            if (3.1415927 <= fVar64) {
              fVar62 = fVar64 + -6.2831855;
            }
            fVar63 = fVar62 + 6.2831855;
            if (-3.1415927 <= fVar62) {
              fVar63 = fVar62;
            }
            bVar23 = true;
            bVar21 = false;
            if (fVar64 < 3.1415927) {
              bVar23 = false;
              bVar21 = true;
              if (!NAN(fVar62)) {
                bVar23 = fVar62 < -3.1415927;
                bVar21 = false;
              }
            }
            if (bVar23 == bVar21) {
              fVar63 = fVar64;
            }
            uVar33 = uVar33 - 1;
            *pfVar30 = fVar63;
            pfVar30 = pfVar30 + 1;
            pfVar40 = pfVar40 + 2;
            pfVar32 = pfVar32 + 2;
            pfVar39 = pfVar39 + 2;
          } while (uVar33 != 0);
          *(undefined1 *)((long)puVar43 + 0x65) = 1;
          bVar23 = false;
          *(undefined1 *)puVar4 = 1;
        }
LAB_033cc698:
        if (*puVar6 - *puVar11 < uVar16) goto LAB_033ccb88;
        FUN_033d1f88(puVar5,param_7,0x40c90fdb,param_2[3],param_2[4],*(undefined8 *)puVar5);
        uVar34 = *(uint *)(param_2 + 2);
        uVar29 = (ulong)uVar34;
        uVar42 = uVar34 >> 1;
        uVar33 = (ulong)uVar42;
        lVar31 = param_2[1];
        if (fVar65 == 1.0) {
          if (uVar42 != 0) {
            uVar46 = (ulong)(uVar34 >> 1) & 3;
            if (uVar33 - 1 < 3) {
              uVar47 = 0;
            }
            else {
              uVar47 = 0;
              pfVar30 = (float *)(lVar31 + 8);
              pfVar40 = pfVar1;
              do {
                uVar47 = uVar47 + 4;
                pfVar40[-2] = pfVar40[-2] * pfVar30[-2];
                pfVar40[-1] = pfVar40[-1] * pfVar30[-1];
                *pfVar40 = *pfVar40 * *pfVar30;
                pfVar32 = pfVar30 + 1;
                pfVar30 = pfVar30 + 4;
                pfVar40[1] = pfVar40[1] * *pfVar32;
                pfVar40 = pfVar40 + 4;
              } while ((uVar33 & 0x7ffffffc) != uVar47);
            }
            if ((uVar34 >> 1 & 3) != 0) {
              pfVar30 = (float *)(lVar31 + uVar47 * 4);
              pfVar40 = param_7 + uVar47;
              do {
                uVar46 = uVar46 - 1;
                *pfVar40 = *pfVar40 * *pfVar30;
                pfVar30 = pfVar30 + 1;
                pfVar40 = pfVar40 + 1;
              } while (uVar46 != 0);
            }
          }
          if (uVar34 <= uVar42) goto LAB_033cc9c0;
          uVar46 = ~uVar33;
          if ((uVar34 - uVar42 & 3) != 0) {
            uVar36 = ~uVar42 + uVar34;
            lVar49 = -((ulong)(uVar34 - uVar42) & 3);
            do {
              uVar47 = (ulong)uVar36;
              uVar36 = uVar36 - 1;
              bVar21 = lVar49 != -1;
              lVar49 = lVar49 + 1;
              param_7[uVar33] = param_7[uVar33] * *(float *)(lVar31 + uVar47 * 4);
              uVar33 = uVar33 + 1;
            } while (bVar21);
          }
          if (2 < uVar46 + uVar29) {
            uVar36 = (uint)uVar33;
            iVar44 = -uVar36;
            pfVar30 = pfVar1 + uVar33;
            uVar42 = ~uVar36;
            iVar48 = -3 - uVar36;
            iVar51 = -2 - uVar36;
            do {
              iVar44 = iVar44 + -4;
              uVar36 = uVar34 + uVar42;
              uVar42 = uVar42 - 4;
              uVar35 = uVar34 + iVar51;
              iVar51 = iVar51 + -4;
              pfVar30[-2] = pfVar30[-2] * *(float *)(lVar31 + (ulong)uVar36 * 4);
              uVar36 = uVar34 + iVar48;
              iVar48 = iVar48 + -4;
              pfVar30[-1] = pfVar30[-1] * *(float *)(lVar31 + (ulong)uVar35 * 4);
              *pfVar30 = *pfVar30 * *(float *)(lVar31 + (ulong)uVar36 * 4);
              uVar33 = uVar33 + 4;
              pfVar30[1] = pfVar30[1] * *(float *)(lVar31 + (ulong)(uVar34 + iVar44) * 4);
              pfVar30 = pfVar30 + 4;
            } while (uVar29 != uVar33);
          }
LAB_033cc9c4:
          uVar34 = *puVar9;
          if (uVar34 <= *puVar6 - *puVar11) {
            pfVar30 = *(float **)(puVar43 + 10);
            uVar36 = *puVar6 - *puVar12;
            uVar42 = uVar34;
            if (uVar36 <= uVar34) {
              uVar42 = uVar36;
            }
            if (uVar42 != 0) {
              uVar34 = uVar42 & 3;
              pfVar32 = pfVar30 + *puVar12;
              pfVar40 = param_7;
              if (2 < uVar42 - 1) {
                iVar48 = -(uVar42 & 0xfffffffc);
                pfVar39 = pfVar30 + *puVar12;
                pfVar50 = param_7;
                do {
                  pfVar40 = pfVar50 + 4;
                  pfVar32 = pfVar39 + 4;
                  *pfVar39 = *pfVar39 + *pfVar50;
                  pfVar39[1] = pfVar39[1] + pfVar50[1];
                  pfVar39[2] = pfVar39[2] + pfVar50[2];
                  iVar48 = iVar48 + 4;
                  pfVar39[3] = pfVar39[3] + pfVar50[3];
                  pfVar39 = pfVar32;
                  pfVar50 = pfVar40;
                } while (iVar48 != 0);
              }
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                *pfVar32 = *pfVar32 + *pfVar40;
                pfVar32 = pfVar32 + 1;
                pfVar40 = pfVar40 + 1;
              }
              uVar34 = *puVar9;
            }
            uVar36 = uVar34 - uVar42;
            if (uVar36 != 0) {
              pfVar40 = param_7 + uVar42;
              if (2 < uVar34 + ~uVar42) {
                iVar48 = -(uVar36 & 0xfffffffc);
                pfVar32 = pfVar30;
                pfVar39 = pfVar40;
                do {
                  pfVar40 = pfVar39 + 4;
                  pfVar30 = pfVar32 + 4;
                  *pfVar32 = *pfVar32 + *pfVar39;
                  pfVar32[1] = pfVar32[1] + pfVar39[1];
                  pfVar32[2] = pfVar32[2] + pfVar39[2];
                  iVar48 = iVar48 + 4;
                  pfVar32[3] = pfVar32[3] + pfVar39[3];
                  pfVar32 = pfVar30;
                  pfVar39 = pfVar40;
                } while (iVar48 != 0);
              }
              if ((uVar36 & 3) != 0) {
                iVar48 = -(uVar36 & 3);
                do {
                  bVar21 = iVar48 != -1;
                  iVar48 = iVar48 + 1;
                  *pfVar30 = *pfVar30 + *pfVar40;
                  pfVar30 = pfVar30 + 1;
                  pfVar40 = pfVar40 + 1;
                } while (bVar21);
              }
            }
            uVar34 = *puVar6;
            uVar42 = 0;
            if (uVar34 != 0) {
              uVar42 = (*puVar12 + uVar19) / uVar34;
            }
            *puVar12 = (*puVar12 + uVar19) - uVar42 * uVar34;
            *puVar11 = *puVar11 + uVar19;
          }
        }
        else {
          if (uVar42 != 0) {
            uVar46 = uVar33 & 3;
            if (uVar33 - 1 < 3) {
              uVar47 = 0;
            }
            else {
              uVar47 = 0;
              pfVar30 = (float *)(lVar31 + 8);
              pfVar40 = pfVar1;
              do {
                uVar47 = uVar47 + 4;
                pfVar40[-2] = pfVar30[-2] * fVar65 * pfVar40[-2];
                pfVar40[-1] = pfVar30[-1] * fVar65 * pfVar40[-1];
                *pfVar40 = *pfVar30 * fVar65 * *pfVar40;
                pfVar32 = pfVar30 + 1;
                pfVar30 = pfVar30 + 4;
                pfVar40[1] = *pfVar32 * fVar65 * pfVar40[1];
                pfVar40 = pfVar40 + 4;
              } while ((uVar33 & 0x7ffffffc) != uVar47);
            }
            if ((uVar42 & 3) != 0) {
              pfVar30 = (float *)(lVar31 + uVar47 * 4);
              pfVar40 = param_7 + uVar47;
              do {
                uVar46 = uVar46 - 1;
                *pfVar40 = *pfVar30 * fVar65 * *pfVar40;
                pfVar30 = pfVar30 + 1;
                pfVar40 = pfVar40 + 1;
              } while (uVar46 != 0);
            }
          }
          if (uVar42 < uVar34) {
            uVar46 = ~uVar33;
            if ((uVar34 - uVar42 & 1) != 0) {
              param_7[uVar33] =
                   *(float *)(lVar31 + (ulong)(uVar34 + ~uVar42) * 4) * fVar65 * param_7[uVar33];
              uVar33 = uVar33 + 1;
            }
            if (uVar46 + uVar29 != 0) {
              lVar49 = uVar29 - uVar33;
              uVar34 = ~(uint)uVar33 + uVar34;
              pfVar30 = param_7 + uVar33 + 1;
              do {
                pfVar30[-1] = *(float *)(lVar31 + (ulong)uVar34 * 4) * fVar65 * pfVar30[-1];
                uVar42 = uVar34 - 1;
                uVar34 = uVar34 - 2;
                lVar49 = lVar49 + -2;
                *pfVar30 = *(float *)(lVar31 + (ulong)uVar42 * 4) * fVar65 * *pfVar30;
                pfVar30 = pfVar30 + 2;
              } while (lVar49 != 0);
            }
            goto LAB_033cc9c4;
          }
LAB_033cc9c0:
          if (param_7 != (float *)0x0) goto LAB_033cc9c4;
        }
        fVar66 = fVar66 + 100.0 / param_1;
        *(undefined1 *)puVar4 = 0;
        if (fVar66 < 1.0) goto LAB_033ccb88;
        uVar34 = *puVar2;
        uVar33 = (ulong)(byte)uVar34 & 1;
        *(undefined1 *)(lVar54 + uVar61 * 0x78 + uVar33 * 0x10 + 0x44) = 0;
        if ((uint)(int)fVar66 < 2) {
          *(byte *)puVar2 = (byte)uVar34 + 1;
        }
        else {
          *(undefined1 *)(lVar54 + uVar61 * 0x78 + (ulong)((uint)uVar33 ^ 1) * 0x10 + 0x44) = 0;
          uVar42 = *puVar3;
          local_a4 = ((int)fVar66 - 2U) * uVar19;
          uVar36 = *puVar43;
          uVar34 = local_a4;
          if (uVar42 <= local_a4) {
            uVar34 = uVar42;
          }
          uVar35 = 0;
          if (uVar36 != 0) {
            uVar35 = (uVar34 + *puVar10) / uVar36;
          }
          *puVar10 = (uVar34 + *puVar10) - uVar35 * uVar36;
          *puVar3 = uVar42 - uVar34;
          local_a4 = local_a4 - uVar34;
        }
        fVar66 = fVar66 - (float)(int)fVar66;
        if (bVar25 && bVar24) goto LAB_033ccb8c;
LAB_033ccc48:
        bVar21 = false;
      }
      uVar34 = 0;
      if ((lVar38 != 0) && (uVar42 = *(ushort *)(param_5 + 2) - uVar60, uVar42 != 0)) {
        pvVar59 = (void *)(lVar38 + uVar61 * 4 * (ulong)uVar18 + (ulong)uVar60 * 4);
        pvVar58 = *(void **)(puVar43 + 10);
        uVar36 = *puVar11;
        if ((bool)(bVar21 & uVar36 == 0)) {
          uVar36 = *puVar6;
          uVar34 = 0;
          if (uVar36 != 0) {
            uVar34 = (*puVar9 + *puVar12) / uVar36;
          }
          uVar20 = (*puVar9 + *puVar12) - uVar34 * uVar36;
          uVar35 = *puVar13;
          iVar48 = uVar20 - uVar35;
          uVar34 = 0;
          if (uVar20 < uVar35 || iVar48 == 0) {
            uVar34 = uVar36;
          }
          uVar34 = uVar34 + iVar48;
          if (uVar42 <= uVar34) {
            uVar34 = uVar42;
          }
        }
        else {
          uVar34 = uVar36;
          if (uVar42 <= uVar36) {
            uVar34 = uVar42;
          }
          *puVar11 = uVar36 - uVar34;
          uVar35 = *puVar13;
          uVar36 = *puVar6;
        }
        uVar42 = uVar34;
        if (uVar36 - uVar35 <= uVar34) {
          uVar42 = uVar36 - uVar35;
        }
        memcpy(pvVar59,(void *)((long)pvVar58 + (ulong)uVar35 * 4),(ulong)(uVar42 << 2));
        memset((void *)((long)pvVar58 + (ulong)*puVar13 * 4),0,(ulong)(uVar42 << 2));
        if (uVar34 - uVar42 != 0) {
          uVar33 = (ulong)((uVar34 - uVar42) * 4);
          memcpy((void *)((long)pvVar59 + (ulong)uVar42 * 4),pvVar58,uVar33);
          memset(pvVar58,0,uVar33);
        }
        uVar42 = *puVar6;
        uVar36 = 0;
        if (uVar42 != 0) {
          uVar36 = (*puVar13 + uVar34) / uVar42;
        }
        *puVar13 = (*puVar13 + uVar34) - uVar36 * uVar42;
      }
      uVar60 = uVar60 + (uVar34 & 0xffff);
      if ((bVar21) && (*puVar11 == 0)) {
        uVar34 = *puVar6;
        uVar42 = 0;
        if (uVar34 != 0) {
          uVar42 = (*puVar9 + *puVar12) / uVar34;
        }
        uVar42 = (*puVar9 + *puVar12) - uVar42 * uVar34;
        if (*puVar13 <= uVar42) {
          uVar34 = 0;
        }
        if ((uVar42 - *puVar13) + uVar34 == 0) {
          uVar28 = 0x11;
          goto LAB_033cd330;
        }
      }
      if (uVar60 == *(ushort *)(param_5 + 2)) {
        uVar28 = 0x2d;
        goto LAB_033cd330;
      }
      iVar27 = uVar41 + uVar14 + iVar27;
    } while ((uVar26 == 0) == (bVar25 && bVar24));
    uVar28 = 0x2b;
LAB_033cd330:
    *(undefined4 *)((long)param_5 + 0xc) = uVar28;
    uVar61 = uVar61 + 1;
    if (*(uint *)(param_2 + 5) <= uVar61) {
      *(short *)((long)param_3 + 0x12) = (short)uVar26;
      *(short *)((long)param_5 + 0x12) = (short)uVar60;
      *(float *)((long)param_2 + 0x34) = fVar66;
      *(uint *)(param_2 + 7) = local_a4;
      *(bool *)((long)param_2 + 0x3c) = bVar23;
      *(bool *)((long)param_2 + 0x3d) = bVar22;
      return;
    }
  } while( true );
}


