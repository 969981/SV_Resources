/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01599300; name: FUN_01599300
 */


void FUN_01599300(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  uint *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  long *local_88;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  long *local_28;
  
  puVar16 = &DAT_cbf29ce484222645;
  FUN_01599798(*(undefined8 *)(param_1 + 0x70));
  plVar6 = (long *)FUN_00f618d8();
  puVar3 = (undefined8 *)PTR_PTR_047d4508;
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  if (*plVar6 != 0) {
    puVar2 = (undefined8 *)(*plVar6 + 0x38);
  }
  pcVar7 = strrchr((char *)*puVar2,0x2f);
  if (pcVar7 == (char *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    pbVar14 = (byte *)(pcVar7 + 1);
    local_50 = strlen((char *)pbVar14);
    bVar4 = *pbVar14;
    local_60 = &DAT_cbf29ce484222645;
    if (bVar4 != 0) {
      local_60 = &DAT_cbf29ce484222645;
      pbVar15 = (byte *)(pcVar7 + 2);
      do {
        local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar4 != 0);
    }
    local_48 = (long *)0x0;
    pbStack_58 = pbVar14;
  }
  lVar8 = FUN_01599798(*(undefined8 *)(param_1 + 0x70));
  puVar9 = (uint *)(**(code **)(**(long **)(lVar8 + 8) + 0x70))();
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
  puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9 + 4);
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar13 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar9 = (uint *)((long)piVar1 + uVar13);
    lVar8 = (long)puVar9 + (ulong)*puVar9;
  }
  local_70 = strlen((char *)(lVar8 + 4));
  bVar4 = *(byte *)(lVar8 + 4);
  if (bVar4 != 0) {
    pbVar14 = (byte *)(lVar8 + 5);
    do {
      puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar4 != 0);
  }
  local_68 = (long *)0x0;
  local_80 = puVar16;
  pcStack_78 = (char *)(lVar8 + 4);
  FUN_01599798(*(undefined8 *)(param_1 + 0x70));
  plVar6 = (long *)FUN_00f618d8();
  if (*plVar6 != 0) {
    puVar3 = (undefined8 *)(*plVar6 + 0x38);
  }
  pcVar10 = strrchr((char *)*puVar3,0x2f);
  pcVar7 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    pcVar7 = pcVar10 + 1;
  }
  local_28 = (long *)0x0;
  if (*pcVar7 == '\0') {
    plVar6 = (long *)FUN_00d44228();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    local_28 = plVar6;
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar11;
    FUN_00cf9884(&local_a0,uVar11,pcVar7);
    plVar6 = local_28;
    local_28 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    local_28 = local_a0;
  }
  FUN_0125a1ac(&local_a0,&local_28,0);
  uVar11 = FUN_00da473c(param_1,&local_60,&local_80,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  plVar6 = *(long **)(param_1 + 0x60);
  lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,0x60,8);
  if (lVar8 == 0) {
    local_90 = 0;
    local_88 = (long *)0x0;
    local_98 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar6;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_01599908(lVar8,*(undefined8 *)(param_1 + 0x60),uVar11);
    local_90 = 0x60;
    local_88 = (long *)0x8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_98 = plVar6;
  }
  local_a0 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar8;
  if (lVar12 != 0) {
    FUN_00e51108(param_1 + 0x90);
  }
  *(undefined8 *)(param_1 + 0x98) = local_90;
  *(long **)(param_1 + 0xa0) = local_88;
  *(long **)(param_1 + 0x90) = local_98;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


