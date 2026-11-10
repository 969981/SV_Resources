/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004db440; name: FUN_004db440
 */


byte * FUN_004db440(long param_1,byte *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  long *plVar11;
  ulong *puVar12;
  byte *pbVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  uint uVar20;
  ulong *puVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  
  puVar17 = PTR_DAT_047cba80;
  plVar1 = (long *)(param_1 + 0x90);
  plVar2 = (long *)(param_1 + 0x88);
  plVar3 = (long *)(param_1 + 0x80);
  plVar4 = (long *)(param_1 + 0x78);
  plVar5 = (long *)(param_1 + 0x70);
  plVar6 = (long *)(param_1 + 0x68);
  plVar7 = (long *)(param_1 + 0x60);
  plVar8 = (long *)(param_1 + 0x58);
  plVar9 = (long *)(param_1 + 0x50);
  uVar25 = 0;
  puVar10 = (uint *)(param_1 + 0x28);
  plVar11 = (long *)(param_1 + 0x48);
  puVar12 = (ulong *)(param_1 + 8);
LAB_004db4cc:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004dc040;
      auVar28 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar28._0_8_;
      if ((auVar28._8_8_ & 1) != 0) goto LAB_004dc040;
    }
    bVar15 = *param_2;
    auVar28[8] = bVar15;
    auVar28._0_8_ = param_2 + 1;
    auVar28._9_7_ = 0;
    if ((char)bVar15 < '\0') {
      bVar14 = param_2[1];
      if ((char)bVar14 < '\0') {
        auVar28 = FUN_0052e560(param_2);
        param_2 = (byte *)0x0;
        if (auVar28._0_8_ == 0) goto LAB_004dc040;
      }
      else {
        auVar28._8_4_ = (uint)bVar15 + (uint)bVar14 * 0x80 + -0x80;
        auVar28._0_8_ = param_2 + 2;
        auVar28._12_4_ = 0;
      }
    }
    param_2 = auVar28._0_8_;
    uVar23 = (uint)(auVar28._8_8_ >> 3) & 0x1fffffff;
    uVar20 = auVar28._8_4_;
    switch(uVar23) {
    case 1:
      if ((uVar20 & 0xff) != 10) break;
      *puVar10 = *puVar10 | 1;
      puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
      if ((*puVar12 & 1) == 0) {
        puVar18 = (undefined *)*plVar11;
      }
      else {
        puVar21 = (ulong *)*puVar21;
        puVar18 = (undefined *)*plVar11;
      }
      if (puVar18 == puVar17) {
        FUN_001fcdc8(plVar11,puVar21,puVar17);
        puVar18 = (undefined *)*plVar11;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
      goto joined_r0x004dbb88;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x2b:
      break;
    case 8:
      if ((uVar20 & 0xff) == 0x42) {
        *puVar10 = *puVar10 | 2;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar9;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar9;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar9,puVar21,puVar17);
          puVar18 = (undefined *)*plVar9;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 9:
      if ((uVar20 & 0xff) == 0x48) {
        bVar15 = *param_2;
        if ((char)bVar15 < '\0') {
          iVar24 = (uint)bVar15 + (uint)param_2[1] * 0x80 + -0x80;
          if ((char)param_2[1] < '\0') {
            auVar29 = FUN_0052e420(param_2,iVar24);
            if (auVar29._0_8_ == 0) goto LAB_004dc03c;
          }
          else {
            auVar29._8_4_ = iVar24;
            auVar29._0_8_ = param_2 + 2;
            auVar29._12_4_ = 0;
          }
        }
        else {
          auVar29[8] = bVar15;
          auVar29._0_8_ = param_2 + 1;
          auVar29._9_7_ = 0;
        }
        param_2 = auVar29._0_8_;
        if (auVar29._8_4_ - 1U < 3) {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40000;
          *(int *)(param_1 + 0xa0) = auVar29._8_4_;
        }
        else {
          if ((*puVar12 & 1) == 0) {
            lVar19 = FUN_00264e54(puVar12);
          }
          else {
            lVar19 = (*puVar12 & 0xfffffffffffffffe) + 8;
          }
          FUN_00514e00(lVar19,9,auVar29._8_8_);
        }
        goto LAB_004db4cc;
      }
      break;
    case 10:
      if ((uVar20 & 0xff) == 0x50) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x400;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x98) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x98) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0xb:
      if ((uVar20 & 0xff) == 0x5a) {
        *puVar10 = *puVar10 | 4;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar8;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar8;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar8,puVar21,puVar17);
          puVar18 = (undefined *)*plVar8;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 0x10:
      if ((uVar20 & 0xff) == 0x80) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x2000;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x9b) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x9b) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x11:
      if ((uVar20 & 0xff) == 0x88) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x4000;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x9c) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x9c) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x12:
      if ((uVar20 & 0xff) == 0x90) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x8000;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x9d) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x9d) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x14:
      if ((uVar20 & 0xff) == 0xa0) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x800;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x99) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x99) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x17:
      if ((uVar20 & 0xff) == 0xb8) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x20000;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x9f) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x9f) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x1b:
      if ((uVar20 & 0xff) == 0xd8) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x1000;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x9a) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x9a) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x1f:
      if ((uVar20 & 0xff) == 0xf8) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x80000;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0xa4) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0xa4) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x24:
      if ((uVar20 & 0xff) == 0x22) {
        *puVar10 = *puVar10 | 8;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar7;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar7;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar7,puVar21,puVar17);
          puVar18 = (undefined *)*plVar7;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 0x25:
      if ((uVar20 & 0xff) == 0x2a) {
        *puVar10 = *puVar10 | 0x10;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar6;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar6;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar6,puVar21,puVar17);
          puVar18 = (undefined *)*plVar6;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 0x27:
      if ((uVar20 & 0xff) == 0x3a) {
        *puVar10 = *puVar10 | 0x20;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar5;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar5;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar5,puVar21,puVar17);
          puVar18 = (undefined *)*plVar5;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 0x28:
      if ((uVar20 & 0xff) == 0x42) {
        *puVar10 = *puVar10 | 0x40;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar4;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar4;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar4,puVar21,puVar17);
          puVar18 = (undefined *)*plVar4;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 0x29:
      if ((uVar20 & 0xff) == 0x4a) {
        *puVar10 = *puVar10 | 0x80;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar3;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar3;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar3,puVar21,puVar17);
          puVar18 = (undefined *)*plVar3;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 0x2a:
      if ((uVar20 & 0xff) == 0x50) {
        bVar15 = *param_2;
        uVar20 = (uint)bVar15;
        uVar25 = uVar25 | 0x10000;
        if ((char)bVar15 < '\0') {
          uVar20 = ((uint)bVar15 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar28 = FUN_0052e420(param_2);
            param_2 = auVar28._0_8_;
            *(bool *)(param_1 + 0x9e) = auVar28._8_8_ != 0;
            goto joined_r0x004dbb88;
          }
          lVar19 = 2;
        }
        else {
          lVar19 = 1;
        }
        param_2 = param_2 + lVar19;
        *(bool *)(param_1 + 0x9e) = uVar20 != 0;
        goto LAB_004db4cc;
      }
      break;
    case 0x2c:
      if ((uVar20 & 0xff) == 0x62) {
        *puVar10 = *puVar10 | 0x100;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar2;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar2;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar2,puVar21,puVar17);
          puVar18 = (undefined *)*plVar2;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    case 0x2d:
      if ((uVar20 & 0xff) == 0x6a) {
        *puVar10 = *puVar10 | 0x200;
        puVar21 = (ulong *)(*puVar12 & 0xfffffffffffffffe);
        if ((*puVar12 & 1) == 0) {
          puVar18 = (undefined *)*plVar1;
        }
        else {
          puVar21 = (ulong *)*puVar21;
          puVar18 = (undefined *)*plVar1;
        }
        if (puVar18 == puVar17) {
          FUN_001fcdc8(plVar1,puVar21,puVar17);
          puVar18 = (undefined *)*plVar1;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar18,param_2,param_3);
        goto joined_r0x004dbb88;
      }
      break;
    default:
      if ((uVar23 == 999) && ((uVar20 & 0xff) == 0x3a)) {
        param_2 = param_2 + -2;
        do {
          piVar22 = *(int **)(param_1 + 0x40);
          pbVar13 = param_2 + 2;
          if (piVar22 == (int *)0x0) {
            iVar24 = *(int *)(param_1 + 0x3c);
LAB_004db60c:
            FUN_00532334(param_1 + 0x30,iVar24 + 1);
            piVar22 = *(int **)(param_1 + 0x40);
            iVar24 = *piVar22;
LAB_004db620:
            *piVar22 = iVar24 + 1;
            uVar27 = FUN_004e75dc(*(undefined8 *)(param_1 + 0x30));
            iVar24 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar24 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar24 * 8 + 8) = uVar27;
            bVar15 = *pbVar13;
            if ((char)bVar15 < '\0') goto LAB_004db5e4;
LAB_004db658:
            auVar30[8] = bVar15;
            auVar30._0_8_ = param_2 + 3;
            auVar30._9_3_ = 0;
          }
          else {
            iVar16 = *(int *)(param_1 + 0x38);
            iVar24 = *piVar22;
            if (iVar24 <= iVar16) {
              if (iVar24 == *(int *)(param_1 + 0x3c)) goto LAB_004db60c;
              goto LAB_004db620;
            }
            *(int *)(param_1 + 0x38) = iVar16 + 1;
            uVar27 = *(undefined8 *)(piVar22 + (long)iVar16 * 2 + 2);
            bVar15 = *pbVar13;
            if (-1 < (char)bVar15) goto LAB_004db658;
LAB_004db5e4:
            auVar30 = FUN_0052e5f0(pbVar13);
            if (auVar30._0_8_ == 0) goto LAB_004dc03c;
          }
          uVar20 = auVar30._8_4_ + (auVar30._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar20 & (int)uVar20 >> 0x1f);
          uVar26 = param_3[0xb];
          iVar24 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar20;
          *(int *)(param_3 + 0xb) = (int)uVar26 + -1;
          if ((((int)uVar26 < 1) ||
              (param_2 = (byte *)FUN_004e246c(uVar27,auVar30._0_8_,param_3), param_2 == (byte *)0x0)
              ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_004dc03c;
          uVar20 = *(int *)((long)param_3 + 0x1c) + (iVar24 - uVar20);
          *(uint *)((long)param_3 + 0x1c) = uVar20;
          pbVar13 = (byte *)(param_3[1] + (long)(int)(uVar20 & (int)uVar20 >> 0x1f));
          *param_3 = (ulong)pbVar13;
        } while ((param_2 < pbVar13) && (*(short *)param_2 == 0x3eba));
        goto LAB_004db4cc;
      }
    }
    if ((uVar20 == 0) || ((uVar20 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar20 - 1;
      goto LAB_004dc040;
    }
    uVar26 = auVar28._8_8_ & 0xffffffff;
    if (uVar20 >> 6 < 0x7d) {
      if ((*puVar12 & 1) == 0) {
        lVar19 = FUN_00264e54(puVar12);
      }
      else {
        lVar19 = (*puVar12 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(uVar26,lVar19,param_2,param_3);
    }
    else {
      param_2 = (byte *)FUN_004ee748(param_1 + 0x10,uVar26,param_2,PTR_DAT_047cd880,puVar12,param_3)
      ;
    }
joined_r0x004dbb88:
    if (param_2 == (byte *)0x0) {
LAB_004dc03c:
      param_2 = (byte *)0x0;
LAB_004dc040:
      *puVar10 = *puVar10 | uVar25;
      return param_2;
    }
  } while( true );
}


