/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008edbf8; name: FUN_008edbf8
 */


void FUN_008edbf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_008d42e0();
  FUN_008ee5b8(param_1 + 0x38,param_2,uVar1);
  uVar1 = FUN_008d42e0();
  FUN_008ee5b8(param_1 + 0x1e8,param_2,uVar1);
  if (*(int *)(param_1 + 4) == 3) {
    uVar1 = FUN_008d42e0();
    FUN_008ee5b8(param_1 + 0x398,param_2,uVar1);
    return;
  }
  return;
}


