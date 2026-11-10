/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004dd0a4; name: FUN_004dd0a4
 */


byte * FUN_004dd0a4(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  
  uVar13 = 0;
  puVar1 = (ulong *)(param_1 + 8);
LAB_004dd118:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004dd50c;
      auVar14 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar14._0_8_;
      if ((auVar14._8_8_ & 1) != 0) goto LAB_004dd50c;
    }
    bVar4 = *param_2;
    auVar14[8] = bVar4;
    auVar14._0_8_ = param_2 + 1;
    auVar14._9_7_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = param_2[1];
      if ((char)bVar3 < '\0') {
        auVar14 = FUN_0052e560(param_2);
        param_2 = (byte *)0x0;
        if (auVar14._0_8_ == 0) goto LAB_004dd50c;
      }
      else {
        auVar14._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar14._0_8_ = param_2 + 2;
        auVar14._12_4_ = 0;
      }
    }
    param_2 = auVar14._0_8_;
    uVar9 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
    uVar7 = auVar14._8_4_;
    switch(uVar9) {
    case 1:
      if ((uVar7 & 0xff) != 8) break;
      bVar4 = *param_2;
      uVar7 = (uint)bVar4;
      uVar13 = uVar13 | 1;
      if ((char)bVar4 < '\0') {
        uVar7 = ((uint)bVar4 + (uint)param_2[1] * 0x80) - 0x80;
        if (-1 < (char)param_2[1]) {
          lVar6 = 2;
          goto LAB_004dd3bc;
        }
        auVar14 = FUN_0052e420(param_2);
        param_2 = auVar14._0_8_;
        *(bool *)(param_1 + 0x48) = auVar14._8_8_ != 0;
        goto joined_r0x004dd4a0;
      }
      lVar6 = 1;
LAB_004dd3bc:
      param_2 = param_2 + lVar6;
      *(bool *)(param_1 + 0x48) = uVar7 != 0;
      goto LAB_004dd118;
    case 2:
      if ((uVar7 & 0xff) == 0x10) {
        bVar4 = *param_2;
        uVar7 = (uint)bVar4;
        uVar13 = uVar13 | 2;
        if ((char)bVar4 < '\0') {
          uVar7 = ((uint)bVar4 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar14 = FUN_0052e420(param_2);
            param_2 = auVar14._0_8_;
            *(bool *)(param_1 + 0x49) = auVar14._8_8_ != 0;
            goto joined_r0x004dd4a0;
          }
          lVar6 = 2;
        }
        else {
          lVar6 = 1;
        }
        param_2 = param_2 + lVar6;
        *(bool *)(param_1 + 0x49) = uVar7 != 0;
        goto LAB_004dd118;
      }
      break;
    case 3:
      if ((uVar7 & 0xff) == 0x18) {
        bVar4 = *param_2;
        uVar7 = (uint)bVar4;
        uVar13 = uVar13 | 4;
        if ((char)bVar4 < '\0') {
          uVar7 = ((uint)bVar4 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar14 = FUN_0052e420(param_2);
            param_2 = auVar14._0_8_;
            *(bool *)(param_1 + 0x4a) = auVar14._8_8_ != 0;
            goto joined_r0x004dd4a0;
          }
          lVar6 = 2;
        }
        else {
          lVar6 = 1;
        }
        param_2 = param_2 + lVar6;
        *(bool *)(param_1 + 0x4a) = uVar7 != 0;
        goto LAB_004dd118;
      }
      break;
    case 4:
    case 5:
    case 6:
      break;
    case 7:
      if ((uVar7 & 0xff) == 0x38) {
        bVar4 = *param_2;
        uVar7 = (uint)bVar4;
        uVar13 = uVar13 | 8;
        if ((char)bVar4 < '\0') {
          uVar7 = ((uint)bVar4 + (uint)param_2[1] * 0x80) - 0x80;
          if ((char)param_2[1] < '\0') {
            auVar14 = FUN_0052e420(param_2);
            param_2 = auVar14._0_8_;
            *(bool *)(param_1 + 0x4b) = auVar14._8_8_ != 0;
            goto joined_r0x004dd4a0;
          }
          lVar6 = 2;
        }
        else {
          lVar6 = 1;
        }
        param_2 = param_2 + lVar6;
        *(bool *)(param_1 + 0x4b) = uVar7 != 0;
        goto LAB_004dd118;
      }
      break;
    default:
      if ((uVar9 == 999) && ((uVar7 & 0xff) == 0x3a)) {
        param_2 = param_2 + -2;
        do {
          piVar8 = *(int **)(param_1 + 0x40);
          pbVar2 = param_2 + 2;
          if (piVar8 == (int *)0x0) {
            iVar10 = *(int *)(param_1 + 0x3c);
LAB_004dd218:
            FUN_00532334(param_1 + 0x30,iVar10 + 1);
            piVar8 = *(int **)(param_1 + 0x40);
            iVar10 = *piVar8;
LAB_004dd22c:
            *piVar8 = iVar10 + 1;
            uVar12 = FUN_004e75dc(*(undefined8 *)(param_1 + 0x30));
            iVar10 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar10 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar10 * 8 + 8) = uVar12;
            bVar4 = *pbVar2;
            if ((char)bVar4 < '\0') goto LAB_004dd1f0;
LAB_004dd264:
            auVar15[8] = bVar4;
            auVar15._0_8_ = param_2 + 3;
            auVar15._9_3_ = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x38);
            iVar10 = *piVar8;
            if (iVar10 <= iVar5) {
              if (iVar10 == *(int *)(param_1 + 0x3c)) goto LAB_004dd218;
              goto LAB_004dd22c;
            }
            *(int *)(param_1 + 0x38) = iVar5 + 1;
            uVar12 = *(undefined8 *)(piVar8 + (long)iVar5 * 2 + 2);
            bVar4 = *pbVar2;
            if (-1 < (char)bVar4) goto LAB_004dd264;
LAB_004dd1f0:
            auVar15 = FUN_0052e5f0(pbVar2);
            if (auVar15._0_8_ == 0) goto LAB_004dd508;
          }
          uVar7 = auVar15._8_4_ + (auVar15._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar7 & (int)uVar7 >> 0x1f);
          uVar11 = param_3[0xb];
          iVar10 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar7;
          *(int *)(param_3 + 0xb) = (int)uVar11 + -1;
          if ((((int)uVar11 < 1) ||
              (param_2 = (byte *)FUN_004e246c(uVar12,auVar15._0_8_,param_3), param_2 == (byte *)0x0)
              ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_004dd508;
          uVar7 = *(int *)((long)param_3 + 0x1c) + (iVar10 - uVar7);
          *(uint *)((long)param_3 + 0x1c) = uVar7;
          pbVar2 = (byte *)(param_3[1] + (long)(int)(uVar7 & (int)uVar7 >> 0x1f));
          *param_3 = (ulong)pbVar2;
        } while ((param_2 < pbVar2) && (*(short *)param_2 == 0x3eba));
        goto LAB_004dd118;
      }
    }
    if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar7 - 1;
      goto LAB_004dd50c;
    }
    uVar11 = auVar14._8_8_ & 0xffffffff;
    if (uVar7 >> 6 < 0x7d) {
      if ((*puVar1 & 1) == 0) {
        lVar6 = FUN_00264e54(puVar1);
      }
      else {
        lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(uVar11,lVar6,param_2,param_3);
    }
    else {
      param_2 = (byte *)FUN_004ee748(param_1 + 0x10,uVar11,param_2,PTR_DAT_047cd7b0,puVar1,param_3);
    }
joined_r0x004dd4a0:
    if (param_2 == (byte *)0x0) {
LAB_004dd508:
      param_2 = (byte *)0x0;
LAB_004dd50c:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar13;
      return param_2;
    }
  } while( true );
}


