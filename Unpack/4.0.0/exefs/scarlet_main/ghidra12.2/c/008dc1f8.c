/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dc1f8; name: FUN_008dc1f8
 */


ulong FUN_008dc1f8(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (0 < iVar1) {
    uVar3 = 0;
    plVar4 = (long *)(*(long *)(param_1 + 0x58) + 0x10);
    do {
      iVar2 = strcmp(param_2,(char *)(*plVar4 + 0x10));
      if (iVar2 == 0) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 7;
    } while ((long)uVar3 < (long)iVar1);
  }
  return 0xffffffff;
}


