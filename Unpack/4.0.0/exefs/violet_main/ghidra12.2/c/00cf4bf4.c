/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


