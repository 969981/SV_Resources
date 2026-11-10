/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0d2c; name: FUN_021f0d2c
 */


void FUN_021f0d2c(long param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  sVar1 = FUN_00cf44ec(param_2);
  if (sVar1 != 0x84) {
    uVar2 = FUN_01df4e18(param_2,0);
    uVar3 = FUN_021ed328(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a),uVar2);
    if ((uVar3 & 1) != 0) {
      FUN_021f0cc0(param_1,uVar2);
    }
    uVar2 = FUN_01df4e18(param_2,1);
    uVar3 = FUN_021ed328(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a),uVar2);
    if ((uVar3 & 1) != 0) {
      FUN_021f0cc0(param_1,uVar2);
    }
    uVar2 = FUN_01df4e18(param_2,2);
    uVar3 = FUN_021ed328(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a),uVar2);
    if ((uVar3 & 1) != 0) {
      FUN_021f0cc0(param_1,uVar2);
    }
    uVar2 = FUN_01df4e18(param_2,3);
    uVar3 = FUN_021ed328(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2a),uVar2);
    if ((uVar3 & 1) != 0) {
      FUN_021f0cc0(param_1,uVar2);
      return;
    }
  }
  return;
}


