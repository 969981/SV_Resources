/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f0848; name: FUN_026f0848
 */


undefined8 * FUN_026f0848(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar2 = param_2;
  if (param_2 + 5 != puVar3) {
    puVar4 = param_2;
    do {
      puVar2 = puVar4 + 5;
      *puVar4 = *puVar2;
      puVar4[1] = puVar4[6];
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar4 + 7);
      FUN_00ca1ea4(puVar4 + 3,puVar4 + 8);
      puVar1 = puVar4 + 10;
      puVar4 = puVar2;
    } while (puVar1 != puVar3);
  }
  FUN_026f0fe4(param_1,puVar2);
  return param_2;
}


