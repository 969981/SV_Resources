/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0244986c; name: FUN_0244986c
 */


void FUN_0244986c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined4 local_29;
  
  pbVar3 = *(byte **)(param_3 + 8);
  puVar2 = &DAT_cbf29ce484222645;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  }
  FUN_00d9ec44(&local_38,2,puVar2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00d9ee10(param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x1f) = local_29;
  param_1[2] = local_38;
  param_1[3] = CONCAT17((undefined1)local_29,uStack_30);
  return;
}


