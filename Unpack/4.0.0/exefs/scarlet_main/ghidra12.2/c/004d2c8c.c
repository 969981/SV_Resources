/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d2c8c; name: FUN_004d2c8c
 */


byte * FUN_004d2c8c(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar7;
  long lVar6;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  
  puVar5 = PTR_DAT_047cd788;
  puVar1 = (ulong *)(param_1 + 8);
LAB_004d2cf0:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar13 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar13._0_8_;
      if ((auVar13._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar3 = *param_2;
    auVar13[8] = bVar3;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = param_2[1];
      if ((char)bVar2 < '\0') {
        auVar13 = FUN_0052e560(param_2);
        if (auVar13._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar13._8_4_ = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
        auVar13._0_8_ = param_2 + 2;
        auVar13._12_4_ = 0;
      }
      if (auVar13._8_4_ == 0x1f3a) {
        param_2 = (byte *)(auVar13._0_8_ + -2);
        do {
          piVar8 = *(int **)(param_1 + 0x38);
          pbVar11 = param_2 + 2;
          if (piVar8 == (int *)0x0) {
            iVar9 = *(int *)(param_1 + 0x34);
LAB_004d2df4:
            FUN_00532334(param_1 + 0x28,iVar9 + 1);
            piVar8 = *(int **)(param_1 + 0x38);
            iVar9 = *piVar8;
LAB_004d2e08:
            *piVar8 = iVar9 + 1;
            uVar12 = FUN_004e75dc(*(undefined8 *)(param_1 + 0x28));
            iVar9 = *(int *)(param_1 + 0x30);
            *(int *)(param_1 + 0x30) = iVar9 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar9 * 8 + 8) = uVar12;
            bVar3 = *pbVar11;
            if ((char)bVar3 < '\0') goto LAB_004d2dcc;
LAB_004d2e40:
            auVar14[8] = bVar3;
            auVar14._0_8_ = param_2 + 3;
            auVar14._9_3_ = 0;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x30);
            iVar9 = *piVar8;
            if (iVar9 <= iVar4) {
              if (iVar9 == *(int *)(param_1 + 0x34)) goto LAB_004d2df4;
              goto LAB_004d2e08;
            }
            *(int *)(param_1 + 0x30) = iVar4 + 1;
            uVar12 = *(undefined8 *)(piVar8 + (long)iVar4 * 2 + 2);
            bVar3 = *pbVar11;
            if (-1 < (char)bVar3) goto LAB_004d2e40;
LAB_004d2dcc:
            auVar14 = FUN_0052e5f0(pbVar11);
            if (auVar14._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar7 = auVar14._8_4_ + (auVar14._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar7 & (int)uVar7 >> 0x1f);
          uVar10 = param_3[0xb];
          iVar9 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar7;
          *(int *)(param_3 + 0xb) = (int)uVar10 + -1;
          if ((int)uVar10 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_004e246c(uVar12,auVar14._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar7 = *(int *)((long)param_3 + 0x1c) + (iVar9 - uVar7);
          *(uint *)((long)param_3 + 0x1c) = uVar7;
          pbVar11 = (byte *)(param_3[1] + (long)(int)(uVar7 & (int)uVar7 >> 0x1f));
          *param_3 = (ulong)pbVar11;
        } while ((param_2 < pbVar11) && (*(short *)param_2 == 0x3eba));
        goto LAB_004d2cf0;
      }
    }
    pbVar11 = auVar13._0_8_;
    uVar7 = auVar13._8_4_;
    if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar7 - 1;
      return pbVar11;
    }
    uVar10 = auVar13._8_8_ & 0xffffffff;
    if (uVar7 >> 6 < 0x7d) {
      if ((*puVar1 & 1) == 0) {
        lVar6 = FUN_00264e54(puVar1);
      }
      else {
        lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(uVar10,lVar6,pbVar11,param_3);
    }
    else {
      param_2 = (byte *)FUN_004ee748(param_1 + 0x10,uVar10,pbVar11,puVar5,puVar1,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


