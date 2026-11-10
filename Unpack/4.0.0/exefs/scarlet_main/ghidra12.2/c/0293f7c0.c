/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293f7c0; name: FUN_0293f7c0
 */


void FUN_0293f7c0(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x30);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0xc), iVar1 != 0)) {
    iVar4 = 0;
    do {
      if (((iVar4 + 6U & 0xffff) < 0x86) &&
         (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) +
                            (ulong)(ushort)(iVar4 + 6U) * 8 + 8), lVar3 != 0)) {
        uVar2 = *(undefined4 *)(lVar3 + 0xc);
      }
      else {
        uVar2 = 0;
      }
      FUN_0293f5a0(param_1,uVar2,param_2 & 1);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}


