/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02982818; name: FUN_02982818
 */


undefined8 FUN_02982818(undefined8 param_1,long *param_2,undefined8 param_3,short param_4)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar3 & 1) == 0) {
    FUN_01582534(param_1);
    uVar4 = FUN_014813e4();
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar3 = FUN_01481400(uVar4,uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_02982a7c(param_3);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if ((param_4 == 2) || (sVar1 = (**(code **)(*param_2 + 0x230))(param_2), sVar1 != 2)) {
        return 1;
      }
    }
  }
  return 0;
}


