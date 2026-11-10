/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004cbb40; name: FUN_004cbb40
 */


byte * FUN_004cbb40(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  puVar2 = (ulong *)(param_1 + 8);
  puVar3 = (undefined8 *)(param_1 + 0xb8);
  puVar4 = (undefined8 *)(param_1 + 0xb0);
LAB_004cbba0:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar20 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar20._0_8_;
      if ((auVar20._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar7 = *param_2;
    auVar20[8] = bVar7;
    auVar20._0_8_ = param_2 + 1;
    auVar20._9_7_ = 0;
    if ((char)bVar7 < '\0') {
      bVar6 = param_2[1];
      if ((char)bVar6 < '\0') {
        auVar20 = FUN_0052e560(param_2);
        if (auVar20._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar20._8_4_ = (uint)bVar7 + (uint)bVar6 * 0x80 + -0x80;
        auVar20._0_8_ = param_2 + 2;
        auVar20._12_4_ = 0;
      }
    }
    param_2 = auVar20._0_8_;
    uVar17 = auVar20._8_4_;
    switch((uint)(auVar20._8_8_ >> 3) & 0x1fffffff) {
    case 1:
      if ((uVar17 & 0xff) != 10) break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar14 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar14 = (ulong *)*puVar14;
      }
      puVar12 = (undefined *)*puVar4;
      if (puVar12 == PTR_DAT_047cba80) {
        FUN_001fcdc8(puVar4,puVar14,PTR_DAT_047cba80);
        puVar12 = (undefined *)*puVar4;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar12,param_2,param_3);
      goto joined_r0x004cc064;
    case 2:
      if ((uVar17 & 0xff) == 0x12) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        puVar14 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar14 = (ulong *)*puVar14;
        }
        puVar12 = (undefined *)*puVar3;
        if (puVar12 == PTR_DAT_047cba80) {
          FUN_001fcdc8(puVar3,puVar14,PTR_DAT_047cba80);
          puVar12 = (undefined *)*puVar3;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar12,param_2,param_3);
        goto joined_r0x004cc064;
      }
      break;
    case 3:
      if ((uVar17 & 0xff) == 0x1a) {
        param_2 = param_2 + -1;
        do {
          piVar15 = *(int **)(param_1 + 0x28);
          if (piVar15 == (int *)0x0) {
            iVar16 = *(int *)(param_1 + 0x24);
LAB_004cbcd0:
            FUN_00532334((long *)(param_1 + 0x18),iVar16 + 1);
            piVar15 = *(int **)(param_1 + 0x28);
            iVar16 = *piVar15;
LAB_004cbce4:
            *piVar15 = iVar16 + 1;
            lVar13 = *(long *)(param_1 + 0x18);
            if (lVar13 == 0) {
              puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
              if (puVar11 != (undefined8 *)0x0) goto LAB_004cbd28;
            }
            else {
              if (*(long *)(lVar13 + 0x70) != 0) {
                FUN_00520d08(lVar13,0,0x18);
              }
              puVar11 = (undefined8 *)FUN_00520544(lVar13,0x18,PTR_LAB_047cba90);
LAB_004cbd28:
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
            }
            iVar16 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar16 + 1;
            *(undefined8 **)(*(long *)(param_1 + 0x28) + (long)iVar16 * 8 + 8) = puVar11;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x20);
            iVar16 = *piVar15;
            if (iVar16 <= iVar8) {
              if (iVar16 == *(int *)(param_1 + 0x24)) goto LAB_004cbcd0;
              goto LAB_004cbce4;
            }
            *(int *)(param_1 + 0x20) = iVar8 + 1;
            puVar11 = *(undefined8 **)(piVar15 + (long)iVar8 * 2 + 2);
          }
          param_2 = (byte *)FUN_0052e7f0(puVar11,param_2 + 1,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x1a));
        goto LAB_004cbba0;
      }
      break;
    case 4:
      if ((uVar17 & 0xff) == 0x22) {
        param_2 = param_2 + -1;
        do {
          piVar15 = *(int **)(param_1 + 0x40);
          pbVar5 = param_2 + 1;
          if (piVar15 == (int *)0x0) {
            iVar16 = *(int *)(param_1 + 0x3c);
LAB_004cc0dc:
            FUN_00532334(param_1 + 0x30,iVar16 + 1);
            piVar15 = *(int **)(param_1 + 0x40);
            iVar16 = *piVar15;
LAB_004cc0f0:
            *piVar15 = iVar16 + 1;
            uVar18 = FUN_004e64b4(*(undefined8 *)(param_1 + 0x30));
            iVar16 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar16 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar16 * 8 + 8) = uVar18;
            bVar7 = *pbVar5;
            if ((char)bVar7 < '\0') goto LAB_004cc0b4;
LAB_004cc128:
            auVar23[8] = bVar7;
            auVar23._0_8_ = param_2 + 2;
            auVar23._9_3_ = 0;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x38);
            iVar16 = *piVar15;
            if (iVar16 <= iVar8) {
              if (iVar16 == *(int *)(param_1 + 0x3c)) goto LAB_004cc0dc;
              goto LAB_004cc0f0;
            }
            *(int *)(param_1 + 0x38) = iVar8 + 1;
            uVar18 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
            bVar7 = *pbVar5;
            if (-1 < (char)bVar7) goto LAB_004cc128;
LAB_004cc0b4:
            auVar23 = FUN_0052e5f0(pbVar5);
            if (auVar23._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar17 = auVar23._8_4_ + (auVar23._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
          uVar19 = param_3[0xb];
          iVar16 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          *(int *)(param_3 + 0xb) = (int)uVar19 + -1;
          if ((int)uVar19 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d0364(uVar18,auVar23._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar17 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar17);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          pbVar5 = (byte *)(param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f));
          *param_3 = (ulong)pbVar5;
        } while ((param_2 < pbVar5) && (*param_2 == 0x22));
        goto LAB_004cbba0;
      }
      break;
    case 5:
      if ((uVar17 & 0xff) == 0x2a) {
        param_2 = param_2 + -1;
        do {
          piVar15 = *(int **)(param_1 + 0x58);
          pbVar5 = param_2 + 1;
          if (piVar15 == (int *)0x0) {
            iVar16 = *(int *)(param_1 + 0x54);
LAB_004cbdfc:
            FUN_00532334(param_1 + 0x48,iVar16 + 1);
            piVar15 = *(int **)(param_1 + 0x58);
            iVar16 = *piVar15;
LAB_004cbe10:
            *piVar15 = iVar16 + 1;
            uVar18 = FUN_004e6890(*(undefined8 *)(param_1 + 0x48));
            iVar16 = *(int *)(param_1 + 0x50);
            *(int *)(param_1 + 0x50) = iVar16 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)iVar16 * 8 + 8) = uVar18;
            bVar7 = *pbVar5;
            if ((char)bVar7 < '\0') goto LAB_004cbdd4;
LAB_004cbe48:
            auVar21[8] = bVar7;
            auVar21._0_8_ = param_2 + 2;
            auVar21._9_3_ = 0;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x50);
            iVar16 = *piVar15;
            if (iVar16 <= iVar8) {
              if (iVar16 == *(int *)(param_1 + 0x54)) goto LAB_004cbdfc;
              goto LAB_004cbe10;
            }
            *(int *)(param_1 + 0x50) = iVar8 + 1;
            uVar18 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
            bVar7 = *pbVar5;
            if (-1 < (char)bVar7) goto LAB_004cbe48;
LAB_004cbdd4:
            auVar21 = FUN_0052e5f0(pbVar5);
            if (auVar21._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar17 = auVar21._8_4_ + (auVar21._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
          uVar19 = param_3[0xb];
          iVar16 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          *(int *)(param_3 + 0xb) = (int)uVar19 + -1;
          if ((int)uVar19 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d6814(uVar18,auVar21._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar17 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar17);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          pbVar5 = (byte *)(param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f));
          *param_3 = (ulong)pbVar5;
        } while ((param_2 < pbVar5) && (*param_2 == 0x2a));
        goto LAB_004cbba0;
      }
      break;
    case 6:
      if ((uVar17 & 0xff) == 0x32) {
        param_2 = param_2 + -1;
        do {
          piVar15 = *(int **)(param_1 + 0x70);
          pbVar5 = param_2 + 1;
          if (piVar15 == (int *)0x0) {
            iVar16 = *(int *)(param_1 + 0x6c);
LAB_004cc230:
            FUN_00532334(param_1 + 0x60,iVar16 + 1);
            piVar15 = *(int **)(param_1 + 0x70);
            iVar16 = *piVar15;
LAB_004cc244:
            *piVar15 = iVar16 + 1;
            uVar18 = FUN_004e69e4(*(undefined8 *)(param_1 + 0x60));
            iVar16 = *(int *)(param_1 + 0x68);
            *(int *)(param_1 + 0x68) = iVar16 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar16 * 8 + 8) = uVar18;
            bVar7 = *pbVar5;
            if ((char)bVar7 < '\0') goto LAB_004cc208;
LAB_004cc27c:
            auVar24[8] = bVar7;
            auVar24._0_8_ = param_2 + 2;
            auVar24._9_3_ = 0;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x68);
            iVar16 = *piVar15;
            if (iVar16 <= iVar8) {
              if (iVar16 == *(int *)(param_1 + 0x6c)) goto LAB_004cc230;
              goto LAB_004cc244;
            }
            *(int *)(param_1 + 0x68) = iVar8 + 1;
            uVar18 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
            bVar7 = *pbVar5;
            if (-1 < (char)bVar7) goto LAB_004cc27c;
LAB_004cc208:
            auVar24 = FUN_0052e5f0(pbVar5);
            if (auVar24._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar17 = auVar24._8_4_ + (auVar24._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
          uVar19 = param_3[0xb];
          iVar16 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          *(int *)(param_3 + 0xb) = (int)uVar19 + -1;
          if ((int)uVar19 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d8e78(uVar18,auVar24._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar17 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar17);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          pbVar5 = (byte *)(param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f));
          *param_3 = (ulong)pbVar5;
        } while ((param_2 < pbVar5) && (*param_2 == 0x32));
        goto LAB_004cbba0;
      }
      break;
    case 7:
      if ((uVar17 & 0xff) == 0x3a) {
        param_2 = param_2 + -1;
        do {
          piVar15 = *(int **)(param_1 + 0x88);
          pbVar5 = param_2 + 1;
          if (piVar15 == (int *)0x0) {
            iVar16 = *(int *)(param_1 + 0x84);
LAB_004cc384:
            FUN_00532334(param_1 + 0x78,iVar16 + 1);
            piVar15 = *(int **)(param_1 + 0x88);
            iVar16 = *piVar15;
LAB_004cc398:
            *piVar15 = iVar16 + 1;
            uVar18 = FUN_004e6678(*(undefined8 *)(param_1 + 0x78));
            iVar16 = *(int *)(param_1 + 0x80);
            *(int *)(param_1 + 0x80) = iVar16 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x88) + (long)iVar16 * 8 + 8) = uVar18;
            bVar7 = *pbVar5;
            if ((char)bVar7 < '\0') goto LAB_004cc35c;
LAB_004cc3d0:
            auVar25[8] = bVar7;
            auVar25._0_8_ = param_2 + 2;
            auVar25._9_3_ = 0;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x80);
            iVar16 = *piVar15;
            if (iVar16 <= iVar8) {
              if (iVar16 == *(int *)(param_1 + 0x84)) goto LAB_004cc384;
              goto LAB_004cc398;
            }
            *(int *)(param_1 + 0x80) = iVar8 + 1;
            uVar18 = *(undefined8 *)(piVar15 + (long)iVar8 * 2 + 2);
            bVar7 = *pbVar5;
            if (-1 < (char)bVar7) goto LAB_004cc3d0;
LAB_004cc35c:
            auVar25 = FUN_0052e5f0(pbVar5);
            if (auVar25._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar17 = auVar25._8_4_ + (auVar25._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
          uVar19 = param_3[0xb];
          iVar16 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          *(int *)(param_3 + 0xb) = (int)uVar19 + -1;
          if ((int)uVar19 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d37dc(uVar18,auVar25._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar17 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar17);
          *(uint *)((long)param_3 + 0x1c) = uVar17;
          pbVar5 = (byte *)(param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f));
          *param_3 = (ulong)pbVar5;
        } while ((param_2 < pbVar5) && (*param_2 == 0x3a));
        goto LAB_004cbba0;
      }
      break;
    case 8:
      if ((uVar17 & 0xff) == 0x42) {
        lVar13 = *(long *)(param_1 + 200);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        if (lVar13 == 0) {
          puVar14 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) != 0) {
            puVar14 = (ulong *)*puVar14;
          }
          lVar13 = FUN_004e6bc8(puVar14);
          *(long *)(param_1 + 200) = lVar13;
          bVar7 = *param_2;
          if (-1 < (char)bVar7) goto LAB_004cc494;
LAB_004cc5ac:
          auVar27 = FUN_0052e5f0(param_2);
          if (auVar27._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          bVar7 = *param_2;
          if ((char)bVar7 < '\0') goto LAB_004cc5ac;
LAB_004cc494:
          auVar27[8] = bVar7;
          auVar27._0_8_ = param_2 + 1;
          auVar27._9_3_ = 0;
        }
        uVar17 = auVar27._8_4_ + (auVar27._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
        uVar19 = param_3[0xb];
        iVar16 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar17;
        *(int *)(param_3 + 0xb) = (int)uVar19 + -1;
        if ((int)uVar19 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_004db440(lVar13,auVar27._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
LAB_004cc680:
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar17 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar17);
        *(uint *)((long)param_3 + 0x1c) = uVar17;
        *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
        goto LAB_004cbba0;
      }
      break;
    case 9:
      if ((uVar17 & 0xff) == 0x4a) {
        lVar13 = *(long *)(param_1 + 0xd0);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
        if (lVar13 == 0) {
          puVar14 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) != 0) {
            puVar14 = (ulong *)*puVar14;
          }
          lVar13 = FUN_004e785c(puVar14);
          *(long *)(param_1 + 0xd0) = lVar13;
          bVar7 = *param_2;
          if (-1 < (char)bVar7) goto LAB_004cc4c8;
LAB_004cc62c:
          auVar28 = FUN_0052e5f0(param_2);
          if (auVar28._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          bVar7 = *param_2;
          if ((char)bVar7 < '\0') goto LAB_004cc62c;
LAB_004cc4c8:
          auVar28[8] = bVar7;
          auVar28._0_8_ = param_2 + 1;
          auVar28._9_3_ = 0;
        }
        uVar17 = auVar28._8_4_ + (auVar28._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
        uVar19 = param_3[0xb];
        iVar16 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar17;
        *(int *)(param_3 + 0xb) = (int)uVar19 + -1;
        if ((int)uVar19 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_004e469c(lVar13,auVar28._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        goto LAB_004cc680;
      }
      break;
    case 10:
      if ((uVar17 & 0xff) == 0x50) {
        param_2 = param_2 + -1;
        do {
          bVar7 = param_2[1];
          if ((char)bVar7 < '\0') {
            iVar16 = (uint)bVar7 + (uint)param_2[2] * 0x80 + -0x80;
            if ((char)param_2[2] < '\0') {
              auVar22 = FUN_0052e420(param_2 + 1,iVar16);
              uVar17 = *(uint *)(param_1 + 0x90);
              uVar19 = (ulong)uVar17;
              iVar16 = uVar17 + 1;
              auVar9 = auVar22;
              if (uVar17 == *(uint *)(param_1 + 0x94)) goto LAB_004cbf10;
            }
            else {
              auVar22._8_4_ = iVar16;
              auVar22._0_8_ = param_2 + 3;
              uVar17 = *(uint *)(param_1 + 0x90);
              uVar19 = (ulong)uVar17;
              iVar16 = uVar17 + 1;
              auVar9 = auVar22;
              if (uVar17 == *(uint *)(param_1 + 0x94)) {
LAB_004cbf10:
                auVar22 = auVar9;
                FUN_00531134(param_1 + 0x90,iVar16);
              }
            }
          }
          else {
            auVar9[8] = bVar7;
            auVar9._0_8_ = param_2 + 2;
            auVar9._9_3_ = 0;
            auVar22[8] = bVar7;
            auVar22._0_8_ = param_2 + 2;
            auVar22._9_3_ = 0;
            uVar17 = *(uint *)(param_1 + 0x90);
            uVar19 = (ulong)uVar17;
            iVar16 = uVar17 + 1;
            if (uVar17 == *(uint *)(param_1 + 0x94)) goto LAB_004cbf10;
          }
          param_2 = auVar22._0_8_;
          *(int *)(*(long *)(param_1 + 0x98) + uVar19 * 4) = auVar22._8_4_;
          *(int *)(param_1 + 0x90) = iVar16;
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x50));
        goto LAB_004cbba0;
      }
      if ((uVar17 & 0xff) == 0x52) {
        param_2 = (byte *)FUN_0052e900(param_1 + 0x90,param_2,param_3);
        goto joined_r0x004cc064;
      }
      break;
    case 0xb:
      if ((uVar17 & 0xff) == 0x58) {
        param_2 = param_2 + -1;
        do {
          bVar7 = param_2[1];
          if ((char)bVar7 < '\0') {
            iVar16 = (uint)bVar7 + (uint)param_2[2] * 0x80 + -0x80;
            if ((char)param_2[2] < '\0') {
              auVar26 = FUN_0052e420(param_2 + 1,iVar16);
              uVar17 = *(uint *)(param_1 + 0xa0);
              uVar19 = (ulong)uVar17;
              iVar16 = uVar17 + 1;
              auVar10 = auVar26;
              if (uVar17 == *(uint *)(param_1 + 0xa4)) goto LAB_004cc500;
            }
            else {
              auVar26._8_4_ = iVar16;
              auVar26._0_8_ = param_2 + 3;
              uVar17 = *(uint *)(param_1 + 0xa0);
              uVar19 = (ulong)uVar17;
              iVar16 = uVar17 + 1;
              auVar10 = auVar26;
              if (uVar17 == *(uint *)(param_1 + 0xa4)) {
LAB_004cc500:
                auVar26 = auVar10;
                FUN_00531134(param_1 + 0xa0,iVar16);
              }
            }
          }
          else {
            auVar10[8] = bVar7;
            auVar10._0_8_ = param_2 + 2;
            auVar10._9_3_ = 0;
            auVar26[8] = bVar7;
            auVar26._0_8_ = param_2 + 2;
            auVar26._9_3_ = 0;
            uVar17 = *(uint *)(param_1 + 0xa0);
            uVar19 = (ulong)uVar17;
            iVar16 = uVar17 + 1;
            if (uVar17 == *(uint *)(param_1 + 0xa4)) goto LAB_004cc500;
          }
          param_2 = auVar26._0_8_;
          *(int *)(*(long *)(param_1 + 0xa8) + uVar19 * 4) = auVar26._8_4_;
          *(int *)(param_1 + 0xa0) = iVar16;
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x58));
        goto LAB_004cbba0;
      }
      if ((uVar17 & 0xff) == 0x5a) {
        param_2 = (byte *)FUN_0052e900(param_1 + 0xa0,param_2,param_3);
        goto joined_r0x004cc064;
      }
      break;
    case 0xc:
      if ((uVar17 & 0xff) == 0x62) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        puVar14 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar14 = (ulong *)*puVar14;
        }
        puVar12 = (undefined *)*puVar1;
        if (puVar12 == PTR_DAT_047cba80) {
          FUN_001fcdc8(puVar1,puVar14,PTR_DAT_047cba80);
          puVar12 = (undefined *)*puVar1;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar12,param_2,param_3);
        goto joined_r0x004cc064;
      }
    }
    if ((uVar17 == 0) || ((uVar17 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar17 - 1;
      return param_2;
    }
    if ((*puVar2 & 1) == 0) {
      lVar13 = FUN_00264e54(puVar2);
    }
    else {
      lVar13 = (*puVar2 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_00515960(auVar20._8_8_ & 0xffffffff,lVar13,param_2,param_3);
joined_r0x004cc064:
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


