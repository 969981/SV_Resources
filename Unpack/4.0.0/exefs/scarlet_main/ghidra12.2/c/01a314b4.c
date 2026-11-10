/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a314b4; name: FUN_01a314b4
 */


undefined8 FUN_01a314b4(long param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  if (((uVar2 & 0xffff) != (param_2 & 0xffff)) &&
     (uVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1),
     (uVar2 & 0xffff) != (param_2 & 0xffff))) {
    uVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
    if ((uVar2 & 0xffff) == (param_2 & 0xffff)) {
      return 2;
    }
    uVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
    if ((uVar2 & 0xffff) != (param_2 & 0xffff)) {
      sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
      if (sVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
        sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
        if (sVar1 != 0) {
          uVar4 = 2;
          sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
          if (sVar1 != 0) {
            uVar4 = 3;
            sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
            if (sVar1 != 0) {
              return 1;
            }
          }
        }
      }
      uVar3 = FUN_00cf5fe0(param_2,0);
      FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),uVar4,param_2);
      FUN_00eee290(*(undefined8 *)(param_1 + 0x70),uVar4,0);
      FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),uVar4,uVar3);
      return 0;
    }
  }
  return 2;
}


