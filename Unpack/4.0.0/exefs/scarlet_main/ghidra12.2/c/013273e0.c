/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013273e0; name: FUN_013273e0
 */


void FUN_013273e0(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  FUN_0132746c(param_1,0,0);
  uVar3 = param_2 - 1U >> 1 | (param_2 - 1U) * -0x80000000;
  if ((uVar3 < 0x26) && ((0x3807f900ffU >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x300) = 0;
    lVar1 = *(long *)(&DAT_03d60d78 + (long)(int)uVar3 * 8) * 0x28 + 0x4584dc0 +
            (ulong)*(byte *)(param_1 + 0x11d) * 0x10;
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  }
  return;
}


