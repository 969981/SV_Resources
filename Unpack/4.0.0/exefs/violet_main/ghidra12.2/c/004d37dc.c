/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d37dc; name: FUN_004d37dc
 */


byte * FUN_004d37dc(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  uint uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  
  puVar11 = PTR_DAT_047cba80;
  plVar1 = (long *)(param_1 + 0x38);
  plVar2 = (long *)(param_1 + 0x30);
  puVar3 = (ulong *)(param_1 + 8);
  plVar4 = (long *)(param_1 + 0x28);
  uVar17 = 0;
  plVar5 = (long *)(param_1 + 0x20);
  plVar6 = (long *)(param_1 + 0x18);
LAB_004d3844:
  do {
    if ((byte *)*param_3 <= param_2) {
      pbVar18 = param_2;
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004d3e94;
      auVar19 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar19._0_8_;
      pbVar18 = param_2;
      if ((auVar19._8_8_ & 1) != 0) goto LAB_004d3e94;
    }
    bVar9 = *param_2;
    auVar19[8] = bVar9;
    auVar19._0_8_ = param_2 + 1;
    auVar19._9_7_ = 0;
    if ((char)bVar9 < '\0') {
      bVar8 = param_2[1];
      if ((char)bVar8 < '\0') {
        auVar19 = FUN_0052e560(param_2);
        pbVar18 = (byte *)0x0;
        if (auVar19._0_8_ == 0) goto LAB_004d3e94;
      }
      else {
        auVar19._8_4_ = (uint)bVar9 + (uint)bVar8 * 0x80 + -0x80;
        auVar19._0_8_ = param_2 + 2;
        auVar19._12_4_ = 0;
      }
    }
    pbVar18 = auVar19._0_8_;
    uVar14 = auVar19._8_4_;
    switch((uint)(auVar19._8_8_ >> 3) & 0x1fffffff) {
    case 1:
      if ((uVar14 & 0xff) != 10) break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar15 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar6;
      }
      else {
        puVar15 = (ulong *)*puVar15;
        puVar12 = (undefined *)*plVar6;
      }
      if (puVar12 == puVar11) {
        FUN_001fcdc8(plVar6,puVar15,puVar11);
        puVar12 = (undefined *)*plVar6;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar12,pbVar18,param_3);
      goto joined_r0x004d3d78;
    case 2:
      if ((uVar14 & 0xff) == 0x12) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        puVar15 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar12 = (undefined *)*plVar5;
        }
        else {
          puVar15 = (ulong *)*puVar15;
          puVar12 = (undefined *)*plVar5;
        }
        if (puVar12 == puVar11) {
          FUN_001fcdc8(plVar5,puVar15,puVar11);
          puVar12 = (undefined *)*plVar5;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar12,pbVar18,param_3);
        goto joined_r0x004d3d78;
      }
      break;
    case 3:
      if ((uVar14 & 0xff) == 0x18) {
        param_2 = pbVar18 + 1;
        bVar9 = *pbVar18;
        uVar14 = (uint)bVar9;
        uVar17 = uVar17 | 0x40;
        if ((char)bVar9 < '\0') {
          uVar14 = ((uint)bVar9 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar21 = FUN_0052e420(pbVar18);
            param_2 = auVar21._0_8_;
            *(int *)(param_1 + 0x48) = auVar21._8_4_;
            goto joined_r0x004d3d78;
          }
          param_2 = pbVar18 + 2;
        }
        *(uint *)(param_1 + 0x48) = uVar14;
        goto LAB_004d3844;
      }
      break;
    case 4:
      if ((uVar14 & 0xff) == 0x20) {
        bVar9 = *pbVar18;
        if ((char)bVar9 < '\0') {
          iVar7 = (uint)bVar9 + (uint)pbVar18[1] * 0x80 + -0x80;
          if ((char)pbVar18[1] < '\0') {
            auVar20 = FUN_0052e420(pbVar18,iVar7);
            if (auVar20._0_8_ == 0) goto LAB_004d3e90;
          }
          else {
            auVar20._8_4_ = iVar7;
            auVar20._0_8_ = pbVar18 + 2;
            auVar20._12_4_ = 0;
          }
        }
        else {
          auVar20[8] = bVar9;
          auVar20._0_8_ = pbVar18 + 1;
          auVar20._9_7_ = 0;
        }
        param_2 = auVar20._0_8_;
        if (auVar20._8_4_ - 1U < 3) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
          *(int *)(param_1 + 0x54) = auVar20._8_4_;
        }
        else {
          if ((*puVar3 & 1) == 0) {
            lVar13 = FUN_00264e54(puVar3);
          }
          else {
            lVar13 = (*puVar3 & 0xfffffffffffffffe) + 8;
          }
          uVar16 = 4;
LAB_004d3e54:
          param_2 = auVar20._0_8_;
          FUN_00514e00(lVar13,uVar16,auVar20._8_8_);
        }
        goto LAB_004d3844;
      }
      break;
    case 5:
      if ((uVar14 & 0xff) == 0x28) {
        bVar9 = *pbVar18;
        if ((char)bVar9 < '\0') {
          iVar7 = (uint)bVar9 + (uint)pbVar18[1] * 0x80 + -0x80;
          if ((char)pbVar18[1] < '\0') {
            auVar20 = FUN_0052e420(pbVar18,iVar7);
            if (auVar20._0_8_ == 0) goto LAB_004d3e90;
          }
          else {
            auVar20._8_4_ = iVar7;
            auVar20._0_8_ = pbVar18 + 2;
            auVar20._12_4_ = 0;
          }
        }
        else {
          auVar20[8] = bVar9;
          auVar20._0_8_ = pbVar18 + 1;
          auVar20._9_7_ = 0;
        }
        param_2 = auVar20._0_8_;
        if (0x11 < auVar20._8_4_ - 1U) {
          if ((*puVar3 & 1) == 0) {
            lVar13 = FUN_00264e54(puVar3);
          }
          else {
            lVar13 = (*puVar3 & 0xfffffffffffffffe) + 8;
          }
          uVar16 = 5;
          goto LAB_004d3e54;
        }
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
        *(int *)(param_1 + 0x58) = auVar20._8_4_;
        goto LAB_004d3844;
      }
      break;
    case 6:
      if ((uVar14 & 0xff) == 0x32) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        puVar15 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar12 = (undefined *)*plVar4;
        }
        else {
          puVar15 = (ulong *)*puVar15;
          puVar12 = (undefined *)*plVar4;
        }
        if (puVar12 == puVar11) {
          FUN_001fcdc8(plVar4,puVar15,puVar11);
          puVar12 = (undefined *)*plVar4;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar12,pbVar18,param_3);
        goto joined_r0x004d3d78;
      }
      break;
    case 7:
      if ((uVar14 & 0xff) == 0x3a) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        puVar15 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar12 = (undefined *)*plVar2;
        }
        else {
          puVar15 = (ulong *)*puVar15;
          puVar12 = (undefined *)*plVar2;
        }
        if (puVar12 == puVar11) {
          FUN_001fcdc8(plVar2,puVar15,puVar11);
          puVar12 = (undefined *)*plVar2;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar12,pbVar18,param_3);
        goto joined_r0x004d3d78;
      }
      break;
    case 8:
      if ((uVar14 & 0xff) == 0x42) {
        lVar13 = *(long *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
        if (lVar13 == 0) {
          puVar15 = (ulong *)(*puVar3 & 0xfffffffffffffffe);
          if ((*puVar3 & 1) != 0) {
            puVar15 = (ulong *)*puVar15;
          }
          lVar13 = FUN_004e6d90(puVar15);
          *(long *)(param_1 + 0x40) = lVar13;
          bVar9 = *pbVar18;
          if (-1 < (char)bVar9) goto LAB_004d3ab8;
LAB_004d3c48:
          auVar21 = FUN_0052e5f0(pbVar18);
          if (auVar21._0_8_ == 0) goto LAB_004d3e90;
        }
        else {
          bVar9 = *pbVar18;
          if ((char)bVar9 < '\0') goto LAB_004d3c48;
LAB_004d3ab8:
          auVar21[8] = bVar9;
          auVar21._0_8_ = pbVar18 + 1;
          auVar21._9_3_ = 0;
        }
        uVar14 = auVar21._8_4_ + (auVar21._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
        lVar10 = param_3[0xb];
        iVar7 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *(int *)(param_3 + 0xb) = (int)lVar10 + -1;
        if ((((int)lVar10 < 1) ||
            (param_2 = (byte *)FUN_004ddc2c(lVar13,auVar21._0_8_,param_3), param_2 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
        goto LAB_004d3e90;
        uVar14 = *(int *)((long)param_3 + 0x1c) + (iVar7 - uVar14);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
        goto LAB_004d3844;
      }
      break;
    case 9:
      if ((uVar14 & 0xff) == 0x48) {
        param_2 = pbVar18 + 1;
        uVar17 = uVar17 | 0x80;
        uVar14 = (uint)*pbVar18;
        if ((char)*pbVar18 < '\0') {
          uVar14 = (uVar14 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar21 = FUN_0052e420(pbVar18);
            param_2 = auVar21._0_8_;
            *(int *)(param_1 + 0x4c) = auVar21._8_4_;
            goto joined_r0x004d3d78;
          }
          param_2 = pbVar18 + 2;
        }
        *(uint *)(param_1 + 0x4c) = uVar14;
        goto LAB_004d3844;
      }
      break;
    case 10:
      if ((uVar14 & 0xff) == 0x52) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
        puVar15 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar12 = (undefined *)*plVar1;
        }
        else {
          puVar15 = (ulong *)*puVar15;
          puVar12 = (undefined *)*plVar1;
        }
        if (puVar12 == puVar11) {
          FUN_001fcdc8(plVar1,puVar15,puVar11);
          puVar12 = (undefined *)*plVar1;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar12,pbVar18,param_3);
        goto joined_r0x004d3d78;
      }
      break;
    case 0x11:
      if ((uVar14 & 0xff) == 0x88) {
        bVar9 = *pbVar18;
        uVar14 = (uint)bVar9;
        uVar17 = uVar17 | 0x100;
        if ((char)bVar9 < '\0') {
          uVar14 = ((uint)bVar9 + (uint)pbVar18[1] * 0x80) - 0x80;
          if ((char)pbVar18[1] < '\0') {
            auVar19 = FUN_0052e420(pbVar18);
            param_2 = auVar19._0_8_;
            *(bool *)(param_1 + 0x50) = auVar19._8_8_ != 0;
            goto joined_r0x004d3d78;
          }
          lVar13 = 2;
        }
        else {
          lVar13 = 1;
        }
        param_2 = pbVar18 + lVar13;
        *(bool *)(param_1 + 0x50) = uVar14 != 0;
        goto LAB_004d3844;
      }
    }
    if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar14 - 1;
      goto LAB_004d3e94;
    }
    if ((*puVar3 & 1) == 0) {
      lVar13 = FUN_00264e54(puVar3);
    }
    else {
      lVar13 = (*puVar3 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_00515960(auVar19._8_8_ & 0xffffffff,lVar13,pbVar18,param_3);
joined_r0x004d3d78:
    if (param_2 == (byte *)0x0) {
LAB_004d3e90:
      pbVar18 = (byte *)0x0;
LAB_004d3e94:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar17;
      return pbVar18;
    }
  } while( true );
}


