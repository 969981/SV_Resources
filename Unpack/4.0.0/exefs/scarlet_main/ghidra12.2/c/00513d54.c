/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00513d54; name: FUN_00513d54
 */


byte * FUN_00513d54(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  
LAB_00513d7c:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar8 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar8._0_8_;
      if ((auVar8._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar2 = *param_2;
    auVar8[8] = bVar2;
    auVar8._0_8_ = param_2 + 1;
    auVar8._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        auVar8 = FUN_0052e560(param_2);
        if (auVar8._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar8._8_4_ = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        auVar8._0_8_ = param_2 + 2;
        auVar8._12_4_ = 0;
      }
    }
    pbVar7 = auVar8._0_8_;
    uVar5 = (uint)(auVar8._8_8_ >> 3) & 0x1fffffff;
    uVar3 = auVar8._8_4_;
    if (uVar5 == 2) {
      if ((uVar3 & 0xff) == 0x10) {
        param_2 = pbVar7 + 1;
        uVar3 = (uint)*pbVar7;
        if ((char)*pbVar7 < '\0') {
          uVar3 = (uVar3 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar9 = FUN_0052e420(pbVar7);
            param_2 = auVar9._0_8_;
            *(int *)(param_1 + 0x18) = auVar9._8_4_;
            goto joined_r0x00513e2c;
          }
          param_2 = pbVar7 + 2;
        }
        *(uint *)(param_1 + 0x18) = uVar3;
        goto LAB_00513d7c;
      }
LAB_00513e34:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar3 - 1;
        return pbVar7;
      }
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) == 0) {
        lVar6 = FUN_00264e54((ulong *)(param_1 + 8));
      }
      else {
        lVar6 = (uVar4 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar8._8_8_ & 0xffffffff,lVar6,pbVar7,param_3);
    }
    else {
      if ((uVar5 != 1) || ((uVar3 & 0xff) != 8)) goto LAB_00513e34;
      bVar2 = *pbVar7;
      uVar4 = (ulong)bVar2;
      if (-1 < (char)bVar2) {
        lVar6 = 1;
LAB_00513e88:
        param_2 = pbVar7 + lVar6;
        *(ulong *)(param_1 + 0x10) = uVar4;
        goto LAB_00513d7c;
      }
      uVar4 = (ulong)(((uint)bVar2 + (uint)pbVar7[1] * 0x80) - 0x80);
      if (-1 < (char)pbVar7[1]) {
        lVar6 = 2;
        goto LAB_00513e88;
      }
      auVar8 = FUN_0052e420(pbVar7);
      param_2 = auVar8._0_8_;
      *(long *)(param_1 + 0x10) = auVar8._8_8_;
    }
joined_r0x00513e2c:
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


