/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295c1a0; name: FUN_0295c1a0
 */


undefined8 FUN_0295c1a0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar3 = *(long *)(lVar2 + 0x30);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0xc), iVar1 != 0)) {
    iVar4 = 0;
    do {
      if ((iVar4 + 6U & 0xffff) < 0x86) {
        lVar3 = *(long *)(lVar2 + (ulong)(ushort)(iVar4 + 6U) * 8 + 8);
        iVar5 = 0;
        if (lVar3 != 0) {
          iVar5 = *(int *)(lVar3 + 0xc);
        }
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 == param_2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return 0;
}


