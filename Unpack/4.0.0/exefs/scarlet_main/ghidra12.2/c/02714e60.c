/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02714e60; name: FUN_02714e60
 */


bool FUN_02714e60(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  char *local_30;
  char local_24 [4];
  
  local_30 = local_24;
  local_24[0] = '\0';
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  if (*(undefined8 **)(param_1 + 0x50) == puVar1) {
    bVar2 = false;
  }
  else {
    do {
      puVar4 = puVar3 + 1;
      FUN_02714ec0(*puVar3,&local_30);
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    bVar2 = local_24[0] != '\0';
  }
  return bVar2;
}


