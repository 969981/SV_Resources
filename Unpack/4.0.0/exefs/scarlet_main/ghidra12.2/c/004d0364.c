/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d0364; name: FUN_004d0364
 */


byte * FUN_004d0364(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar12;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  
  puVar1 = (ulong *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 0xd8);
LAB_004d03c0:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar16 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar16._0_8_;
      if ((auVar16._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar5 = *param_2;
    auVar16[8] = bVar5;
    auVar16._0_8_ = param_2 + 1;
    auVar16._9_7_ = 0;
    if ((char)bVar5 < '\0') {
      bVar4 = param_2[1];
      if ((char)bVar4 < '\0') {
        auVar16 = FUN_0052e560(param_2);
        if (auVar16._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar16._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
        auVar16._0_8_ = param_2 + 2;
        auVar16._12_4_ = 0;
      }
    }
    param_2 = auVar16._0_8_;
    uVar12 = auVar16._8_4_;
    switch((uint)(auVar16._8_8_ >> 3) & 0x1fffffff) {
    case 1:
      if ((uVar12 & 0xff) != 10) break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar10 = (ulong *)*puVar10;
      }
      puVar8 = (undefined *)*puVar2;
      if (puVar8 == PTR_DAT_047cba80) {
        FUN_001fcdc8(puVar2,puVar10,PTR_DAT_047cba80);
        puVar8 = (undefined *)*puVar2;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar8,param_2,param_3);
      goto joined_r0x004d0494;
    case 2:
      if ((uVar12 & 0xff) == 0x12) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0x28);
          pbVar3 = param_2 + 1;
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0x24);
LAB_004d050c:
            FUN_00532334(param_1 + 0x18,iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0x28);
            iVar14 = *piVar13;
LAB_004d0520:
            *piVar13 = iVar14 + 1;
            uVar15 = FUN_004e6678(*(undefined8 *)(param_1 + 0x18));
            iVar14 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar14 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar14 * 8 + 8) = uVar15;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d04e4;
LAB_004d0558:
            auVar17[8] = bVar5;
            auVar17._0_8_ = param_2 + 2;
            auVar17._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x20);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0x24)) goto LAB_004d050c;
              goto LAB_004d0520;
            }
            *(int *)(param_1 + 0x20) = iVar6 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d0558;
LAB_004d04e4:
            auVar17 = FUN_0052e5f0(pbVar3);
            if (auVar17._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar12 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar14 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d37dc(uVar15,auVar17._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar12);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x12));
        goto LAB_004d03c0;
      }
      break;
    case 3:
      if ((uVar12 & 0xff) == 0x1a) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0x40);
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0x3c);
LAB_004d0644:
            FUN_00532334(param_1 + 0x30,iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0x40);
            iVar14 = *piVar13;
LAB_004d0658:
            *piVar13 = iVar14 + 1;
            uVar15 = FUN_004e64b4(*(undefined8 *)(param_1 + 0x30));
            iVar14 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar14 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar14 * 8 + 8) = uVar15;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x38);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0x3c)) goto LAB_004d0644;
              goto LAB_004d0658;
            }
            *(int *)(param_1 + 0x38) = iVar6 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
          }
          param_2 = (byte *)FUN_004cc7ec(param_3,uVar15,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x1a));
        goto LAB_004d03c0;
      }
      break;
    case 4:
      if ((uVar12 & 0xff) == 0x22) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0x58);
          pbVar3 = param_2 + 1;
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0x54);
LAB_004d0724:
            FUN_00532334(param_1 + 0x48,iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0x58);
            iVar14 = *piVar13;
LAB_004d0738:
            *piVar13 = iVar14 + 1;
            uVar15 = FUN_004e6890(*(undefined8 *)(param_1 + 0x48));
            iVar14 = *(int *)(param_1 + 0x50);
            *(int *)(param_1 + 0x50) = iVar14 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)iVar14 * 8 + 8) = uVar15;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d06fc;
LAB_004d0770:
            auVar18[8] = bVar5;
            auVar18._0_8_ = param_2 + 2;
            auVar18._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x50);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0x54)) goto LAB_004d0724;
              goto LAB_004d0738;
            }
            *(int *)(param_1 + 0x50) = iVar6 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d0770;
