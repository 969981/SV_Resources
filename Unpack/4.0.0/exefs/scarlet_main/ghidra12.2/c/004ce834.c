/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ce834; name: FUN_004ce834
 */


byte * FUN_004ce834(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  uint uVar8;
  ulong *puVar6;
  long lVar7;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  
  uVar11 = 0;
  puVar1 = (ulong *)(param_1 + 8);
LAB_004ce864:
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004ceadc;
        auVar12 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar12._0_8_;
        if ((auVar12._8_8_ & 1) != 0) goto LAB_004ceadc;
      }
      bVar4 = *param_2;
      auVar12[8] = bVar4;
      auVar12._0_8_ = param_2 + 1;
      auVar12._9_7_ = 0;
      if ((char)bVar4 < '\0') {
        bVar3 = param_2[1];
        if ((char)bVar3 < '\0') {
          auVar12 = FUN_0052e560(param_2);
          param_2 = (byte *)0x0;
          if (auVar12._0_8_ == 0) goto LAB_004ceadc;
        }
        else {
          auVar12._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
          auVar12._0_8_ = param_2 + 2;
          auVar12._12_4_ = 0;
        }
      }
      pbVar10 = auVar12._0_8_;
      uVar9 = (uint)(auVar12._8_8_ >> 3) & 0x1fffffff;
      uVar8 = auVar12._8_4_;
      if (uVar9 != 3) break;
      if ((uVar8 & 0xff) != 0x1a) goto LAB_004ce978;
      lVar7 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar7 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar7 = FUN_004e653c(puVar6);
        *(long *)(param_1 + 0x18) = lVar7;
        bVar4 = *pbVar10;
        if (-1 < (char)bVar4) goto LAB_004ce938;
LAB_004ce9dc:
        auVar13 = FUN_0052e5f0(pbVar10);
        if (auVar13._0_8_ == 0) goto LAB_004ceacc;
      }
      else {
        bVar4 = *pbVar10;
        if ((char)bVar4 < '\0') goto LAB_004ce9dc;
LAB_004ce938:
        auVar13[8] = bVar4;
        auVar13._0_8_ = pbVar10 + 1;
        auVar13._9_3_ = 0;
      }
      uVar8 = auVar13._8_4_ + (auVar13._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      lVar5 = param_3[0xb];
      iVar2 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
      if ((((int)lVar5 < 1) ||
          (param_2 = (byte *)FUN_004d2c8c(lVar7,auVar13._0_8_,param_3), param_2 == (byte *)0x0)) ||
         (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
      goto LAB_004ceacc;
      uVar8 = *(int *)((long)param_3 + 0x1c) + (iVar2 - uVar8);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
    }
    if (uVar9 == 2) {
      if ((uVar8 & 0xff) == 0x10) {
        param_2 = pbVar10 + 1;
        bVar4 = *pbVar10;
        uVar8 = (uint)bVar4;
        uVar11 = uVar11 | 4;
        if ((char)bVar4 < '\0') {
          uVar8 = ((uint)bVar4 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar13 = FUN_0052e420(pbVar10);
            param_2 = auVar13._0_8_;
            *(int *)(param_1 + 0x24) = auVar13._8_4_;
            goto joined_r0x004ce9b0;
          }
          param_2 = pbVar10 + 2;
        }
        *(uint *)(param_1 + 0x24) = uVar8;
        goto LAB_004ce864;
      }
LAB_004ce978:
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar8 - 1;
        param_2 = pbVar10;
        goto LAB_004ceadc;
      }
      if ((*puVar1 & 1) == 0) {
        lVar7 = FUN_00264e54(puVar1);
      }
      else {
        lVar7 = (*puVar1 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar12._8_8_ & 0xffffffff,lVar7,pbVar10,param_3);
    }
    else {
      if ((uVar9 != 1) || ((uVar8 & 0xff) != 8)) goto LAB_004ce978;
      param_2 = pbVar10 + 1;
      uVar11 = uVar11 | 2;
      uVar8 = (uint)*pbVar10;
      if (-1 < (char)*pbVar10) {
LAB_004ce860:
        *(uint *)(param_1 + 0x20) = uVar8;
        goto LAB_004ce864;
      }
      uVar8 = (uVar8 + (uint)*param_2 * 0x80) - 0x80;
      if (-1 < (char)*param_2) {
        param_2 = pbVar10 + 2;
        goto LAB_004ce860;
      }
      auVar13 = FUN_0052e420(pbVar10);
      param_2 = auVar13._0_8_;
      *(int *)(param_1 + 0x20) = auVar13._8_4_;
    }
joined_r0x004ce9b0:
    if (param_2 == (byte *)0x0) {
LAB_004ceacc:
      param_2 = (byte *)0x0;
LAB_004ceadc:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar11;
      return param_2;
    }
  } while( true );
}


