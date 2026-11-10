/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a87bf4; name: FUN_01a87bf4
 */


void FUN_01a87bf4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  undefined8 *puStack_58;
  
  puVar2 = *(undefined8 **)(param_1 + 0x170);
  if (*(undefined8 **)(param_1 + 0x178) <= puVar2) {
    plVar1 = (long *)(param_1 + 0x168);
    puVar2 = (undefined8 *)(param_1 + 0x180);
    lVar5 = FUN_0200378c(plVar1,(*(long *)(param_1 + 0x170) - *plVar1 >> 4) + 1);
    lVar4 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x170);
    local_60 = 0;
    puStack_58 = puVar2;
    if (lVar5 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,lVar5 << 4,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
    }
    puVar7 = (undefined8 *)(local_78 + (lVar9 - lVar4 >> 4) * 0x10);
    local_60 = local_78 + lVar5 * 0x10;
    uVar8 = *puVar2;
    local_70 = puVar7;
    local_68 = puVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      FUN_00e03f38(puVar7,param_2);
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar7 = 0;
      puVar7[1] = 0;
      FUN_00e03f38(puVar7,param_2);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      puVar7 = local_68;
    }
    lVar4 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x170);
    if (lVar9 == lVar4) {
      puVar6 = local_70;
      local_68 = (undefined8 *)lVar4;
    }
    else {
      puVar6 = local_70 + -2;
      local_68 = puVar7 + 2;
      FUN_0144f398(puVar2,puVar6,lVar9 + -0x10);
      if (lVar9 + -0x10 != lVar4) {
        do {
          puVar6 = puVar6 + -2;
          FUN_0144f398(puVar2,puVar6,lVar9 + -0x20);
          lVar9 = lVar9 + -0x10;
        } while (lVar4 + 0x10 != lVar9);
      }
      lVar4 = *plVar1;
      local_68 = *(undefined8 **)(param_1 + 0x170);
    }
    *plVar1 = (long)puVar6;
    *(undefined8 **)(param_1 + 0x170) = puVar7 + 2;
    uVar8 = *(undefined8 *)(param_1 + 0x178);
    *(long *)(param_1 + 0x178) = local_60;
    local_78 = lVar4;
    local_70 = (undefined8 *)lVar4;
    local_60 = uVar8;
    FUN_0144f1c0(&local_78);
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x180);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_00e03f38(puVar2,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_00e03f38(puVar2,param_2);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 0x170) = puVar2 + 2;
  return;
}


