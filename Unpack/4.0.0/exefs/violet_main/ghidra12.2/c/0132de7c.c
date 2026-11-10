/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132de7c; name: FUN_0132de7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0132de7c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x30);
  uStack_28 = *(undefined8 *)(lVar3 + 0x98);
  local_30 = *(undefined8 *)(lVar3 + 0x90);
  auVar6 = *(undefined1 (*) [16])(lVar3 + 0xa0);
  uStack_48 = auVar6._8_8_;
  local_50 = auVar6._0_8_;
  uStack_38 = _UNK_03cabe58;
  uStack_40 = _DAT_03cabe50;
  if (((*(ulong *)(lVar2 + 0x60) < 0xfffffffffffffffe) &&
      (((*(long *)(lVar2 + 0x40) != 0 || (*(long *)(lVar2 + 0x48) != 0)) &&
       (fVar5 = auVar6._0_4_ * auVar6._0_4_, fVar7 = auVar6._4_4_ * auVar6._4_4_,
       fVar8 = auVar6._8_4_ * auVar6._8_4_, fVar9 = auVar6._12_4_ * auVar6._12_4_,
       auVar6._0_4_ = fVar5 + fVar7, auVar6._4_4_ = fVar8 + fVar9, auVar6._8_4_ = fVar5 + fVar7,
       auVar6._12_4_ = fVar8 + fVar9, auVar6 = NEON_ext(auVar6,auVar6,4,1),
       1.1920929e-07 < auVar6._0_4_ + auVar6._4_4_)))) && (*(char *)(lVar2 + 0x68) == '\0')) {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar4;
    FUN_00dc21b8(uVar4,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48),
                 *(undefined8 *)(lVar2 + 0x60),&local_50);
    lVar2 = *(long *)(param_1 + 0x70);
  }
  FUN_00f8d3a8(lVar2,0);
  FUN_00f8e620(*(undefined8 *)(param_1 + 0x70),0);
  return;
}


