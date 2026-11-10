/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018cdf14; name: FUN_018cdf14
 */


void FUN_018cdf14(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_a0 [20];
  undefined4 local_8c;
  undefined1 auStack_88 [40];
  
  *(undefined8 *)((long)param_2 + 5) = 0;
  *param_2 = 0;
  if (*(char *)(param_3 + 0xd) != '\0') {
    uVar7 = FUN_01243584(param_1);
    FUN_018ce0e4(uVar7,*param_3);
  }
  if (*(char *)(param_3 + 0xc) != '\0') {
    uVar8 = 0;
    do {
      plVar5 = (long *)FUN_014813f4(param_1,param_3[uVar8 + 2]);
      uVar6 = (**(code **)(*plVar5 + 0x208))();
      if ((uVar6 & 1) != 0) {
        local_8c = param_3[1];
LAB_018cdfb8:
        uVar3 = FUN_018ce294(uVar6,plVar5,&local_8c);
        if ((uVar3 & 0xffff) != 0) {
          if ((uVar3 & 0xffff) == 0x1c) goto code_r0x018cdfd8;
          goto LAB_018cdfec;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_3 + 0xc));
  }
  if (*(char *)(param_3 + 0xd) != '\0') {
    uVar7 = FUN_01243584(param_1);
    FUN_018ce27c(uVar7,*param_3);
  }
  return;
code_r0x018cdfd8:
  uVar7 = FUN_01246e90(param_1);
  uVar6 = FUN_018ce520(uVar7,plVar5);
  if ((uVar6 & 1) == 0) {
LAB_018cdfec:
    FUN_0189372c(auStack_a0);
    uVar7 = FUN_01243584(param_1);
    FUN_018ce41c(uVar7,plVar5,uVar3,auStack_a0);
    uVar1 = *param_3;
    if (*(char *)((long)param_3 + 0x35) == '\0') {
      uVar2 = *(undefined2 *)((long)param_3 + 0x32);
      FUN_01246154(auStack_88);
      uVar4 = (**(code **)(*plVar5 + 0x98))(plVar5);
      uVar6 = FUN_0124a970(uVar3,auStack_a0,uVar4,uVar2,auStack_88);
      if ((uVar6 & 1) != 0) {
        uVar7 = FUN_01243584(param_1);
        uVar6 = FUN_0124b0ac(uVar7,uVar1,auStack_88);
      }
    }
    else {
      uVar6 = FUN_018ce354(param_1,uVar1,param_3 + 0xe);
    }
    if ((uVar3 & 0xffff) == 0x13) {
      uVar6 = FUN_0297fe9c(param_1,plVar5);
    }
    *(undefined1 *)param_2 = 1;
    *(undefined1 *)((long)param_2 + uVar8 + 1) = 1;
  }
  goto LAB_018cdfb8;
}


