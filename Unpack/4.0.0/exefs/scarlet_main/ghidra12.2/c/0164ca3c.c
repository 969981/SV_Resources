/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0164ca3c; name: FUN_0164ca3c
 */


void FUN_0164ca3c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1] - *param_1;
  lVar2 = lVar1 >> 4;
  if ((ulong)(lVar2 * 0x4cff9a64cff9a64d) < 0x21) {
    FUN_0164cbec(param_1,lVar2 * -0x4cff9a64cff9a64d + 0x21);
    return;
  }
  if (lVar1 != 0x53250) {
    param_1[1] = *param_1 + 0x53250;
  }
  return;
}


