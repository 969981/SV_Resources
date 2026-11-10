/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124af54; name: FUN_0124af54
 */


void FUN_0124af54(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  
  *param_2 = 0;
  if (*(int *)(param_3 + 1) != 0) {
    uVar2 = FUN_01246e90();
    FUN_01252ae8(uVar2,*param_3,*(undefined4 *)(param_3 + 1));
    FUN_0124fcd8(*(undefined8 *)(param_1 + 0x20),*param_3,-*(int *)(param_3 + 1),
                 *(undefined1 *)((long)param_3 + 0xc),*(undefined4 *)(param_3 + 2),1);
    (**(code **)(*(long *)*param_3 + 0x508))((long *)*param_3,2);
    if ((param_3[3] != 0) && (uVar3 = FUN_018ce3ac(), (uVar3 & 1) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_0124b0ac(uVar2,uVar1,param_3[3]);
    }
    FUN_0124b5dc(param_1,*param_3);
    uVar2 = FUN_01246e90(param_1);
    FUN_01252da8(uVar2,*param_3,*(undefined4 *)(param_3 + 1));
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
      piVar4 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x290) + 8) + 0x50),
                                   uVar1);
      if (((piVar4 != (int *)0x0) && (*piVar4 == 1)) &&
         (uVar3 = FUN_01249510(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x330)), (uVar3 & 1) != 0
         )) {
        FUN_012519ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1f80));
      }
    }
    if (*(char *)(param_3 + 4) != '\0') {
      FUN_02988690(param_1,*param_3);
    }
    *param_2 = 1;
  }
  return;
}


