/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0237aac0; name: FUN_0237aac0
 */


void FUN_0237aac0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  
  plVar7 = param_1 + 3;
  lVar1 = FUN_023747b0(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar5 = *param_1;
  lVar6 = param_1[1];
  local_60 = 0;
  local_58 = plVar7;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar1 << 7,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))();
    }
  }
  lVar5 = lVar2 + (lVar6 - lVar5 >> 7) * 0x80;
  local_60 = lVar2 + lVar1 * 0x80;
  local_70 = lVar5;
  FUN_0237a9c0(plVar7,lVar5,param_2);
  local_68 = lVar5 + 0x80;
  FUN_02374800(plVar7,*param_1,param_1[1],&local_70);
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  *param_1 = local_70;
  param_1[1] = local_68;
  param_1[2] = local_60;
  local_70 = lVar1;
  local_68 = lVar5;
  local_60 = lVar6;
  while (lVar2 = lVar5, lVar2 != lVar1) {
    lVar5 = lVar2 + -0x80;
    pcVar4 = *(code **)(lVar2 + -0x78);
    local_68 = lVar5;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x70) = 0;
      *(undefined8 *)(lVar2 + -0x68) = 0;
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      (*pcVar4)(lVar2 + -0x60);
    }
  }
  if (lVar1 != 0) {
    lVar6 = lVar6 - lVar1;
    plVar7 = (long *)*local_58;
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar1,lVar6,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar1,lVar6,0x10);
    }
  }
  return;
}


