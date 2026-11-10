/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bd3b4; name: FUN_008bd3b4
 */


void FUN_008bd3b4(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00896e98(puVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


