/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180546c; name: FUN_0180546c
 */


void FUN_0180546c(long param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if (*(char *)(param_1 + 0xb2d0) != '\0') {
    *(undefined1 *)(param_1 + 0xb2d0) = 0;
    if (*(code **)(param_1 + 0xb2e0) != (code *)0x0) {
      local_4[0] = 0;
      local_8 = *(undefined4 *)(param_1 + 0xb2cc);
      (**(code **)(param_1 + 0xb2e0))(param_1 + 0xb300,local_4,&local_8);
    }
    FUN_018054d0(*(undefined8 *)(param_1 + 0xb0a8));
  }
  return;
}


