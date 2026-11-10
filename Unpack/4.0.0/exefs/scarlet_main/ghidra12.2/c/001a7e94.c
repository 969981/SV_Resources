/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a7e94; name: FUN_001a7e94
 */


void FUN_001a7e94(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x3ff28,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0015ed40(0x3ff28);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *puVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar1;
  return;
}


