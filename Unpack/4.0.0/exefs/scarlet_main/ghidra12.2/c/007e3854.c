/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e3854; name: FUN_007e3854
 */


void FUN_007e3854(long param_1,long param_2,undefined4 param_3)

{
  undefined8 local_38 [2];
  undefined1 local_24 [4];
  long lStack_18;
  
  local_24[0] = (undefined1)param_3;
  lStack_18 = param_2;
  thunk_FUN_007f4224(param_2,param_3);
  local_38[0] = 0;
  FUN_007935cc(local_38);
  *(undefined8 *)(param_2 + 0x88) = local_38[0];
  if (*(long *)(*(long *)(param_1 + 0x110) + 0x28) != 0) {
    FUN_007e38b8(local_38,*(long *)(param_1 + 0x110),local_24,&lStack_18);
  }
  return;
}


