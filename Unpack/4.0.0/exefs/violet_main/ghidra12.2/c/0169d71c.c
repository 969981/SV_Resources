/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169d71c; name: FUN_0169d71c
 */


undefined8 FUN_0169d71c(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((*PTR_DAT_047d7430 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7430);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b6f450,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
    }
  }
  puVar6 = (undefined8 *)PTR_DAT_047d7440;
  puVar5 = (undefined8 *)PTR_DAT_047d7438;
  puVar1 = PTR_DAT_047d7430;
  lVar7 = *(long *)PTR_DAT_047d7438;
  *(long *)PTR_DAT_047d7440 = lVar7;
  if (lVar7 != 0) {
    if ((*puVar1 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d7430);
      puVar5 = (undefined8 *)PTR_DAT_047d7438;
      puVar6 = (undefined8 *)PTR_DAT_047d7440;
      if (iVar2 != 0) {
        FUN_00100190(&LAB_02b6f450,PTR_DAT_047d7438,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7430);
        puVar5 = (undefined8 *)PTR_DAT_047d7438;
        puVar6 = (undefined8 *)PTR_DAT_047d7440;
      }
    }
    *puVar6 = *puVar5;
    uVar3 = FUN_0169d9f0();
    if ((uVar3 & 1) != 0) {
      if ((*PTR_DAT_047da7c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(PTR_DAT_047da7c0);
        if (iVar2 != 0) {
          FUN_00100190(&LAB_02b6f5e4,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047da7c0);
        }
      }
      DAT_048420f0 = *(long *)PTR_DAT_047da7c8;
      if (DAT_048420f0 != 0) {
        if ((*PTR_DAT_047da7c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(PTR_DAT_047da7c0);
          if (iVar2 != 0) {
            FUN_00100190(&LAB_02b6f5e4,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047da7c0);
          }
        }
        DAT_048420f0 = *(long *)PTR_DAT_047da7c8;
        uVar3 = FUN_0169d9d0();
        if ((uVar3 & 1) != 0) {
          if (((DAT_04842108 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04842108), iVar2 != 0))
          {
            FUN_00100190(&LAB_02b6f660,&DAT_048420f8,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04842108);
          }
          DAT_04842110 = DAT_048420f8;
          if (DAT_048420f8 != 0) {
            if (((DAT_04842108 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04842108), iVar2 != 0)) {
              FUN_00100190(&LAB_02b6f660,&DAT_048420f8,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04842108);
            }
            DAT_04842110 = DAT_048420f8;
            uVar4 = FUN_0169da1c();
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}


