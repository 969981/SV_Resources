/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f02f8; name: FUN_021f02f8
 */


void FUN_021f02f8(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar1 = FUN_00e974d8(*param_2);
  uVar2 = FUN_00e974d8(param_2[1]);
  uVar3 = FUN_00cf4c64(uVar1,0x13);
  uVar1 = 5;
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00cf4c64(uVar2,0x13);
    uVar1 = 5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 3;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}


