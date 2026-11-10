/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc67f0; name: FUN_02fc67f0
 */


void FUN_02fc67f0(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x298) + 8);
  uVar7 = (ulong)param_2[1] & 0xffffff;
  uVar5 = (ulong)*param_2 & 0xffffff;
  iVar1 = *(int *)(param_1 + 0x2a0);
  lVar4 = *(long *)(lVar6 + 0x38);
  lVar2 = lVar4 + uVar7 * 0xc0;
  if (((*(int *)(lVar2 + 0x80) == iVar1) && ((*(byte *)(lVar4 + uVar5 * 0xc0 + 0x54) & 5) != 0)) ||
     ((*(int *)(lVar4 + uVar5 * 0xc0 + 0x80) == iVar1 &&
      ((*(byte *)(lVar4 + uVar7 * 0xc0 + 0x54) & 5) != 0)))) {
    lVar3 = lVar4 + uVar5 * 0xc0;
    if (5 < (byte)param_2[2]) {
      lVar4 = lVar2;
      if (*(int *)(lVar2 + 0x80) != iVar1) {
        lVar4 = lVar3;
        lVar3 = lVar2;
      }
      FUN_02fc5a50(param_1,lVar4,lVar3);
      return;
    }
    lVar2 = *(long *)(*(long *)(lVar6 + 0x8a8) + 0x48);
    if ((*(char *)(lVar2 + (ulong)*(ushort *)(lVar4 + uVar7 * 0xc0 + 0x8a) * 0x50 + 0x18) == '\0')
       && (*(char *)(lVar2 + (ulong)*(ushort *)(lVar4 + uVar5 * 0xc0 + 0x8a) * 0x50 + 0x18) == '\0')
       ) {
      FUN_02fc5f20();
      return;
    }
  }
  return;
}


