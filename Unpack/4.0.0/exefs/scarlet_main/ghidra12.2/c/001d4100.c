/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d4100; name: FUN_001d4100
 */


ushort FUN_001d4100(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x180);
  if (iVar1 < 400 || (*(ulong *)(lVar2 + 0xf40) & 0x10000) == 0) {
    return 0;
  }
  if (iVar1 == 0x197) {
    if ((*(byte *)((long)param_1 + 0x3fd) & 1) != 0) goto LAB_001d414c;
  }
  else if ((iVar1 == 0x191) && (*(char *)((long)param_1 + 0x3fc) < '\0')) {
LAB_001d414c:
    return *(ushort *)(lVar2 + 0x15a4) >> 5 & 1;
  }
  return 1;
}


