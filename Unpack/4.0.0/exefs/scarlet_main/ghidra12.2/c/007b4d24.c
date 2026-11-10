/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b4d24; name: FUN_007b4d24
 */


void FUN_007b4d24(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x11d8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    *(undefined8 *)(param_1 + 0x11d8) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x11d0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    *(undefined8 *)(param_1 + 0x11d0) = 0;
  }
  FUN_0079afcc(param_1);
  return;
}


