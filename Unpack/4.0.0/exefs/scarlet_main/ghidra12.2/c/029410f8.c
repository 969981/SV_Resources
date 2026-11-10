/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029410f8; name: FUN_029410f8
 */


void FUN_029410f8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)FUN_014813f4(param_1,*param_3);
  plVar3 = (long *)FUN_014813f4(param_1,param_3[1]);
  if ((*(char *)((long)param_3 + 9) != '\0') &&
     (uVar4 = (**(code **)(*plVar2 + 0x220))(plVar2,0x10), (uVar4 & 1) != 0)) {
    uVar5 = FUN_01246e90(param_1);
    FUN_0293544c(uVar5,plVar3);
  }
  if (*(char *)((long)param_3 + 10) != '\0') {
    uVar5 = FUN_01243584(param_1);
    FUN_02982de8(uVar5,*param_3,param_3[1]);
  }
  if (*(char *)(param_3 + 2) != '\0') {
    uVar5 = FUN_01243584(param_1);
    FUN_02982e2c(uVar5,*param_3,param_3[1]);
  }
  uVar5 = FUN_01243584(param_1);
  FUN_02982e70(uVar5,*param_3);
  uVar4 = (**(code **)(*plVar3 + 0x588))(plVar3);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar1 = FUN_018d31e0(param_1,param_3[1]);
  uVar5 = FUN_01243584(param_1);
  FUN_02982ea4(uVar5,uVar1);
  return;
}


