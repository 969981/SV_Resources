/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033f7810; name: FUN_033f7810
 */


/* WARNING: Removing unreachable block (ram,0x033f78ec) */

void FUN_033f7810(long *param_1,long param_2,long param_3)

{
  void *__s;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  float *pfVar21;
  int iVar22;
  ulong uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  uint uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint local_88;
  
  if (*(int *)((long)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x170) = 0xffffffff;
    uVar23 = (ulong)*(ushort *)((long)param_1 + 0x12);
    goto LAB_033f798c;
  }
  uVar12 = *(uint *)(param_2 + 0x170);
  uVar13 = *(int *)(param_2 + 0x11c) * 0xc;
  if (uVar12 == 0xffffffff) {
LAB_033f7890:
    *(uint *)(param_2 + 0x170) = uVar13;
    uVar12 = uVar13;
LAB_033f789c:
    *(uint *)(param_2 + 0x174) = uVar13;
  }
  else {
    if (uVar12 == 0) {
      if (*(short *)((long)param_1 + 0x12) == 0) {
        return;
      }
      goto LAB_033f7890;
    }
    if (*(short *)((long)param_1 + 0x12) != 0) goto LAB_033f7890;
    if (*(uint *)(param_2 + 0x174) < uVar13) {
      uVar12 = (uVar12 + uVar13) - *(uint *)(param_2 + 0x174);
      *(uint *)(param_2 + 0x170) = uVar12;
      goto LAB_033f789c;
    }
  }
  uVar13 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
  iVar31 = 0;
  if (uVar13 <= uVar12) {
    iVar31 = uVar12 - uVar13;
  }
  *(int *)(param_2 + 0x170) = iVar31;
  uVar5 = *(ushort *)((long)param_1 + 0x12);
  uVar23 = (ulong)uVar5;
  uVar6 = *(ushort *)(param_1 + 2);
  uVar14 = (ulong)uVar6;
  uVar12 = (uint)uVar5;
  if ((uint)uVar6 <= (uint)uVar5) {
    uVar12 = (uint)uVar6;
  }
  uVar29 = (ulong)uVar12;
  if (uVar6 - uVar12 != 0) {
    bVar4 = *(byte *)(param_1 + 1);
    if (bVar4 != 0) {
      uVar23 = (ulong)((uVar6 - uVar12) * 4);
      if (bVar4 == 1) {
        lVar17 = 0;
      }
      else {
        lVar30 = -((ulong)bVar4 & 0xfe);
        lVar18 = 4;
        do {
          lVar17 = lVar18;
          memset((void *)(*param_1 + (lVar17 + -4) * uVar14 + uVar29 * 4),0,uVar23);
          memset((void *)(*param_1 + lVar17 * (ulong)*(ushort *)(param_1 + 2) + uVar29 * 4),0,uVar23
                );
          uVar14 = (ulong)*(ushort *)(param_1 + 2);
          lVar30 = lVar30 + 2;
          lVar18 = lVar17 + 8;
        } while (lVar30 != 0);
        lVar17 = lVar17 + 4;
        if ((bVar4 & 1) == 0) goto LAB_033f7978;
      }
      memset((void *)(*param_1 + lVar17 * uVar14 + uVar29 * 4),0,uVar23);
      uVar14 = (ulong)*(ushort *)(param_1 + 2);
    }
LAB_033f7978:
    *(short *)((long)param_1 + 0x12) = (short)uVar14;
    iVar31 = *(int *)(param_2 + 0x170);
    uVar23 = uVar14;
  }
  if (iVar31 != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
  }
LAB_033f798c:
  uVar12 = (uint)uVar23;
  if (uVar12 < 0x20) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar13 = uVar2 & 0xff;
  if (uVar13 != 0) {
    lVar30 = param_3 + (ulong)(uVar12 << 1) * 4;
    local_88 = 0;
    uVar14 = (ulong)(uVar12 & 0xfffc);
    __s = (void *)(param_3 + uVar23 * 4);
    uVar7 = uVar12 >> 2;
    uVar3 = *(uint *)(param_2 + 0x178);
    uVar9 = uVar12 >> 2 & 3;
    uVar8 = uVar2 >> 0xc;
    uVar29 = 0;
    iVar31 = 0;
    uVar28 = 0;
    uVar35 = 0;
    uVar16 = uVar2;
    do {
      uVar25 = 1 << (ulong)(uVar28 & 0x1f);
      if ((uVar8 == 0) || ((uVar25 & uVar8) != 0)) {
        if ((uVar8 == 0) || (uVar28 != 3)) {
          uVar13 = local_88;
          local_88 = local_88 + 1;
LAB_033f7aa8:
          pfVar32 = (float *)(*param_1 + (ulong)uVar13 * (ulong)*(ushort *)(param_1 + 2) * 4);
        }
        else {
          if ((uVar16 >> 0xf & 1) != 0) {
            uVar13 = uVar13 - 1;
            goto LAB_033f7aa8;
          }
          pfVar32 = (float *)0x0;
        }
        bVar10 = uVar2 == uVar3;
        bVar11 = (uVar25 & *(uint *)(param_2 + 0x178) >> 0xc) != 0;
        if ((*(char *)(param_2 + 0x184) != '\0') && (bVar10 || bVar11)) {
          memset(__s,0,(ulong)(uVar12 << 2));
          FUN_033f7580(*(undefined4 *)(param_2 + 0xe8),pfVar32,param_2,iVar31,0,param_3,__s,uVar23,
                       *(int *)((long)param_1 + 0xc) == 0x11,lVar30);
          FUN_033f7580(*(undefined4 *)(param_2 + 0x104),pfVar32,param_2,iVar31,1,param_3,__s,uVar23,
                       *(int *)((long)param_1 + 0xc) == 0x11,lVar30);
          iVar31 = iVar31 + 1;
        }
        if (*(char *)(param_2 + 0x121) != '\0') {
          plVar20 = (long *)(*(long *)(param_2 + 0xd0) + uVar29 * 0x18 + 8);
          lVar18 = *plVar20;
          if (lVar18 != 0) {
            puVar24 = (uint *)(*(long *)(param_2 + 0xd0) + uVar29 * 0x18);
            puVar15 = puVar24 + 4;
            uVar16 = *puVar15;
            uVar27 = (ulong)uVar16;
            uVar13 = *puVar24;
            puVar19 = (undefined8 *)(lVar18 + uVar27 * 4);
            uVar25 = uVar13 - uVar16;
            if (uVar12 < uVar25) {
              if (uVar7 != 0) {
                pfVar21 = pfVar32;
                if (2 < uVar7 - 1) {
                  iVar22 = -(uVar7 & 0x3ffc);
                  do {
                    uVar37 = *(undefined8 *)pfVar21;
                    iVar22 = iVar22 + 4;
                    uVar40 = puVar19[1];
                    uVar39 = *puVar19;
                    puVar19[1] = *(undefined8 *)(pfVar21 + 2);
                    *puVar19 = uVar37;
                    *(undefined8 *)(pfVar21 + 2) = uVar40;
                    *(undefined8 *)pfVar21 = uVar39;
                    uVar37 = *(undefined8 *)(pfVar21 + 4);
                    uVar40 = puVar19[3];
                    uVar39 = puVar19[2];
                    puVar19[3] = *(undefined8 *)(pfVar21 + 6);
                    puVar19[2] = uVar37;
                    *(undefined8 *)(pfVar21 + 6) = uVar40;
                    *(undefined8 *)(pfVar21 + 4) = uVar39;
                    uVar37 = *(undefined8 *)(pfVar21 + 8);
                    uVar40 = puVar19[5];
                    uVar39 = puVar19[4];
                    puVar19[5] = *(undefined8 *)(pfVar21 + 10);
                    puVar19[4] = uVar37;
                    *(undefined8 *)(pfVar21 + 10) = uVar40;
                    *(undefined8 *)(pfVar21 + 8) = uVar39;
                    uVar37 = *(undefined8 *)(pfVar21 + 0xc);
                    uVar40 = puVar19[7];
                    uVar39 = puVar19[6];
                    puVar19[7] = *(undefined8 *)(pfVar21 + 0xe);
                    puVar19[6] = uVar37;
                    *(undefined8 *)(pfVar21 + 0xe) = uVar40;
                    *(undefined8 *)(pfVar21 + 0xc) = uVar39;
                    puVar19 = puVar19 + 8;
                    pfVar21 = pfVar21 + 0x10;
                  } while (iVar22 != 0);
                }
                if (uVar9 != 0) {
                  uVar13 = uVar9;
                  do {
                    uVar37 = *(undefined8 *)pfVar21;
                    uVar13 = uVar13 - 1;
                    uVar40 = puVar19[1];
                    uVar39 = *puVar19;
                    puVar19[1] = *(undefined8 *)(pfVar21 + 2);
                    *puVar19 = uVar37;
                    *(undefined8 *)(pfVar21 + 2) = uVar40;
                    *(undefined8 *)pfVar21 = uVar39;
                    puVar19 = puVar19 + 2;
                    pfVar21 = pfVar21 + 4;
                  } while (uVar13 != 0);
                }
                uVar16 = *puVar15;
              }
              *puVar15 = uVar16 + uVar12;
            }
            else if (uVar7 != 0) {
              pfVar21 = pfVar32;
              uVar16 = uVar7;
              do {
                uVar26 = (uint)uVar27;
                uVar1 = uVar16;
                if (uVar25 >> 2 <= uVar16) {
                  uVar1 = uVar25 >> 2;
                }
                if (uVar1 != 0) {
                  uVar25 = uVar1;
                  for (uVar13 = uVar1 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                    uVar37 = *(undefined8 *)pfVar21;
                    uVar25 = uVar25 - 1;
                    uVar40 = puVar19[1];
                    uVar39 = *puVar19;
                    puVar19[1] = *(undefined8 *)(pfVar21 + 2);
                    *puVar19 = uVar37;
                    *(undefined8 *)(pfVar21 + 2) = uVar40;
                    *(undefined8 *)pfVar21 = uVar39;
                    puVar19 = puVar19 + 2;
                    pfVar21 = pfVar21 + 4;
                  }
                  if (2 < uVar1 - 1) {
                    do {
                      uVar37 = *(undefined8 *)pfVar21;
                      uVar25 = uVar25 - 4;
                      uVar40 = puVar19[1];
                      uVar39 = *puVar19;
                      puVar19[1] = *(undefined8 *)(pfVar21 + 2);
                      *puVar19 = uVar37;
                      *(undefined8 *)(pfVar21 + 2) = uVar40;
                      *(undefined8 *)pfVar21 = uVar39;
                      uVar37 = *(undefined8 *)(pfVar21 + 4);
                      uVar40 = puVar19[3];
                      uVar39 = puVar19[2];
                      puVar19[3] = *(undefined8 *)(pfVar21 + 6);
                      puVar19[2] = uVar37;
                      *(undefined8 *)(pfVar21 + 6) = uVar40;
                      *(undefined8 *)(pfVar21 + 4) = uVar39;
                      uVar37 = *(undefined8 *)(pfVar21 + 8);
                      uVar40 = puVar19[5];
                      uVar39 = puVar19[4];
                      puVar19[5] = *(undefined8 *)(pfVar21 + 10);
                      puVar19[4] = uVar37;
                      *(undefined8 *)(pfVar21 + 10) = uVar40;
                      *(undefined8 *)(pfVar21 + 8) = uVar39;
                      uVar37 = *(undefined8 *)(pfVar21 + 0xc);
                      uVar40 = puVar19[7];
                      uVar39 = puVar19[6];
                      puVar19[7] = *(undefined8 *)(pfVar21 + 0xe);
                      puVar19[6] = uVar37;
                      *(undefined8 *)(pfVar21 + 0xe) = uVar40;
                      *(undefined8 *)(pfVar21 + 0xc) = uVar39;
                      puVar19 = puVar19 + 8;
                      pfVar21 = pfVar21 + 0x10;
                    } while (uVar25 != 0);
                  }
                  uVar26 = *puVar15;
                  uVar13 = *puVar24;
                }
                uVar26 = uVar26 + uVar1 * 4;
                uVar27 = (ulong)uVar26;
                *puVar15 = uVar26;
                if (uVar26 == uVar13) {
                  puVar19 = (undefined8 *)*plVar20;
                  uVar27 = 0;
                  *puVar15 = 0;
                }
                uVar16 = uVar16 - uVar1;
                uVar25 = uVar13 - (int)uVar27;
              } while (uVar16 != 0);
            }
          }
          uVar29 = (ulong)((int)uVar29 + 1);
        }
        if ((*(char *)(param_2 + 0x184) != '\0' && (bVar10 || bVar11)) ||
           ((((uVar2 >> 0xd & 1) != 0 && (uVar28 == 1)) && (*(int *)(param_2 + 0x110) == 6)))) {
          FUN_033d5580(*(undefined4 *)(param_2 + 0x160),*(undefined4 *)(param_2 + 0x114),
                       *(undefined4 *)(param_2 + 0x164),*(undefined4 *)(param_2 + 0x118),pfVar32,__s
                       ,uVar23);
        }
        else {
          fVar36 = *(float *)(param_2 + 0x160);
          if (*(float *)(param_2 + 0x114) == fVar36) {
            if (fVar36 != 1.0) {
              pfVar21 = pfVar32 + uVar23;
              if ((uVar23 & 0xfffc) != 0) {
                pfVar34 = pfVar32 + uVar14;
                pfVar33 = pfVar32;
                do {
                  pfVar32 = pfVar33 + 4;
                  *(ulong *)(pfVar33 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) * fVar36,
                                (float)*(undefined8 *)(pfVar33 + 2) * fVar36);
                  *(ulong *)pfVar33 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) * fVar36,
                                (float)*(undefined8 *)pfVar33 * fVar36);
                  pfVar33 = pfVar32;
                } while (pfVar32 < pfVar34);
              }
              for (; pfVar32 < pfVar21; pfVar32 = pfVar32 + 1) {
                *pfVar32 = *pfVar32 * fVar36;
              }
            }
          }
          else {
            fVar38 = *(float *)(param_2 + 0x114) - fVar36;
            pfVar21 = pfVar32 + uVar23;
            if ((uVar23 & 0xfffc) != 0) {
              fVar43 = fVar38 * (1.0 / (float)uVar14);
              fVar48 = fVar43 + fVar36;
              fVar49 = fVar48 + fVar43;
              fVar41 = fVar43 * 4.0;
              fVar43 = fVar49 + fVar43;
              pfVar34 = pfVar32 + uVar14;
              pfVar33 = pfVar32;
              fVar42 = fVar36;
              do {
                fVar44 = (float)*(undefined8 *)pfVar33 * fVar42;
                fVar45 = (float)((ulong)*(undefined8 *)pfVar33 >> 0x20) * fVar48;
                fVar46 = (float)*(undefined8 *)(pfVar33 + 2) * fVar49;
                fVar47 = (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) * fVar43;
                fVar42 = fVar42 + fVar41;
                fVar48 = fVar48 + fVar41;
                fVar49 = fVar49 + fVar41;
                fVar43 = fVar43 + fVar41;
                pfVar32 = pfVar33 + 4;
                *(ulong *)(pfVar33 + 2) = CONCAT44(fVar47,fVar46);
                *(ulong *)pfVar33 = CONCAT44(fVar45,fVar44);
                pfVar33 = pfVar32;
              } while (pfVar32 < pfVar34);
            }
            if (pfVar32 < pfVar21) {
              do {
                fVar42 = *pfVar32 * fVar36;
                fVar36 = fVar36 + fVar38 * (1.0 / (float)uVar23);
                pfVar34 = pfVar32 + 1;
                *pfVar32 = fVar42;
                pfVar32 = pfVar34;
              } while (pfVar34 < pfVar21);
            }
          }
        }
        uVar16 = *(uint *)(param_1 + 1);
        uVar35 = uVar35 + 1;
      }
      uVar28 = uVar28 + 1;
      uVar13 = uVar16 & 0xff;
    } while (uVar35 < (uVar16 & 0xff));
  }
  memcpy((void *)(param_2 + 0x124),(void *)(param_2 + 0xd8),0x4a);
  return;
}


