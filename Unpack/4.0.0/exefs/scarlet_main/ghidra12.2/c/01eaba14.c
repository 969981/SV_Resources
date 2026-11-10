/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaba14; name: FUN_01eaba14
 */


bool FUN_01eaba14(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  
  bVar1 = *(byte *)(param_2 + 0x20);
  puVar2 = &DAT_cbf29ce484222645;
  puVar3 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    puVar3 = &DAT_cbf29ce484222645;
    pbVar4 = (byte *)(param_2 + 0x21);
    do {
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  pbVar4 = (byte *)*param_1;
  bVar1 = *pbVar4;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar4;
  }
  return puVar3 == puVar2;
}


