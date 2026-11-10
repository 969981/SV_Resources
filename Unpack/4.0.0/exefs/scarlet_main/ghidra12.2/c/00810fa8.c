/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00810fa8; name: FUN_00810fa8
 */


undefined8 FUN_00810fa8(undefined2 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 0x1c) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x1c);
    do {
      puVar3 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_0078fa04(param_1 + 0x24,param_1 + 0x24,(long)*(int *)(param_1 + 0x2e) + (long)puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  FUN_0078f9d4(puVar1);
  *param_1 = 0;
  return 1;
}


