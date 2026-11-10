/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02179dec; name: FUN_02179dec
 */


void FUN_02179dec(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  plVar7 = param_1 + 3;
  lVar2 = FUN_02179d9c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar6 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  lVar3 = 0;
  local_48 = plVar7;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar2 << 3,8), lVar3 == 0)) {
    (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
  }
  puVar8 = (undefined8 *)(lVar3 + (lVar4 - lVar6 >> 3) * 8);
  local_50 = lVar3 + lVar2 * 8;
  lVar6 = *plVar7;
  local_60 = puVar8;
  local_58 = puVar8;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    *puVar8 = 0xffffffffffffffff;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar8 = 0xffffffffffffffff;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar8 = local_58;
  }
  local_58 = puVar8 + 1;
  FUN_02179798(plVar7,*param_1,param_1[1],&local_60);
  puVar8 = (undefined8 *)*param_1;
  lVar6 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar4 = param_1[2];
  param_1[2] = local_50;
  local_58 = (undefined8 *)lVar6;
  if (lVar6 - (long)puVar8 != 0) {
    local_58 = (undefined8 *)(lVar6 + ((lVar6 - (long)puVar8) - 8U >> 3 ^ 0xffffffffffffffff) * 8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    lVar6 = lVar4 - (long)puVar8;
    plVar7 = (long *)*local_48;
    local_60 = puVar8;
    local_50 = lVar4;
    uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar5 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
      FUN_00c48fe8(plVar7,puVar8,lVar6,8);
      return;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,lVar6,8);
  }
  return;
}


