/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019869b0; name: FUN_019869b0
 */


int FUN_019869b0(char *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong local_8;
  
  local_8 = 0;
  nn::os::GenerateRandomBytes(&local_8,8);
  uVar1 = -local_8;
  if (-1 < (long)local_8) {
    uVar1 = local_8;
  }
  iVar2 = snprintf(param_1,8,"%04d",(ulong)(uint)((int)uVar1 + (int)(uVar1 / 10000) * -10000));
  return iVar2;
}


