/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db31ec; name: FUN_01db31ec
 */


void FUN_01db31ec(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar7 = FUN_01dafef4(param_1,(param_1[1] - *param_1 >> 8) + 1);
  lVar9 = *param_1;
  lVar8 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar7 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar7 << 8,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  puVar2 = (undefined8 *)(local_68 + (lVar8 - lVar9 >> 8) * 0x100);
  local_50 = local_68 + lVar7 * 0x100;
  lVar9 = *plVar1;
  puStack_60 = puVar2;
  local_58 = puVar2;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar2[6] = param_2[2];
  puVar2[7] = uVar5;
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  *puVar2 = FUN_01db3484;
  puVar2[1] = &LAB_00a2ddf8;
  puVar2[2] = &LAB_00a2de18;
  puVar2[3] = &LAB_00a2de2c;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  local_58 = local_58 + 0x20;
  FUN_0103b38c(param_1,&local_68);
  FUN_0103bbd0(&local_68);
  return;
}


