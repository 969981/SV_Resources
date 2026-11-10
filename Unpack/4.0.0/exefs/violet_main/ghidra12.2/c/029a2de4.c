/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a2de4; name: FUN_029a2de4
 */


int FUN_029a2de4(undefined1 param_1 [16],long param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  
  if ((*(int *)(param_2 + 0x54) < 0) && (0 < *(int *)(param_2 + 0x58))) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar4 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar4;
    nn::os::LockMutex((MutexType *)(lVar4 + 0x150));
    uVar1 = *(undefined8 *)(lVar4 + 0x120);
    uVar2 = *(undefined8 *)(lVar4 + 0x128);
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x150));
    local_40 = param_1._0_4_;
    fStack_3c = param_1._4_4_;
    fStack_38 = param_1._8_4_;
    local_40 = local_40 - (float)uVar1;
    fStack_3c = fStack_3c - (float)((ulong)uVar1 >> 0x20);
    fStack_38 = fStack_38 - (float)uVar2;
    local_40 = local_40 * local_40;
    fStack_3c = fStack_3c * fStack_3c;
    fStack_38 = fStack_38 * fStack_38;
    auVar6._0_4_ = local_40 + fStack_3c;
    auVar6._4_4_ = fStack_38 + 0.0;
    auVar6._8_4_ = local_40 + fStack_3c;
    auVar6._12_4_ = fStack_38 + 0.0;
    auVar6 = NEON_ext(auVar6,auVar6,4,1);
    fVar5 = (float)NEON_fminnm(SQRT(auVar6._0_4_ + auVar6._4_4_) / (float)*(int *)(param_2 + 0x58),
                               0x3f800000);
    param_3 = (int)(fVar5 * (float)*(int *)(param_2 + 0x54)) + param_3;
  }
  return param_3;
}


