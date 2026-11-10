/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f4094; name: FUN_021f4094
 */


void FUN_021f4094(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  cVar1 = FUN_00e99784();
  if (cVar1 == '\0') {
    uVar4 = 1;
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    uVar4 = 0;
  }
  uVar2 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  if (uVar4 < 3) {
    uVar2 = FUN_0143b78c(uVar2,uVar3,uVar4);
    FUN_00ef67a8(*(undefined8 *)(param_1 + 0x70),uVar4 == 0);
    FUN_00ef6b04(*(undefined8 *)(param_1 + 0x70),uVar4 == 1);
    FUN_00ef6e68(*(undefined8 *)(param_1 + 0x70),uVar4 == 2);
    FUN_00ef2550(*(undefined8 *)(param_1 + 0x70),uVar2);
    return;
  }
  return;
}


