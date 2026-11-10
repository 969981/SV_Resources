/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f4cae0; name: FUN_01f4cae0
 */


void FUN_01f4cae0(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char local_e0 [48];
  undefined1 *local_b0;
  byte *pbStack_a8;
  size_t local_a0;
  long *local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long *local_78;
  char local_70 [36];
  undefined4 local_4c;
  byte local_40 [16];
  
  lVar2 = param_2[1];
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  FUN_0195a830(local_70,lVar2 + 0x50);
  snprintf((char *)local_40,0x10,"%s",(ulong)local_70 | 4);
  local_4c = 0;
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_70[4] = '\0';
  local_70[5] = '\0';
  local_70[6] = '\0';
  local_70[7] = '\0';
  local_70[8] = '\0';
  local_70[9] = '\0';
  local_70[10] = '\0';
  local_70[0xb] = '\0';
  local_70[0xc] = '\0';
  local_70[0xd] = '\0';
  local_70[0xe] = '\0';
  local_70[0xf] = '\0';
  local_70[0x20] = 0;
  local_70[0x10] = '\0';
  local_70[0x11] = '\0';
  local_70[0x12] = '\0';
  local_70[0x13] = '\0';
  local_70[0x14] = '\0';
  local_70[0x15] = '\0';
  local_70[0x16] = '\0';
  local_70[0x17] = '\0';
  local_70[0x18] = '\0';
  local_70[0x19] = '\0';
  local_70[0x1a] = '\0';
  local_70[0x1b] = '\0';
  local_70[0x1c] = '\0';
  local_70[0x1d] = '\0';
  local_70[0x1e] = '\0';
  local_70[0x1f] = '\0';
  FUN_0195a874(auStack_90,lVar2 + 0x50);
  snprintf(local_70,0x21,"%s",local_88);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  uVar4 = *param_2;
  puVar5 = &DAT_cbf29ce484222645;
  local_a0 = strlen((char *)local_40);
  if (local_40[0] != 0) {
    pbVar3 = (byte *)((ulong)local_40 | 1);
    bVar1 = local_40[0];
    do {
      puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_98 = (long *)0x0;
  local_b0 = puVar5;
  pbStack_a8 = local_40;
  memcpy((void *)((ulong)local_e0 | 4),local_70,0x28);
  local_e0[0] = '\x01';
  FUN_01f4cc44(param_1,uVar4,&local_b0,local_e0);
  if (local_e0[0] != '\0') {
    local_e0[0] = '\0';
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  return;
}


