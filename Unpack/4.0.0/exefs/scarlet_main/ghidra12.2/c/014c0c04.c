/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c0c04; name: FUN_014c0c04
 */


undefined4 FUN_014c0c04(long param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 *puVar9;
  
  puVar3 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x150) +
                                                     0x290) + 8) + 0x50),param_2);
  if (puVar3 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar3;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
  }
  lVar4 = *(long *)(param_1 + 0x50);
  iVar2 = *(int *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x150) + 0x290) + 8) + 0x36c);
  if (iVar2 == 2) {
    puVar9 = &DAT_03d6a45a;
  }
  else if (iVar2 == 1) {
    puVar9 = &DAT_03d6a455;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    puVar9 = &DAT_03d6a450;
  }
  if (*(byte *)(lVar4 + 0x95) < 5) {
    cVar8 = puVar9[*(byte *)(lVar4 + 0x95)];
  }
  else {
    cVar8 = '\x02';
  }
  if ((uVar1 & 0xff) < 5) {
    cVar6 = puVar9[(ulong)uVar1 & 0xff];
  }
  else {
    cVar6 = '\x02';
  }
  if (cVar8 == cVar6) {
    return 0;
  }
  if (*(int *)(*(long *)(lVar4 + 0x38) + 0x30) != 0) {
    return 2;
  }
  uVar5 = FUN_010a9b4c(lVar4,0x80000);
  uVar7 = 1;
  if ((uVar5 & 1) != 0) {
    uVar7 = 2;
  }
  return uVar7;
}


