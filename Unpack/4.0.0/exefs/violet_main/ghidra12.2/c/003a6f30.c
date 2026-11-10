/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a6f30; name: FUN_003a6f30
 */


int FUN_003a6f30(uint *param_1)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  char *pcVar21;
  byte *pbVar22;
  uint *puVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_68 [8];
  
  uVar11 = DAT_03cb5480;
  lVar18 = *(long *)(param_1 + 0x174);
  lVar15 = 0;
  lVar16 = 0;
  lVar10 = 0;
  if (*(long *)(param_1 + 0x1b2) != 0) {
    lVar10 = *(long *)(param_1 + 0x1b2) + -1;
  }
  do {
    lVar24 = lVar16;
    lVar16 = lVar15;
    if ((param_1[0x255] != 0xf1) || (*(ulong *)(param_1 + 0x626) < 5)) {
      iVar7 = FUN_003a4660(param_1,5,*(undefined8 *)(param_1 + 0x25e),0,lVar16 == 0,auStack_68);
      if (iVar7 < 1) {
        return iVar7;
      }
      uVar26 = *(ulong *)(param_1 + 0x626);
      param_1[0x255] = 0xf1;
      if ((long)uVar26 < 0) {
        uVar11 = 0x50;
        uVar12 = 0x44;
        uVar13 = 0xda;
        goto LAB_003a7ca0;
      }
      if ((uVar26 < 2) || (uVar26 == 2)) {
        uVar11 = 0x32;
        uVar12 = 0x44;
        uVar13 = 0xe1;
        goto LAB_003a7ca0;
      }
      pbVar22 = *(byte **)(param_1 + 0x624);
      bVar3 = *pbVar22;
      uVar19 = (ulong)pbVar22[1];
      bVar4 = pbVar22[2];
      if ((((param_1[0xe] != 0) && (param_1[0x63c] != 0)) && ((char)bVar3 < '\0')) && (bVar4 == 1))
      {
        *(undefined8 *)((long)param_1 + lVar24 + 0xe90) = uVar11;
        uVar19 = ((ulong)bVar3 & 0x7f) << 8 | uVar19;
        *(ulong *)((long)param_1 + lVar24 + 0xe98) = uVar19;
        if (*(long *)(param_1 + 0x25e) - 2U < uVar19) {
          uVar11 = 0x16;
          uVar12 = 0xc6;
          uVar13 = 0xfb;
        }
        else {
          if (8 < uVar19) goto LAB_003a718c;
          uVar11 = 0x32;
          uVar12 = 0xa0;
          uVar13 = 0x101;
        }
        goto LAB_003a7ca0;
      }
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e))(0,0,0x100,pbVar22,5,param_1,*(undefined8 *)(param_1 + 0x30));
        bVar3 = *pbVar22;
        uVar19 = (ulong)pbVar22[1];
        bVar4 = pbVar22[2];
      }
      uVar8 = (uint)bVar3;
      if (uVar26 - 3 < 2) {
        uVar11 = 0x32;
        uVar12 = 0x44;
        uVar13 = 0x10f;
        goto LAB_003a7ca0;
      }
      uVar5 = *(ushort *)(pbVar22 + 3);
      iVar7 = (int)uVar19;
      uVar20 = (uint)bVar4 | iVar7 << 8;
      *(uint *)((long)param_1 + lVar24 + 0xe94) = uVar8;
      *(uint *)((long)param_1 + lVar24 + 0xe90) = uVar20;
      uVar26 = (((ulong)uVar5 & 0xff00) << 0x28 | (ulong)uVar5 << 0x38) >> 0x30;
      *(ulong *)((long)param_1 + lVar24 + 0xe98) = uVar26;
      if ((param_1[0x1ac] == 0) &&
         (((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0 ||
            (iVar9 = **(int **)(param_1 + 2), iVar9 < 0x304)) || (iVar9 == 0x10000)) &&
          ((param_1[0x168] != 1 && (uVar20 != *param_1)))))) {
        if (((*param_1 & 0xff00) == iVar7 * 0x100) &&
           ((*(long *)(param_1 + 0x14c) == 0 && (*(long *)(param_1 + 0x152) == 0)))) {
          if (uVar8 == 0x15) {
            uVar11 = 0x10b;
            uVar12 = 299;
            goto LAB_003a7a04;
          }
          *param_1 = uVar20;
        }
        uVar11 = 0x46;
        uVar12 = 0x10b;
        uVar13 = 0x134;
        goto LAB_003a7ca0;
      }
      if (iVar7 != 3) {
        if (param_1[0x63c] != 0) {
          pcVar21 = *(char **)(param_1 + 0x624);
          iVar7 = strncmp(pcVar21,"GET ",4);
          if ((((iVar7 == 0) || (iVar7 = strncmp(pcVar21,"POST ",5), iVar7 == 0)) ||
              (iVar7 = strncmp(pcVar21,"HEAD ",5), iVar7 == 0)) ||
             (iVar7 = strncmp(pcVar21,"PUT ",4), iVar7 == 0)) {
            uVar11 = 0x9c;
            uVar12 = 0x142;
          }
          else {
            iVar7 = strncmp(pcVar21,"CONNE",5);
            if (iVar7 == 0) {
              uVar11 = 0x9b;
              uVar12 = 0x146;
            }
            else {
              uVar11 = 0x10b;
              uVar12 = 0x14c;
            }
          }
LAB_003a7a04:
          FUN_003c3950(param_1,0xffffffff,0x8f,uVar11,"external/openssl/ssl/record/ssl3_record.c",
                       uVar12);
          return -1;
        }
        uVar11 = 0x46;
        uVar12 = 0x10b;
        uVar13 = 0x151;
        goto LAB_003a7ca0;
      }
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
          (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) &&
         ((iVar7 != 0x10000 && (*(long *)(param_1 + 0x140) != 0)))) {
        if (uVar8 != 0x17) {
          if (uVar8 == 0x15) {
            if (param_1[0x20] != 1) goto LAB_003a7b40;
          }
          else if ((uVar8 != 0x14) ||
                  ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) != 0 &&
                   (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) != 0)))) {
LAB_003a7b40:
            uVar11 = 10;
            uVar12 = 0x1bb;
            uVar13 = 0x15e;
            goto LAB_003a7ca0;
          }
        }
        if (uVar20 != 0x303) {
          uVar11 = 0x32;
          uVar12 = 0x10b;
          uVar13 = 0x163;
          goto LAB_003a7ca0;
        }
      }
      if (*(long *)(param_1 + 0x25e) - 5U < uVar26) {
        uVar11 = 0x16;
        uVar12 = 0xc6;
        uVar13 = 0x16b;
        goto LAB_003a7ca0;
      }
    }
