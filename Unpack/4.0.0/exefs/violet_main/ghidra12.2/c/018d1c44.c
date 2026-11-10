/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d1c44; name: FUN_018d1c44
 */


void FUN_018d1c44(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  if ((*(long *)(param_1 + 1000) != 0) && (**(char **)(*(long *)(param_1 + 1000) + 0x38) != '\0')) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar4 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar4;
    plVar6 = *(long **)(param_1 + 1000);
    plVar3 = (long *)PTR_DAT_047d8b70;
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 6;
    }
    local_d0 = *plVar3;
    plVar3 = (long *)PTR_PTR_047d4508;
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 7;
    }
    lVar5 = *plVar3;
    if (plVar6 == (long *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = plVar6[8];
    }
    local_b8 = (long *)0x0;
    lStack_c8 = lVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x318);
    local_b8 = plVar6;
    memset(&local_b0,0,0x80);
    plVar3 = *(long **)(*(long *)(lVar4 + 0x200) + 0x60);
    iVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3,lVar5,uVar7,1,&LAB_01080c70,lVar4,0,0,0);
    if (iVar2 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar4 + 0x220),&local_d0,iVar2,uVar7,0,&local_b0,0);
      pcVar1 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar1)(auStack_90);
      }
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (iVar2 != 0) goto LAB_018d1d6c;
  }
  FUN_013ee528(param_1);
LAB_018d1d6c:
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  return;
}


