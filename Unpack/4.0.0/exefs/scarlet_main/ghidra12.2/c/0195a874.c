/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195a874; name: FUN_0195a874
 */


void FUN_0195a874(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  
  puVar2 = &DAT_cbf29ce484222645;
  bVar1 = *param_2;
  pbVar3 = param_2;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  }
  *param_1 = puVar2;
  param_1[1] = param_2;
  param_1[2] = 0x3f;
  param_1[3] = 0;
  return;
}


