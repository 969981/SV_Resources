/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f6088; name: FUN_033f6088
 */


/* WARNING: Removing unreachable block (ram,0x033f6b6c) */

undefined4
FUN_033f6088(undefined8 param_1,long *param_2,long param_3,uint param_4,uint param_5,uint param_6,
            long param_7,float *param_8)

{
  char *pcVar1;
  byte *pbVar2;
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  float *pfVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  long *plVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  float *pfVar33;
  float *pfVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  long lVar41;
  float *pfVar42;
  int iVar43;
  long lVar44;
  uint uVar45;
  undefined8 *puVar46;
  undefined4 *puVar47;
  undefined8 *puVar48;
  uint uVar49;
  uint uVar50;
  undefined4 *puVar51;
  void *pvVar52;
  uint uVar53;
  void *__src;
  long lVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 local_138;
  
  bVar21 = *(char *)((long)param_2 + 0x3c) != '\0';
  fVar58 = *(float *)((long)param_2 + 0x34);
  uVar49 = *(uint *)(param_2 + 7);
  if (param_4 == 0) {
    local_138 = 0x2d;
  }
  else {
    uVar15 = *(uint *)(param_2 + 6);
    lVar44 = *param_2;
    uVar23 = (ulong)param_6;
    uVar17 = uVar15 >> 2;
    lVar30 = lVar44 + uVar23 * 0x78;
    pcVar1 = (char *)(lVar30 + 100);
    pbVar2 = (byte *)(lVar30 + 0x70);
    plVar3 = (long *)(lVar30 + 0x58);
    puVar4 = (uint *)(lVar30 + 0x18);
    fVar59 = (float)uVar15 / (*(float *)((long)param_2 + 0x14) * 4.0);
    puVar5 = (uint *)(lVar30 + 0x30);
    puVar6 = (uint *)(lVar30 + 0x24);
    puVar7 = (uint *)(lVar30 + 0x20);
    uVar53 = 0;
    iVar24 = 0;
    uVar50 = 0;
    puVar8 = (uint *)(lVar30 + 0x1c);
    pfVar9 = param_8 + 2;
    local_138 = 0x2d;
    uVar29 = param_4;
    do {
      uVar12 = uVar29;
      if (uVar49 <= uVar29) {
        uVar12 = uVar49;
      }
      uVar22 = 0;
      iVar19 = uVar29 - uVar12;
      if ((param_3 != 0) && (iVar19 != 0)) {
        lVar26 = param_2[8] + uVar23 * 0x20;
        uVar22 = FUN_033f7460(param_1,lVar26,param_3 + (ulong)(uVar12 + iVar24) * 4,iVar19,
                              *(undefined8 *)(lVar26 + 0x10));
      }
      uVar25 = (ulong)*pbVar2 & 1;
      if ((*(char *)(lVar44 + uVar23 * 0x78 + uVar25 * 0x10 + 0x44) == '\0') &&
         (param_8 != (float *)0x0 && uVar15 != 0)) {
        piVar10 = (int *)(param_2[8] + uVar23 * 0x20);
        pvVar52 = *(void **)(piVar10 + 4);
        uVar29 = piVar10[3];
        if ((param_5 & 1) == 0) {
          if (uVar15 <= uVar29) goto LAB_033f630c;
        }
        else if (uVar29 != 0) {
          if (uVar15 <= uVar29) {
            uVar29 = uVar15;
          }
          if (uVar15 - uVar29 != 0) {
            memset(param_8 + uVar29,0,(ulong)((uVar15 - uVar29) * 4));
          }
LAB_033f630c:
          uVar45 = *piVar10 - piVar10[2];
          uVar29 = uVar15;
          if (uVar45 <= uVar15) {
            uVar29 = uVar45;
          }
          memcpy(param_8,(void *)((long)pvVar52 + (ulong)(uint)piVar10[2] * 4),(ulong)(uVar29 << 2))
          ;
          if (uVar15 - uVar29 != 0) {
            memcpy(param_8 + uVar29,pvVar52,(ulong)((uVar15 - uVar29) * 4));
          }
          puVar11 = (uint *)(param_2[8] + uVar23 * 0x20);
          uVar45 = puVar11[3];
          uVar31 = *puVar11;
          uVar29 = uVar17;
          if (uVar45 <= uVar17) {
            uVar29 = uVar45;
          }
          uVar32 = 0;
          if (uVar31 != 0) {
            uVar32 = (uVar29 + puVar11[2]) / uVar31;
          }
          puVar11[2] = (uVar29 + puVar11[2]) - uVar32 * uVar31;
          puVar11[3] = uVar45 - uVar29;
          uVar29 = *(uint *)(param_2 + 2);
          lVar26 = param_2[1];
          uVar45 = uVar29 >> 1;
          uVar25 = (ulong)uVar45;
          if (uVar45 != 0) {
            uVar35 = (ulong)(uVar29 >> 1) & 3;
            if (uVar25 - 1 < 3) {
              uVar37 = 0;
            }
            else {
              uVar37 = 0;
              pfVar27 = (float *)(lVar26 + 8);
              pfVar34 = pfVar9;
              do {
                uVar37 = uVar37 + 4;
                pfVar34[-2] = pfVar34[-2] * pfVar27[-2];
                pfVar34[-1] = pfVar34[-1] * pfVar27[-1];
                *pfVar34 = *pfVar34 * *pfVar27;
                pfVar28 = pfVar27 + 1;
                pfVar27 = pfVar27 + 4;
                pfVar34[1] = pfVar34[1] * *pfVar28;
                pfVar34 = pfVar34 + 4;
              } while ((uVar25 & 0x7ffffffc) != uVar37);
            }
            if ((uVar29 >> 1 & 3) != 0) {
              pfVar27 = (float *)(lVar26 + uVar37 * 4);
              pfVar34 = param_8 + uVar37;
              do {
                uVar35 = uVar35 - 1;
                *pfVar34 = *pfVar34 * *pfVar27;
                pfVar27 = pfVar27 + 1;
                pfVar34 = pfVar34 + 1;
              } while (uVar35 != 0);
            }
          }
          if (uVar45 < uVar29) {
            uVar35 = ~uVar25;
            if ((uVar29 - uVar45 & 3) != 0) {
              uVar31 = ~uVar45 + uVar29;
              lVar41 = -((ulong)(uVar29 - uVar45) & 3);
              do {
                uVar37 = (ulong)uVar31;
                uVar31 = uVar31 - 1;
                bVar20 = lVar41 != -1;
                lVar41 = lVar41 + 1;
                param_8[uVar25] = param_8[uVar25] * *(float *)(lVar26 + uVar37 * 4);
                uVar25 = uVar25 + 1;
              } while (bVar20);
            }
            if (2 < uVar35 + uVar29) {
              uVar31 = (uint)uVar25;
              iVar36 = -uVar31;
              pfVar27 = pfVar9 + uVar25;
              uVar45 = ~uVar31;
              iVar40 = -3 - uVar31;
              iVar43 = -2 - uVar31;
              do {
                iVar36 = iVar36 + -4;
                uVar31 = uVar29 + uVar45;
                uVar45 = uVar45 - 4;
                uVar32 = uVar29 + iVar43;
                iVar43 = iVar43 + -4;
                pfVar27[-2] = pfVar27[-2] * *(float *)(lVar26 + (ulong)uVar31 * 4);
                uVar31 = uVar29 + iVar40;
                iVar40 = iVar40 + -4;
                pfVar27[-1] = pfVar27[-1] * *(float *)(lVar26 + (ulong)uVar32 * 4);
                *pfVar27 = *pfVar27 * *(float *)(lVar26 + (ulong)uVar31 * 4);
                uVar25 = uVar25 + 4;
                pfVar27[1] = pfVar27[1] * *(float *)(lVar26 + (ulong)(uVar29 + iVar36) * 4);
                pfVar27 = pfVar27 + 4;
              } while (uVar29 != uVar25);
            }
          }
          bVar16 = *pbVar2;
          plVar14 = (long *)param_2[3];
          lVar38 = param_2[4];
          puVar46 = (undefined8 *)*plVar14;
          puVar47 = (undefined4 *)plVar14[1];
          uVar29 = *(uint *)(plVar14 + 5);
          lVar41 = *(long *)(lVar44 + uVar23 * 0x78 + ((ulong)bVar16 & 1) * 0x10 + 0x38);
          puVar51 = (undefined4 *)plVar14[2];
          puVar48 = (undefined8 *)plVar14[3];
          lVar26 = lVar38;
          if ((uVar29 & 1) != 0) {
            lVar26 = lVar41;
          }
          uVar45 = *(uint *)((long)plVar14 + 0x2c) >> ((int)plVar14[6] == 1);
          (*(code *)*puVar48)(uVar45,*puVar47,*puVar51,param_8,*puVar46,lVar26);
          if (1 < uVar29) {
            lVar54 = (ulong)uVar29 - 1;
            if ((uVar29 & 1) != 0) {
              lVar41 = lVar38;
            }
            do {
              lVar38 = lVar26;
              puVar51 = puVar51 + 1;
              puVar48 = puVar48 + 1;
              puVar47 = puVar47 + 1;
              puVar46 = puVar46 + 1;
              (*(code *)*puVar48)(uVar45,*puVar47,*puVar51,lVar38,*puVar46,lVar41);
              lVar54 = lVar54 + -1;
              lVar26 = lVar41;
              lVar41 = lVar38;
            } while (lVar54 != 0);
          }
          lVar26 = lVar44 + uVar23 * 0x78 + 0x38;
          *(undefined2 *)(lVar26 + ((ulong)bVar16 & 1) * 0x10 + 0xc) = 1;
          puVar46 = (undefined8 *)(lVar26 + ((ulong)*pbVar2 & 1) * 0x10);
          FUN_033d1c54(puVar46,*puVar46);
          uVar25 = (ulong)(*pbVar2 & 1);
        }
      }
      uVar35 = (ulong)((uint)uVar25 ^ 1);
      uVar49 = uVar49 - uVar12;
      if ((*(char *)(lVar44 + uVar23 * 0x78 + uVar35 * 0x10 + 0x44) == '\0') &&
         (param_8 != (float *)0x0 && uVar15 != 0)) {
        piVar10 = (int *)(param_2[8] + uVar23 * 0x20);
        pvVar52 = *(void **)(piVar10 + 4);
        uVar29 = piVar10[3];
        if ((param_5 & 1) == 0) {
          if (uVar15 <= uVar29) goto LAB_033f66d8;
        }
        else if (uVar29 != 0) {
          if (uVar15 <= uVar29) {
            uVar29 = uVar15;
          }
          if (uVar15 - uVar29 != 0) {
            memset(param_8 + uVar29,0,(ulong)((uVar15 - uVar29) * 4));
          }
LAB_033f66d8:
          uVar45 = *piVar10 - piVar10[2];
          uVar29 = uVar15;
          if (uVar45 <= uVar15) {
            uVar29 = uVar45;
          }
          memcpy(param_8,(void *)((long)pvVar52 + (ulong)(uint)piVar10[2] * 4),(ulong)(uVar29 << 2))
          ;
          if (uVar15 - uVar29 != 0) {
            memcpy(param_8 + uVar29,pvVar52,(ulong)((uVar15 - uVar29) * 4));
          }
          puVar11 = (uint *)(param_2[8] + uVar23 * 0x20);
          uVar45 = puVar11[3];
          uVar31 = *puVar11;
          uVar29 = uVar17;
          if (uVar45 <= uVar17) {
            uVar29 = uVar45;
          }
          uVar32 = 0;
          if (uVar31 != 0) {
            uVar32 = (uVar29 + puVar11[2]) / uVar31;
          }
          puVar11[2] = (uVar29 + puVar11[2]) - uVar32 * uVar31;
          puVar11[3] = uVar45 - uVar29;
          uVar29 = *(uint *)(param_2 + 2);
          lVar26 = param_2[1];
          uVar45 = uVar29 >> 1;
          uVar25 = (ulong)uVar45;
          if (uVar45 != 0) {
            uVar35 = (ulong)(uVar29 >> 1) & 3;
            if (uVar25 - 1 < 3) {
              uVar37 = 0;
            }
            else {
              uVar37 = 0;
              pfVar27 = (float *)(lVar26 + 8);
              pfVar34 = pfVar9;
              do {
                uVar37 = uVar37 + 4;
                pfVar34[-2] = pfVar34[-2] * pfVar27[-2];
                pfVar34[-1] = pfVar34[-1] * pfVar27[-1];
                *pfVar34 = *pfVar34 * *pfVar27;
                pfVar28 = pfVar27 + 1;
                pfVar27 = pfVar27 + 4;
                pfVar34[1] = pfVar34[1] * *pfVar28;
                pfVar34 = pfVar34 + 4;
              } while ((uVar25 & 0x7ffffffc) != uVar37);
            }
            if ((uVar29 >> 1 & 3) != 0) {
              pfVar27 = (float *)(lVar26 + uVar37 * 4);
              pfVar34 = param_8 + uVar37;
              do {
                uVar35 = uVar35 - 1;
                *pfVar34 = *pfVar34 * *pfVar27;
                pfVar27 = pfVar27 + 1;
                pfVar34 = pfVar34 + 1;
              } while (uVar35 != 0);
            }
          }
          if (uVar45 < uVar29) {
            uVar35 = ~uVar25;
            if ((uVar29 - uVar45 & 3) != 0) {
              uVar31 = ~uVar45 + uVar29;
              lVar41 = -((ulong)(uVar29 - uVar45) & 3);
              do {
                uVar37 = (ulong)uVar31;
                uVar31 = uVar31 - 1;
                bVar20 = lVar41 != -1;
                lVar41 = lVar41 + 1;
                param_8[uVar25] = param_8[uVar25] * *(float *)(lVar26 + uVar37 * 4);
                uVar25 = uVar25 + 1;
              } while (bVar20);
            }
            if (2 < uVar35 + uVar29) {
              uVar31 = (uint)uVar25;
              iVar36 = -uVar31;
              pfVar27 = pfVar9 + uVar25;
              uVar45 = ~uVar31;
              iVar40 = -3 - uVar31;
              iVar43 = -2 - uVar31;
              do {
                iVar36 = iVar36 + -4;
                uVar31 = uVar29 + uVar45;
                uVar45 = uVar45 - 4;
                uVar32 = uVar29 + iVar43;
                iVar43 = iVar43 + -4;
                pfVar27[-2] = pfVar27[-2] * *(float *)(lVar26 + (ulong)uVar31 * 4);
                uVar31 = uVar29 + iVar40;
                iVar40 = iVar40 + -4;
                pfVar27[-1] = pfVar27[-1] * *(float *)(lVar26 + (ulong)uVar32 * 4);
                *pfVar27 = *pfVar27 * *(float *)(lVar26 + (ulong)uVar31 * 4);
                uVar25 = uVar25 + 4;
                pfVar27[1] = pfVar27[1] * *(float *)(lVar26 + (ulong)(uVar29 + iVar36) * 4);
                pfVar27 = pfVar27 + 4;
              } while (uVar29 != uVar25);
            }
          }
          bVar16 = *pbVar2;
          plVar14 = (long *)param_2[3];
          lVar38 = param_2[4];
          uVar29 = *(uint *)(plVar14 + 5);
          puVar46 = (undefined8 *)*plVar14;
          puVar47 = (undefined4 *)plVar14[1];
          puVar51 = (undefined4 *)plVar14[2];
          puVar48 = (undefined8 *)plVar14[3];
          lVar41 = *(long *)(lVar44 + uVar23 * 0x78 + ((ulong)~(uint)bVar16 & 1) * 0x10 + 0x38);
          lVar26 = lVar38;
          if ((uVar29 & 1) != 0) {
            lVar26 = lVar41;
          }
          uVar45 = *(uint *)((long)plVar14 + 0x2c) >> ((int)plVar14[6] == 1);
          (*(code *)*puVar48)(uVar45,*puVar47,*puVar51,param_8,*puVar46,lVar26);
          if (1 < uVar29) {
            lVar54 = (ulong)uVar29 - 1;
            if ((uVar29 & 1) != 0) {
              lVar41 = lVar38;
            }
            do {
              lVar38 = lVar41;
              puVar46 = puVar46 + 1;
              puVar51 = puVar51 + 1;
              puVar48 = puVar48 + 1;
              puVar47 = puVar47 + 1;
              (*(code *)*puVar48)(uVar45,*puVar47,*puVar51,lVar26,*puVar46,lVar38);
              lVar54 = lVar54 + -1;
              lVar41 = lVar26;
              lVar26 = lVar38;
            } while (lVar54 != 0);
          }
          lVar26 = lVar44 + uVar23 * 0x78 + 0x38;
          *(undefined2 *)(lVar26 + ((ulong)~(uint)bVar16 & 1) * 0x10 + 0xc) = 1;
          puVar46 = (undefined8 *)(lVar26 + ((ulong)~(uint)*pbVar2 & 1) * 0x10);
          FUN_033d1c54(puVar46,*puVar46);
          uVar25 = (ulong)*pbVar2 & 1;
          uVar35 = uVar25 ^ 1;
        }
      }
      if ((*(char *)(lVar44 + uVar23 * 0x78 + uVar35 * 0x10 + 0x44) == '\0') ||
         (*(char *)(lVar44 + uVar23 * 0x78 + uVar25 * 0x10 + 0x44) == '\0')) {
        if (*pcVar1 != '\0') goto LAB_033f6c64;
      }
      else {
        if (*pcVar1 == '\0') {
          lVar26 = lVar44 + uVar23 * 0x78 + 0x38;
          lVar41 = *(long *)(lVar26 + uVar25 * 0x10);
          lVar38 = *plVar3;
          lVar26 = *(long *)(lVar26 + uVar35 * 0x10);
          pfVar27 = *(float **)(lVar30 + 0x68);
          uVar29 = *(uint *)(lVar30 + 0x60) >> 1;
          uVar25 = (ulong)uVar29 + 1;
          if (uVar29 == 0) {
            uVar35 = 0;
LAB_033f6b00:
            lVar54 = uVar35 * 8;
            *(float *)(lVar38 + lVar54) =
                 *(float *)(lVar41 + lVar54) +
                 fVar58 * (*(float *)(lVar26 + lVar54) - *(float *)(lVar41 + lVar54));
          }
          else {
            uVar35 = 0;
            pfVar34 = (float *)(lVar41 + 8);
            pfVar28 = (float *)(lVar26 + 8);
            pfVar33 = (float *)(lVar38 + 8);
            do {
              uVar35 = uVar35 + 2;
              pfVar33[-2] = pfVar34[-2] + fVar58 * (pfVar28[-2] - pfVar34[-2]);
              *pfVar33 = *pfVar34 + fVar58 * (*pfVar28 - *pfVar34);
              pfVar34 = pfVar34 + 4;
              pfVar28 = pfVar28 + 4;
              pfVar33 = pfVar33 + 4;
            } while ((uVar25 & 0xfffffffe) != uVar35);
            if ((uVar25 & 1) != 0) goto LAB_033f6b00;
          }
          if (bVar21) {
            uVar35 = uVar25 & 3;
            if ((ulong)uVar29 < 3) {
              uVar37 = 0;
            }
            else {
              uVar37 = 0;
              pfVar34 = pfVar27 + 2;
              pfVar28 = (float *)(lVar41 + 0x14);
              do {
                pfVar34[-2] = pfVar28[-4];
                pfVar34[-1] = pfVar28[-2];
                *pfVar34 = *pfVar28;
                pfVar33 = pfVar28 + 2;
                uVar37 = uVar37 + 4;
                pfVar28 = pfVar28 + 8;
                pfVar34[1] = *pfVar33;
                pfVar34 = pfVar34 + 4;
              } while ((uVar25 & 0xfffffffc) != uVar37);
            }
            if (uVar35 != 0) {
              pfVar34 = (float *)(lVar41 + uVar37 * 8 + 4);
              pfVar28 = pfVar27 + uVar37;
              do {
                uVar35 = uVar35 - 1;
                *pfVar28 = *pfVar34;
                pfVar34 = pfVar34 + 2;
                pfVar28 = pfVar28 + 1;
              } while (uVar35 != 0);
            }
          }
          pfVar34 = (float *)(lVar41 + 4);
          pfVar28 = (float *)(lVar26 + 4);
          pfVar33 = (float *)(lVar38 + 4);
          do {
            fVar55 = *pfVar28;
            fVar56 = *pfVar34;
            *pfVar33 = *pfVar27;
            fVar56 = *pfVar27 + (fVar55 - fVar56);
            fVar55 = fVar56;
            if (3.1415927 <= fVar56) {
              fVar55 = fVar56 + -6.2831855;
            }
            fVar57 = fVar55 + 6.2831855;
            if (-3.1415927 <= fVar55) {
              fVar57 = fVar55;
            }
            bVar21 = true;
            bVar20 = false;
            if (fVar56 < 3.1415927) {
              bVar21 = false;
              bVar20 = true;
              if (!NAN(fVar55)) {
                bVar21 = fVar55 < -3.1415927;
                bVar20 = false;
              }
            }
            if (bVar21 == bVar20) {
              fVar57 = fVar56;
            }
            uVar25 = uVar25 - 1;
            *pfVar27 = fVar57;
            pfVar27 = pfVar27 + 1;
            pfVar34 = pfVar34 + 2;
            pfVar28 = pfVar28 + 2;
            pfVar33 = pfVar33 + 2;
          } while (uVar25 != 0);
          *(undefined1 *)(lVar30 + 0x65) = 1;
          bVar21 = false;
          *pcVar1 = '\x01';
        }
LAB_033f6c64:
        if (uVar15 <= *puVar4 - *puVar6) {
          FUN_033d1f88(plVar3,param_8,puVar6,param_2[3],param_2[4],*plVar3);
          uVar29 = *(uint *)(param_2 + 2);
          uVar35 = (ulong)uVar29;
          lVar26 = param_2[1];
          uVar45 = uVar29 >> 1;
          uVar25 = (ulong)uVar45;
          if (fVar59 == 1.0) {
            if (uVar45 != 0) {
              uVar37 = (ulong)(uVar29 >> 1) & 3;
              if (uVar25 - 1 < 3) {
                uVar39 = 0;
              }
              else {
                uVar39 = 0;
                pfVar27 = (float *)(lVar26 + 8);
                pfVar34 = pfVar9;
                do {
                  uVar39 = uVar39 + 4;
                  pfVar34[-2] = pfVar34[-2] * pfVar27[-2];
                  pfVar34[-1] = pfVar34[-1] * pfVar27[-1];
                  *pfVar34 = *pfVar34 * *pfVar27;
                  pfVar28 = pfVar27 + 1;
                  pfVar27 = pfVar27 + 4;
                  pfVar34[1] = pfVar34[1] * *pfVar28;
                  pfVar34 = pfVar34 + 4;
                } while ((uVar25 & 0x7ffffffc) != uVar39);
              }
              if ((uVar29 >> 1 & 3) != 0) {
                pfVar27 = (float *)(lVar26 + uVar39 * 4);
                pfVar34 = param_8 + uVar39;
                do {
                  uVar37 = uVar37 - 1;
                  *pfVar34 = *pfVar34 * *pfVar27;
                  pfVar27 = pfVar27 + 1;
                  pfVar34 = pfVar34 + 1;
                } while (uVar37 != 0);
              }
            }
            if (uVar29 <= uVar45) goto LAB_033f6f98;
            uVar37 = ~uVar25;
            if ((uVar29 - uVar45 & 3) != 0) {
              uVar31 = ~uVar45 + uVar29;
              lVar41 = -((ulong)(uVar29 - uVar45) & 3);
              do {
                uVar39 = (ulong)uVar31;
                uVar31 = uVar31 - 1;
                bVar20 = lVar41 != -1;
                lVar41 = lVar41 + 1;
                param_8[uVar25] = param_8[uVar25] * *(float *)(lVar26 + uVar39 * 4);
                uVar25 = uVar25 + 1;
              } while (bVar20);
            }
            if (2 < uVar37 + uVar35) {
              uVar31 = (uint)uVar25;
              iVar36 = -uVar31;
              pfVar27 = pfVar9 + uVar25;
              uVar45 = ~uVar31;
              iVar40 = -3 - uVar31;
              iVar43 = -2 - uVar31;
              do {
                iVar36 = iVar36 + -4;
                uVar31 = uVar29 + uVar45;
                uVar45 = uVar45 - 4;
                uVar32 = uVar29 + iVar43;
                iVar43 = iVar43 + -4;
                pfVar27[-2] = pfVar27[-2] * *(float *)(lVar26 + (ulong)uVar31 * 4);
                uVar31 = uVar29 + iVar40;
                iVar40 = iVar40 + -4;
                pfVar27[-1] = pfVar27[-1] * *(float *)(lVar26 + (ulong)uVar32 * 4);
                *pfVar27 = *pfVar27 * *(float *)(lVar26 + (ulong)uVar31 * 4);
                uVar25 = uVar25 + 4;
                pfVar27[1] = pfVar27[1] * *(float *)(lVar26 + (ulong)(uVar29 + iVar36) * 4);
                pfVar27 = pfVar27 + 4;
              } while (uVar35 != uVar25);
            }
LAB_033f6f9c:
            uVar29 = *puVar5;
            if (uVar29 <= *puVar4 - *puVar6) {
              pfVar27 = *(float **)(lVar30 + 0x28);
              uVar31 = *puVar4 - *puVar8;
              uVar45 = uVar29;
              if (uVar31 <= uVar29) {
                uVar45 = uVar31;
              }
              if (uVar45 != 0) {
                uVar29 = uVar45 & 3;
                pfVar28 = pfVar27 + *puVar8;
                pfVar34 = param_8;
                if (2 < uVar45 - 1) {
                  iVar40 = -(uVar45 & 0xfffffffc);
                  pfVar33 = pfVar27 + *puVar8;
                  pfVar42 = param_8;
                  do {
                    pfVar34 = pfVar42 + 4;
                    pfVar28 = pfVar33 + 4;
                    *pfVar33 = *pfVar33 + *pfVar42;
                    pfVar33[1] = pfVar33[1] + pfVar42[1];
                    pfVar33[2] = pfVar33[2] + pfVar42[2];
                    iVar40 = iVar40 + 4;
                    pfVar33[3] = pfVar33[3] + pfVar42[3];
                    pfVar33 = pfVar28;
                    pfVar42 = pfVar34;
                  } while (iVar40 != 0);
                }
                for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                  *pfVar28 = *pfVar28 + *pfVar34;
                  pfVar28 = pfVar28 + 1;
                  pfVar34 = pfVar34 + 1;
                }
                uVar29 = *puVar5;
              }
              uVar31 = uVar29 - uVar45;
              if (uVar31 != 0) {
                pfVar34 = param_8 + uVar45;
                if (2 < uVar29 + ~uVar45) {
                  iVar40 = -(uVar31 & 0xfffffffc);
                  pfVar28 = pfVar27;
                  pfVar33 = pfVar34;
                  do {
                    pfVar34 = pfVar33 + 4;
                    pfVar27 = pfVar28 + 4;
                    *pfVar28 = *pfVar28 + *pfVar33;
                    pfVar28[1] = pfVar28[1] + pfVar33[1];
                    pfVar28[2] = pfVar28[2] + pfVar33[2];
                    iVar40 = iVar40 + 4;
                    pfVar28[3] = pfVar28[3] + pfVar33[3];
                    pfVar28 = pfVar27;
                    pfVar33 = pfVar34;
                  } while (iVar40 != 0);
                }
                if ((uVar31 & 3) != 0) {
                  iVar40 = -(uVar31 & 3);
                  do {
                    bVar20 = iVar40 != -1;
                    iVar40 = iVar40 + 1;
                    *pfVar27 = *pfVar27 + *pfVar34;
                    pfVar27 = pfVar27 + 1;
                    pfVar34 = pfVar34 + 1;
                  } while (bVar20);
                }
              }
              uVar29 = *puVar4;
              uVar45 = 0;
              if (uVar29 != 0) {
                uVar45 = (*puVar8 + uVar17) / uVar29;
              }
              *puVar8 = (*puVar8 + uVar17) - uVar45 * uVar29;
              *puVar6 = *puVar6 + uVar17;
            }
          }
          else {
            if (uVar45 != 0) {
              uVar37 = uVar25 & 3;
              if (uVar25 - 1 < 3) {
                uVar39 = 0;
              }
              else {
                uVar39 = 0;
                pfVar27 = (float *)(lVar26 + 8);
                pfVar34 = pfVar9;
                do {
                  uVar39 = uVar39 + 4;
                  pfVar34[-2] = pfVar27[-2] * fVar59 * pfVar34[-2];
                  pfVar34[-1] = pfVar27[-1] * fVar59 * pfVar34[-1];
                  *pfVar34 = *pfVar27 * fVar59 * *pfVar34;
                  pfVar28 = pfVar27 + 1;
                  pfVar27 = pfVar27 + 4;
                  pfVar34[1] = *pfVar28 * fVar59 * pfVar34[1];
                  pfVar34 = pfVar34 + 4;
                } while ((uVar25 & 0x7ffffffc) != uVar39);
              }
              if ((uVar45 & 3) != 0) {
                pfVar27 = (float *)(lVar26 + uVar39 * 4);
                pfVar34 = param_8 + uVar39;
                do {
                  uVar37 = uVar37 - 1;
                  *pfVar34 = *pfVar27 * fVar59 * *pfVar34;
                  pfVar27 = pfVar27 + 1;
                  pfVar34 = pfVar34 + 1;
                } while (uVar37 != 0);
              }
            }
            if (uVar45 < uVar29) {
              uVar37 = ~uVar25;
              if ((uVar29 - uVar45 & 1) != 0) {
                param_8[uVar25] =
                     *(float *)(lVar26 + (ulong)(uVar29 + ~uVar45) * 4) * fVar59 * param_8[uVar25];
                uVar25 = uVar25 + 1;
              }
              if (uVar37 + uVar35 != 0) {
                lVar41 = uVar35 - uVar25;
                uVar29 = ~(uint)uVar25 + uVar29;
                pfVar27 = param_8 + uVar25 + 1;
                do {
                  pfVar27[-1] = *(float *)(lVar26 + (ulong)uVar29 * 4) * fVar59 * pfVar27[-1];
                  uVar45 = uVar29 - 1;
                  uVar29 = uVar29 - 2;
                  lVar41 = lVar41 + -2;
                  *pfVar27 = *(float *)(lVar26 + (ulong)uVar45 * 4) * fVar59 * *pfVar27;
                  pfVar27 = pfVar27 + 2;
                } while (lVar41 != 0);
              }
              goto LAB_033f6f9c;
            }
LAB_033f6f98:
            if (param_8 != (float *)0x0) goto LAB_033f6f9c;
          }
          fVar58 = fVar58 + 1.0 / (float)param_1;
          *pcVar1 = '\0';
          if (1.0 <= fVar58) {
            bVar16 = *pbVar2;
            uVar25 = (ulong)bVar16 & 1;
            *(undefined1 *)(lVar44 + uVar23 * 0x78 + uVar25 * 0x10 + 0x44) = 0;
            if ((uint)(int)fVar58 < 2) {
              *pbVar2 = bVar16 + 1;
            }
            else {
              uVar49 = ((int)fVar58 - 2U) * uVar17;
              *(undefined1 *)(lVar44 + uVar23 * 0x78 + (ulong)((uint)uVar25 ^ 1) * 0x10 + 0x44) = 0;
              puVar11 = (uint *)(param_2[8] + uVar23 * 0x20);
              uVar31 = *puVar11;
              uVar45 = puVar11[3];
              uVar29 = uVar49;
              if (uVar45 <= uVar49) {
                uVar29 = uVar45;
              }
              uVar32 = 0;
              if (uVar31 != 0) {
                uVar32 = (uVar29 + puVar11[2]) / uVar31;
              }
              uVar49 = uVar49 - uVar29;
              puVar11[2] = (uVar29 + puVar11[2]) - uVar32 * uVar31;
              puVar11[3] = uVar45 - uVar29;
            }
            fVar58 = fVar58 - (float)(int)fVar58;
          }
        }
      }
      if ((((param_5 & 1) == 0) || (*(int *)(param_2[8] + uVar23 * 0x20 + 0xc) != 0)) ||
         (*pcVar1 != '\0')) {
        bVar20 = false;
      }
      else {
        bVar20 = *puVar6 == 0;
      }
      uVar45 = 0;
      if ((param_7 != 0) && (uVar29 = param_4 - uVar53, uVar29 != 0)) {
        pvVar52 = (void *)(param_7 + (ulong)uVar53 * 4);
        __src = *(void **)(lVar30 + 0x28);
        uVar31 = *puVar6;
        if ((bool)(bVar20 & uVar31 == 0)) {
          uVar31 = *puVar4;
          uVar45 = 0;
          if (uVar31 != 0) {
            uVar45 = (*puVar5 + *puVar8) / uVar31;
          }
          uVar18 = (*puVar5 + *puVar8) - uVar45 * uVar31;
          uVar32 = *puVar7;
          iVar40 = uVar18 - uVar32;
          uVar45 = 0;
          if (uVar18 < uVar32 || iVar40 == 0) {
            uVar45 = uVar31;
          }
          uVar45 = uVar45 + iVar40;
          if (uVar29 <= uVar45) {
            uVar45 = uVar29;
          }
        }
        else {
          uVar45 = uVar31;
          if (uVar29 <= uVar31) {
            uVar45 = uVar29;
          }
          *puVar6 = uVar31 - uVar45;
          uVar32 = *puVar7;
          uVar31 = *puVar4;
        }
        uVar29 = uVar45;
        if (uVar31 - uVar32 <= uVar45) {
          uVar29 = uVar31 - uVar32;
        }
        memcpy(pvVar52,(void *)((long)__src + (ulong)uVar32 * 4),(ulong)(uVar29 << 2));
        memset((void *)((long)__src + (ulong)*puVar7 * 4),0,(ulong)(uVar29 << 2));
        if (uVar45 - uVar29 != 0) {
          uVar25 = (ulong)((uVar45 - uVar29) * 4);
          memcpy((void *)((long)pvVar52 + (ulong)uVar29 * 4),__src,uVar25);
          memset(__src,0,uVar25);
        }
        uVar29 = *puVar4;
        uVar31 = 0;
        if (uVar29 != 0) {
          uVar31 = (*puVar7 + uVar45) / uVar29;
        }
        *puVar7 = (*puVar7 + uVar45) - uVar31 * uVar29;
      }
      uVar29 = iVar19 - (uVar22 & 0xffff);
      uVar53 = uVar53 + (uVar45 & 0xffff);
      if ((bVar20) && (*puVar6 == 0)) {
        uVar45 = *puVar4;
        uVar31 = 0;
        if (uVar45 != 0) {
          uVar31 = (*puVar5 + *puVar8) / uVar45;
        }
        uVar31 = (*puVar5 + *puVar8) - uVar31 * uVar45;
        if (*puVar7 <= uVar31) {
          uVar45 = 0;
        }
        uVar13 = 0x11;
        if ((uVar31 - *puVar7) + uVar45 != 0) {
          uVar13 = local_138;
        }
        local_138 = uVar13;
      }
      if (0x62 < uVar50) break;
      uVar50 = uVar50 + 1;
      iVar24 = uVar22 + uVar12 + iVar24;
    } while (uVar29 != 0 || uVar53 < param_4);
  }
  if ((int)param_2[5] - 1U == param_6) {
    *(float *)((long)param_2 + 0x34) = fVar58;
    *(uint *)(param_2 + 7) = uVar49;
    *(bool *)((long)param_2 + 0x3c) = bVar21;
  }
  return local_138;
}


