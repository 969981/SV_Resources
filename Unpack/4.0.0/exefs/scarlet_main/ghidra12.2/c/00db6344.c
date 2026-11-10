/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db6344; name: FUN_00db6344
 */


void FUN_00db6344(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *plStack_58;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_029da010(param_1,(param_1[1] - *param_1 >> 6) * -0x5555555555555555 + 1);
  local_60 = 0;
  lVar7 = param_1[1] - *param_1 >> 6;
  plStack_58 = plVar1;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 * 0xc0,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  plVar10 = (long *)(lVar5 + lVar7 * 0x40);
  local_60 = lVar5 + lVar4 * 0xc0;
  lVar4 = *plVar1;
  local_78 = lVar5;
  local_70 = plVar10;
  local_68 = plVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar8 = *param_2;
  *plVar10 = (long)(PTR_DAT_047e0d78 + 0x10);
  lVar5 = lVar5 + lVar7 * 0x40;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  puVar2 = PTR_DAT_047e3268;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x50) = uVar8;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb5) = 0;
  *(undefined **)(lVar5 + 8) = puVar2 + 0x10;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined1 **)(lVar5 + 0x58) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar5 + 0x60) = &DAT_03c886bc;
  *(undefined1 **)(lVar5 + 0x78) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar5 + 0x80) = &DAT_03c886bc;
  *(undefined1 **)(lVar5 + 0x98) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar5 + 0xa0) = &DAT_03c886bc;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  plVar10 = local_68 + 0x18;
  lVar4 = *param_1;
  lVar7 = param_1[1];
  if (lVar7 == lVar4) {
    plVar9 = local_70;
    local_68 = (long *)lVar4;
  }
  else {
    plVar9 = local_70 + -0x18;
    local_68 = plVar10;
    FUN_00db683c(plVar1,plVar9,lVar7 + -0xc0);
    if (lVar7 + -0xc0 != lVar4) {
      do {
        plVar9 = plVar9 + -0x18;
        FUN_00db683c(plVar1,plVar9,lVar7 + -0x180);
        lVar7 = lVar7 + -0xc0;
      } while (lVar4 + 0xc0 != lVar7);
    }
    lVar4 = *param_1;
    local_68 = (long *)param_1[1];
  }
  *param_1 = (long)plVar9;
  param_1[1] = (long)plVar10;
  lVar7 = param_1[2];
  param_1[2] = local_60;
  local_78 = lVar4;
  local_70 = (long *)lVar4;
  local_60 = lVar7;
  FUN_00db3b74(&local_78);
  return;
}


