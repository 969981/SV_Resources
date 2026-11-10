/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f648a0; name: FUN_01f648a0
 */


void FUN_01f648a0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  puVar4 = &DAT_cbf29ce484222645;
  sVar2 = strlen((char *)(param_2 + 0xd3));
  bVar1 = *(byte *)(param_2 + 0xd3);
  if (bVar1 != 0) {
    pbVar3 = (byte *)(param_2 + 0xd4);
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  *param_1 = puVar4;
  param_1[1] = (char *)(param_2 + 0xd3);
  param_1[2] = sVar2;
  param_1[3] = 0;
  return;
}


