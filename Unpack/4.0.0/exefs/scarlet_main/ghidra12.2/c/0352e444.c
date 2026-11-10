/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352e444; name: FUN_0352e444
 */


void FUN_0352e444(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_047c8ff0;
  puVar1 = PTR_DAT_047e2fd0;
  puVar2 = (undefined8 *)param_1[4];
  uVar3 = *(uint *)(param_1 + 5);
  if (uVar3 != 0) {
    puVar5 = puVar2;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(puVar1 + 0x30))(2,puVar4);
        puVar2 = (undefined8 *)param_1[4];
        uVar3 = *(uint *)(param_1 + 5);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2 + uVar3);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  return;
}


