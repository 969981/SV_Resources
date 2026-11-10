/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210c7dc; name: FUN_0210c7dc
 */


ulong FUN_0210c7dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x90);
  uVar1 = *(ulong *)(lVar2 + 0xa0);
  if (*(char *)(lVar2 + 0x98) != '\0') {
    if (uVar1 == 0) {
      uVar1 = 1;
      goto LAB_0210c81c;
    }
    uVar1 = FUN_01091070(lVar2 + 0x80,uVar1,0);
  }
  if ((long)uVar1 < 1) {
    uVar1 = 0;
  }
LAB_0210c81c:
  return uVar1 & 0xffffffff;
}


