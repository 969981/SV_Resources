/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d9468; name: FUN_029d9468
 */


void FUN_029d9468(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar5 = FUN_029da06c(param_1,(param_1[1] - *param_1 >> 5) * -0xf0f0f0f0f0f0f0f + 1);
  local_60 = 0;
  lVar8 = param_1[1] - *param_1 >> 5;
  plStack_58 = plVar1;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar5 * 0x220,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  plVar11 = (long *)(lVar6 + lVar8 * 0x20);
  local_60 = lVar6 + lVar5 * 0x220;
  lVar5 = *plVar1;
  local_78 = lVar6;
  local_70 = plVar11;
  local_68 = plVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar5;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  uVar9 = *param_2;
  *plVar11 = (long)(PTR_DAT_047e3270 + 0x10);
  lVar6 = lVar6 + lVar8 * 0x20;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  puVar2 = PTR_DAT_047e3268 + 0x10;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined **)(lVar6 + 8) = puVar2;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  puVar3 = PTR_DAT_047e0d78;
  *(undefined8 *)(lVar6 + 0xe8) = 0;
  *(undefined8 *)(lVar6 + 0xf0) = uVar9;
  *(undefined1 *)(lVar6 + 0x218) = 0;
  *(undefined8 *)(lVar6 + 0x198) = 0;
  *(undefined8 *)(lVar6 + 0x1a0) = uVar9;
  *(undefined8 *)(lVar6 + 0x210) = 0;
  *(undefined **)(lVar6 + 0xa8) = puVar2;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0x208) = 0;
  *(undefined **)(lVar6 + 0x158) = puVar2;
  *(undefined8 *)(lVar6 + 0x160) = 0;
  puVar3 = puVar3 + 0x10;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined8 *)(lVar6 + 0x68) = 0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0xd8) = 0;
  *(undefined8 *)(lVar6 + 0xe0) = 0;
  *(undefined8 *)(lVar6 + 200) = 0;
  *(undefined8 *)(lVar6 + 0xd0) = 0;
  *(undefined8 *)(lVar6 + 0xb8) = 0;
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0;
  *(undefined8 *)(lVar6 + 0x110) = 0;
  *(undefined8 *)(lVar6 + 0x118) = 0;
  *(undefined8 *)(lVar6 + 0x120) = 0;
  *(undefined8 *)(lVar6 + 0x128) = 0;
  *(undefined8 *)(lVar6 + 0x130) = 0;
  *(undefined8 *)(lVar6 + 0x138) = 0;
  *(undefined8 *)(lVar6 + 0x140) = 0;
  *(undefined8 *)(lVar6 + 0x168) = 0;
  *(undefined8 *)(lVar6 + 0x170) = 0;
  *(undefined8 *)(lVar6 + 0x178) = 0;
  *(undefined8 *)(lVar6 + 0x180) = 0;
  *(undefined8 *)(lVar6 + 0x98) = uVar9;
  *(undefined **)(lVar6 + 0xa0) = puVar3;
  *(undefined8 *)(lVar6 + 0x148) = uVar9;
  *(undefined **)(lVar6 + 0x150) = puVar3;
  *(undefined **)(lVar6 + 0x48) = puVar3;
  *(undefined **)(lVar6 + 0x50) = puVar2;
  *(undefined **)(lVar6 + 0xf8) = puVar3;
  *(undefined **)(lVar6 + 0x100) = puVar2;
  *(undefined8 *)(lVar6 + 0x188) = 0;
  *(undefined8 *)(lVar6 + 400) = 0;
  *(undefined1 **)(lVar6 + 0x1a8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar6 + 0x1b0) = &DAT_03c886bc;
  *(undefined8 *)(lVar6 + 0x1b8) = 0;
  *(undefined8 *)(lVar6 + 0x1c0) = 0;
  *(undefined1 **)(lVar6 + 0x1c8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar6 + 0x1d0) = &DAT_03c886bc;
  *(undefined8 *)(lVar6 + 0x1d8) = 0;
  *(undefined8 *)(lVar6 + 0x1e0) = 0;
  *(undefined1 **)(lVar6 + 0x1e8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar6 + 0x1f0) = &DAT_03c886bc;
  *(undefined8 *)(lVar6 + 0x1f8) = 0;
  *(undefined8 *)(lVar6 + 0x200) = 0;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  plVar11 = local_68 + 0x44;
  lVar5 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar5) {
    plVar10 = local_70;
    local_68 = (long *)lVar5;
  }
  else {
    plVar10 = local_70 + -0x44;
    local_68 = plVar11;
    FUN_00db66dc(plVar1,plVar10,lVar8 + -0x220);
    if (lVar8 + -0x220 != lVar5) {
      do {
        plVar10 = plVar10 + -0x44;
        FUN_00db66dc(plVar1,plVar10,lVar8 + -0x440);
        lVar8 = lVar8 + -0x220;
      } while (lVar5 + 0x220 != lVar8);
    }
    lVar5 = *param_1;
    local_68 = (long *)param_1[1];
  }
  *param_1 = (long)plVar10;
  param_1[1] = (long)plVar11;
  lVar8 = param_1[2];
  param_1[2] = local_60;
  local_78 = lVar5;
  local_70 = (long *)lVar5;
  local_60 = lVar8;
  FUN_00db2e78(&local_78);
  return;
}


