/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01757660; name: FUN_01757660
 */


void FUN_01757660(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [8];
  char local_150;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 auStack_145 [5];
  undefined1 auStack_140 [88];
  char local_e8 [4];
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_38;
  
  if (DAT_0485ec20 == '\0') {
    FUN_01759378();
    uVar3 = *param_1;
    local_38 = uVar3;
    FUN_017590a0(uVar3,*(undefined4 *)(param_1 + 5));
    FUN_01757a90(uVar3);
    FUN_01757ae0(uVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)((long)param_1 + 0x24));
    FUN_01757aa0(uVar3);
    FUN_01757b00(uVar3,param_1 + 1);
    FUN_01757ab0(uVar3);
    if (((*PTR_DAT_047da868 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047da868), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047da868);
    }
    lVar2 = *(long *)PTR_DAT_047da870;
    *(long *)PTR_DAT_047da878 = lVar2;
    if (lVar2 == 0) {
      FUN_01757d7c(local_38,&local_38);
    }
    if (((*PTR_DAT_047da9a0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047da9a0), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047e2088,PTR_DAT_047da9a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047da9a0);
    }
    lVar2 = *(long *)PTR_DAT_047da9a8;
    *(long *)PTR_DAT_047da9b0 = lVar2;
    if (lVar2 == 0) {
      FUN_01757ed8(local_38,&local_38);
    }
    if (*(char *)(param_1 + 0x2b) != '\0') {
      if (((*PTR_DAT_047e2050 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2050), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047e2078,PTR_DAT_047e2058,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047e2050);
      }
      lVar2 = *(long *)PTR_DAT_047e2058;
      *(long *)PTR_DAT_047e2060 = lVar2;
      if (lVar2 == 0) {
        FUN_01757b30(local_38);
      }
    }
    local_e8[0] = '\0';
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      memcpy((void *)((ulong)local_e8 | 4),param_1 + 6,0xa8);
      local_e8[0] = '\x01';
      FUN_01757ac0(local_38,(void *)((ulong)local_e8 | 4));
      if (((*PTR_DAT_047d6c98 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar2 = *(long *)PTR_DAT_047d6ca0;
      *(long *)PTR_DAT_047d6ca8 = lVar2;
      if (lVar2 == 0) {
        FUN_01758034(local_38,&local_38);
      }
      local_150 = '\0';
      if (*(char *)(param_1 + 0x1b) != '\0') {
        memcpy(&uStack_148,param_1 + 0x1c,0x60);
        local_150 = '\x01';
        if (((*PTR_DAT_047e2090 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar1 != 0)) {
          FUN_00100190(&LAB_02bddbc0,PTR_DAT_047e2098,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047e2090);
        }
        lVar2 = *(long *)PTR_DAT_047e2098;
        *(long *)PTR_DAT_047e20a0 = lVar2;
        if (lVar2 == 0) {
          FUN_0278d1d4(auStack_158,&uStack_148,&uStack_147,&uStack_146,auStack_145);
          FUN_0278d214(local_38,auStack_158,auStack_140);
        }
        if (local_150 != '\0') {
          local_150 = '\0';
        }
      }
    }
    if (*(char *)(param_1 + 0x28) != '\0') {
      local_e4 = *(undefined8 *)((long)param_1 + 0x144);
      local_dc = *(undefined8 *)((long)param_1 + 0x14c);
      local_d4 = *(undefined4 *)((long)param_1 + 0x154);
      local_e8[0] = '\x01';
      if (((*PTR_DAT_047da800 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047da800), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047da800);
      }
      lVar2 = *(long *)PTR_DAT_047da808;
      *(long *)PTR_DAT_047da810 = lVar2;
      if (lVar2 == 0) {
        FUN_017586e8(local_38,&local_38,(ulong)local_e8 | 4);
      }
    }
  }
  return;
}


