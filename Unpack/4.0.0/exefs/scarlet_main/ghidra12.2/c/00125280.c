/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00125280; name: FUN_00125280
 */


undefined8 FUN_00125280(long param_1,int param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2 < 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  bVar4 = lVar6 != param_1 + 0x60;
  bVar2 = bVar4;
  iVar3 = param_2;
  if (param_2 != 0) {
    do {
      bVar4 = false;
      param_2 = iVar3;
      if (!bVar2) break;
      lVar6 = *(long *)(lVar6 + 0x10);
      bVar4 = lVar6 != param_1 + 0x60;
      param_2 = iVar3 + -1;
      bVar1 = 1 < iVar3;
      bVar2 = bVar4;
      iVar3 = param_2;
    } while (bVar1);
  }
  uVar5 = 0;
  if ((param_2 == 0) && (bVar4)) {
    uVar5 = 1;
    *(long *)(param_3 + 0x80) = lVar6;
  }
  return uVar5;
}


