/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f074a0; name: FUN_00f074a0
 */


void FUN_00f074a0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  uVar1 = *(uint *)(param_1 + 0x6c);
  if (0 < (int)uVar1) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (uVar1 != 1) {
      lVar12 = (ulong)uVar1 - 1;
      puVar11 = (undefined4 *)(param_1 + 0xb4);
      do {
        *(undefined8 *)(puVar11 + -2) = 0;
        lVar12 = lVar12 + -1;
        *puVar11 = 0;
        puVar11 = puVar11 + 9;
      } while (lVar12 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar3 = PTR_DAT_047d8280;
  if (*(long *)(param_1 + 0x60) == 0) {
    bVar7 = true;
  }
  else {
    bVar7 = **(char **)(*(long *)(param_1 + 0x60) + 0x38) == '\0';
  }
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  puVar5 = PTR_DAT_047d8290;
  puVar4 = PTR_DAT_047d8288;
  lVar12 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar12;
  if (bVar7) {
    uVar2 = *(undefined4 *)(param_1 + 0x68);
  }
  else {
    plVar14 = *(long **)(param_1 + 0x60);
    plVar10 = (long *)PTR_DAT_047d8b70;
    if (plVar14 != (long *)0x0) {
      plVar10 = plVar14 + 6;
    }
    local_f0 = *plVar10;
    plVar10 = (long *)PTR_PTR_047d4508;
    if (plVar14 != (long *)0x0) {
      plVar10 = plVar14 + 7;
    }
    lVar13 = *plVar10;
    if (plVar14 == (long *)0x0) {
      local_e0 = 0;
    }
    else {
      local_e0 = plVar14[8];
    }
    local_d8 = (long *)0x0;
    lStack_e8 = lVar13;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_d8 = plVar14;
    uVar9 = FUN_00f03dc8(param_1);
    memset(&local_d0,0,0x80);
    plVar10 = *(long **)(*(long *)(lVar12 + 0x200) + 0x60);
    iVar8 = (**(code **)(*plVar10 + 0xd0))(plVar10,lVar13,uVar9,1,&LAB_01080c70,lVar12,0,0,0);
    if ((iVar8 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar12 + 0x220),&local_f0,iVar8,uVar9,0,&local_d0,0),
       pcVar6 = local_c8, local_c8 != (code *)0x0)) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar6)(auStack_b0);
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (iVar8 != 0) goto LAB_00f075f0;
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar12 = *(long *)puVar4;
    *(long *)puVar5 = lVar12;
    uVar2 = *(undefined4 *)(param_1 + 0x68);
  }
  FUN_013ee4a0(0,lVar12,uVar2,4);
LAB_00f075f0:
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}


