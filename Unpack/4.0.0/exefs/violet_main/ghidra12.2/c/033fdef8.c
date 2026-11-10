/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033fdef8; name: FUN_033fdef8
 */


void FUN_033fdef8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  float *pfVar23;
  ulong uVar24;
  uint uVar25;
  float *__s;
  ulong uVar26;
  long alStack_460 [128];
  
  uVar26 = param_4 & 0xffffffff;
  plVar9 = (long *)(**(code **)(**(long **)(param_3 + 0x10) + 0x10))();
  uVar8 = (**(code **)(*plVar9 + 0x18))();
  cVar4 = *(char *)(param_3 + 0x50);
  uVar8 = uVar8 & 0xffff;
  iVar12 = (int)param_4;
  if (cVar4 == '\0') {
    if (iVar12 != 0) {
      uVar25 = 0;
      uVar13 = uVar26;
      plVar9 = param_5;
      do {
        uVar13 = uVar13 - 1;
        uVar25 = uVar25 + (*(uint *)(*plVar9 + 8) - (*(uint *)(*plVar9 + 8) >> 0xf & 1) & 0xff);
        plVar9 = plVar9 + 1;
      } while (uVar13 != 0);
      goto LAB_033fdfe4;
    }
  }
  else if (iVar12 != 0) {
    if (iVar12 == 1) {
      uVar13 = 0;
      uVar25 = 0;
    }
    else {
      uVar13 = 0;
      uVar25 = 0;
      do {
        plVar9 = param_5 + uVar13;
        uVar13 = uVar13 + 2;
        uVar25 = (uint)*(byte *)(plVar9[1] + 8) + *(byte *)(*plVar9 + 8) + uVar25;
      } while ((param_4 & 0xfffffffe) != uVar13);
    }
    if ((param_4 & 1) != 0) {
      uVar25 = *(byte *)(param_5[uVar13] + 8) + uVar25;
    }
    goto LAB_033fdfe4;
  }
  uVar25 = 0;
