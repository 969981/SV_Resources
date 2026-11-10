/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00272260; name: FUN_00272260
 */


void FUN_00272260(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_LAB_047cba48;
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 == puVar3) {
    puVar4 = puVar3;
  }
  else {
    do {
      puVar4 = puVar4 + -1;
      puVar2 = (undefined8 *)*puVar4;
      *puVar4 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        FUN_0049e790(puVar1,puVar2);
      }
    } while (puVar3 != puVar4);
    puVar4 = *(undefined8 **)(param_1 + 0x20);
  }
  puVar1 = PTR_LAB_047cba48;
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  FUN_0049e790(puVar1,puVar4);
  return;
}


