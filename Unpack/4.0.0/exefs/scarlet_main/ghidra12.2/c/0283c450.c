/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0283c450; name: FUN_0283c450
 */


long * FUN_0283c450(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  code *local_1d8;
  undefined8 auStack_1c0 [12];
  undefined *local_160;
  code *local_158;
  undefined *local_150;
  code *local_148;
  undefined8 local_140 [12];
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  code *local_c8;
  undefined8 local_c0 [12];
  
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1d0,0x10);
  local_d8 = (code *)PTR_FUN_047e2288;
  local_e0 = PTR_LAB_047e2280;
  if (plVar10 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_c0[0] = *param_4;
  *param_4 = 0;
  local_158 = (code *)PTR_FUN_047e22b0;
  local_160 = PTR_LAB_047e22a8;
  local_d0 = PTR_FUN_047e2290;
  local_c8 = (code *)PTR_FUN_047e22a0;
  local_140[0] = *param_5;
  *param_5 = 0;
  puVar5 = PTR_FUN_047e22d0;
  puVar4 = PTR_LAB_047e22c8;
  local_150 = PTR_FUN_047e22c0;
  local_148 = (code *)PTR_FUN_047e22b8;
  auStack_1c0[0] = *param_6;
  *param_6 = 0;
  puVar6 = PTR_FUN_047e22d8;
  puVar3 = PTR_FUN_047e2298;
  local_1d8 = (code *)puVar5;
  FUN_0191e33c();
  puVar2 = PTR_DAT_047e20d0;
  *plVar10 = (long)(PTR_DAT_047e20d0 + 0x10);
  plVar10[4] = (long)(puVar2 + 0x88);
  plVar10[5] = (long)(puVar2 + 0xd8);
  uVar1 = *param_3;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined4 *)(plVar10 + 8) = uVar1;
  plVar10[0xd] = 0;
  if (local_c8 != (code *)0x0) {
    (*local_c8)(local_c0,plVar10 + 0xe);
    pcVar7 = local_d8;
    plVar10[0xd] = (long)local_c8;
    plVar10[10] = (long)local_e0;
    plVar10[0xb] = (long)local_d8;
    plVar10[0xc] = (long)local_d0;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined *)0x0;
      local_c8 = (code *)0x0;
      local_e0 = (undefined *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar7)(local_c0);
    }
  }
  plVar10[0x1a] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1b] = 0;
  if (local_148 != (code *)0x0) {
    (*local_148)(local_140,plVar10 + 0x1e);
    pcVar7 = local_158;
    plVar10[0x1d] = (long)local_148;
    plVar10[0x1a] = (long)local_160;
    plVar10[0x1b] = (long)local_158;
    plVar10[0x1c] = (long)local_150;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined *)0x0;
      local_148 = (code *)0x0;
      local_160 = (undefined *)0x0;
      local_158 = (code *)0x0;
      (*pcVar7)(local_140);
    }
  }
  plVar10[0x2c] = 0;
  plVar10[0x2d] = 0;
  plVar10[0x2a] = 0;
  plVar10[0x2b] = 0;
  if (puVar6 != (undefined *)0x0) {
    (*(code *)puVar6)(auStack_1c0,plVar10 + 0x2e);
    plVar10[0x2d] = (long)puVar6;
    plVar10[0x2a] = (long)puVar4;
    plVar10[0x2b] = (long)puVar5;
    plVar10[0x2c] = (long)puVar3;
    if (puVar5 == (undefined *)0x0) goto LAB_0283c6c0;
    local_1d8 = (code *)0x0;
    (*(code *)puVar5)(auStack_1c0);
  }
  if (local_1d8 != (code *)0x0) {
    (*local_1d8)(auStack_1c0);
  }
LAB_0283c6c0:
  pcVar7 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined *)0x0;
    local_148 = (code *)0x0;
    local_160 = (undefined *)0x0;
    local_158 = (code *)0x0;
    (*pcVar7)(local_140);
  }
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar7)(local_c0);
  }
  *(undefined4 *)(plVar10 + 3) = 0x1001d0;
  plVar10[1] = (long)param_2;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  return plVar10;
}


