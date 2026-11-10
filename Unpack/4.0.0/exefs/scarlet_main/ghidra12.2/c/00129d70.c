/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00129d70; name: FUN_00129d70
 */


void FUN_00129d70(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(byte *)(lVar1 + 0x65) < 3) {
    FUN_00129df0(lVar1,param_3);
    if ((*(byte *)(param_2 + 9) & 6) != 0) {
      *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0xf8 | 2;
    }
  }
  else if (*(char *)(lVar1 + 0x66) == '\0') {
    *(byte *)(param_2 + 9) = *(byte *)(lVar1 + 100) & 0x18 | *(byte *)(param_2 + 9) & 199;
    return;
  }
  return;
}


