/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf4bf4; name: FUN_00cf4bf4
 */


undefined8 FUN_00cf4bf4(undefined8 param_1)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00cf4c90(param_1,2);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00e974d8(param_1);
    uVar2 = FUN_00cf4c64(uVar3,0xf);
    if (((uVar2 & 1) == 0) &&
       ((sVar1 = FUN_00cf44ec(param_1), sVar1 != 0x29e ||
        (sVar1 = FUN_00cf41a0(param_1), sVar1 != 5)))) {
      return 1;
    }
  }
  return 0;
}


