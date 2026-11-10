/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c1eb8; name: FUN_027c1eb8
 */


void FUN_027c1eb8(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)(param_2 + 0x40);
  puVar2 = &DAT_cbf29ce484222645;
  if (bVar1 != 0) {
    pbVar3 = (byte *)(param_2 + 0x41);
    do {
      puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  *param_1 = puVar2;
  param_1[1] = (byte *)(param_2 + 0x40);
  param_1[2] = 0xf;
  param_1[3] = 0;
  return;
}


