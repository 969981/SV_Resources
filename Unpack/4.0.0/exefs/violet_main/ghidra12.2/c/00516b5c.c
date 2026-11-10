/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00516b5c; name: FUN_00516b5c
 */


byte * FUN_00516b5c(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  while( true ) {
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
    pbVar5 = param_2 + 1;
    bVar2 = *param_2;
    auVar8[8] = bVar2;
    auVar8._0_8_ = pbVar5;
    auVar8._9_7_ = 0;
    if ((char)bVar2 < '\0') {
      iVar1 = (uint)bVar2 + (uint)*pbVar5 * 0x80 + -0x80;
      if ((char)*pbVar5 < '\0') {
        auVar8 = FUN_0052e560(param_2,iVar1);
        pbVar5 = auVar8._0_8_;
        if (pbVar5 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (auVar8._8_4_ == 0) {
          uVar6 = 0;
          break;
        }
      }
      else {
        pbVar5 = param_2 + 2;
        auVar8._8_4_ = iVar1;
        auVar8._0_8_ = pbVar5;
        auVar8._12_4_ = 0;
        if (iVar1 == 0) {
          uVar6 = 0;
          break;
        }
      }
    }
    else {
      uVar6 = 0;
      if (bVar2 == 0) break;
    }
    pbVar5 = auVar8._0_8_;
    uVar6 = auVar8._8_4_;
    if ((uVar6 & 7) == 4) break;
    if (uVar6 == 0xb) {
      iVar1 = *(int *)(param_3 + 0xb);
      *(int *)(param_3 + 0xb) = iVar1 + -1;
      if (iVar1 < 1) {
        return (byte *)0x0;
      }
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      param_2 = (byte *)FUN_0051d564(param_1,pbVar5,param_3);
      *(int *)(param_3 + 0xb) = *(int *)(param_3 + 0xb) + 1;
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + -1;
      iVar1 = *(int *)(param_3 + 10);
      *(undefined4 *)(param_3 + 10) = 0;
      if (iVar1 != 0xb) {
        return (byte *)0x0;
      }
    }
    else {
      uVar7 = auVar8._8_8_ >> 3 & 0x1fffffff;
      lVar3 = FUN_004a5c48(param_1[1],uVar7);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else if (param_3[0xc] == 0) {
        uVar4 = FUN_004f8e64(param_1[2],uVar7);
      }
      else {
        uVar4 = FUN_004a49dc(param_3[0xc],param_1[1],uVar7);
      }
      param_2 = (byte *)FUN_00516cf8(*param_1,pbVar5,param_3,auVar8._8_8_ & 0xffffffff,param_1[2],
                                     uVar4);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  *(uint *)(param_3 + 10) = uVar6 - 1;
  return pbVar5;
}


