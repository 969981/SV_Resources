/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da678; name: FUN_001da678
 */


int FUN_001da678(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0xf78) = 0;
  iVar1 = FUN_001da6d0();
  if (iVar1 == 0) {
    if (((*(byte *)(lVar2 + 0xfac) >> 4 & 1) == 0) && ((*(byte *)(lVar2 + 0x10fc) & 1) == 0)) {
      FUN_001ce618(*(undefined8 *)(lVar2 + 0x668),&DAT_03c67c74);
    }
    *(undefined4 *)(lVar2 + 0x10f8) = 0;
  }
  return iVar1;
}


