/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02945bb0; name: FUN_02945bb0
 */


uint FUN_02945bb0(long param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = FUN_02945730();
  if (((uVar3 & 0xff) == 4) && (uVar3 = FUN_02945830(param_1,param_2), (uVar3 & 0xff) == 4)) {
    if ((param_3 & 1) != 0) {
      plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
      bVar1 = (**(code **)(*plVar4 + 0x708))();
      if (bVar1 != 0) {
        uVar3 = 0;
        do {
          cVar2 = (**(code **)(*plVar4 + 0x670))(plVar4,uVar3);
          if (cVar2 != '\0') {
            return uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (bVar1 != uVar3);
      }
    }
    uVar3 = 4;
  }
  return uVar3;
}


