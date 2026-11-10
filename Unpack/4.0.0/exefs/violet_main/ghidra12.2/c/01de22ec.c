/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de22ec; name: FUN_01de22ec
 */


void FUN_01de22ec(long param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *local_100;
  byte *pbStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte local_e0 [64];
  char acStack_a0 [64];
  
  iVar3 = FUN_014a24ec();
  iVar5 = 0x10;
  if (iVar3 != 1) {
    iVar5 = 0x20;
  }
  iVar7 = 0;
  iVar1 = 8;
  if (iVar3 != 0) {
    iVar1 = iVar5;
  }
  do {
    FUN_01de0e08(iVar7,acStack_a0);
    snprintf((char *)local_e0,0x40,"%s/N_frame_00",acStack_a0);
    local_100 = &DAT_cbf29ce484222645;
    if (local_e0[0] != 0) {
      local_100 = &DAT_cbf29ce484222645;
      pbVar6 = (byte *)((ulong)local_e0 | 1);
      bVar2 = local_e0[0];
      do {
        local_100 = (undefined1 *)(((ulong)local_100 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    local_f0 = 0x3f;
    uStack_e8 = 0;
    pbStack_f8 = local_e0;
    lVar4 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_100);
    iVar7 = iVar7 + 1;
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  } while (iVar7 != iVar1);
  return;
}


