/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02960fe0; name: FUN_02960fe0
 */


void FUN_02960fe0(long *param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x18);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (iVar3 == param_2) {
    if (((((*(byte *)(*(long *)(*param_1 + 0x38) + 0x499) >> 2 & 1) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x130), lVar4 != 0)) &&
        (*(byte *)(lVar4 + 10) < 2)) &&
       (*(undefined4 *)(lVar4 + 0xc) = 0x24, *(byte *)(lVar4 + 10) == 1)) {
      *(undefined1 *)(lVar4 + 10) = 2;
    }
    if ((*(byte *)(*(long *)(*param_1 + 0x38) + 0x499) >> 3 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x38);
      if (lVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(lVar4 + 0xc);
      }
      uVar2 = FUN_02959670(param_1[1],uVar1);
      if ((((uVar2 & 1) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x130), lVar4 != 0)) &&
         ((*(byte *)(lVar4 + 10) < 2 &&
          (*(undefined4 *)(lVar4 + 0xc) = 0x24, *(byte *)(lVar4 + 10) == 1)))) {
        *(undefined1 *)(lVar4 + 10) = 2;
      }
    }
  }
  return;
}


