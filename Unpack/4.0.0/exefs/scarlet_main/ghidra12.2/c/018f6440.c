/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f6440; name: FUN_018f6440
 */


void FUN_018f6440(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 local_18;
  undefined2 local_14;
  
  if ((*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 0) &&
     (*(int *)(*(long *)(param_1 + 0x48) + 0x4c) == 0)) {
    uVar1 = FUN_018f64c0();
    if ((uVar1 & 1) != 0) {
      local_14 = 0;
      local_18 = param_2;
      uVar1 = FUN_018f65d0(param_1,&local_18);
      if ((uVar1 & 1) != 0) {
        FUN_018f6610(param_1,param_2,param_3);
        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 1;
      }
    }
  }
  return;
}


