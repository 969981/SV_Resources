/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f9410; name: FUN_021f9410
 */


bool FUN_021f9410(undefined8 param_1,long param_2,short *param_3)

{
  bool bVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  sVar2 = *param_3;
  if (sVar2 == 5) {
LAB_021f94ec:
    bVar1 = true;
  }
  else {
    if (sVar2 == 7) {
      if (param_2 != 0) {
        uVar3 = FUN_00e974d8(param_2);
        uVar4 = FUN_00cf4c64(uVar3,0xf);
        if ((((uVar4 & 1) == 0) && (uVar4 = FUN_00cf4c90(param_2,2), (uVar4 & 1) == 0)) &&
           (((sVar2 = FUN_00cf44ec(param_1), sVar2 == 0x268 &&
             (sVar2 = FUN_00cf44ec(param_2), sVar2 == 0x24c)) ||
            ((sVar2 = FUN_00cf44ec(param_1), sVar2 == 0x24c &&
             (sVar2 = FUN_00cf44ec(param_2), sVar2 == 0x268)))))) goto LAB_021f94ec;
      }
    }
    else if (sVar2 == 6) {
      sVar2 = FUN_00e974d8(param_1);
      return param_3[1] == sVar2;
    }
    bVar1 = false;
  }
  return bVar1;
}


