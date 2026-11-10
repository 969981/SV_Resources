/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e7f54; name: FUN_020e7f54
 */


void FUN_020e7f54(long param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  if (sVar1 == 0) {
    uVar2 = 0;
    do {
      if (2 < (uVar2 & 0xff)) goto LAB_020e7f78;
      uVar2 = uVar2 + 1;
      sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),uVar2);
    } while (sVar1 == 0);
    FUN_021f3400(param_1,0,uVar2);
  }
LAB_020e7f78:
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
  if (sVar1 == 0) {
    uVar2 = 1;
    do {
      if (2 < (uVar2 & 0xff)) goto LAB_020e7f8c;
      uVar2 = uVar2 + 1;
      sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),uVar2);
    } while (sVar1 == 0);
    FUN_021f3400(param_1,1,uVar2);
  }
LAB_020e7f8c:
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
  if (sVar1 == 0) {
    uVar2 = 2;
    while ((uVar2 & 0xff) < 3) {
      uVar2 = uVar2 + 1;
      sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),uVar2);
      if (sVar1 != 0) {
        FUN_021f3400(param_1,2,uVar2);
        return;
      }
    }
  }
  return;
}


