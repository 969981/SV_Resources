/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfd4f8; name: FUN_01dfd4f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01dfd4f8(undefined1 param_1 [16],float param_2,long param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 extraout_q0 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_80 [2];
  undefined1 local_70 [16];
  undefined8 local_48;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar7 = _UNK_03cabe68;
  uVar6 = _DAT_03cabe60;
  local_48 = 0;
  fVar15 = (float)_UNK_03cabe68;
  uVar5 = (ulong)_UNK_03cabe68 >> 0x20;
  uVar9 = (ulong)_DAT_03cabe60 >> 0x20;
  fVar13 = (float)_DAT_03cabe60 * param_2;
  fVar14 = param_1._0_4_ - fVar13;
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00);
    if (iVar8 != 0) {
      FUN_00100190(extraout_q0,fVar14,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  auVar12._12_4_ = param_1._12_4_ + (float)uVar5 * param_2;
  auVar12._8_4_ = param_1._8_4_ + fVar15 * param_2;
  auVar12._4_4_ = param_1._4_4_ + (float)uVar9 * param_2;
  auVar12._0_4_ = param_1._0_4_ + fVar13;
  lVar11 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar11;
  local_26 = 0;
  local_28 = 0;
  uVar9 = FUN_00d6fedc(auVar12,fVar14,*(undefined8 *)(lVar11 + 0x70),
                       *(undefined4 *)(param_3 + 0x774),local_80,1,&local_28);
  uStack_98 = (undefined4)local_80[1];
  uStack_94 = (undefined4)((ulong)local_80[1] >> 0x20);
  iVar8 = -(uint)((uVar9 & 1) != 0);
  FUN_012c7df0(&local_48);
  uVar10 = 0;
  if ((uVar9 & 1) != 0) {
    auVar1._8_4_ = uStack_98;
    auVar1._0_8_ = local_80[0];
    auVar1._12_4_ = uStack_94;
    auVar2._4_4_ = iVar8;
    auVar2._0_4_ = iVar8;
    auVar2._8_4_ = iVar8;
    auVar2._12_4_ = iVar8;
    param_1 = param_1 ^ (param_1 ^ auVar1) & auVar2;
    auVar3._4_4_ = iVar8;
    auVar3._0_4_ = iVar8;
    uVar9 = FUN_01dfd66c(param_3);
    if (((uVar9 & 1) == 0) &&
       (auVar4._8_8_ = uVar7, auVar4._0_8_ = uVar6, auVar3._8_4_ = iVar8, auVar3._12_4_ = iVar8,
       uVar9 = FUN_01dfdae0(auVar4 ^ (auVar4 ^ local_70) & auVar3,param_3), (uVar9 & 1) == 0)) {
      uVar10 = 1;
      param_4[1] = param_1._8_8_;
      *param_4 = param_1._0_8_;
    }
    else {
      uVar10 = 0;
    }
  }
  return uVar10;
}


