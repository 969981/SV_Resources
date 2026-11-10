/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f13cb8; name: FUN_00f13cb8
 */


void FUN_00f13cb8(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar2 = FUN_00f13ef0(param_1);
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = FUN_00d75438();
  }
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar3 = FUN_00f13ef0(param_1);
    uVar3 = uVar3 & 0xffff;
  }
  else {
    uVar3 = FUN_00ddf348();
  }
  uVar4 = FUN_00f13ef0(param_1);
  FUN_00f16488(*(undefined8 *)(param_1 + 0x70),uVar4);
  if ((uVar3 == 0) && ((param_2 & 1) != 0)) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar5 = FUN_00f13ef0(param_1);
    uVar5 = uVar5 & 0xffff;
  }
  else {
    uVar5 = FUN_00d75438();
  }
  uVar1 = uVar5;
  if (uVar3 <= uVar5) {
    uVar1 = uVar3;
  }
  if (uVar2 <= uVar5) {
    uVar1 = (uVar3 - uVar2) + uVar5;
  }
  uVar2 = FUN_00d75438(*(undefined8 *)(param_1 + 0x70));
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  FUN_00f14810(*(undefined8 *)(param_1 + 0x70),uVar2);
  return;
}


