/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190c1a0; name: FUN_0190c1a0
 */


void FUN_0190c1a0(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  iVar3 = 0;
  if (*(long *)(lVar2 + 0x20) != 0) {
    iVar3 = *(int *)(*(long *)(lVar2 + 0x20) + 0xc);
  }
  if (((iVar3 == param_2) && (*(long *)(lVar2 + 0xe0) != 0)) &&
     (*(char *)(*(long *)(lVar2 + 0xe0) + 0xc) == '\x01')) {
    if (*(long *)(lVar2 + 0x1b8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(long *)(lVar2 + 0x1b8) + 0xc);
    }
    uVar1 = FUN_0190c240(uVar1,0x1800);
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x1b8);
    if (((lVar2 != 0) && (*(byte *)(lVar2 + 10) < 2)) &&
       (*(undefined4 *)(lVar2 + 0xc) = uVar1, *(byte *)(lVar2 + 10) == 1)) {
      *(undefined1 *)(lVar2 + 10) = 2;
    }
  }
  return;
}


