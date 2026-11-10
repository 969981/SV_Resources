/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004cf3e0; name: FUN_004cf3e0
 */


byte * FUN_004cf3e0(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  uVar8 = 0;
LAB_004cf410:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004cf590;
      auVar9 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar9._0_8_;
      if ((auVar9._8_8_ & 1) != 0) goto LAB_004cf590;
    }
    bVar2 = *param_2;
    auVar9[8] = bVar2;
    auVar9._0_8_ = param_2 + 1;
    auVar9._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        auVar9 = FUN_0052e560(param_2);
        param_2 = (byte *)0x0;
        if (auVar9._0_8_ == 0) goto LAB_004cf590;
      }
      else {
        auVar9._8_4_ = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        auVar9._0_8_ = param_2 + 2;
        auVar9._12_4_ = 0;
      }
    }
    pbVar7 = auVar9._0_8_;
    uVar5 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
    uVar4 = auVar9._8_4_;
    if (uVar5 == 2) {
      if ((uVar4 & 0xff) == 0x10) {
        param_2 = pbVar7 + 1;
        bVar2 = *pbVar7;
        uVar4 = (uint)bVar2;
        uVar8 = uVar8 | 2;
        if ((char)bVar2 < '\0') {
          uVar4 = ((uint)bVar2 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar10 = FUN_0052e420(pbVar7);
            param_2 = auVar10._0_8_;
            *(int *)(param_1 + 0x1c) = auVar10._8_4_;
            goto joined_r0x004cf538;
          }
          param_2 = pbVar7 + 2;
        }
        *(uint *)(param_1 + 0x1c) = uVar4;
        goto LAB_004cf410;
      }
LAB_004cf4e8:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar4 - 1;
        param_2 = pbVar7;
        goto LAB_004cf590;
      }
      uVar6 = *(ulong *)(param_1 + 8);
      if ((uVar6 & 1) == 0) {
        lVar3 = FUN_00264e54((ulong *)(param_1 + 8));
      }
      else {
        lVar3 = (uVar6 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar9._8_8_ & 0xffffffff,lVar3,pbVar7,param_3);
    }
    else {
      if ((uVar5 != 1) || ((uVar4 & 0xff) != 8)) goto LAB_004cf4e8;
      param_2 = pbVar7 + 1;
      uVar8 = uVar8 | 1;
      uVar4 = (uint)*pbVar7;
      if (-1 < (char)*pbVar7) {
LAB_004cf40c:
        *(uint *)(param_1 + 0x18) = uVar4;
        goto LAB_004cf410;
      }
      uVar4 = (uVar4 + (uint)*param_2 * 0x80) - 0x80;
      if (-1 < (char)*param_2) {
        param_2 = pbVar7 + 2;
        goto LAB_004cf40c;
      }
      auVar10 = FUN_0052e420(pbVar7);
      param_2 = auVar10._0_8_;
      *(int *)(param_1 + 0x18) = auVar10._8_4_;
    }
joined_r0x004cf538:
    if (param_2 == (byte *)0x0) {
      param_2 = (byte *)0x0;
LAB_004cf590:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
      return param_2;
    }
  } while( true );
}


