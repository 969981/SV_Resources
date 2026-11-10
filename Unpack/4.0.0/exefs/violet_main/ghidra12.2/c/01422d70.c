/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01422d70; name: FUN_01422d70
 */


void FUN_01422d70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  int local_bc;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar4 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar7;
  param_1[4] = (long)(puVar4 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar4 + 0xd8);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_LAB_045d4da0;
  plVar1 = param_1 + 8;
  param_1[4] = (long)&PTR_LAB_045d4e18;
  *plVar9 = (long)&PTR_LAB_045d4e68;
  FUN_0142358c(plVar1);
  plVar9 = param_1 + 0x15;
  FUN_0142358c(plVar9);
  plVar2 = param_1 + 0x22;
  FUN_0142358c(plVar2);
  local_a8 = param_1[1];
  local_90 = 0;
  local_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x3f800000;
  local_a0 = 0xfffffffffffffff;
  uStack_98 = 0;
  local_88 = 0;
  local_78 = 0xfffffffffffffff;
  uStack_70 = 0;
  lStack_80 = local_a8;
  FUN_014237e0(plVar1,&local_b8);
  FUN_01423410(&local_b8);
  local_a8 = param_1[1];
  local_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x3f800000;
  local_90 = 0;
  local_a0 = 0xfffffffffffffff;
  uStack_98 = 0;
  local_88 = 0;
  local_78 = 0xfffffffffffffff;
  uStack_70 = 0;
  lStack_80 = local_a8;
  FUN_014237e0(plVar9,&local_b8);
  FUN_01423410(&local_b8);
  local_a8 = param_1[1];
  local_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x3f800000;
  local_90 = 0;
  local_a0 = 0xfffffffffffffff;
  uStack_98 = 0;
  local_88 = 0;
  local_78 = 0xfffffffffffffff;
  uStack_70 = 0;
  lStack_80 = local_a8;
  FUN_014237e0(plVar2,&local_b8);
  FUN_01423410(&local_b8);
  iVar5 = 0;
  ppuVar11 = &PTR_s_ColorUVScaleU_045d3c80;
  local_bc = 0;
  do {
    pbVar8 = *ppuVar11;
    if (pbVar8 != (byte *)0x0) {
      bVar3 = *pbVar8;
      local_b8 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_b8 = &DAT_cbf29ce484222645;
        do {
          pbVar8 = pbVar8 + 1;
          local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar8;
        } while (bVar3 != 0);
      }
      FUN_0142311c(plVar1,&local_b8,&local_bc);
      iVar5 = iVar5 + 1;
      local_bc = iVar5;
    }
    ppuVar11 = ppuVar11 + 2;
  } while (ppuVar11 != (undefined **)0x45d4d90);
  iVar5 = 0;
  puVar10 = &DAT_0485a168;
  local_bc = 0;
  do {
    pbVar8 = (byte *)*puVar10;
    if (pbVar8 != (byte *)0x0) {
      bVar3 = *pbVar8;
      local_b8 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        local_b8 = &DAT_cbf29ce484222645;
        do {
          pbVar8 = pbVar8 + 1;
          local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar8;
        } while (bVar3 != 0);
      }
      FUN_0142311c(plVar9,&local_b8,&local_bc);
      iVar5 = iVar5 + 1;
      local_bc = iVar5;
    }
    puVar10 = puVar10 + 3;
  } while ((byte **)puVar10 != &DAT_0485ab70);
  local_bc = 0;
  if (DAT_0485ab70 != (byte *)0x0) {
    bVar3 = *DAT_0485ab70;
    local_b8 = &DAT_cbf29ce484222645;
    if (bVar3 != 0) {
      local_b8 = &DAT_cbf29ce484222645;
      pbVar8 = DAT_0485ab70;
      do {
        pbVar8 = pbVar8 + 1;
        local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar8;
      } while (bVar3 != 0);
    }
    FUN_0142311c(plVar2,&local_b8,&local_bc);
    local_bc = 1;
  }
  if (DAT_0485abb8 != (byte *)0x0) {
    bVar3 = *DAT_0485abb8;
    local_b8 = &DAT_cbf29ce484222645;
    pbVar8 = DAT_0485abb8;
    while (bVar3 != 0) {
      pbVar8 = pbVar8 + 1;
      local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
    }
    FUN_0142311c(plVar2,&local_b8,&local_bc);
  }
  return;
}


