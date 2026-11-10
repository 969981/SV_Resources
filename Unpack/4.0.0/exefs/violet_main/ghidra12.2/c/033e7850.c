/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e7850; name: FUN_033e7850
 */


/* WARNING: Removing unreachable block (ram,0x033e7924) */

void FUN_033e7850(long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  float *pfVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  undefined8 *puVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  float *pfVar37;
  uint uVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  
  if (*(int *)((long)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
    uVar20 = (ulong)*(ushort *)((long)param_1 + 0x12);
    goto LAB_033e79c4;
  }
  uVar13 = *(uint *)(param_2 + 0x48);
  uVar14 = *(uint *)(param_2 + 0xac);
  if (uVar13 == 0xffffffff) {
LAB_033e78c8:
    *(uint *)(param_2 + 0x48) = uVar14;
    uVar13 = uVar14;
LAB_033e78d4:
    *(uint *)(param_2 + 0x4c) = uVar14;
  }
  else {
    if (uVar13 == 0) {
      if (*(short *)((long)param_1 + 0x12) == 0) {
        return;
      }
      goto LAB_033e78c8;
    }
    if (*(short *)((long)param_1 + 0x12) != 0) goto LAB_033e78c8;
    if (*(uint *)(param_2 + 0x4c) < uVar14) {
      uVar13 = (uVar13 + uVar14) - *(uint *)(param_2 + 0x4c);
      *(uint *)(param_2 + 0x48) = uVar13;
      goto LAB_033e78d4;
    }
  }
  uVar14 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
  iVar1 = 0;
  if (uVar14 <= uVar13) {
    iVar1 = uVar13 - uVar14;
  }
  *(int *)(param_2 + 0x48) = iVar1;
  uVar5 = *(ushort *)((long)param_1 + 0x12);
  uVar20 = (ulong)uVar5;
  uVar6 = *(ushort *)(param_1 + 2);
  uVar15 = (ulong)uVar6;
  uVar13 = (uint)uVar5;
  if ((uint)uVar6 <= (uint)uVar5) {
    uVar13 = (uint)uVar6;
  }
  uVar33 = (ulong)uVar13;
  if (uVar6 - uVar13 != 0) {
    bVar4 = *(byte *)(param_1 + 1);
    if (bVar4 != 0) {
      uVar20 = (ulong)((uVar6 - uVar13) * 4);
      if (bVar4 == 1) {
        lVar17 = 0;
      }
      else {
        lVar19 = -((ulong)bVar4 & 0xfe);
        lVar12 = 4;
        do {
          lVar17 = lVar12;
          memset((void *)(*param_1 + (lVar17 + -4) * uVar15 + uVar33 * 4),0,uVar20);
          memset((void *)(*param_1 + lVar17 * (ulong)*(ushort *)(param_1 + 2) + uVar33 * 4),0,uVar20
                );
          uVar15 = (ulong)*(ushort *)(param_1 + 2);
          lVar19 = lVar19 + 2;
          lVar12 = lVar17 + 8;
        } while (lVar19 != 0);
        lVar17 = lVar17 + 4;
        if ((bVar4 & 1) == 0) goto LAB_033e79b0;
      }
      memset((void *)(*param_1 + lVar17 * uVar15 + uVar33 * 4),0,uVar20);
      uVar15 = (ulong)*(ushort *)(param_1 + 2);
    }
LAB_033e79b0:
    *(short *)((long)param_1 + 0x12) = (short)uVar15;
    iVar1 = *(int *)(param_2 + 0x48);
    uVar20 = uVar15;
  }
  if (iVar1 != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
  }
LAB_033e79c4:
  uVar13 = (uint)uVar20;
  if (uVar13 < 0x20) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar14 = uVar2 & 0xff;
  if (uVar14 != 0) {
    uVar3 = *(uint *)(param_2 + 0xa0);
    uVar8 = uVar2 >> 0xc;
    iVar1 = 4 - (uVar13 & 3);
    uVar9 = uVar13 >> 2;
    uVar15 = (ulong)(uVar13 & 0xfffc);
    uVar10 = uVar13 >> 2 & 3;
    uVar39 = 0;
    uVar33 = 0;
    uVar36 = 0;
    uVar38 = 0;
    uVar16 = uVar2;
    uVar34 = 0;
    do {
      uVar24 = 1 << (ulong)(uVar36 & 0x1f);
      uVar35 = uVar34;
      if ((uVar8 == 0) || ((uVar24 & uVar8) != 0)) {
        if ((uVar8 == 0) || (uVar36 != 3)) {
          uVar35 = uVar34 + 1;
LAB_033e7ad8:
          pfVar37 = (float *)(*param_1 + (ulong)uVar34 * (ulong)*(ushort *)(param_1 + 2) * 4);
        }
        else {
          if ((uVar16 >> 0xf & 1) != 0) {
            uVar34 = uVar14 - 1;
            goto LAB_033e7ad8;
          }
          pfVar37 = (float *)0x0;
        }
        if ((*(uint *)(param_2 + 0xa0) & 0xff) == 0) {
          bVar11 = false;
        }
        else if ((uVar2 == uVar3) ||
                (bVar11 = false, (uVar24 & *(uint *)(param_2 + 0xa0) >> 0xc) != 0)) {
          FUN_033e76e8(param_2,pfVar37,param_3,uVar20,uVar33);
          uVar14 = (uint)uVar33;
          if (*(int *)(param_2 + 0x50) != 0) {
            uVar21 = uVar20;
            if ((uVar20 & 3) != 0) {
              memset((void *)((long)param_3 + uVar20 * 4),0,(ulong)(uint)(iVar1 * 4));
              uVar21 = (ulong)(iVar1 + uVar13);
            }
            uVar24 = *(uint *)(param_2 + 0x2c);
            iVar25 = (int)(uVar33 >> 2);
            uVar16 = uVar14 & 3;
            uVar33 = (ulong)uVar16;
            uVar34 = uVar24 & 1;
            uVar28 = uVar24 - 1;
            uVar7 = iVar25 << 4;
            if ((uVar28 == uVar14) && (uVar34 != 0)) {
              pfVar23 = (float *)(*(long *)(param_2 + 0x20) +
                                 (ulong)((iVar25 + (uint)(1 < uVar16 && uVar24 != 1)) * 0x10) * 4);
              pfVar30 = pfVar23 + 1;
              pfVar31 = pfVar23 + 2;
              pfVar32 = pfVar23 + 3;
            }
            else {
              pfVar23 = (float *)(*(long *)(param_2 + 0x20) + (ulong)uVar7 * 4 + uVar33 * 4);
              pfVar30 = pfVar23 + 4;
              pfVar31 = pfVar23 + 8;
              pfVar32 = pfVar23 + 0xc;
            }
            fVar45 = *pfVar23;
            fVar47 = *pfVar30;
            fVar68 = *pfVar31;
            fVar67 = *pfVar32;
            if ((int)uVar21 != 0) {
              puVar29 = *(undefined8 **)(param_2 + 0x30);
              uVar26 = 0;
              uVar48 = puVar29[1];
              uVar46 = *puVar29;
              uVar51 = puVar29[3];
              uVar49 = puVar29[2];
              uVar54 = puVar29[5];
              uVar53 = puVar29[4];
              uVar56 = puVar29[7];
              uVar55 = puVar29[6];
              uVar58 = puVar29[9];
              uVar57 = puVar29[8];
              uVar60 = puVar29[0xb];
              uVar59 = puVar29[10];
              uVar62 = puVar29[0xd];
              uVar61 = puVar29[0xc];
              uVar64 = puVar29[0xf];
              uVar63 = puVar29[0xe];
              puVar29 = param_3;
              fVar50 = fVar45;
              fVar52 = fVar47;
              do {
                fVar65 = (float)*puVar29;
                fVar66 = (float)((ulong)*puVar29 >> 0x20);
                fVar47 = (float)puVar29[1];
                fVar45 = (float)((ulong)puVar29[1] >> 0x20);
                fVar40 = (float)uVar61 * fVar68;
                fVar42 = (float)((ulong)uVar61 >> 0x20) * fVar68;
                fVar41 = (float)uVar63 * fVar67;
                fVar43 = (float)((ulong)uVar63 >> 0x20) * fVar67;
                fVar44 = (float)((ulong)uVar64 >> 0x20) * fVar67;
                fVar67 = fVar47 * (float)uVar48 + (float)uVar58 * fVar50 + (float)uVar60 * fVar52 +
                         (float)uVar51 * fVar47 + (float)uVar54 * fVar66 + (float)uVar56 * fVar65 +
                         (float)uVar62 * fVar68 + (float)uVar64 * fVar67;
                fVar68 = fVar45 * (float)((ulong)uVar48 >> 0x20) +
                         (float)((ulong)uVar58 >> 0x20) * fVar50 +
                         (float)((ulong)uVar60 >> 0x20) * fVar52 +
                         (float)((ulong)uVar51 >> 0x20) * fVar47 +
                         (float)((ulong)uVar54 >> 0x20) * fVar66 +
                         (float)((ulong)uVar56 >> 0x20) * fVar65 +
                         (float)((ulong)uVar62 >> 0x20) * fVar68 + fVar44;
                uVar26 = uVar26 + 4;
                puVar29[1] = CONCAT44(fVar68,fVar67);
                *puVar29 = CONCAT44(fVar66 * (float)((ulong)uVar46 >> 0x20) +
                                    (float)((ulong)uVar57 >> 0x20) * fVar50 +
                                    (float)((ulong)uVar59 >> 0x20) * fVar52 +
                                    (float)((ulong)uVar49 >> 0x20) * fVar47 +
                                    (float)((ulong)uVar53 >> 0x20) * fVar66 +
                                    (float)((ulong)uVar55 >> 0x20) * fVar65 + fVar42 + fVar43,
                                    fVar65 * (float)uVar46 + (float)uVar57 * fVar50 +
                                    (float)uVar59 * fVar52 + (float)uVar49 * fVar47 +
                                    (float)uVar53 * fVar66 + (float)uVar55 * fVar65 + fVar40 +
                                    fVar41);
                puVar29 = puVar29 + 2;
                fVar50 = fVar45;
                fVar52 = fVar47;
              } while (uVar26 < uVar21);
              uVar24 = *(uint *)(param_2 + 0x2c);
              uVar34 = uVar24 & 1;
              uVar28 = uVar24 - 1;
            }
            if ((uVar28 == uVar14) && (uVar34 != 0)) {
              uVar33 = (ulong)((iVar25 + (uint)(1 < uVar16 && uVar24 != 1)) * 0x10);
              *(float *)(*(long *)(param_2 + 0x20) + uVar33 * 4) = fVar45;
              *(float *)(*(long *)(param_2 + 0x20) + uVar33 * 4 + 4) = fVar47;
              *(float *)(*(long *)(param_2 + 0x20) + uVar33 * 4 + 8) = fVar68;
              lVar19 = *(long *)(param_2 + 0x20) + 0xc;
            }
            else {
              *(float *)(*(long *)(param_2 + 0x20) + (ulong)uVar7 * 4 + uVar33 * 4) = fVar45;
              *(float *)(*(long *)(param_2 + 0x20) + (ulong)uVar7 * 4 + uVar33 * 4 + 0x10) = fVar47;
              *(float *)(*(long *)(param_2 + 0x20) + (ulong)uVar7 * 4 + uVar33 * 4 + 0x20) = fVar68;
              lVar19 = *(long *)(param_2 + 0x20) + (ulong)uVar7 * 4 + 0x30;
            }
            *(float *)(lVar19 + uVar33 * 4) = fVar67;
          }
          uVar33 = (ulong)(uVar14 + 1);
          bVar11 = true;
        }
        if (*(char *)(param_2 + 0x75) != '\0') {
          plVar22 = (long *)(*(long *)(param_2 + 0x40) + uVar39 * 0x18 + 8);
          lVar19 = *plVar22;
          if (lVar19 != 0) {
            puVar27 = (uint *)(*(long *)(param_2 + 0x40) + uVar39 * 0x18);
            puVar18 = puVar27 + 4;
            uVar16 = *puVar18;
            uVar21 = (ulong)uVar16;
            uVar14 = *puVar27;
            puVar29 = (undefined8 *)(lVar19 + uVar21 * 4);
            uVar34 = uVar14 - uVar16;
            if (uVar13 < uVar34) {
              if (uVar9 != 0) {
                pfVar23 = pfVar37;
                if (2 < uVar9 - 1) {
                  iVar25 = -(uVar9 & 0x3ffc);
                  do {
                    uVar46 = *(undefined8 *)pfVar23;
                    iVar25 = iVar25 + 4;
                    uVar49 = puVar29[1];
                    uVar48 = *puVar29;
                    puVar29[1] = *(undefined8 *)(pfVar23 + 2);
                    *puVar29 = uVar46;
                    *(undefined8 *)(pfVar23 + 2) = uVar49;
                    *(undefined8 *)pfVar23 = uVar48;
                    uVar46 = *(undefined8 *)(pfVar23 + 4);
                    uVar49 = puVar29[3];
                    uVar48 = puVar29[2];
                    puVar29[3] = *(undefined8 *)(pfVar23 + 6);
                    puVar29[2] = uVar46;
                    *(undefined8 *)(pfVar23 + 6) = uVar49;
                    *(undefined8 *)(pfVar23 + 4) = uVar48;
                    uVar46 = *(undefined8 *)(pfVar23 + 8);
                    uVar49 = puVar29[5];
                    uVar48 = puVar29[4];
                    puVar29[5] = *(undefined8 *)(pfVar23 + 10);
                    puVar29[4] = uVar46;
                    *(undefined8 *)(pfVar23 + 10) = uVar49;
                    *(undefined8 *)(pfVar23 + 8) = uVar48;
                    uVar46 = *(undefined8 *)(pfVar23 + 0xc);
                    uVar49 = puVar29[7];
                    uVar48 = puVar29[6];
                    puVar29[7] = *(undefined8 *)(pfVar23 + 0xe);
                    puVar29[6] = uVar46;
                    *(undefined8 *)(pfVar23 + 0xe) = uVar49;
                    *(undefined8 *)(pfVar23 + 0xc) = uVar48;
                    puVar29 = puVar29 + 8;
                    pfVar23 = pfVar23 + 0x10;
                  } while (iVar25 != 0);
                }
                if (uVar10 != 0) {
                  uVar14 = uVar10;
                  do {
                    uVar46 = *(undefined8 *)pfVar23;
                    uVar14 = uVar14 - 1;
                    uVar49 = puVar29[1];
                    uVar48 = *puVar29;
                    puVar29[1] = *(undefined8 *)(pfVar23 + 2);
                    *puVar29 = uVar46;
                    *(undefined8 *)(pfVar23 + 2) = uVar49;
                    *(undefined8 *)pfVar23 = uVar48;
                    puVar29 = puVar29 + 2;
                    pfVar23 = pfVar23 + 4;
                  } while (uVar14 != 0);
                }
                uVar16 = *puVar18;
              }
              *puVar18 = uVar16 + uVar13;
            }
            else if (uVar9 != 0) {
              pfVar23 = pfVar37;
              uVar16 = uVar9;
              do {
                uVar24 = (uint)uVar21;
                uVar7 = uVar16;
                if (uVar34 >> 2 <= uVar16) {
                  uVar7 = uVar34 >> 2;
                }
                if (uVar7 != 0) {
                  uVar34 = uVar7;
                  for (uVar14 = uVar7 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                    uVar46 = *(undefined8 *)pfVar23;
                    uVar34 = uVar34 - 1;
                    uVar49 = puVar29[1];
                    uVar48 = *puVar29;
                    puVar29[1] = *(undefined8 *)(pfVar23 + 2);
                    *puVar29 = uVar46;
                    *(undefined8 *)(pfVar23 + 2) = uVar49;
                    *(undefined8 *)pfVar23 = uVar48;
                    puVar29 = puVar29 + 2;
                    pfVar23 = pfVar23 + 4;
                  }
                  if (2 < uVar7 - 1) {
                    do {
                      uVar46 = *(undefined8 *)pfVar23;
                      uVar34 = uVar34 - 4;
                      uVar49 = puVar29[1];
                      uVar48 = *puVar29;
                      puVar29[1] = *(undefined8 *)(pfVar23 + 2);
                      *puVar29 = uVar46;
                      *(undefined8 *)(pfVar23 + 2) = uVar49;
                      *(undefined8 *)pfVar23 = uVar48;
                      uVar46 = *(undefined8 *)(pfVar23 + 4);
                      uVar49 = puVar29[3];
                      uVar48 = puVar29[2];
                      puVar29[3] = *(undefined8 *)(pfVar23 + 6);
                      puVar29[2] = uVar46;
                      *(undefined8 *)(pfVar23 + 6) = uVar49;
                      *(undefined8 *)(pfVar23 + 4) = uVar48;
                      uVar46 = *(undefined8 *)(pfVar23 + 8);
                      uVar49 = puVar29[5];
                      uVar48 = puVar29[4];
                      puVar29[5] = *(undefined8 *)(pfVar23 + 10);
                      puVar29[4] = uVar46;
                      *(undefined8 *)(pfVar23 + 10) = uVar49;
                      *(undefined8 *)(pfVar23 + 8) = uVar48;
                      uVar46 = *(undefined8 *)(pfVar23 + 0xc);
                      uVar49 = puVar29[7];
                      uVar48 = puVar29[6];
                      puVar29[7] = *(undefined8 *)(pfVar23 + 0xe);
                      puVar29[6] = uVar46;
                      *(undefined8 *)(pfVar23 + 0xe) = uVar49;
                      *(undefined8 *)(pfVar23 + 0xc) = uVar48;
                      puVar29 = puVar29 + 8;
                      pfVar23 = pfVar23 + 0x10;
                    } while (uVar34 != 0);
                  }
                  uVar24 = *puVar18;
                  uVar14 = *puVar27;
                }
                uVar24 = uVar24 + uVar7 * 4;
                uVar21 = (ulong)uVar24;
                *puVar18 = uVar24;
                if (uVar24 == uVar14) {
                  puVar29 = (undefined8 *)*plVar22;
                  uVar21 = 0;
                  *puVar18 = 0;
                }
                uVar16 = uVar16 - uVar7;
                uVar34 = uVar14 - (int)uVar21;
              } while (uVar16 != 0);
            }
          }
          uVar39 = (ulong)((int)uVar39 + 1);
        }
        fVar45 = *(float *)(param_2 + 0x90);
        fVar47 = *(float *)(param_2 + 0x68);
        if (bVar11) {
          FUN_033d5580(fVar45,fVar47,*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x6c)
                       ,pfVar37,param_3,uVar20);
        }
        else if (fVar47 == fVar45) {
          if (fVar45 != 1.0) {
            pfVar23 = pfVar37 + uVar20;
            if ((uVar20 & 0xfffc) != 0) {
              pfVar30 = pfVar37 + uVar15;
              pfVar31 = pfVar37;
              do {
                pfVar37 = pfVar31 + 4;
                *(ulong *)(pfVar31 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20) * fVar45,
                              (float)*(undefined8 *)(pfVar31 + 2) * fVar45);
                *(ulong *)pfVar31 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar31 >> 0x20) * fVar45,
                              (float)*(undefined8 *)pfVar31 * fVar45);
                pfVar31 = pfVar37;
              } while (pfVar37 < pfVar30);
            }
            for (; pfVar37 < pfVar23; pfVar37 = pfVar37 + 1) {
              *pfVar37 = *pfVar37 * fVar45;
            }
          }
        }
        else {
          fVar47 = fVar47 - fVar45;
          pfVar23 = pfVar37 + uVar20;
          if ((uVar20 & 0xfffc) != 0) {
            fVar40 = fVar47 * (1.0 / (float)uVar15);
            fVar50 = fVar40 + fVar45;
            fVar52 = fVar50 + fVar40;
            fVar67 = fVar40 * 4.0;
            fVar40 = fVar52 + fVar40;
            pfVar30 = pfVar37 + uVar15;
            pfVar31 = pfVar37;
            fVar68 = fVar45;
            do {
              fVar41 = (float)*(undefined8 *)pfVar31 * fVar68;
              fVar42 = (float)((ulong)*(undefined8 *)pfVar31 >> 0x20) * fVar50;
              fVar43 = (float)*(undefined8 *)(pfVar31 + 2) * fVar52;
              fVar44 = (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20) * fVar40;
              fVar68 = fVar68 + fVar67;
              fVar50 = fVar50 + fVar67;
              fVar52 = fVar52 + fVar67;
              fVar40 = fVar40 + fVar67;
              pfVar37 = pfVar31 + 4;
              *(ulong *)(pfVar31 + 2) = CONCAT44(fVar44,fVar43);
              *(ulong *)pfVar31 = CONCAT44(fVar42,fVar41);
              pfVar31 = pfVar37;
            } while (pfVar37 < pfVar30);
          }
          if (pfVar37 < pfVar23) {
            do {
              fVar68 = *pfVar37 * fVar45;
              fVar45 = fVar45 + fVar47 * (1.0 / (float)uVar20);
              pfVar30 = pfVar37 + 1;
              *pfVar37 = fVar68;
              pfVar37 = pfVar30;
            } while (pfVar30 < pfVar23);
          }
        }
        uVar16 = *(uint *)(param_1 + 1);
        uVar38 = uVar38 + 1;
      }
      uVar36 = uVar36 + 1;
      uVar14 = uVar16 & 0xff;
      uVar34 = uVar35;
    } while (uVar38 < (uVar16 & 0xff));
  }
  memcpy((void *)(param_2 + 0x78),(void *)(param_2 + 0x50),0x26);
  return;
}


