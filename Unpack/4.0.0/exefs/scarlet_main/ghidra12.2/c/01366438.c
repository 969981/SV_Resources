/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01366438; name: FUN_01366438
 */


void FUN_01366438(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_2 + 0x38);
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x20,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar3 + 0xe8))();
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  FUN_013665e8(puVar3,puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = (undefined8 *)PTR_DAT_047d8b70;
  if (puVar1[2] != 0) {
    puVar3 = (undefined8 *)(puVar1[2] + 0x30);
  }
  uVar2 = *puVar3;
  *puVar1 = 0;
  puVar1[1] = uVar2;
  return;
}


