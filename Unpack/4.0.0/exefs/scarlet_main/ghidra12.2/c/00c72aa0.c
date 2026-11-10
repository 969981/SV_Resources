/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c72aa0; name: FUN_00c72aa0
 */


undefined1  [16]
FUN_00c72aa0(undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int *param_6)

{
  uint *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  uVar5 = FUN_00c72fb0();
  auVar8._8_8_ = uVar11;
  auVar8._0_8_ = uVar10;
  if ((uVar5 & 1) == 0) goto LAB_00c72bb8;
  puVar7 = (ushort *)((long)param_6 - (long)*param_6);
  uVar2 = *puVar7;
  if (uVar2 < 5) {
LAB_00c72b94:
    lVar6 = 0;
    auVar4 = auVar8;
  }
  else {
    if ((ulong)puVar7[2] == 0) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_6 + (ulong)puVar7[2]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    auVar8 = FUN_00c72bf0(param_1,uVar10,lVar6);
    uVar11 = auVar8._8_8_;
    uVar10 = auVar8._0_8_;
    if (uVar2 < 7) goto LAB_00c72b94;
    if ((ulong)puVar7[3] == 0) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_6 + (ulong)puVar7[3]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_00c72bf0(param_1,param_3,lVar6);
    auVar8._8_8_ = uVar11;
    auVar8._0_8_ = uVar10;
    if (uVar2 < 9) goto LAB_00c72b94;
    if ((ulong)puVar7[4] == 0) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_6 + (ulong)puVar7[4]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_00c72bf0(param_1,param_4,lVar6);
    auVar4._8_8_ = uVar11;
    auVar4._0_8_ = uVar10;
    auVar3._8_8_ = uVar11;
    auVar3._0_8_ = uVar10;
    auVar8._8_8_ = uVar11;
    if ((uVar2 < 0xb) || (auVar8 = auVar3, (ulong)puVar7[5] == 0)) goto LAB_00c72b94;
    puVar1 = (uint *)((long)param_6 + (ulong)puVar7[5]);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar11 = auVar4._8_8_;
  uVar10 = auVar4._0_8_;
  FUN_00c72bf0(param_1,param_5,lVar6);
LAB_00c72bb8:
  auVar9._8_8_ = uVar11;
  auVar9._0_8_ = uVar10;
  return auVar9;
}


