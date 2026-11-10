/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7c23c; name: FUN_01f7c23c
 */


undefined8 FUN_01f7c23c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar6 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar6;
  if (lVar6 != 0) {
    lVar2 = FUN_0156cb10(lVar6);
    if (lVar2 == 0) {
      return 0;
    }
    lVar6 = FUN_00fe9b78(lVar6);
    if (1 < *(ulong *)(lVar6 + 0x28)) {
      lVar7 = *(long *)(param_1 + 0x70);
      if (lVar7 != 0) {
LAB_01f7c2bc:
        thunk_FUN_007f3dbc(500);
        nn::os::GetSystemTick();
        uVar3 = nn::os::ConvertToTimeSpan();
        *(undefined8 *)(param_1 + 0x50) = uVar3;
        nn::os::GetSystemTick();
        uVar3 = nn::os::ConvertToTimeSpan();
        *(undefined8 *)(param_1 + 0x60) = uVar3;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(long *)(param_1 + 0x70) = lVar7;
        *(undefined4 *)(param_1 + 0x40) = 2;
        return 1;
      }
      lVar5 = *(ulong *)(lVar6 + 0x28) << 3;
      plVar4 = *(long **)(lVar6 + 0x20);
      do {
        lVar7 = *plVar4;
        if (lVar7 != lVar2) {
          if (lVar7 == 0) {
            return 0;
          }
          goto LAB_01f7c2bc;
        }
        lVar5 = lVar5 + -8;
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  return 0;
}


