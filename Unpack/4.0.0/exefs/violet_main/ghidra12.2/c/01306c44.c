/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01306c44; name: FUN_01306c44
 */


void FUN_01306c44(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar5 = FUN_01306df4(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar7 = *param_1;
  lVar6 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar5 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar5 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar2 = (undefined8 *)(local_68 + (lVar6 - lVar7 >> 7) * 0x80);
  local_50 = local_68 + lVar5 * 0x80;
  lVar7 = *plVar1;
  puStack_60 = puVar2;
  local_58 = puVar2;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
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
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = param_2[1];
  puVar2[4] = *param_2;
  puVar2[5] = uVar3;
  *puVar2 = &LAB_02de77c8;
  puVar2[1] = &LAB_02de77d0;
  puVar2[2] = &LAB_02de77d4;
  puVar2[3] = &LAB_02de77e8;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  local_58 = local_58 + 0x10;
  FUN_01306e44(param_1,&local_68);
  FUN_01306f1c(&local_68);
  return;
}


