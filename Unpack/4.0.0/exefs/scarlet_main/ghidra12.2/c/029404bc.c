/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029404bc; name: FUN_029404bc
 */


void FUN_029404bc(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  
  *param_2 = 0;
  plVar2 = (long *)FUN_014813f4(param_1,param_3[1]);
  if (*param_3 != param_3[1]) {
    uVar3 = FUN_01246e90(param_1);
    uVar4 = FUN_029399c8(uVar3,plVar2,(short)param_3[2]);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_01246e90(param_1);
      FUN_02939d44(uVar3,plVar2);
      return;
    }
  }
  if (*(char *)((long)param_3 + 0x15) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_018ce0e4(uVar3,*param_3);
  }
  uVar1 = (**(code **)(*plVar2 + 0x2a8))(plVar2);
  uVar3 = FUN_01243584(param_1);
  FUN_0124b0ac(uVar3,*param_3,param_3 + 6);
  if (*(char *)((long)param_3 + 10) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_02984484(uVar3,param_3[1]);
  }
  FUN_029844b8(param_1,plVar2,(short)param_3[2],*(undefined1 *)((long)param_3 + 0x16));
  uVar5 = *(ushort *)(param_3 + 2);
  if ((uVar5 == 0) && (uVar5 = (ushort)*(byte *)(param_3 + 5), *(byte *)(param_3 + 5) != 0)) {
    uVar3 = FUN_01246e90(param_1);
    FUN_019d6a9c(uVar3,plVar2,uVar1,1);
    uVar5 = *(ushort *)(param_3 + 2);
  }
  if (((uVar5 != 0) && (param_3[4] != 0)) && (param_3[1] != param_3[4])) {
    uVar3 = FUN_01243584(param_1);
    FUN_029844f4(uVar3,param_3[4],param_3[1],(short)param_3[2],uVar1);
  }
  if (*(char *)((long)param_3 + 0x15) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_018ce27c(uVar3,*param_3);
  }
  if (*(char *)((long)param_3 + 0xb) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_02984484(uVar3,param_3[3]);
  }
  FUN_02984550(param_1,plVar2);
  *param_2 = 1;
  return;
}


