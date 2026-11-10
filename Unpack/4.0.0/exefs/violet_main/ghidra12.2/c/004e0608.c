/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e0608; name: FUN_004e0608
 */


byte * FUN_004e0608(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  
  uVar13 = 0;
  puVar1 = (ulong *)(param_1 + 8);
LAB_004e0640:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004e0914;
      auVar14 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar14._0_8_;
      if ((auVar14._8_8_ & 1) != 0) goto LAB_004e0914;
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
        if (auVar14._0_8_ == 0) goto LAB_004e0914;
      }
      else {
        auVar14._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar14._0_8_ = param_2 + 2;
        auVar14._12_4_ = 0;
      }
    }
    param_2 = auVar14._0_8_;
    uVar7 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
    uVar6 = auVar14._8_4_;
    if (uVar7 == 999) {
      if ((uVar6 & 0xff) == 0x3a) {
        param_2 = param_2 + -2;
        do {
          piVar9 = *(int **)(param_1 + 0x40);
          pbVar2 = param_2 + 2;
          if (piVar9 == (int *)0x0) {
            iVar10 = *(int *)(param_1 + 0x3c);
LAB_004e072c:
            FUN_00532334(param_1 + 0x30,iVar10 + 1);
            piVar9 = *(int **)(param_1 + 0x40);
            iVar10 = *piVar9;
LAB_004e0740:
            *piVar9 = iVar10 + 1;
            uVar12 = FUN_004e75dc(*(undefined8 *)(param_1 + 0x30));
            iVar10 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar10 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar10 * 8 + 8) = uVar12;
            bVar4 = *pbVar2;
            if ((char)bVar4 < '\0') goto LAB_004e0704;
LAB_004e0778:
            auVar15[8] = bVar4;
            auVar15._0_8_ = param_2 + 3;
            auVar15._9_3_ = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x38);
            iVar10 = *piVar9;
            if (iVar10 <= iVar5) {
              if (iVar10 == *(int *)(param_1 + 0x3c)) goto LAB_004e072c;
              goto LAB_004e0740;
            }
            *(int *)(param_1 + 0x38) = iVar5 + 1;
            uVar12 = *(undefined8 *)(piVar9 + (long)iVar5 * 2 + 2);
            bVar4 = *pbVar2;
            if (-1 < (char)bVar4) goto LAB_004e0778;
LAB_004e0704:
            auVar15 = FUN_0052e5f0(pbVar2);
            if (auVar15._0_8_ == 0) goto LAB_004e0910;
          }
          uVar6 = auVar15._8_4_ + (auVar15._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar6 & (int)uVar6 >> 0x1f);
          uVar11 = param_3[0xb];
          iVar10 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar6;
          *(int *)(param_3 + 0xb) = (int)uVar11 + -1;
          if ((((int)uVar11 < 1) ||
              (param_2 = (byte *)FUN_004e246c(uVar12,auVar15._0_8_,param_3), param_2 == (byte *)0x0)
              ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_004e0910;
          uVar6 = *(int *)((long)param_3 + 0x1c) + (iVar10 - uVar6);
          *(uint *)((long)param_3 + 0x1c) = uVar6;
          pbVar2 = (byte *)(param_3[1] + (long)(int)(uVar6 & (int)uVar6 >> 0x1f));
          *param_3 = (ulong)pbVar2;
        } while ((param_2 < pbVar2) && (*(short *)param_2 == 0x3eba));
        goto LAB_004e0640;
      }
LAB_004e0810:
      if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar6 - 1;
        goto LAB_004e0914;
      }
      uVar11 = auVar14._8_8_ & 0xffffffff;
      if (uVar6 >> 6 < 0x7d) {
        if ((*puVar1 & 1) == 0) {
          lVar8 = FUN_00264e54(puVar1);
        }
        else {
          lVar8 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_00515960(uVar11,lVar8,param_2,param_3);
      }
      else {
        param_2 = (byte *)FUN_004ee748(param_1 + 0x10,uVar11,param_2,PTR_DAT_047cd958,puVar1,param_3
                                      );
      }
    }
    else {
      if ((uVar7 != 0x21) || ((uVar6 & 0xff) != 8)) goto LAB_004e0810;
      bVar4 = *param_2;
      uVar6 = (uint)bVar4;
      uVar13 = 1;
      if (-1 < (char)bVar4) {
        lVar8 = 1;
LAB_004e0870:
        param_2 = param_2 + lVar8;
        *(bool *)(param_1 + 0x48) = uVar6 != 0;
        goto LAB_004e0640;
      }
      uVar6 = ((uint)bVar4 + (uint)param_2[1] * 0x80) - 0x80;
      if (-1 < (char)param_2[1]) {
        lVar8 = 2;
        goto LAB_004e0870;
      }
      auVar14 = FUN_0052e420(param_2);
      param_2 = auVar14._0_8_;
      *(bool *)(param_1 + 0x48) = auVar14._8_8_ != 0;
    }
    if (param_2 == (byte *)0x0) {
LAB_004e0910:
      param_2 = (byte *)0x0;
LAB_004e0914:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar13;
      return param_2;
    }
  } while( true );
}


