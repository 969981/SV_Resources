/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ce178; name: FUN_018ce178
 */


void FUN_018ce178(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  
  iVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  puVar3 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50
                                 ),iVar2);
  if (puVar3 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar3;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x250);
  if ((uVar1 & 0xff) < 5) {
    uVar6 = (ulong)uVar1 & 0xff;
    piVar5 = (int *)(lVar4 + uVar6 * 0x60 + 0x10);
    if ((((*piVar5 == iVar2) || (piVar5 = (int *)(lVar4 + uVar6 * 0x60 + 0x20), *piVar5 == iVar2))
        || (piVar5 = (int *)(lVar4 + uVar6 * 0x60 + 0x30), *piVar5 == iVar2)) ||
       (((piVar5 = (int *)(lVar4 + uVar6 * 0x60 + 0x40), *piVar5 == iVar2 ||
         (piVar5 = (int *)(lVar4 + uVar6 * 0x60 + 0x50), *piVar5 == iVar2)) ||
        (piVar5 = (int *)(lVar4 + uVar6 * 0x60 + 0x60), *piVar5 == iVar2)))) {
      *(undefined1 *)(piVar5 + 3) = 1;
    }
  }
  return;
}


