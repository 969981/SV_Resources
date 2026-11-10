/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078d39c; name: FUN_0078d39c
 */


void FUN_0078d39c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0078cdf4();
  while ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_00792f30(param_1,5);
    uVar1 = FUN_0078cdf4(param_1);
  }
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  lVar3 = param_1;
  do {
    *(undefined2 *)(lVar3 + 0xb9) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)(lVar3 + 0xbb) = 0;
    lVar3 = param_1 + lVar2;
    *(undefined1 *)(lVar3 + 0xb8) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)(param_1 + 0xa4) = 0;
  FUN_0078cac8(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  return;
}


