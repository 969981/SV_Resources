/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c8be8; name: FUN_034c8be8
 */


void FUN_034c8be8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_047e7048;
  puVar3 = (undefined4 *)*param_1;
  puVar5 = puVar3;
  if (*(int *)(param_1 + 1) != 0) {
    do {
      puVar4 = puVar5 + 1;
      FUN_0349902c(*(undefined8 *)puVar1,*puVar5,param_2);
      puVar3 = (undefined4 *)*param_1;
      puVar5 = puVar4;
    } while (puVar4 != puVar3 + *(uint *)(param_1 + 1));
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar1 + 0x30))(0,puVar3);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  puVar2 = PTR_DAT_047e6fd8;
  puVar3 = (undefined4 *)param_1[2];
  puVar5 = puVar3;
  if (*(int *)(param_1 + 3) != 0) {
    do {
      puVar4 = puVar5 + 1;
      FUN_034b8904(*(undefined8 *)puVar2,*puVar5,param_2);
      puVar3 = (undefined4 *)param_1[2];
      puVar5 = puVar4;
    } while (puVar4 != puVar3 + *(uint *)(param_1 + 3));
  }
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    (**(code **)(puVar1 + 0x30))(0,puVar3);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


