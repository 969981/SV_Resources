/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e246c; name: FUN_004e246c
 */


byte * FUN_004e246c(long param_1,byte *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar10;
  undefined *puVar8;
  long lVar9;
  ulong *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  
  puVar7 = PTR_DAT_047cba80;
  plVar1 = (long *)(param_1 + 0x40);
  plVar2 = (long *)(param_1 + 0x38);
  uVar16 = 0;
  plVar3 = (long *)(param_1 + 0x30);
LAB_004e24f0:
  do {
    if ((byte *)*param_3 <= param_2) {
      pbVar17 = param_2;
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004e2934;
      auVar19 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar19._0_8_;
      pbVar17 = param_2;
      if ((auVar19._8_8_ & 1) != 0) goto LAB_004e2934;
    }
    bVar5 = *param_2;
    auVar19[8] = bVar5;
    auVar19._0_8_ = param_2 + 1;
    auVar19._9_7_ = 0;
    if ((char)bVar5 < '\0') {
      bVar4 = param_2[1];
      if ((char)bVar4 < '\0') {
        auVar19 = FUN_0052e560(param_2);
        pbVar17 = (byte *)0x0;
        if (auVar19._0_8_ == 0) goto LAB_004e2934;
      }
      else {
        auVar19._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
        auVar19._0_8_ = param_2 + 2;
        auVar19._12_4_ = 0;
      }
    }
    pbVar17 = auVar19._0_8_;
    uVar10 = auVar19._8_4_;
    switch((uint)(auVar19._8_8_ >> 3) & 0x1fffffff) {
    case 2:
      if ((uVar10 & 0xff) == 0x12) {
        param_2 = pbVar17 + -1;
        do {
          piVar13 = *(int **)(param_1 + 0x28);
          pbVar17 = param_2 + 1;
          if (piVar13 == (int *)0x0) {
            iVar15 = *(int *)(param_1 + 0x24);
LAB_004e25c8:
            FUN_00532334(param_1 + 0x18,iVar15 + 1);
            piVar13 = *(int **)(param_1 + 0x28);
            iVar15 = *piVar13;
LAB_004e25dc:
            *piVar13 = iVar15 + 1;
            uVar18 = FUN_004e7510(*(undefined8 *)(param_1 + 0x18));
            iVar15 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar15 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar15 * 8 + 8) = uVar18;
            bVar5 = *pbVar17;
            if ((char)bVar5 < '\0') goto LAB_004e25a0;
LAB_004e2614:
            auVar20[8] = bVar5;
            auVar20._0_8_ = param_2 + 2;
            auVar20._9_3_ = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x20);
            iVar15 = *piVar13;
            if (iVar15 <= iVar6) {
              if (iVar15 == *(int *)(param_1 + 0x24)) goto LAB_004e25c8;
              goto LAB_004e25dc;
            }
            *(int *)(param_1 + 0x20) = iVar6 + 1;
            uVar18 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
            bVar5 = *pbVar17;
            if (-1 < (char)bVar5) goto LAB_004e2614;
LAB_004e25a0:
            auVar20 = FUN_0052e5f0(pbVar17);
            if (auVar20._0_8_ == 0) goto LAB_004e2930;
          }
          uVar10 = auVar20._8_4_ + (auVar20._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f);
          uVar14 = param_3[0xb];
          iVar15 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar10;
          *(int *)(param_3 + 0xb) = (int)uVar14 + -1;
          if ((((int)uVar14 < 1) ||
              (param_2 = (byte *)FUN_004e19d4(uVar18,auVar20._0_8_,param_3), param_2 == (byte *)0x0)
              ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_004e2930;
          uVar10 = *(int *)((long)param_3 + 0x1c) + (iVar15 - uVar10);
          *(uint *)((long)param_3 + 0x1c) = uVar10;
          pbVar17 = (byte *)(param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f));
          *param_3 = (ulong)pbVar17;
        } while ((param_2 < pbVar17) && (*param_2 == 0x12));
        goto LAB_004e24f0;
      }
      break;
    case 3:
      if ((uVar10 & 0xff) != 0x1a) break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar8 = (undefined *)*plVar3;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        puVar8 = (undefined *)*plVar3;
      }
      if (puVar8 == puVar7) {
        FUN_001fcdc8(plVar3,puVar11,puVar7);
        puVar8 = (undefined *)*plVar3;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar8,pbVar17,param_3);
      goto joined_r0x004e24ec;
    case 4:
      if ((uVar10 & 0xff) == 0x20) {
        bVar5 = *pbVar17;
        uVar14 = (ulong)bVar5;
        uVar16 = uVar16 | 8;
        if ((char)bVar5 < '\0') {
          uVar14 = (ulong)(((uint)bVar5 + (uint)pbVar17[1] * 0x80) - 0x80);
          if ((char)pbVar17[1] < '\0') {
            auVar19 = FUN_0052e420(pbVar17);
            param_2 = auVar19._0_8_;
            *(long *)(param_1 + 0x48) = auVar19._8_8_;
            goto joined_r0x004e24ec;
          }
          lVar9 = 2;
        }
        else {
          lVar9 = 1;
        }
        param_2 = pbVar17 + lVar9;
        *(ulong *)(param_1 + 0x48) = uVar14;
        goto LAB_004e24f0;
      }
      break;
    case 5:
      if ((uVar10 & 0xff) == 0x28) {
        bVar5 = *pbVar17;
        uVar14 = (ulong)bVar5;
        uVar16 = uVar16 | 0x10;
        if ((char)bVar5 < '\0') {
          uVar14 = (ulong)(((uint)bVar5 + (uint)pbVar17[1] * 0x80) - 0x80);
          if ((char)pbVar17[1] < '\0') {
            auVar19 = FUN_0052e420(pbVar17);
            param_2 = auVar19._0_8_;
            *(long *)(param_1 + 0x50) = auVar19._8_8_;
            goto joined_r0x004e24ec;
          }
          lVar9 = 2;
        }
        else {
          lVar9 = 1;
        }
        param_2 = pbVar17 + lVar9;
        *(ulong *)(param_1 + 0x50) = uVar14;
        goto LAB_004e24f0;
      }
      break;
    case 6:
      if ((uVar10 & 0xff) == 0x31) {
        param_2 = pbVar17 + 8;
        uVar16 = uVar16 | 0x20;
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)pbVar17;
        goto LAB_004e24f0;
      }
      break;
    case 7:
      if ((uVar10 & 0xff) == 0x3a) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar8 = (undefined *)*plVar2;
        }
        else {
          puVar11 = (ulong *)*puVar11;
          puVar8 = (undefined *)*plVar2;
        }
        if (puVar8 == puVar7) {
          FUN_001fcdc8(plVar2,puVar11,puVar7);
          puVar8 = (undefined *)*plVar2;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar8,pbVar17,param_3);
        goto joined_r0x004e24ec;
      }
      break;
    case 8:
      if ((uVar10 & 0xff) == 0x42) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        puVar12 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          puVar8 = (undefined *)*plVar1;
        }
        else {
          puVar12 = (undefined8 *)*puVar12;
          puVar8 = (undefined *)*plVar1;
        }
        if (puVar8 == puVar7) {
          FUN_001fcdc8(plVar1,puVar12,puVar7);
          puVar8 = (undefined *)*plVar1;
        }
        param_2 = (byte *)FUN_0052e7f0(puVar8,pbVar17,param_3);
        goto joined_r0x004e24ec;
      }
    }
    if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar10 - 1;
      goto LAB_004e2934;
    }
    uVar14 = *(ulong *)(param_1 + 8);
    if ((uVar14 & 1) == 0) {
      lVar9 = FUN_00264e54((ulong *)(param_1 + 8));
    }
    else {
      lVar9 = (uVar14 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_00515960(auVar19._8_8_ & 0xffffffff,lVar9,pbVar17,param_3);
joined_r0x004e24ec:
    if (param_2 == (byte *)0x0) {
LAB_004e2930:
      pbVar17 = (byte *)0x0;
LAB_004e2934:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar16;
      return pbVar17;
    }
  } while( true );
}


