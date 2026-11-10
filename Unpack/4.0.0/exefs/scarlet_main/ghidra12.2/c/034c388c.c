/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c388c; name: FUN_034c388c
 */


void FUN_034c388c(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_047c4ab0;
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[5] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  return;
}


