/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ddb78; name: FUN_007ddb78
 */


void FUN_007ddb78(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0xf9) != '\0') {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if (*(undefined8 **)(param_1 + 0x68) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    do {
      puVar3 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_0078fa04(param_1 + 0x78,param_1 + 0x78,(long)*(int *)(param_1 + 0x8c) + (long)puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  FUN_0078f9d4(puVar1);
  *(undefined1 *)(param_1 + 0xf9) = 1;
  return;
}


