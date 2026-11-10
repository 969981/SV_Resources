/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029bba08; name: FUN_029bba08
 */


void FUN_029bba08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar6 = *(long *)(param_1 + 0xb0);
      if (lVar6 == 0) {
        return;
      }
      if (*(long *)(lVar6 + 0x48) != 0) {
        FUN_00d1f59c();
      }
      if (*(long *)(lVar6 + 8) != 0) {
        FUN_00d1f59c();
      }
      if (*(long *)(lVar6 + 0x88) != 0) {
        FUN_00d1f59c();
      }
      puVar1 = PTR_DAT_047d8c40;
      if (((*PTR_DAT_047d8c40 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      puVar3 = PTR_DAT_047d8c50;
      puVar2 = PTR_DAT_047d8c48;
      uVar7 = *(undefined8 *)PTR_DAT_047d8c48;
      *(undefined8 *)PTR_DAT_047d8c50 = uVar7;
      if (*(long *)(lVar6 + 0x48) == 0) {
        lVar5 = FUN_00da5204();
      }
      else {
        lVar5 = *(long *)(lVar6 + 0x48) + 0x40;
      }
      FUN_028a3630(uVar7,lVar5);
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar7;
      if (*(long *)(lVar6 + 8) == 0) {
        lVar5 = FUN_00da5204();
      }
      else {
        lVar5 = *(long *)(lVar6 + 8) + 0x40;
      }
      FUN_028a3630(uVar7,lVar5);
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar7;
      if (*(long *)(lVar6 + 0x88) == 0) {
        lVar6 = FUN_00da5204();
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x88) + 0x40;
      }
      FUN_028a3630(uVar7,lVar6);
      return;
    }
    FUN_00d1f59c();
    if (((*PTR_DAT_047d8c40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d8c48;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar7;
    lVar6 = *(long *)(param_1 + 0x38);
  }
  else {
    FUN_00d1f59c();
    if (((*PTR_DAT_047d8c40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d8c48;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar7;
    lVar6 = *(long *)(param_1 + 0x78);
  }
  if (lVar6 == 0) {
    lVar6 = FUN_00da5204();
  }
  else {
    lVar6 = lVar6 + 0x40;
  }
  FUN_028a3630(uVar7,lVar6);
  return;
}


