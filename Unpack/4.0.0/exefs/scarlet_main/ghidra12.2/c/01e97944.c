/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e97944; name: FUN_01e97944
 */


void FUN_01e97944(long param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_48 [24];
  
  lVar8 = *(long *)(param_1 + 0x48);
  lVar7 = *(long *)(param_1 + 0x50);
  while (lVar7 != lVar8) {
    lVar7 = lVar7 + -0x18;
    FUN_00d8e444(lVar7);
  }
  *(long *)(param_1 + 0x50) = lVar8;
  iVar4 = FUN_01cefb40();
  if (iVar4 != 0) {
    iVar6 = 0;
    do {
      FUN_01e97a20(auStack_48,iVar6);
      uVar5 = FUN_019c7a40(auStack_48);
      if ((((uVar5 & 1) != 0) && (cVar1 = FUN_019c7a20(auStack_48), cVar1 == '\x05')) &&
         (uVar5 = FUN_01e97bd8(auStack_48), (uVar5 & 1) == 0)) {
        uVar2 = FUN_01419468(auStack_48);
        uVar3 = FUN_01e97bf8(auStack_48);
        if (uVar2 < (uVar3 & 0xff)) {
          FUN_01e97c18((long *)(param_1 + 0x48),auStack_48);
        }
      }
      FUN_00d8e444(auStack_48);
      iVar6 = iVar6 + 1;
    } while (iVar4 != iVar6);
  }
  return;
}


