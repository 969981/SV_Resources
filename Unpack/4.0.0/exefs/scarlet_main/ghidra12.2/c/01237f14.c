/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01237f14; name: FUN_01237f14
 */


void FUN_01237f14(long param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  
  local_28[0] = param_4;
  local_24[0] = param_3;
  if (*(ulong *)(param_1 + 0x78) < (ulong)(long)DAT_0457f458) goto LAB_01237f40;
  uVar1 = *(long *)(param_1 + 0x70) + 1;
  *(ulong *)(param_1 + 0x70) = uVar1;
  *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) - 1;
  if (uVar1 < 0x100) goto LAB_01237f40;
  plVar4 = *(long **)(param_1 + 0x80);
  uVar3 = **(undefined8 **)(param_1 + 0x38);
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar1 & 1) == 0) {
LAB_01237fa4:
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar3,0x1000,0x10);
  }
  else {
    lVar2 = FUN_00c4e600();
    if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_01237fa4;
    FUN_00c48fe8(plVar4,uVar3,0x1000,0x10);
  }
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -0x80;
LAB_01237f40:
  FUN_01238008(param_1 + 0x30,param_2,local_24,local_28,&DAT_0457f45c);
  return;
}


