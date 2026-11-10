/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294069c; name: FUN_0294069c
 */


void FUN_0294069c(long param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *param_2 = 0;
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3[1]);
  plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_3);
  uVar1 = (**(code **)(*plVar5 + 0x2a8))();
  uVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4);
  uVar6 = FUN_029399c8(*(undefined8 *)(param_1 + 0x38),plVar4,uVar1);
  if ((uVar6 & 1) != 0) {
    FUN_02939d44(*(undefined8 *)(param_1 + 0x38),plVar4);
    return;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498) >> 5 & 1) == 0) {
    if ((plVar5 != (long *)0x0) && (*(char *)((long)param_3 + 9) != '\0')) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
      FUN_018ce0ec(uVar7,uVar3,0);
    }
    FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),*param_3,param_3 + 3);
    FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),*param_3,param_3 + 0xc);
    FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),*param_3,param_3 + 0x15);
    if (*(char *)((long)param_3 + 9) != '\0') {
      FUN_018521d8(*(undefined8 *)(param_1 + 0x20),plVar5);
    }
    FUN_029844f4(*(undefined8 *)(param_1 + 0x20),*param_3,param_3[1],uVar1,uVar2);
    FUN_029846e4(param_1,plVar5,uVar2);
    FUN_029846e4(param_1,plVar4,uVar1);
    FUN_0298471c(param_1,plVar5);
    FUN_0298471c(param_1,plVar4);
    if (*(char *)(param_3 + 2) != '\0') {
      FUN_02984774(param_1,param_3[1],uVar2);
    }
    *param_2 = 1;
  }
  return;
}


