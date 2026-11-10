/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02789a70; name: FUN_02789a70
 */


void FUN_02789a70(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}


