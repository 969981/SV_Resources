/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ef51c; name: FUN_007ef51c
 */


void FUN_007ef51c(long *param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[1] = param_4;
  *(undefined1 *)(param_1 + 2) = param_5;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    sVar2 = *(short *)(*(long *)PTR_DAT_047d0860 + 0x50);
    uVar3 = (**(code **)(*param_1 + 0x38))();
    *(ushort *)(param_1 + 0xe) =
         (((short)uVar1 + sVar2 * -2) - ((ushort)((uVar3 & 0xff) + 0x1f >> 3) & 0x3c)) + -0x33;
  }
  return;
}


