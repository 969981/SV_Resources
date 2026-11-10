/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278d974; name: FUN_0278d974
 */


void FUN_0278d974(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_8;
  
  local_8 = 4;
  if ((*param_1 != 0) && ((param_1[1] & 0x1fffffffffffffffU) != 0)) {
    FUN_0278dad8(*param_1,&local_8,param_2);
    uVar1 = param_1[4] + 2U >> 3;
    *(byte *)(param_1[3] + uVar1) =
         (byte)(1 << (param_1[4] + 2U & 7)) | *(byte *)(param_1[3] + uVar1);
  }
  return;
}


