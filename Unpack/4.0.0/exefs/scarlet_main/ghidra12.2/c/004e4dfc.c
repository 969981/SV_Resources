/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e4dfc; name: FUN_004e4dfc
 */


byte * FUN_004e4dfc(long param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar7;
  long lVar6;
  ulong *puVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  
  puVar4 = PTR_DAT_047cba80;
  uVar11 = 0;
  plVar1 = (long *)(param_1 + 0x30);
LAB_004e4e50:
  do {
    if ((byte *)*param_3 <= param_2) {
      pbVar10 = param_2;
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004e50e0;
      auVar12 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar12._0_8_;
      pbVar10 = param_2;
      if ((auVar12._8_8_ & 1) != 0) goto LAB_004e50e0;
    }
    bVar3 = *param_2;
    auVar12[8] = bVar3;
    auVar12._0_8_ = param_2 + 1;
    auVar12._9_7_ = 0;
    if ((char)bVar3 < '\0') {
      bVar2 = param_2[1];
      if ((char)bVar2 < '\0') {
        auVar12 = FUN_0052e560(param_2);
        pbVar10 = (byte *)0x0;
        if (auVar12._0_8_ == 0) goto LAB_004e50e0;
      }
      else {
        auVar12._8_4_ = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
        auVar12._0_8_ = param_2 + 2;
        auVar12._12_4_ = 0;
      }
    }
    pbVar10 = auVar12._0_8_;
    uVar7 = auVar12._8_4_;
    switch((uint)(auVar12._8_8_ >> 3) & 0x1fffffff) {
    case 1:
      if ((uVar7 & 0xff) == 10) {
        param_2 = (byte *)FUN_0052e900(param_1 + 0x18,pbVar10,param_3);
      }
      else {
        if ((uVar7 & 0xff) != 8) break;
        bVar3 = *pbVar10;
        if ((char)bVar3 < '\0') {
          if ((char)pbVar10[1] < '\0') {
            auVar13 = FUN_0052e420(pbVar10);
          }
          else {
            auVar13._8_4_ = (uint)bVar3 + (uint)pbVar10[1] * 0x80 + -0x80;
            auVar13._0_8_ = pbVar10 + 2;
          }
        }
        else {
          auVar13[8] = bVar3;
          auVar13._0_8_ = pbVar10 + 1;
          auVar13._9_3_ = 0;
        }
        param_2 = auVar13._0_8_;
        uVar7 = *(uint *)(param_1 + 0x18);
        if (uVar7 == *(uint *)(param_1 + 0x1c)) {
          FUN_00531134(param_1 + 0x18,uVar7 + 1);
        }
        *(int *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4) = auVar13._8_4_;
        *(uint *)(param_1 + 0x18) = uVar7 + 1;
      }
      goto joined_r0x004e4ed8;
    case 2:
      if ((uVar7 & 0xff) != 0x12) break;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar5 = (undefined *)*plVar1;
      }
      else {
        puVar8 = (ulong *)*puVar8;
        puVar5 = (undefined *)*plVar1;
      }
      if (puVar5 == puVar4) {
        FUN_001fcdc8(plVar1,puVar8,puVar4);
        puVar5 = (undefined *)*plVar1;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar5,pbVar10,param_3);
      goto joined_r0x004e4ed8;
    case 3:
      if ((uVar7 & 0xff) == 0x18) {
        param_2 = pbVar10 + 1;
        bVar3 = *pbVar10;
        uVar7 = (uint)bVar3;
        uVar11 = uVar11 | 2;
        if ((char)bVar3 < '\0') {
          uVar7 = ((uint)bVar3 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar13 = FUN_0052e420(pbVar10);
            param_2 = auVar13._0_8_;
            *(int *)(param_1 + 0x38) = auVar13._8_4_;
            goto joined_r0x004e4ed8;
          }
          param_2 = pbVar10 + 2;
        }
        *(uint *)(param_1 + 0x38) = uVar7;
        goto LAB_004e4e50;
      }
      break;
    case 4:
      if ((uVar7 & 0xff) == 0x20) {
        param_2 = pbVar10 + 1;
        uVar11 = uVar11 | 4;
        uVar7 = (uint)*pbVar10;
        if ((char)*pbVar10 < '\0') {
          uVar7 = (uVar7 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar13 = FUN_0052e420(pbVar10);
            param_2 = auVar13._0_8_;
            *(int *)(param_1 + 0x3c) = auVar13._8_4_;
            goto joined_r0x004e4ed8;
          }
          param_2 = pbVar10 + 2;
        }
        *(uint *)(param_1 + 0x3c) = uVar7;
        goto LAB_004e4e50;
      }
    }
    if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar7 - 1;
      goto LAB_004e50e0;
    }
    uVar9 = *(ulong *)(param_1 + 8);
    if ((uVar9 & 1) == 0) {
      lVar6 = FUN_00264e54((ulong *)(param_1 + 8));
    }
    else {
      lVar6 = (uVar9 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_00515960(auVar12._8_8_ & 0xffffffff,lVar6,pbVar10,param_3);
joined_r0x004e4ed8:
    if (param_2 == (byte *)0x0) {
      pbVar10 = (byte *)0x0;
LAB_004e50e0:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar11;
      return pbVar10;
    }
  } while( true );
}


