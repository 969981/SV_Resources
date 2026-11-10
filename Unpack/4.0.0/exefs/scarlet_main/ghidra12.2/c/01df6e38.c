/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df6e38; name: FUN_01df6e38
 */


void FUN_01df6e38(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    lVar1 = FUN_0111b030(param_2 & 1);
    if ((ulong)(*(long *)(lVar2 + 0x18) + lVar1) <= *(ulong *)(lVar2 + 0x10)) {
      *(byte *)(*(long *)(lVar2 + 8) + *(long *)(lVar2 + 0x18)) = param_2 & 1;
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
    }
  }
  return;
}