LAB_004d06fc:
            auVar18 = FUN_0052e5f0(pbVar3);
            if (auVar18._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar12 = auVar18._8_4_ + (auVar18._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar14 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d6814(uVar15,auVar18._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar12);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x22));
        goto LAB_004d03c0;
      }
      break;
    case 5:
      if ((uVar12 & 0xff) == 0x2a) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0x70);
          pbVar3 = param_2 + 1;
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0x6c);
LAB_004d0878:
            FUN_00532334(param_1 + 0x60,iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0x70);
            iVar14 = *piVar13;
LAB_004d088c:
            *piVar13 = iVar14 + 1;
            uVar15 = FUN_004e6384(*(undefined8 *)(param_1 + 0x60));
            iVar14 = *(int *)(param_1 + 0x68);
            *(int *)(param_1 + 0x68) = iVar14 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar14 * 8 + 8) = uVar15;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d0850;
LAB_004d08c4:
            auVar19[8] = bVar5;
            auVar19._0_8_ = param_2 + 2;
            auVar19._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x68);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0x6c)) goto LAB_004d0878;
              goto LAB_004d088c;
            }
            *(int *)(param_1 + 0x68) = iVar6 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d08c4;
LAB_004d0850:
            auVar19 = FUN_0052e5f0(pbVar3);
            if (auVar19._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar12 = auVar19._8_4_ + (auVar19._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar14 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004ce834(uVar15,auVar19._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar12);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x2a));
        goto LAB_004d03c0;
      }
      break;
    case 6:
      if ((uVar12 & 0xff) == 0x32) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0x88);
          pbVar3 = param_2 + 1;
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0x84);
LAB_004d09cc:
            FUN_00532334(param_1 + 0x78,iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0x88);
            iVar14 = *piVar13;
LAB_004d09e0:
            *piVar13 = iVar14 + 1;
            uVar15 = FUN_004e6678(*(undefined8 *)(param_1 + 0x78));
            iVar14 = *(int *)(param_1 + 0x80);
            *(int *)(param_1 + 0x80) = iVar14 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x88) + (long)iVar14 * 8 + 8) = uVar15;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d09a4;
LAB_004d0a18:
            auVar20[8] = bVar5;
            auVar20._0_8_ = param_2 + 2;
            auVar20._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x80);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0x84)) goto LAB_004d09cc;
              goto LAB_004d09e0;
            }
            *(int *)(param_1 + 0x80) = iVar6 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d0a18;
LAB_004d09a4:
            auVar20 = FUN_0052e5f0(pbVar3);
            if (auVar20._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar12 = auVar20._8_4_ + (auVar20._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar14 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d37dc(uVar15,auVar20._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar12);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x32));
        goto LAB_004d03c0;
      }
      break;
    case 7:
      if ((uVar12 & 0xff) == 0x3a) {
        lVar11 = *(long *)(param_1 + 0xe0);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if (lVar11 == 0) {
          puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar10 = (ulong *)*puVar10;
          }
          lVar11 = FUN_004e6c50(puVar10);
          *(long *)(param_1 + 0xe0) = lVar11;
          bVar5 = *param_2;
          if (-1 < (char)bVar5) goto LAB_004d0adc;
LAB_004d0f08:
          auVar23 = FUN_0052e5f0(param_2);
          if (auVar23._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          bVar5 = *param_2;
          if ((char)bVar5 < '\0') goto LAB_004d0f08;
LAB_004d0adc:
          auVar23[8] = bVar5;
          auVar23._0_8_ = param_2 + 1;
          auVar23._9_3_ = 0;
        }
        uVar12 = auVar23._8_4_ + (auVar23._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
        uVar7 = param_3[0xb];
        iVar14 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar12;
        *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
        if ((int)uVar7 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_004dd0a4(lVar11,auVar23._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar12);
        *(uint *)((long)param_3 + 0x1c) = uVar12;
        *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
        goto LAB_004d03c0;
      }
      break;
    case 8:
      if ((uVar12 & 0xff) == 0x42) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0xa0);
          pbVar3 = param_2 + 1;
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0x9c);
LAB_004d0b54:
            FUN_00532334(param_1 + 0x90,iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0xa0);
            iVar14 = *piVar13;
LAB_004d0b68:
            *piVar13 = iVar14 + 1;
            uVar15 = FUN_004e6758(*(undefined8 *)(param_1 + 0x90));
            iVar14 = *(int *)(param_1 + 0x98);
            *(int *)(param_1 + 0x98) = iVar14 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar14 * 8 + 8) = uVar15;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d0b2c;
