/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156f598; name: FUN_0156f598
 */


void FUN_0156f598(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x38);
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x58,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  FUN_0156f708(puVar2,puVar1 + 2,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  *puVar1 = 0;
  puVar1[1] = (ulong)*(uint *)(puVar1 + 2);
  return;
}


