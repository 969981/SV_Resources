/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f45e9c; name: FUN_00f45e9c
 */


undefined8 FUN_00f45e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int local_50 [4];
  long local_28;
  
  puVar1 = PTR_DAT_047d0a08;
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    return 0;
  }
  iVar3 = FUN_00f21480();
  if ((iVar3 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) {
    plVar5 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea7c,0x80);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar7 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar7;
    if (lVar7 != 0) {
      if (*(long *)puVar1 == 0) {
        return 0;
      }
      local_28 = *(long *)(*(long *)puVar1 + 0xb8);
      if (local_28 != 0) {
        uVar6 = FUN_014c27b0(param_2);
        uVar4 = FUN_014c27c8(param_2);
        sVar2 = FUN_00d0ca40(lVar7);
        if ((sVar2 == 1) ||
           (((**(code **)(*plVar5 + 0xa0))(local_50,plVar5,uVar4), local_50[0] == 0 &&
            (FUN_0117e060(local_50,plVar5,uVar6,uVar4,0), local_50[0] == 0)))) {
          FUN_01a54aec(param_1,&local_28,uVar6,uVar4);
          return 1;
        }
      }
    }
  }
  return 0;
}


