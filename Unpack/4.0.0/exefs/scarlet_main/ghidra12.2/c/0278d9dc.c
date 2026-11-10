/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278d9dc; name: FUN_0278d9dc
 */


void FUN_0278d9dc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_8;
  
  local_8 = 8;
  if ((*param_1 != 0) && (0xb < (ulong)(param_1[1] << 3))) {
    FUN_0278db98(*param_1,&local_8,param_2);
    uVar1 = param_1[4] + 3U >> 3;
    *(byte *)(param_1[3] + uVar1) =
         (byte)(1 << (param_1[4] + 3U & 7)) | *(byte *)(param_1[3] + uVar1);
  }
  return;
}


