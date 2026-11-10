/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029824b4; name: FUN_029824b4
 */


undefined8 FUN_029824b4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar1 = FUN_0167ea90(param_2);
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar3 = 1;
    do {
      uVar5 = FUN_0168126c(param_2,uVar3 - 1);
      uVar2 = FUN_02982978(param_1,uVar5);
      uVar4 = uVar4 | uVar2;
      if (uVar1 <= uVar3) break;
      uVar3 = uVar3 + 1;
    } while ((uVar2 & 1) == 0);
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_0168126c(param_2,0);
      uVar3 = FUN_02982978(param_1,uVar5);
      uVar3 = uVar3 & 1;
      iVar6 = 0;
      if (uVar3 <= param_3) {
        iVar6 = 0;
        do {
          uVar4 = 0;
          if (uVar1 != 0) {
            uVar4 = (iVar6 + 1U) / uVar1;
          }
          iVar6 = (iVar6 + 1U) - uVar4 * uVar1;
          uVar5 = FUN_0168126c(param_2,iVar6);
          uVar4 = FUN_02982978(param_1,uVar5);
          uVar3 = uVar3 + (uVar4 & 1);
        } while (uVar3 <= param_3);
      }
      uVar5 = FUN_0168126c(param_2,iVar6);
      return uVar5;
    }
  }
  return 0;
}


