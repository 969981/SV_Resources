/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dea984; name: FUN_01dea984
 */


void FUN_01dea984(long param_1,uint param_2,char param_3)

{
  char *pcVar1;
  char *__format;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined1 *local_90;
  byte *pbStack_88;
  undefined8 local_80;
  long *local_78;
  byte local_70 [64];
  
  local_70[0x30] = 0;
  local_70[0x31] = 0;
  local_70[0x32] = 0;
  local_70[0x33] = 0;
  local_70[0x34] = 0;
  local_70[0x35] = 0;
  local_70[0x36] = 0;
  local_70[0x37] = 0;
  local_70[0x38] = 0;
  local_70[0x39] = 0;
  local_70[0x3a] = 0;
  local_70[0x3b] = 0;
  local_70[0x3c] = 0;
  local_70[0x3d] = 0;
  local_70[0x3e] = 0;
  local_70[0x3f] = 0;
  pcVar1 = "L_window_marking_00/L_icon_%02d/red";
  if (param_3 != '\x02') {
    pcVar1 = "L_window_marking_00/L_icon_%02d/default";
  }
  local_70[0x20] = 0;
  local_70[0x21] = 0;
  local_70[0x22] = 0;
  local_70[0x23] = 0;
  local_70[0x24] = 0;
  local_70[0x25] = 0;
  local_70[0x26] = 0;
  local_70[0x27] = 0;
  local_70[0x28] = 0;
  local_70[0x29] = 0;
  local_70[0x2a] = 0;
  local_70[0x2b] = 0;
  local_70[0x2c] = 0;
  local_70[0x2d] = 0;
  local_70[0x2e] = 0;
  local_70[0x2f] = 0;
  __format = "L_window_marking_00/L_icon_%02d/blue";
  if (param_3 != '\x01') {
    __format = pcVar1;
  }
  local_70[0x10] = 0;
  local_70[0x11] = 0;
  local_70[0x12] = 0;
  local_70[0x13] = 0;
  local_70[0x14] = 0;
  local_70[0x15] = 0;
  local_70[0x16] = 0;
  local_70[0x17] = 0;
  local_70[0x18] = 0;
  local_70[0x19] = 0;
  local_70[0x1a] = 0;
  local_70[0x1b] = 0;
  local_70[0x1c] = 0;
  local_70[0x1d] = 0;
  local_70[0x1e] = 0;
  local_70[0x1f] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  local_70[10] = 0;
  local_70[0xb] = 0;
  local_70[0xc] = 0;
  local_70[0xd] = 0;
  local_70[0xe] = 0;
  local_70[0xf] = 0;
  puVar5 = &DAT_cbf29ce484222645;
  snprintf((char *)local_70,0x40,__format,(ulong)(param_2 & 0xff));
  if (local_70[0] != 0) {
    pbVar4 = (byte *)((ulong)local_70 | 1);
    bVar2 = local_70[0];
    do {
      puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_80 = 0x3f;
  local_78 = (long *)0x0;
  local_90 = puVar5;
  pbStack_88 = local_70;
  lVar3 = FUN_00e895ec(*(undefined8 *)(param_1 + 0x38),&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (lVar3 != 0) {
    FUN_00dfcea4(lVar3);
  }
  return;
}


