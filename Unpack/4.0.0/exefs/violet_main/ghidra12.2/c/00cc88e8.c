/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc88e8; name: FUN_00cc88e8
 */


void FUN_00cc88e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  long lVar5;
  byte local_150 [8];
  undefined8 auStack_148 [31];
  
  pbVar3 = local_150;
  lVar5 = *(long *)(param_2 + 0x28);
  puVar4 = &DAT_cbf29ce484222645;
  memcpy(local_150,*(void **)(param_2 + 0x10),lVar5 * 4);
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined8 *)(local_150 + lVar5 * 4) = param_3;
  *(undefined8 *)((long)auStack_148 + lVar5 * 4) = param_4;
  if (lVar5 * 4 != 0xfffffffffffffff0) {
    lVar5 = lVar5 * -4 + -0x10;
    do {
      bVar2 = *pbVar3;
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 2;
      puVar4 = (undefined1 *)
               ((((ulong)puVar4 ^ (ulong)bVar2) * 0x100000001b3 ^ (ulong)*pbVar1) * 0x100000001b3);
      lVar5 = lVar5 + 2;
    } while (lVar5 != 0);
  }
  param_1[2] = puVar4;
  return;
}


