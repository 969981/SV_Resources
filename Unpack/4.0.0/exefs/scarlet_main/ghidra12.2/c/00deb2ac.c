/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00deb2ac; name: FUN_00deb2ac
 */


void FUN_00deb2ac(long param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0) {
    return;
  }
  uVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),param_2);
  uVar3 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),param_2);
  uVar4 = FUN_00cf5fe0(uVar2,uVar3);
  iVar5 = FUN_00eee950(*(undefined8 *)(param_1 + 0x70),param_2);
  if ((iVar5 + param_3 & 0xffU) <= (uVar4 & 0xff)) {
    uVar4 = iVar5 + param_3;
  }
  uVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),param_2);
  uVar3 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),param_2);
  uVar6 = FUN_00cf5fe0(uVar2,uVar3);
  if ((uVar4 & 0xff) <= (uVar6 & 0xff)) {
    uVar6 = uVar4;
  }
  FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),param_2,uVar6);
  return;
}