LAB_033fdfe4:
  __s = (float *)((long)alStack_460 + (0x400 - ((ulong)(uVar8 * 4 + 0xf) & 0x7fff0)));
  memset(__s,0,(ulong)(uVar8 * 4));
  lVar10 = (long)__s - ((ulong)uVar25 * 8 + 0xf & 0xffffffff0);
  if (cVar4 == '\0') {
    if (iVar12 != 0) {
      uVar13 = 0;
      if (uVar8 == 0) {
        uVar18 = 0;
        do {
          plVar9 = (long *)param_5[uVar13];
          uVar6 = *(uint *)(plVar9 + 1) - (*(uint *)(plVar9 + 1) >> 0xf & 1);
          uVar3 = uVar6 & 0xff;
          uVar14 = (ulong)uVar3;
          if (uVar3 != 0) {
            uVar20 = (ulong)*(ushort *)(plVar9 + 2);
            lVar21 = *plVar9;
            if (uVar14 - 1 < 3) {
              uVar16 = 0;
              uVar24 = uVar14;
              uVar22 = uVar18;
            }
            else {
              uVar16 = 0;
              lVar19 = lVar21;
              do {
                iVar12 = (int)(uVar18 + uVar16);
                *(long *)(lVar10 + (uVar18 + uVar16 & 0xffffffff) * 8) = lVar19;
                *(ulong *)(lVar10 + (ulong)(iVar12 + 1) * 8) = lVar19 + uVar20 * 4;
                uVar16 = uVar16 + 4;
                *(ulong *)(lVar10 + (ulong)(iVar12 + 2) * 8) = lVar19 + uVar20 * 8;
                lVar2 = lVar19 + uVar20 * 0xc;
                lVar19 = lVar19 + uVar20 * 0x10;
                *(long *)(lVar10 + (ulong)(iVar12 + 3) * 8) = lVar2;
              } while ((uVar14 & 0xfc) != uVar16);
              uVar24 = (ulong)(uint)((int)uVar18 + (int)uVar16);
              uVar22 = uVar24;
            }
            uVar18 = uVar24;
            if ((uVar6 & 3) != 0) {
              lVar21 = lVar21 + uVar16 * uVar20 * 4;
              lVar19 = -(uVar14 & 3);
              do {
                uVar18 = (ulong)((int)uVar22 + 1);
                *(long *)(lVar10 + uVar22 * 8) = lVar21;
                lVar21 = lVar21 + uVar20 * 4;
                bVar7 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                uVar22 = uVar18;
              } while (bVar7);
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar26);
      }
      else {
        pfVar1 = __s + uVar8;
        uVar18 = 0;
        do {
          plVar9 = (long *)param_5[uVar13];
          uVar6 = *(uint *)(plVar9 + 1) - (*(uint *)(plVar9 + 1) >> 0xf & 1);
          uVar3 = uVar6 & 0xff;
          uVar14 = (ulong)uVar3;
          if (uVar3 != 0) {
            uVar16 = (ulong)*(ushort *)(plVar9 + 2);
            lVar21 = *plVar9;
            uVar20 = uVar14 - 1;
            if (uVar20 < 3) {
              uVar22 = 0;
              uVar24 = uVar18;
            }
            else {
              uVar22 = 0;
              lVar19 = lVar21;
              do {
                iVar12 = (int)(uVar18 + uVar22);
                *(long *)(lVar10 + (uVar18 + uVar22 & 0xffffffff) * 8) = lVar19;
                *(ulong *)(lVar10 + (ulong)(iVar12 + 1) * 8) = lVar19 + uVar16 * 4;
                uVar22 = uVar22 + 4;
                *(ulong *)(lVar10 + (ulong)(iVar12 + 2) * 8) = lVar19 + uVar16 * 8;
                lVar2 = lVar19 + uVar16 * 0xc;
                lVar19 = lVar19 + uVar16 * 0x10;
                *(long *)(lVar10 + (ulong)(iVar12 + 3) * 8) = lVar2;
              } while ((uVar14 & 0xfc) != uVar22);
              uVar20 = (ulong)(uint)((int)uVar18 + (int)uVar22);
              uVar24 = uVar20;
            }
            if ((uVar6 & 3) != 0) {
              lVar19 = -(uVar14 & 3);
              lVar21 = lVar21 + uVar22 * uVar16 * 4;
              do {
                uVar20 = (ulong)((int)uVar24 + 1);
                *(long *)(lVar10 + uVar24 * 8) = lVar21;
                lVar21 = lVar21 + uVar16 * 4;
                bVar7 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                uVar24 = uVar20;
              } while (bVar7);
            }
            lVar21 = lVar10 + uVar18 * 8;
            if (uVar3 == 1) {
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              uVar14 = uVar14 & 0xfe;
              do {
                pfVar15 = *(float **)(lVar21 + lVar19 * 8);
                pfVar17 = __s;
                do {
                  pfVar23 = pfVar17 + 1;
                  *pfVar17 = *pfVar17 + *pfVar15 * *pfVar15;
                  pfVar15 = pfVar15 + 1;
                  pfVar17 = pfVar23;
                } while (pfVar23 < pfVar1);
                pfVar15 = *(float **)(lVar21 + (lVar19 << 3 | 8U));
                pfVar17 = __s;
                do {
                  pfVar23 = pfVar17 + 1;
                  *pfVar17 = *pfVar17 + *pfVar15 * *pfVar15;
                  pfVar15 = pfVar15 + 1;
                  pfVar17 = pfVar23;
                } while (pfVar23 < pfVar1);
                lVar19 = lVar19 + 2;
                uVar14 = uVar14 - 2;
              } while (uVar14 != 0);
            }
            if ((uVar6 & 1) != 0) {
              pfVar15 = *(float **)(lVar21 + lVar19 * 8);
              pfVar17 = __s;
              do {
                pfVar23 = pfVar17 + 1;
                *pfVar17 = *pfVar17 + *pfVar15 * *pfVar15;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar23;
              } while (pfVar23 < pfVar1);
            }
            uVar18 = uVar20 & 0xffffffff;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar26);
      }
    }
  }
  else if (iVar12 != 0) {
    uVar13 = 0;
    if (uVar8 == 0) {
      uVar18 = 0;
      do {
        plVar9 = (long *)param_5[uVar13];
        bVar5 = *(byte *)(plVar9 + 1);
        uVar14 = (ulong)bVar5;
        if (bVar5 != 0) {
          uVar16 = (ulong)*(ushort *)(plVar9 + 2);
          uVar20 = uVar14 & 3;
          lVar21 = *plVar9;
          if (uVar14 - 1 < 3) {
            uVar22 = 0;
            uVar24 = uVar18;
          }
          else {
            uVar22 = 0;
            lVar19 = lVar21;
            do {
              iVar12 = (int)(uVar18 + uVar22);
              *(long *)(lVar10 + (uVar18 + uVar22 & 0xffffffff) * 8) = lVar19;
              *(ulong *)(lVar10 + (ulong)(iVar12 + 1) * 8) = lVar19 + uVar16 * 4;
              uVar22 = uVar22 + 4;
              *(ulong *)(lVar10 + (ulong)(iVar12 + 2) * 8) = lVar19 + uVar16 * 8;
              lVar2 = lVar19 + uVar16 * 0xc;
              lVar19 = lVar19 + uVar16 * 0x10;
              *(long *)(lVar10 + (ulong)(iVar12 + 3) * 8) = lVar2;
            } while ((uVar14 & 0xfc) != uVar22);
            uVar14 = (ulong)(uint)((int)uVar18 + (int)uVar22);
            uVar24 = uVar14;
          }
          uVar18 = uVar14;
          if ((bVar5 & 3) != 0) {
            lVar21 = lVar21 + uVar22 * uVar16 * 4;
            do {
              uVar18 = (ulong)((int)uVar24 + 1);
              *(long *)(lVar10 + uVar24 * 8) = lVar21;
              uVar20 = uVar20 - 1;
              lVar21 = lVar21 + uVar16 * 4;
              uVar24 = uVar18;
            } while (uVar20 != 0);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar26);
    }
    else {
      pfVar1 = __s + uVar8;
      uVar18 = 0;
      do {
        plVar9 = (long *)param_5[uVar13];
        bVar5 = *(byte *)(plVar9 + 1);
        uVar14 = (ulong)bVar5;
        if (bVar5 != 0) {
          uVar22 = (ulong)*(ushort *)(plVar9 + 2);
          lVar21 = *plVar9;
          uVar16 = uVar14 - 1;
          uVar20 = uVar14 & 3;
          if (uVar16 < 3) {
            uVar24 = 0;
            uVar11 = uVar18;
          }
          else {
            uVar24 = 0;
            lVar19 = lVar21;
            do {
              iVar12 = (int)(uVar18 + uVar24);
              *(long *)(lVar10 + (uVar18 + uVar24 & 0xffffffff) * 8) = lVar19;
              *(ulong *)(lVar10 + (ulong)(iVar12 + 1) * 8) = lVar19 + uVar22 * 4;
              uVar24 = uVar24 + 4;
              *(ulong *)(lVar10 + (ulong)(iVar12 + 2) * 8) = lVar19 + uVar22 * 8;
              lVar2 = lVar19 + uVar22 * 0xc;
              lVar19 = lVar19 + uVar22 * 0x10;
              *(long *)(lVar10 + (ulong)(iVar12 + 3) * 8) = lVar2;
            } while ((uVar14 & 0xfc) != uVar24);
            uVar16 = (ulong)(uint)((int)uVar18 + (int)uVar24);
            uVar11 = uVar16;
          }
          if ((bVar5 & 3) != 0) {
            lVar21 = lVar21 + uVar24 * uVar22 * 4;
            do {
              uVar16 = (ulong)((int)uVar11 + 1);
              *(long *)(lVar10 + uVar11 * 8) = lVar21;
              uVar20 = uVar20 - 1;
              lVar21 = lVar21 + uVar22 * 4;
              uVar11 = uVar16;
            } while (uVar20 != 0);
          }
          lVar21 = lVar10 + uVar18 * 8;
          if (bVar5 == 1) {
            lVar19 = 0;
          }
          else {
            lVar19 = 0;
            uVar14 = uVar14 & 0xfe;
            do {
              pfVar15 = *(float **)(lVar21 + lVar19 * 8);
              pfVar17 = __s;
              do {
                pfVar23 = pfVar17 + 1;
                *pfVar17 = *pfVar17 + *pfVar15 * *pfVar15;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar23;
              } while (pfVar23 < pfVar1);
              pfVar15 = *(float **)(lVar21 + (lVar19 << 3 | 8U));
              pfVar17 = __s;
              do {
                pfVar23 = pfVar17 + 1;
                *pfVar17 = *pfVar17 + *pfVar15 * *pfVar15;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar23;
              } while (pfVar23 < pfVar1);
              lVar19 = lVar19 + 2;
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
          }
          if ((bVar5 & 1) != 0) {
            pfVar15 = *(float **)(lVar21 + lVar19 * 8);
            pfVar17 = __s;
            do {
              pfVar23 = pfVar17 + 1;
              *pfVar17 = *pfVar17 + *pfVar15 * *pfVar15;
              pfVar15 = pfVar15 + 1;
              pfVar17 = pfVar23;
            } while (pfVar23 < pfVar1);
          }
          uVar18 = uVar16 & 0xffffffff;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar26);
    }
  }
  FUN_033fe550(0x3f800000,param_1,param_2,*(undefined4 *)(param_3 + 0x44),
               *(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x30),lVar10,__s,uVar25,
               uVar8,*(undefined8 *)(param_3 + 0x38));
  return;
}


