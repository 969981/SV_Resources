/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0283a3f8; name: FUN_0283a3f8
 */


long * FUN_0283a3f8(long *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long local_1e0;
  code *local_1d8;
  long local_1d0;
  code *local_1c8;
  undefined1 auStack_1c0 [96];
  long local_160;
  code *local_158;
  long local_150;
  code *local_148;
  undefined1 auStack_140 [96];
  long local_e0;
  code *local_d8;
  long local_d0;
  code *local_c8;
  undefined1 auStack_c0 [96];
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_1;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x1d0,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  FUN_0283a704(&local_e0,param_3);
  local_150 = 0;
  local_148 = (code *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  FUN_0283a7dc(&local_160,param_4);
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1e0 = 0;
  local_1d8 = (code *)0x0;
  FUN_0283a97c(&local_1e0,param_5);
  FUN_0191e33c(plVar6);
  puVar2 = PTR_DAT_047e20d0;
  *plVar6 = (long)(PTR_DAT_047e20d0 + 0x10);
  plVar6[4] = (long)(puVar2 + 0x88);
  plVar6[5] = (long)(puVar2 + 0xd8);
  uVar1 = *param_2;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(undefined4 *)(plVar6 + 8) = uVar1;
  plVar6[0xd] = 0;
  if (local_c8 != (code *)0x0) {
    (*local_c8)(auStack_c0,plVar6 + 0xe);
    pcVar3 = local_d8;
    plVar6[0xd] = (long)local_c8;
    plVar6[10] = local_e0;
    plVar6[0xb] = (long)local_d8;
    plVar6[0xc] = local_d0;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      local_c8 = (code *)0x0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar3)(auStack_c0);
    }
  }
  plVar6[0x1a] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1b] = 0;
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_140,plVar6 + 0x1e);
    pcVar3 = local_158;
    plVar6[0x1d] = (long)local_148;
    plVar6[0x1a] = local_160;
    plVar6[0x1b] = (long)local_158;
    plVar6[0x1c] = local_150;
    if (local_158 != (code *)0x0) {
      local_150 = 0;
      local_148 = (code *)0x0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar3)(auStack_140);
    }
  }
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x2a] = 0;
  plVar6[0x2b] = 0;
  if (local_1c8 != (code *)0x0) {
    (*local_1c8)(auStack_1c0,plVar6 + 0x2e);
    pcVar3 = local_1d8;
    plVar6[0x2d] = (long)local_1c8;
    plVar6[0x2a] = local_1e0;
    plVar6[0x2b] = (long)local_1d8;
    plVar6[0x2c] = local_1d0;
    if (local_1d8 != (code *)0x0) {
      local_1d0 = 0;
      local_1c8 = (code *)0x0;
      local_1e0 = 0;
      local_1d8 = (code *)0x0;
      (*pcVar3)(auStack_1c0);
    }
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    local_1e0 = 0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = (code *)0x0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  *(undefined4 *)(plVar6 + 3) = 0x1001d0;
  plVar6[1] = (long)param_1;
  plVar6[2] = (long)plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


