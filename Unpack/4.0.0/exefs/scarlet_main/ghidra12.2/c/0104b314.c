/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104b314; name: FUN_0104b314
 */


long FUN_0104b314(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x12);
  if ((ulong)uVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    uVar3 = 0;
    do {
      iVar2 = strcmp((char *)(lVar4 + (ulong)*(uint *)(lVar4 + uVar3 * 4)),param_2);
      if (iVar2 == 0) {
        return *(long *)(param_1 + 0x20) + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}


