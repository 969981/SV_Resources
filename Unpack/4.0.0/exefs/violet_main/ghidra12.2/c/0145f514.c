/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145f514; name: FUN_0145f514
 */


void FUN_0145f514(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long local_50;
  long local_48;
  long local_40;
  long *local_38;
  
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 7) < 0x40) {
    plVar7 = param_1 + 3;
    lVar5 = param_1[1];
    local_40 = 0;
    local_38 = plVar7;
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x2000,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))();
    }
    local_50 = lVar2 + (lVar5 - lVar4 >> 7) * 0x80;
    local_40 = lVar2 + 0x2000;
    local_48 = local_50;
    FUN_0145f688(plVar7,*param_1,param_1[1],&local_50);
    lVar5 = *param_1;
    lVar4 = param_1[1];
    lVar2 = param_1[2];
    *param_1 = local_50;
    param_1[1] = local_48;
    param_1[2] = local_40;
    local_50 = lVar5;
    local_48 = lVar4;
    local_40 = lVar2;
    while (lVar1 = lVar4, lVar1 != lVar5) {
      lVar4 = lVar1 + -0x80;
      pcVar6 = *(code **)(lVar1 + -0x78);
      local_48 = lVar4;
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar1 + -0x70) = 0;
        *(undefined8 *)(lVar1 + -0x68) = 0;
        *(undefined8 *)(lVar1 + -0x80) = 0;
        *(undefined8 *)(lVar1 + -0x78) = 0;
        (*pcVar6)(lVar1 + -0x60);
      }
    }
    if (lVar5 != 0) {
      lVar2 = lVar2 - lVar5;
      plVar7 = (long *)*local_38;
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar2,0x10);
      }
      else {
        FUN_00c48fe8(plVar7,lVar5,lVar2,0x10);
      }
    }
  }
  return;
}


