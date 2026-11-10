/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bdf98; name: FUN_034bdf98
 */


long FUN_034bdf98(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return 0;
  }
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + iVar4;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      lVar2 = *(long *)(lVar3 + (long)iVar1 * 0x10 + 8);
      if ((*(ulong *)(lVar2 + 0x10) < *(ulong *)(param_2 + 0x10)) ||
         ((*(ulong *)(lVar2 + 0x10) == *(ulong *)(param_2 + 0x10) &&
          ((*(uint *)(lVar2 + 0x18) < *(uint *)(param_2 + 0x18) ||
           ((*(uint *)(lVar2 + 0x18) == *(uint *)(param_2 + 0x18) &&
            ((*(uint *)(lVar2 + 0x20) < *(uint *)(param_2 + 0x20) ||
             ((*(uint *)(lVar2 + 0x20) == *(uint *)(param_2 + 0x20) &&
              (((*(char *)(lVar2 + 0x28) + 1U & 0x1f) < (*(char *)(param_2 + 0x28) + 1U & 0x1f) ||
               ((*(char *)(lVar2 + 0x28) == *(char *)(param_2 + 0x28) &&
                (((byte)(*(char *)(lVar2 + 0x30) + 1U) < (byte)(*(char *)(param_2 + 0x30) + 1U) ||
                 ((*(char *)(lVar2 + 0x30) == *(char *)(param_2 + 0x30) &&
                  (*(ulong *)(lVar2 + 0x38) < *(ulong *)(param_2 + 0x38))))))))))))))))))))) {
        iVar5 = iVar1 + 1;
      }
      else {
        iVar4 = iVar1;
      }
    } while (iVar5 < iVar4);
  }
  return lVar3 + (long)iVar4 * 0x10;
}


