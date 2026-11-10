/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943870; name: FUN_02943870
 */


void FUN_02943870(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar3 = *(long *)(lVar1 + 0x310);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0xc);
  }
  if ((uVar2 & 0xff) < (param_3 & 0xff)) {
    lVar1 = *(long *)(lVar1 + 0x28);
    if (((lVar1 != 0) && (*(byte *)(lVar1 + 10) < 2)) &&
       (*(undefined4 *)(lVar1 + 0xc) = param_2, *(byte *)(lVar1 + 10) == 1)) {
      *(undefined1 *)(lVar1 + 10) = 2;
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x310);
    if (((lVar1 != 0) && (*(byte *)(lVar1 + 10) < 2)) &&
       (*(uint *)(lVar1 + 0xc) = param_3 & 0xff, *(byte *)(lVar1 + 10) == 1)) {
      *(undefined1 *)(lVar1 + 10) = 2;
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x318);
    if (((lVar1 != 0) && (*(byte *)(lVar1 + 10) < 2)) &&
       (*(uint *)(lVar1 + 0xc) = param_4 & 0xff, *(byte *)(lVar1 + 10) == 1)) {
      *(undefined1 *)(lVar1 + 10) = 2;
      return;
    }
  }
  return;
}


