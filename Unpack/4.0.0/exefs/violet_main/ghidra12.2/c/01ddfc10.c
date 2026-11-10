/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddfc10; name: FUN_01ddfc10
 */


void FUN_01ddfc10(long param_1,int param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined1 *local_b0;
  byte *pbStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  byte local_90 [64];
  int local_34;
  
  puVar5 = &DAT_cbf29ce484222645;
  snprintf((char *)local_90,0x40,"L_base_temochi_%02d",param_2 + 6);
  local_b0 = &DAT_cbf29ce484222645;
  if (local_90[0] != 0) {
    local_b0 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)((ulong)local_90 | 1);
    bVar6 = local_90[0];
    do {
      local_b0 = (undefined1 *)(((ulong)local_b0 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar6 != 0);
  }
  local_a0 = 0x3f;
  uStack_98 = 0;
  pbStack_a8 = local_90;
  lVar3 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_b0);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_3 & 1;
  lVar3 = *(long *)(param_1 + 0x1a8);
  if ((*(int *)(lVar3 + 0x6c38) == 1) && (*(char *)(lVar3 + 0x6c3c) == '\0')) {
    local_b0 = (undefined1 *)((ulong)local_b0 & 0xffffffff00000000);
    local_34 = 0;
    FUN_014e2aa0(1,param_2,&local_b0,&local_34);
    uVar1 = *(uint *)(lVar3 + 0x6c3c);
    uVar2 = uVar1 >> 8 & 0x3f;
    if (((int)uVar2 <= (int)local_b0) && ((int)local_b0 < (int)(uVar2 + (uVar1 >> 0x14 & 0x3f)))) {
      uVar2 = uVar1 >> 0xe & 0x3f;
      if (((int)uVar2 <= local_34) && (local_34 < (int)(uVar2 + (uVar1 >> 0x1a)))) {
        bVar6 = 0;
        goto LAB_01ddfcd8;
      }
    }
  }
  bVar6 = 1;
LAB_01ddfcd8:
  snprintf((char *)local_90,0x40,"L_icon_box_%03d",param_2);
  if (local_90[0] != 0) {
    pbVar4 = (byte *)((ulong)local_90 | 1);
    do {
      puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)local_90[0]) * 0x100000001b3);
      local_90[0] = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (local_90[0] != 0);
  }
  local_a0 = 0x3f;
  uStack_98 = 0;
  local_b0 = puVar5;
  pbStack_a8 = local_90;
  lVar3 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_b0);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | bVar6 & param_3;
  return;
}


