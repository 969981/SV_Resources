/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01692b7c; name: FUN_01692b7c
 */


void FUN_01692b7c(undefined8 *param_1,long param_2,void *param_3,uint param_4,uint *param_5,
                 int param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  void *__s;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *(undefined4 *)(param_2 + 0x44) = 0;
  local_68 = 0;
  *param_5 = param_4 + 0x10;
  *(uint *)(param_2 + 0x48) = param_4;
  if (param_6 == 1) {
    FUN_01692dac(&local_88,param_2,param_3,param_4,&local_68);
    local_98 = local_70;
    uStack_90 = local_78;
    *param_5 = (uint)local_68 + 0x10;
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | 2;
    pvVar7 = local_88;
    plVar8 = plStack_80;
    param_3 = local_88;
    param_4 = (uint)local_68;
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    pvVar7 = (void *)0x0;
    plVar8 = (long *)0x0;
  }
  plVar10 = *(long **)(param_2 + 8);
  uVar2 = *param_5;
  uVar9 = (ulong)uVar2;
  __s = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar9,1);
  if (__s == (void *)0x0) {
    puVar6 = (undefined8 *)0x0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar10;
    lVar5 = *(long *)(lVar4 + 0x80) + 1;
    *(long *)(lVar4 + 0x80) = lVar5;
    if (uVar2 != 0) {
      memset(__s,0,uVar9);
      lVar5 = *(long *)(lVar4 + 0x80);
    }
    *param_1 = __s;
    param_1[1] = plVar10;
    param_1[2] = uVar9;
    param_1[3] = 1;
    *(long *)(lVar4 + 0x80) = lVar5 + -1;
    puVar6 = (undefined8 *)*param_1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *puVar6 = *(undefined8 *)(param_2 + 0x40);
  puVar6[1] = uVar1;
  memcpy(puVar6 + 2,param_3,(ulong)param_4);
  if (pvVar7 != (void *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar9 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
      FUN_00c48fe8(plVar8,pvVar7,uStack_90,local_98);
      return;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,pvVar7,uStack_90,local_98);
  }
  return;
}


