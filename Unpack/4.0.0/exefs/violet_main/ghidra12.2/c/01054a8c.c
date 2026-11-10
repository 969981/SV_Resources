/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01054a8c; name: FUN_01054a8c
 */


undefined8 FUN_01054a8c(long param_1,undefined8 param_2,uint param_3,ushort param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte local_60 [32];
  undefined1 *local_28;
  
  uVar2 = 0;
  if ((param_4 < 0x402) && (param_3 - 1 < 10)) {
    if ((ushort)(param_4 - 1) < 0x401) {
      puVar5 = &DAT_cbf29ce484222645;
      snprintf((char *)local_60,0x20,"MONSNAME_%03d",(uint)param_4);
      if (local_60[0] != 0) {
        pbVar4 = (byte *)((ulong)local_60 | 1);
        do {
          puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)local_60[0]) * 0x100000001b3);
          local_60[0] = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (local_60[0] != 0);
      }
      lVar3 = *(long *)(*(long *)(param_1 + (ulong)param_3 * 8 + 0x2e8) + 0x88);
      local_28 = puVar5;
      if ((lVar3 == 0) || (uVar1 = FUN_01054b94(lVar3,&local_28), (int)uVar1 < 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 & 0xffff;
      }
    }
    else {
      uVar1 = 0;
    }
    uVar2 = FUN_00e388b8(*(undefined8 *)(param_1 + (ulong)param_3 * 8 + 0x2e8),uVar1,param_2);
  }
  return uVar2;
}