LAB_004d0ba0:
            auVar21[8] = bVar5;
            auVar21._0_8_ = param_2 + 2;
            auVar21._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x98);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0x9c)) goto LAB_004d0b54;
              goto LAB_004d0b68;
            }
            *(int *)(param_1 + 0x98) = iVar6 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d0ba0;
LAB_004d0b2c:
            auVar21 = FUN_0052e5f0(pbVar3);
            if (auVar21._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar12 = auVar21._8_4_ + (auVar21._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar14 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004d51b4(uVar15,auVar21._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar12);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x42));
        goto LAB_004d03c0;
      }
      break;
    case 9:
      if ((uVar12 & 0xff) == 0x4a) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0xb8);
          pbVar3 = param_2 + 1;
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0xb4);
LAB_004d0ca8:
            FUN_00532334(param_1 + 0xa8,iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0xb8);
            iVar14 = *piVar13;
LAB_004d0cbc:
            *piVar13 = iVar14 + 1;
            uVar15 = FUN_004e6444(*(undefined8 *)(param_1 + 0xa8));
            iVar14 = *(int *)(param_1 + 0xb0);
            *(int *)(param_1 + 0xb0) = iVar14 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)iVar14 * 8 + 8) = uVar15;
            bVar5 = *pbVar3;
            if ((char)bVar5 < '\0') goto LAB_004d0c80;
LAB_004d0cf4:
            auVar22[8] = bVar5;
            auVar22._0_8_ = param_2 + 2;
            auVar22._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0xb0);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0xb4)) goto LAB_004d0ca8;
              goto LAB_004d0cbc;
            }
            *(int *)(param_1 + 0xb0) = iVar6 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar3;
            if (-1 < (char)bVar5) goto LAB_004d0cf4;
LAB_004d0c80:
            auVar22 = FUN_0052e5f0(pbVar3);
            if (auVar22._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar12 = auVar22._8_4_ + (auVar22._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar14 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004cf3e0(uVar15,auVar22._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar14 - uVar12);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar3 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar3;
        } while ((param_2 < pbVar3) && (*param_2 == 0x4a));
        goto LAB_004d03c0;
      }
      break;
    case 10:
      if ((uVar12 & 0xff) == 0x52) {
        param_2 = param_2 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0xd0);
          if (piVar13 == (int *)0x0) {
            iVar14 = *(int *)(param_1 + 0xcc);
LAB_004d0de0:
            FUN_00532334((long *)(param_1 + 0xc0),iVar14 + 1);
            piVar13 = *(int **)(param_1 + 0xd0);
            iVar14 = *piVar13;
LAB_004d0df4:
            *piVar13 = iVar14 + 1;
            lVar11 = *(long *)(param_1 + 0xc0);
            if (lVar11 == 0) {
              puVar9 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
              if (puVar9 != (undefined8 *)0x0) goto LAB_004d0e38;
            }
            else {
              if (*(long *)(lVar11 + 0x70) != 0) {
                FUN_00520d08(lVar11,0,0x18);
              }
              puVar9 = (undefined8 *)FUN_00520544(lVar11,0x18,PTR_LAB_047cba90);
LAB_004d0e38:
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
            }
            iVar14 = *(int *)(param_1 + 200);
            *(int *)(param_1 + 200) = iVar14 + 1;
            *(undefined8 **)(*(long *)(param_1 + 0xd0) + (long)iVar14 * 8 + 8) = puVar9;
          }
          else {
            iVar6 = *(int *)(param_1 + 200);
            iVar14 = *piVar13;
            if (iVar14 <= iVar6) {
              if (iVar14 == *(int *)(param_1 + 0xcc)) goto LAB_004d0de0;
              goto LAB_004d0df4;
            }
            *(int *)(param_1 + 200) = iVar6 + 1;
            puVar9 = *(undefined8 **)(piVar13 + (long)iVar6 * 2 + 2);
          }
          param_2 = (byte *)FUN_0052e7f0(puVar9,param_2 + 1,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x52));
        goto LAB_004d03c0;
      }
    }
    if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar12 - 1;
      return param_2;
    }
    if ((*puVar1 & 1) == 0) {
      lVar11 = FUN_00264e54(puVar1);
    }
    else {
      lVar11 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_00515960(auVar16._8_8_ & 0xffffffff,lVar11,param_2,param_3);
joined_r0x004d0494:
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


