/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029018a0; name: FUN_029018a0
 */


void FUN_029018a0(ulong *param_1,undefined8 *param_2)

{
  size_t __n;
  int iVar1;
  long lVar2;
  ulong uVar3;
  void *__src;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong *local_48;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 != (undefined8 *)param_1[3]) goto LAB_029018cc;
  pvVar7 = (void *)*param_1;
  __src = (void *)param_1[1];
  if (pvVar7 <= __src && (long)__src - (long)pvVar7 != 0) {
    lVar4 = (long)__src - (long)pvVar7 >> 3;
    lVar2 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar2 = lVar4 + 1;
    }
    __n = (long)puVar8 - (long)__src;
    pvVar7 = (void *)((long)__src + (lVar2 >> 1) * -8);
    if (__n != 0) {
      memmove(pvVar7,__src,__n);
      __src = (void *)param_1[1];
    }
    puVar8 = (undefined8 *)((long)pvVar7 + __n);
    param_1[1] = (ulong)((long)__src + (lVar2 >> 1) * -8);
    param_1[2] = (ulong)puVar8;
    goto LAB_029018cc;
  }
  local_50 = 0;
  lVar2 = (long)param_1[3] - (long)pvVar7;
  uVar9 = lVar2 >> 2;
  if (lVar2 == 0) {
    uVar9 = 1;
  }
  local_48 = param_1 + 4;
  local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar9 << 3,8);
  if (local_68 == 0) {
    (**(code **)(*(long *)param_1[4] + 0xe8))();
  }
  local_60 = local_68 + (uVar9 >> 2) * 8;
  local_50 = local_68 + uVar9 * 8;
  local_58 = local_60;
  FUN_02901db8(&local_68,param_1[1],param_1[2]);
  uVar9 = *param_1;
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  uVar5 = param_1[3];
  param_1[3] = local_50;
  local_58 = uVar6;
  if (uVar6 - uVar3 != 0) {
    local_58 = uVar6 + ((uVar6 - uVar3) - 8 >> 3 ^ 0xffffffffffffffff) * 8;
  }
  local_68 = uVar9;
  local_60 = uVar3;
  local_50 = uVar5;
  if (uVar9 != 0) {
    plVar10 = (long *)*local_48;
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if ((uVar3 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar10,uVar9,uVar5 - uVar9,8);
        goto LAB_02901a28;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,uVar9,uVar5 - uVar9,8);
  }
LAB_02901a28:
  puVar8 = (undefined8 *)param_1[2];
LAB_029018cc:
  uVar9 = param_1[4];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    *puVar8 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar9;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar8 = *param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  param_1[2] = param_1[2] + 8;
  return;
}


