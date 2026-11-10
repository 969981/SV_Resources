/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124ee74; name: FUN_0124ee74
 */


void FUN_0124ee74(long param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50
                                 ));
  if (puVar2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
    if (4 < (uVar1 & 0xff)) {
      return;
    }
  }
  uVar5 = (ulong)uVar1 & 0xff;
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x250);
  piVar3 = (int *)(lVar4 + uVar5 * 0x60 + 0x10);
  if ((((*piVar3 == param_2) || (piVar3 = (int *)(lVar4 + uVar5 * 0x60 + 0x20), *piVar3 == param_2))
      || (piVar3 = (int *)(lVar4 + uVar5 * 0x60 + 0x30), *piVar3 == param_2)) ||
     (((piVar3 = (int *)(lVar4 + uVar5 * 0x60 + 0x40), *piVar3 == param_2 ||
       (piVar3 = (int *)(lVar4 + uVar5 * 0x60 + 0x50), *piVar3 == param_2)) ||
      (piVar3 = (int *)(lVar4 + uVar5 * 0x60 + 0x60), *piVar3 == param_2)))) {
    *(undefined1 *)((long)piVar3 + 0xb) = 1;
  }
  return;
}


