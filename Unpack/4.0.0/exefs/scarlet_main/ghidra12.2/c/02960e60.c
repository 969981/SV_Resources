/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02960e60; name: FUN_02960e60
 */


uint FUN_02960e60(long param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined1 local_38;
  
  FUN_0158253c(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_014616dc();
  if (cVar1 == param_2) {
    local_40 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
    local_38 = 1;
    uVar3 = FUN_029422f0(param_1,&local_40);
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_02942e80(param_1,param_3);
      uVar2 = uVar2 ^ 1;
      goto LAB_02960ec8;
    }
  }
  uVar2 = 0;
LAB_02960ec8:
  return uVar2 & 1;
}


