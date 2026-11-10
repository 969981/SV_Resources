/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292304c; name: FUN_0292304c
 */


void FUN_0292304c(long param_1)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50));
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2 & 0xff;
    if (4 < (int)*puVar2) {
      uVar4 = 0;
    }
  }
  if (iVar1 == 2) {
    if (4 < uVar4) goto LAB_029230ec;
    puVar5 = &DAT_03d6a45a;
  }
  else if (iVar1 == 1) {
    if (4 < uVar4) goto LAB_029230ec;
    puVar5 = &DAT_03d6a455;
  }
  else {
    if ((iVar1 != 0) || (4 < uVar4)) {
LAB_029230ec:
      uVar3 = 2;
      goto LAB_0292309c;
    }
    puVar5 = &DAT_03d6a450;
  }
  uVar3 = puVar5[uVar4];
LAB_0292309c:
  FUN_02923024(*(undefined4 *)(*(long *)(param_1 + 8) + 0x36c),uVar3);
  return;
}


