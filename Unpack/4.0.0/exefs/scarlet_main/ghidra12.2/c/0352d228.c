/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352d228; name: FUN_0352d228
 */


void FUN_0352d228(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[10] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
  }
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


