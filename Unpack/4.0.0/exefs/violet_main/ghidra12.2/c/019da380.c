/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019da380; name: FUN_019da380
 */


void FUN_019da380(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01ebce0c();
    return;
  }
  plVar1 = param_1 + 3;
  lVar4 = FUN_019da518(param_1,(param_1[1] - *param_1 >> 4) + 1);
  lVar6 = *param_1;
  lVar5 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 4,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar7 = (undefined8 *)(local_68 + (lVar5 - lVar6 >> 4) * 0x10);
  local_50 = local_68 + lVar4 * 0x10;
  lVar6 = *plVar1;
  puStack_60 = puVar7;
  local_58 = puVar7;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    uVar2 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar2;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar2 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar7 = local_58;
  }
  local_58 = puVar7 + 2;
  FUN_019da568(param_1,&local_68);
  FUN_019da5d0(&local_68);
  return;
}


