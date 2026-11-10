/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353584c; name: FUN_0353584c
 */


ulong FUN_0353584c(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_24;
  undefined1 auStack_8 [4];
  char local_4 [4];
  
  lVar6 = param_1[2];
  if (lVar6 == 0) {
LAB_035358a8:
    uVar4 = FUN_035182ec(param_1,param_3,param_2,param_4 & 1);
    if ((int)uVar4 != 1) {
      return uVar4;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
      goto LAB_035358e4;
    }
  }
  else {
    if (*(long *)(lVar6 + 0x30) == 0) {
      *(long **)(lVar6 + 0x30) = param_1;
      param_1[1] = 0;
    }
    else {
      param_1[1] = *(long *)(lVar6 + 0x30);
      *(long **)(lVar6 + 0x30) = param_1;
    }
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) goto LAB_035358a8;
    param_1[0xc] = plVar2[0xc];
  }
  uVar3 = (**(code **)(*plVar2 + 0xa0))(plVar2,*(undefined4 *)(param_1[0x12] + 0x18));
LAB_035358e4:
  uVar4 = FUN_0352e8c0(param_1 + 0x13,param_1[0x12],*(undefined4 *)(param_1[0xc] + 0x2c),uVar3);
  if ((int)uVar4 == 1) {
    lVar6 = FUN_035359a8(param_1,local_4);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
      uVar4 = 2;
    }
    else {
      if (local_4[0] == '\0') {
        local_38 = 0;
      }
      else {
        local_38 = -*(int *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x78) + 0x130) + 4);
      }
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_38,&local_24,auStack_8,0,0);
      uVar5 = 1;
      if (iVar1 == 0) {
        uVar5 = 2;
      }
      uVar4 = (ulong)uVar5;
      param_1[0xd] = (long)local_24;
    }
  }
  return uVar4;
}