LAB_003a718c:
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
        (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
      uVar19 = *(ulong *)((long)param_1 + lVar24 + 0xe98);
      if (0x4100 < uVar19) {
        uVar11 = 0x16;
        uVar12 = 0x96;
        uVar13 = 0x176;
        goto LAB_003a7ca0;
      }
    }
    else {
      uVar26 = 0x4140;
      if (*(long *)(param_1 + 0x14a) != 0) {
        uVar26 = 0x4540;
      }
      uVar19 = *(ulong *)((long)param_1 + lVar24 + 0xe98);
      if (uVar26 < uVar19) {
        uVar11 = 0x16;
        uVar12 = 0x96;
        uVar13 = 0x187;
        goto LAB_003a7ca0;
      }
    }
    iVar7 = *(int *)((long)param_1 + lVar24 + 0xe90);
    uVar26 = uVar19 - 3;
    if (iVar7 != 2) {
      uVar26 = uVar19;
    }
    if (uVar26 != 0) {
      iVar7 = FUN_003a4660(param_1,uVar26,uVar26,1,0,auStack_68);
      if (iVar7 < 1) {
        return iVar7;
      }
      iVar7 = *(int *)((long)param_1 + lVar24 + 0xe90);
    }
    lVar14 = *(long *)(param_1 + 0x624);
    param_1[0x255] = 0xf0;
    lVar2 = 2;
    if (iVar7 != 2) {
      lVar2 = 5;
    }
    lVar15 = lVar16 + 1;
    *(undefined4 *)((long)param_1 + lVar24 + 0xec8) = 0;
    *(long *)((long)param_1 + lVar24 + 0xeb8) = lVar14 + lVar2;
    *(long *)((long)param_1 + lVar24 + 0xeb0) = lVar14 + lVar2;
    *(undefined8 *)((long)param_1 + lVar24 + 0xea0) =
         *(undefined8 *)((long)param_1 + lVar24 + 0xe98);
    param_1[0x626] = 0;
    param_1[0x627] = 0;
    param_1[0x63c] = 0;
    lVar2 = lVar10;
    if (((lVar10 == lVar16) || (lVar2 = lVar16, *(int *)((long)param_1 + lVar24 + 0xe94) != 0x17))
       || (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0 ||
           (*(long *)(param_1 + 0x140) == 0)))) break;
    FUN_0043b170();
    uVar8 = FUN_0043b160();
    if ((((uVar8 >> 0x17 & 1) == 0) || (*(long *)(param_1 + 0x25a) == 0)) ||
       ((*(ulong *)(param_1 + 0x262) < 5 ||
        ((pcVar21 = (char *)(*(long *)(param_1 + 0x25a) + *(long *)(param_1 + 0x260)),
         *pcVar21 != '\x17' ||
         (uVar26 = (ulong)*(ushort *)(pcVar21 + 3), lVar16 = lVar24 + 0x50,
         *(ulong *)(param_1 + 0x262) < (((uVar26 & 0xff00) << 0x28 | uVar26 << 0x38) >> 0x30) + 5)))
        ))) break;
  } while( true );
  if (((lVar2 == 0) && (param_1[0x3a5] == 0x14)) &&
     ((((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0 &&
         (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) ||
       (param_1[0x168] != 0)) &&
      ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) == 0 ||
       (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) == 0)))))) {
    if ((*(long *)((long)param_1 + lVar24 + 0xe98) == 1) &&
       (**(char **)((long)param_1 + lVar24 + 0xeb0) == '\x01')) {
      param_1[0x3a5] = 0x16;
      lVar15 = *(long *)(param_1 + 0x62e);
      *(ulong *)(param_1 + 0x62e) = lVar15 + 1U;
      if (lVar15 + 1U < 0x21) {
        *(undefined4 *)((long)param_1 + lVar24 + 0xec8) = 1;
        param_1[0x256] = 1;
        param_1[599] = 0;
        return 1;
      }
      uVar11 = 10;
      uVar12 = 0x106;
      uVar13 = 0x1e5;
    }
    else {
      uVar11 = 0x2f;
      uVar12 = 0x104;
      uVar13 = 0x1d9;
    }
  }
  else {
    if (((*(byte *)(*(long *)(param_1 + 0x2a) + 1) & 1) != 0) && (*(long *)(param_1 + 0x146) != 0))
    {
      FUN_0043b770();
      uVar8 = FUN_0043b720();
      if (0x40 < uVar8) {
        uVar11 = 0x50;
        uVar12 = 6;
        uVar13 = 0x1f8;
        goto LAB_003a7ca0;
      }
      uVar26 = (ulong)uVar8;
      lVar10 = lVar2 + 1;
      puVar23 = param_1 + 0x3a4;
      do {
        lVar16 = *(ulong *)(puVar23 + 2) - uVar26;
        if (*(ulong *)(puVar23 + 2) < uVar26) {
          uVar11 = 0x32;
          uVar12 = 0xa0;
          uVar13 = 0x201;
          goto LAB_003a7ca0;
        }
        *(long *)(puVar23 + 2) = lVar16;
        lVar24 = *(long *)(puVar23 + 8);
        iVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                          (param_1,puVar23,auStack_b0,0);
        if ((iVar7 == 0) || (iVar7 = FUN_003f6d80(auStack_b0,lVar24 + lVar16,uVar26), iVar7 != 0)) {
          uVar11 = 0x14;
          uVar12 = 0x119;
          uVar13 = 0x209;
          goto LAB_003a7ca0;
        }
        lVar10 = lVar10 + -1;
        puVar23 = puVar23 + 0x14;
      } while (lVar10 != 0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x3a6);
    iVar7 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))
                      (param_1,param_1 + 0x3a4,lVar15,0);
    if (iVar7 == 0) {
      iVar7 = FUN_003c39d0(param_1);
      if (iVar7 != 0) {
        return -1;
      }
      if ((lVar2 == 0) && (iVar7 = FUN_003c3a20(param_1), iVar7 != 0)) {
        iVar7 = FUN_003a6e30(param_1,*(undefined8 *)(param_1 + 0x3a6),0x68,0);
        goto joined_r0x003a7a50;
      }
      uVar11 = 0x14;
      uVar12 = 0x81;
      uVar13 = 0x233;
    }
    else {
      if ((((lVar18 != 0) && (*(long *)(param_1 + 0x140) != 0)) &&
          ((*(byte *)(*(long *)(param_1 + 0x2a) + 1) & 1) == 0)) &&
         (lVar10 = FUN_0043b770(*(undefined8 *)(param_1 + 0x146)), lVar10 != 0)) {
        FUN_0043b770(*(undefined8 *)(param_1 + 0x146));
        uVar8 = FUN_0043b720();
        if (0x40 < uVar8) {
          uVar11 = 0x50;
          uVar12 = 0x44;
          uVar13 = 0x24b;
          goto LAB_003a7ca0;
        }
        uVar26 = (ulong)(int)uVar8;
        lVar10 = lVar2 + 1;
        puVar23 = param_1 + 0x3a4;
        do {
          if (*(ulong *)(puVar23 + 4) < uVar26) {
LAB_003a7b78:
            uVar11 = 0x32;
            uVar12 = 0xa0;
            uVar13 = 0x25c;
            goto LAB_003a7ca0;
          }
          FUN_0043b170(*(undefined8 *)(param_1 + 0x140));
          uVar19 = FUN_0043b160();
          if (((uVar19 & 0xf0007) == 2) && (*(ulong *)(puVar23 + 4) < uVar26 + 1))
          goto LAB_003a7b78;
          FUN_0043b170(*(undefined8 *)(param_1 + 0x140));
          uVar19 = FUN_0043b160();
          if ((uVar19 & 0xf0007) == 2) {
            iVar9 = FUN_003a7cd0(auStack_f0,puVar23,uVar26);
            if (iVar9 == 0) {
              uVar11 = 0x50;
              uVar12 = 0x44;
              uVar13 = 0x26a;
              goto LAB_003a7ca0;
            }
            lVar16 = *(long *)(puVar23 + 2) - uVar26;
            puVar25 = auStack_f0;
          }
          else {
            lVar16 = *(long *)(puVar23 + 2) - uVar26;
            puVar25 = (undefined1 *)(*(long *)(puVar23 + 8) + lVar16);
          }
          *(long *)(puVar23 + 2) = lVar16;
          iVar9 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                            (param_1,puVar23,auStack_b0,0);
          if (((puVar25 == (undefined1 *)0x0) || (iVar9 == 0)) ||
             (iVar9 = FUN_003f6d80(auStack_b0,puVar25,uVar26), iVar9 != 0)) {
            iVar7 = -1;
          }
          puVar1 = (ulong *)(puVar23 + 2);
          puVar23 = puVar23 + 0x14;
          if (uVar26 + 0x4400 < *puVar1) {
            iVar7 = -1;
          }
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (-1 < iVar7) {
        lVar10 = 0;
        do {
          lVar16 = *(long *)(param_1 + 0x14a);
          if (lVar16 != 0) {
            uVar26 = *(ulong *)(param_1 + lVar10 * 0x14 + 0x3a6);
            if (uVar26 < 0x4401) {
              lVar18 = *(long *)(param_1 + lVar10 * 0x14 + 0x3b0);
              if (lVar18 == 0) {
                lVar18 = FUN_00452c30(0x4540,"external/openssl/ssl/record/ssl3_record.c",799);
                *(long *)(param_1 + lVar10 * 0x14 + 0x3b0) = lVar18;
                if (lVar18 != 0) {
                  lVar16 = *(long *)(param_1 + 0x14a);
                  uVar26 = *(ulong *)(param_1 + lVar10 * 0x14 + 0x3a6);
                  goto LAB_003a7654;
                }
              }
              else {
LAB_003a7654:
                uVar8 = FUN_003f4120(lVar16,lVar18,0x4000,
                                     *(undefined8 *)(param_1 + lVar10 * 0x14 + 0x3ac),uVar26);
                if (-1 < (int)uVar8) {
                  *(ulong *)(param_1 + lVar10 * 0x14 + 0x3a6) = (ulong)uVar8;
                  *(undefined8 *)(param_1 + lVar10 * 0x14 + 0x3ac) =
                       *(undefined8 *)(param_1 + lVar10 * 0x14 + 0x3b0);
                  goto LAB_003a767c;
                }
              }
              uVar12 = 0x6b;
              uVar13 = 0x2b5;
              uVar11 = 0x1e;
            }
            else {
              uVar11 = 0x16;
              uVar12 = 0x8c;
              uVar13 = 0x2b0;
            }
            goto LAB_003a7ca0;
          }
LAB_003a767c:
          piVar17 = *(int **)(param_1 + 2);
          uVar8 = *(uint *)(*(long *)(piVar17 + 0x30) + 0x60);
          if (((((uVar8 >> 3 & 1) == 0) && (0x303 < *piVar17)) && (*piVar17 != 0x10000)) &&
             ((*(long *)(param_1 + 0x140) != 0 && (param_1[lVar10 * 0x14 + 0x3a5] != 0x15)))) {
            if ((param_1[lVar10 * 0x14 + 0x3a5] != 0x17) ||
               (lVar16 = *(long *)(param_1 + lVar10 * 0x14 + 0x3a6), lVar16 == 0)) {
              uVar11 = 10;
              uVar12 = 0x1bb;
              uVar13 = 0x2c2;
              goto LAB_003a7ca0;
            }
            do {
              lVar16 = lVar16 + -1;
              if (lVar16 == 0) break;
            } while (*(char *)(*(long *)(param_1 + lVar10 * 0x14 + 0x3ac) + lVar16) == '\0');
            *(long *)(param_1 + lVar10 * 0x14 + 0x3a6) = lVar16;
            pbVar22 = (byte *)(*(long *)(param_1 + lVar10 * 0x14 + 0x3ac) + lVar16);
            uVar20 = (uint)*pbVar22;
            param_1[lVar10 * 0x14 + 0x3a5] = uVar20;
            if (2 < uVar20 - 0x15) {
              uVar11 = 10;
              uVar12 = 0x1bb;
              uVar13 = 0x2d1;
              goto LAB_003a7ca0;
            }
            if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
              (**(code **)(param_1 + 0x2e))
                        (0,*param_1,0x101,pbVar22,1,param_1,*(undefined8 *)(param_1 + 0x30));
              piVar17 = *(int **)(param_1 + 2);
              uVar8 = *(uint *)(*(long *)(piVar17 + 0x30) + 0x60);
            }
          }
          if ((((uVar8 >> 3 & 1) == 0) && (0x303 < *piVar17)) &&
             ((*piVar17 != 0x10000 &&
              ((param_1[lVar10 * 0x14 + 0x3a5] - 0x15 < 2 &&
               (*(long *)(param_1 + lVar10 * 0x14 + 0x3a6) == 0)))))) {
            uVar11 = 10;
            uVar12 = 0x10f;
            uVar13 = 0x2e2;
            goto LAB_003a7ca0;
          }
          uVar26 = *(ulong *)(param_1 + lVar10 * 0x14 + 0x3a6);
          if (0x4000 < uVar26) {
            uVar11 = 0x16;
            uVar12 = 0x92;
            uVar13 = 0x2e8;
            goto LAB_003a7ca0;
          }
          if (((*(long *)(param_1 + 0x174) != 0) &&
              (uVar8 = *(byte *)(*(long *)(param_1 + 0x174) + 0x250) - 1, uVar8 < 4)) &&
             ((uint)(0x200 << (ulong)(uVar8 & 0x1f)) < uVar26)) {
            uVar11 = 0x16;
            uVar12 = 0x92;
            uVar13 = 0x2f0;
            goto LAB_003a7ca0;
          }
          (param_1 + lVar10 * 0x14 + 0x3aa)[0] = 0;
          (param_1 + lVar10 * 0x14 + 0x3aa)[1] = 0;
          if (uVar26 == 0) {
            lVar16 = *(long *)(param_1 + 0x62e);
            *(ulong *)(param_1 + 0x62e) = lVar16 + 1U;
            if (0x20 < lVar16 + 1U) {
              uVar11 = 10;
              uVar12 = 0x12a;
              uVar13 = 0x303;
              goto LAB_003a7ca0;
            }
          }
          else {
            param_1[0x62e] = 0;
            param_1[0x62f] = 0;
          }
          bVar6 = lVar10 == lVar2;
          lVar10 = lVar10 + 1;
          if (bVar6) {
            if (((param_1[0x21] == 0xb) && (param_1[0x3a5] == 0x17)) &&
               (iVar7 = FUN_003a6e30(param_1,*(undefined8 *)(param_1 + 0x3a6),0,0), iVar7 == 0)) {
              return -1;
            }
            *(long *)(param_1 + 0x256) = lVar15;
            return 1;
          }
        } while( true );
      }
      iVar7 = FUN_003c39d0(param_1);
      if (iVar7 != 0) {
        return -1;
      }
      if ((lVar2 == 0) && (iVar7 = FUN_003c3a20(param_1), iVar7 != 0)) {
        iVar7 = FUN_003a6e30(param_1,uVar11,0x68,0);
joined_r0x003a7a50:
        if (iVar7 == 0) {
          return -1;
        }
        param_1[0x3a6] = 0;
        param_1[0x3a7] = 0;
        param_1[0x3b2] = 1;
        param_1[0x256] = 1;
        param_1[599] = 0;
        FUN_003a4510(param_1 + 0x252);
        return 1;
      }
      uVar11 = 0x14;
      uVar12 = 0x119;
      uVar13 = 0x2a5;
    }
  }
LAB_003a7ca0:
  FUN_003c3950(param_1,uVar11,0x8f,uVar12,"external/openssl/ssl/record/ssl3_record.c",uVar13);
  return -1;
}


