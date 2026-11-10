/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0c08c; name: FUN_01d0c08c
 */


void FUN_01d0c08c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  long local_30 [2];
  
  lVar2 = FUN_01e72638();
  if (lVar2 != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar3 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar3;
    if (lVar3 != 0) {
      FUN_01986a90(local_30);
      if ((local_30[0] == 0) || (*(long *)(local_30[0] + 0x10) == 0)) {
        *param_1 = 0;
      }
      else {
        FUN_01f6ea90(auStack_40,*(long *)(local_30[0] + 0x10) + -0x28);
        if ((local_38 == 0) || (*(long *)(local_38 + 8) == -1)) {
          *param_1 = 0;
        }
        else {
          uVar4 = FUN_01f7bc08(lVar2,auStack_40);
          FUN_01f7bd7c(param_1,uVar4);
        }
        if (local_38 != 0) {
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_01986be0(local_30);
      return;
    }
  }
  *param_1 = 0;
  return;
}


