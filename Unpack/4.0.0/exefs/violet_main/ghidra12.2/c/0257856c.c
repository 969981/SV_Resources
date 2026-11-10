/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0257856c; name: FUN_0257856c
 */


void FUN_0257856c(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  plVar7 = param_1 + 3;
  lVar3 = FUN_02579794(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar8 = *param_1;
  lVar5 = param_1[1];
  local_60 = 0;
  lVar4 = 0;
  local_58 = plVar7;
  if ((lVar3 != 0) &&
     (lVar4 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar3 << 4,8), lVar4 == 0)) {
    (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
  }
  puVar9 = (undefined8 *)(lVar4 + (lVar5 - lVar8 >> 4) * 0x10);
  local_60 = lVar4 + lVar3 * 0x10;
  lVar8 = *plVar7;
  local_70 = puVar9;
  local_68 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    uVar1 = *param_3;
    *puVar9 = *param_2;
    *(undefined4 *)(puVar9 + 1) = uVar1;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar1 = *param_3;
    *puVar9 = *param_2;
    *(undefined4 *)(puVar9 + 1) = uVar1;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar9 = local_68;
  }
  local_68 = puVar9 + 2;
  FUN_025797e4(plVar7,*param_1,param_1[1],&local_70);
  puVar9 = (undefined8 *)*param_1;
  lVar8 = param_1[1];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  lVar5 = param_1[2];
  param_1[2] = local_60;
  local_68 = (undefined8 *)lVar8;
  if (lVar8 - (long)puVar9 != 0) {
    local_68 = (undefined8 *)
               (lVar8 + ((lVar8 - (long)puVar9) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10);
  }
  if (puVar9 != (undefined8 *)0x0) {
    lVar8 = lVar5 - (long)puVar9;
    plVar7 = (long *)*local_58;
    local_70 = puVar9;
    local_60 = lVar5;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) != 0) && (lVar5 = FUN_00c4e600(), 0 < *(int *)(lVar5 + 0x12c8))) {
      FUN_00c48fe8(plVar7,puVar9,lVar8,8);
      return;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar9,lVar8,8);
  }
  return;
}


