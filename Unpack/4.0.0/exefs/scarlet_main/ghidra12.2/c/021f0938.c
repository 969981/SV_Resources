/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0938; name: FUN_021f0938
 */


void FUN_021f0938(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(short *)(param_1 + 0x28) != 0xac) {
    return;
  }
  uVar1 = FUN_00e974d8(*param_2);
  uVar2 = FUN_00cf4c64(uVar1,0x10);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e974d8(param_2[1]);
    uVar2 = FUN_00cf4c64(uVar1,0x10);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  FUN_021f0cc0(param_1,0x158);
  return;
}


