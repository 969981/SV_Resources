/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215267c; name: FUN_0215267c
 */


void FUN_0215267c(long param_1)

{
  undefined4 local_4;
  
  FUN_021529f8(*(undefined8 *)(param_1 + 0x4c8),*(undefined8 *)(param_1 + 8));
  if (*(code **)(param_1 + 0x1c0) != (code *)0x0) {
    local_4 = 1;
    (**(code **)(param_1 + 0x1c0))(param_1 + 0x1e0,&local_4);
  }
  return;
}


