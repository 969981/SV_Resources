/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02984b70; name: FUN_02984b70
 */


void FUN_02984b70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [176];
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)FUN_014813f4();
  uVar2 = FUN_014813f4(param_1,param_3);
  uVar3 = (**(code **)(*plVar1 + 0x208))(plVar1);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_01246e90(param_1);
    FUN_02932538(uVar4,plVar1,uVar2,param_5);
    FUN_029835e4(auStack_58);
    FUN_01243d84(auStack_108);
    FUN_02984c44(param_1,auStack_58,plVar1,param_5);
    FUN_02984c94(param_1,auStack_108,plVar1,auStack_58,param_4);
    FUN_02984cd0(param_1,plVar1,auStack_58,auStack_108);
  }
  return;
}


