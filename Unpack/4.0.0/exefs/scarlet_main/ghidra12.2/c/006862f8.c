/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006862f8; name: FUN_006862f8
 */


void FUN_006862f8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ulong *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  ulong uVar8;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar4 = FUN_0021d48c();
    }
    else {
      lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar8 + 0x10);
    lVar2 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar2 = uVar8 + 9;
      uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_0021d540(lVar4,lVar2,uVar1);
  }
  pbVar6 = *(byte **)(param_2 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    if (*pbVar6 >> 1 != 0) goto LAB_0068636c;
  }
  else if (*(long *)(pbVar6 + 8) != 0) {
LAB_0068636c:
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar7 = *(undefined **)(param_1 + 0x10);
    if (puVar7 == PTR_DAT_047cba80) {
      FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar5);
      cVar3 = *(char *)(param_2 + 0x18);
      goto joined_r0x006863a0;
    }
    FUN_001fcec0(puVar7,pbVar6);
  }
  cVar3 = *(char *)(param_2 + 0x18);
joined_r0x006863a0:
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


