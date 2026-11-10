/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018dcd6c; name: FUN_018dcd6c
 */


long * FUN_018dcd6c(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  local_c8 = 0x6842b0d135e0456c;
  pcStack_c0 = "pe_AudioJointComponent";
  local_b8 = 0x16;
  local_b0 = (long *)0x0;
  plVar3 = (long *)(**(code **)(*param_1 + 0x138))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x300,0x10);
  if (plVar4 == (long *)0x0) {
    uVar9 = 0;
    uVar8 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar3;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    FUN_00e76b9c(plVar4,&local_c8);
    puVar1 = PTR_DAT_047db030;
    plVar4[0x40] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    uVar8 = 0x300;
    uVar9 = 0x10;
    plVar4[0x41] = 0;
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    plVar4[0x42] = 0;
    plVar4[0x43] = 0;
    plVar4[0x53] = 0;
    plVar4[0x52] = 0;
    plVar4[0x51] = 0;
    plVar4[0x50] = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[0x20] = 0;
    plVar4[0x21] = 0;
    plVar4[0x22] = 0;
    plVar4[0x23] = 0;
    plVar4[0x30] = 0;
    plVar4[0x31] = 0;
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    local_78 = 0x300;
    uStack_70 = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    local_88 = plVar4;
    plStack_80 = plVar3;
  }
  plVar3 = plStack_80;
  pcVar7 = (code *)plVar4[0x11];
  if (pcVar7 != (code *)0x0) {
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    (*pcVar7)(plVar4 + 0x14);
  }
  plVar4[0x10] = (long)&LAB_0179a28c;
  plVar4[0x11] = (long)&LAB_02e4175c;
  pcVar7 = (code *)plVar4[0x21];
  plVar4[0x12] = (long)&LAB_02e41760;
  plVar4[0x13] = (long)&LAB_02e4176c;
  plVar4[0x14] = param_2;
  if (pcVar7 != (code *)0x0) {
    plVar4[0x22] = 0;
    plVar4[0x23] = 0;
    plVar4[0x20] = 0;
    plVar4[0x21] = 0;
    (*pcVar7)(plVar4 + 0x24);
  }
  *(undefined1 *)(plVar4 + 0x24) = 0;
  plVar4[0x20] = (long)FUN_029a755c;
  plVar4[0x21] = (long)&LAB_02e41778;
  pcVar7 = (code *)plVar4[0x31];
  plVar4[0x22] = (long)&LAB_02e4177c;
  plVar4[0x23] = (long)&LAB_02e41788;
  if (pcVar7 != (code *)0x0) {
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    plVar4[0x30] = 0;
    plVar4[0x31] = 0;
    (*pcVar7)(plVar4 + 0x34);
  }
  pcVar7 = (code *)plVar4[0x41];
  if (pcVar7 != (code *)0x0) {
    plVar4[0x43] = 0;
    plVar4[0x42] = 0;
    plVar4[0x41] = 0;
    plVar4[0x40] = 0;
    (*pcVar7)(plVar4 + 0x44);
  }
  pcVar7 = (code *)plVar4[0x51];
  if (pcVar7 != (code *)0x0) {
    plVar4[0x53] = 0;
    plVar4[0x52] = 0;
    plVar4[0x51] = 0;
    plVar4[0x50] = 0;
    (*pcVar7)(plVar4 + 0x54);
  }
  local_88 = (long *)0x0;
  local_a8 = plVar4;
  local_a0 = plVar3;
  local_98 = uVar8;
  local_90 = uVar9;
  FUN_00e767a8(param_1,&local_a8);
  plVar3 = local_a8;
  local_a8 = (long *)0x0;
  if (plVar3 == (long *)0x0) {
    local_88 = (long *)0x0;
    goto LAB_018dcf34;
  }
  FUN_00c4e5a0(auStack_68,0);
  (**(code **)*plVar3)(plVar3);
  uVar9 = local_90;
  uVar8 = local_98;
  plVar4 = local_a0;
  uVar6 = (**(code **)(*local_a0 + 0xf8))(local_a0);
  if ((uVar6 & 1) == 0) {
LAB_018dd020:
    (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,uVar8,uVar9);
  }
  else {
    lVar5 = FUN_00c4e600();
    if (*(int *)(lVar5 + 0x12c8) < 1) goto LAB_018dd020;
    FUN_00c48fe8(plVar4,plVar3,uVar8,uVar9);
  }
  FUN_00c4e70c(auStack_68);
  plVar3 = local_88;
  local_88 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_01e2e474(&plStack_80);
  }
LAB_018dcf34:
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return param_1;
}


