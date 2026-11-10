/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00801e60; name: FUN_00801e60
 */


void FUN_00801e60(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[0x17];
  *param_1 = (long)(PTR_DAT_047d1680 + 0x10);
  if (lVar2 != 0) {
    uVar1 = FUN_007bfae0(lVar2);
    uVar1 = uVar1 >> 7;
    if (uVar1 != 0) {
      lVar3 = lVar2 + 0x28;
      do {
        FUN_0284e3d4(lVar3 + 0x20);
        FUN_0284e3d4(lVar3);
        uVar1 = uVar1 - 1;
        lVar3 = lVar3 + 0x80;
      } while (uVar1 != 0);
    }
    FUN_007bfaa0(lVar2);
    param_1[0x17] = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00804b3c(param_1 + 0x1c);
  FUN_0284e3d4(param_1 + 0x10);
  FUN_0284e3d4(param_1 + 0xc);
  FUN_007ec33c(param_1);
  return;
}


