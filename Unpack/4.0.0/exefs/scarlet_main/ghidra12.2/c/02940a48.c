/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02940a48; name: FUN_02940a48
 */


void FUN_02940a48(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  plVar3 = (long *)FUN_014813f4(param_1,*param_3);
  uVar1 = (**(code **)(*plVar3 + 0x2a8))();
  if (*(char *)(param_3 + 1) == '\0') {
    uVar4 = FUN_01243584(param_1);
    FUN_02983370(uVar4,plVar3);
  }
  uVar5 = FUN_018ce3ac(param_3 + 2);
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_01243584(param_1);
    FUN_0124b0ac(uVar4,*param_3,param_3 + 2);
  }
  FUN_029833dc(param_1,plVar3);
  FUN_0124e480(param_1);
  uVar5 = FUN_02983418();
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    FUN_02982914(uVar4,uVar2,1000,uVar1 & 0xffff);
  }
  FUN_0298342c(param_1,plVar3,uVar1,*(char *)((long)param_3 + 5) == '\0');
  return;
}


