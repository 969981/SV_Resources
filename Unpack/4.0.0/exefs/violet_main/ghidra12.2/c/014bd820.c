/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014bd820; name: FUN_014bd820
 */


void FUN_014bd820(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  plVar11 = param_1 + 3;
  lVar3 = FUN_014bdac4(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar12 = *param_1;
  lVar5 = param_1[1];
  local_60 = 0;
  local_58 = plVar11;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,lVar3 << 7,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xe8))();
    }
  }
  puVar9 = (undefined8 *)(lVar4 + (lVar5 - lVar12 >> 7) * 0x80);
  local_60 = lVar4 + lVar3 * 0x80;
  lVar12 = *plVar11;
  local_70 = puVar9;
  local_68 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  uVar7 = *param_2;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[4] = uVar7;
  FUN_00d0a71c(puVar9 + 5,param_2 + 1);
  *(undefined1 *)(puVar9 + 7) = *(undefined1 *)(param_2 + 3);
  *puVar9 = &LAB_028ef8dc;
  puVar9[3] = &LAB_028efb64;
  puVar9[1] = &LAB_028efa10;
  puVar9[2] = &LAB_028efb20;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_68 = local_68 + 0x10;
  FUN_014bdb14(plVar11,*param_1,param_1[1],&local_70);
  puVar10 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar12 = param_1[2];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  param_1[2] = local_60;
  local_70 = puVar10;
  local_68 = puVar9;
  local_60 = lVar12;
  while (puVar1 = puVar9, puVar1 != puVar10) {
    puVar9 = puVar1 + -0x10;
    pcVar8 = (code *)puVar1[-0xf];
    local_68 = puVar9;
    if (pcVar8 != (code *)0x0) {
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      (*pcVar8)(puVar1 + -0xc);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    lVar12 = lVar12 - (long)puVar10;
    plVar11 = (long *)*local_58;
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,lVar12,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,puVar10,lVar12,0x10);
    }
  }
  return;
}


