/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddf18c; name: FUN_01ddf18c
 */


ulong FUN_01ddf18c(long param_1,ulong param_2)

{
  char *param4;
  char *param5;
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *local_a0;
  byte *pbStack_98;
  undefined8 local_90;
  long *local_88;
  byte local_80 [64];
  
  local_80[0x30] = 0;
  local_80[0x31] = 0;
  local_80[0x32] = 0;
  local_80[0x33] = 0;
  local_80[0x34] = 0;
  local_80[0x35] = 0;
  local_80[0x36] = 0;
  local_80[0x37] = 0;
  local_80[0x38] = 0;
  local_80[0x39] = 0;
  local_80[0x3a] = 0;
  local_80[0x3b] = 0;
  local_80[0x3c] = 0;
  local_80[0x3d] = 0;
  local_80[0x3e] = 0;
  local_80[0x3f] = 0;
  local_80[0x20] = 0;
  local_80[0x21] = 0;
  local_80[0x22] = 0;
  local_80[0x23] = 0;
  local_80[0x24] = 0;
  local_80[0x25] = 0;
  local_80[0x26] = 0;
  local_80[0x27] = 0;
  local_80[0x28] = 0;
  local_80[0x29] = 0;
  local_80[0x2a] = 0;
  local_80[0x2b] = 0;
  local_80[0x2c] = 0;
  local_80[0x2d] = 0;
  local_80[0x2e] = 0;
  local_80[0x2f] = 0;
  local_80[0x10] = 0;
  local_80[0x11] = 0;
  local_80[0x12] = 0;
  local_80[0x13] = 0;
  local_80[0x14] = 0;
  local_80[0x15] = 0;
  local_80[0x16] = 0;
  local_80[0x17] = 0;
  local_80[0x18] = 0;
  local_80[0x19] = 0;
  local_80[0x1a] = 0;
  local_80[0x1b] = 0;
  local_80[0x1c] = 0;
  local_80[0x1d] = 0;
  local_80[0x1e] = 0;
  local_80[0x1f] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  iVar2 = FUN_0168d1b0();
  param4 = "a";
  if (iVar2 != 0x32) {
    param4 = "b";
  }
  param5 = "default";
  if ((param_2 & 1) == 0) {
    param5 = "gray";
  }
  snprintf((char *)local_80,0x40,"L_box_change_00/L_ride_box_0%d/ver_%s_%s",0,param4,param5);
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  puVar8 = &DAT_cbf29ce484222645;
  local_a0 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    local_a0 = &DAT_cbf29ce484222645;
    pbVar6 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  pbStack_98 = local_80;
  local_90 = 0x3f;
  local_88 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    lVar4 = FUN_00e895f4(plVar7[0x2e],&local_a0);
    if (lVar4 != 0) {
      FUN_00dfcea4();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  snprintf((char *)local_80,0x40,"L_box_change_00/L_ride_box_0%d/ver_%s_%s",1,param4,param5);
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  local_a0 = &DAT_cbf29ce484222645;
  if (local_80[0] != 0) {
    local_a0 = &DAT_cbf29ce484222645;
    pbVar6 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  pbStack_98 = local_80;
  local_90 = 0x3f;
  local_88 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    lVar4 = FUN_00e895f4(plVar7[0x2e],&local_a0);
    if (lVar4 != 0) {
      FUN_00dfcea4();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  uVar3 = snprintf((char *)local_80,0x40,"L_box_change_00/L_ride_box_0%d/ver_%s_%s",2,param4,param5)
  ;
  uVar5 = (ulong)uVar3;
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  if (local_80[0] != 0) {
    pbVar6 = (byte *)((ulong)local_80 | 1);
    bVar1 = local_80[0];
    do {
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  pbStack_98 = local_80;
  local_90 = 0x3f;
  local_88 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    local_a0 = puVar8;
    lVar4 = FUN_00e895f4(plVar7[0x2e],&local_a0);
    if (lVar4 != 0) {
      FUN_00dfcea4();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    uVar5 = (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  return uVar5;
}


