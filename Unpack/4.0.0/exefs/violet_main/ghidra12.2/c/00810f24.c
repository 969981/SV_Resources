/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00810f24; name: FUN_00810f24
 */


void FUN_00810f24(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (*(undefined8 **)(param_1 + 0x38) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_0078fa04(param_1 + 0x48,param_1 + 0x48,(long)*(int *)(param_1 + 0x5c) + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  uVar2 = FUN_0078f9d4(puVar1);
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_00810b24(auStack_40,uVar2,param_1 + 8);
  }
  return;
}


