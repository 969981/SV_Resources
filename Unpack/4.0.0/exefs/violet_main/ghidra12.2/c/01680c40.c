/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01680c40; name: FUN_01680c40
 */


void FUN_01680c40(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined1 local_50 [16];
  
  *param_2 = 0;
  uVar4 = (**(code **)(*(long *)*param_3 + 0x220))((long *)*param_3,0x1b);
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined2 *)param_3[1];
    uVar7 = FUN_01246e90(param_1);
    uVar4 = FUN_01681db4(uVar7,*param_3,param_3[2]);
    if ((uVar4 & 1) == 0) {
      uVar7 = FUN_01246e90(param_1);
      uVar4 = FUN_01681a38(uVar7,*param_3,uVar2);
      uVar8 = FUN_01680f20(param_1,*param_3,param_3[1],param_3[2]);
      if ((uVar4 & 1) == 0) {
        if ((uVar8 & 1) == 0) {
          uVar9 = 2;
        }
        else {
          uVar7 = (**(code **)(*(long *)*param_3 + 0x98))();
          uVar9 = 2;
          local_50 = FUN_02956d70(uVar7,2,uVar2);
          uVar7 = FUN_01243584(param_1);
          FUN_0298c444(uVar7,*param_3,0x1b,local_50);
        }
        goto LAB_01680ce4;
      }
      if ((uVar8 & 1) != 0) {
        uVar7 = *param_3;
        puVar1 = (undefined2 *)param_3[1];
        uVar5 = FUN_01246e90(param_1);
        FUN_0293882c(uVar5,uVar7,*puVar1);
        goto LAB_01680c80;
      }
    }
    else {
      uVar7 = FUN_01243584(param_1);
      uVar3 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_0167a95c(uVar7,uVar3);
    }
    uVar9 = 1;
  }
  else {
LAB_01680c80:
    uVar7 = *param_3;
    puVar1 = (undefined2 *)param_3[1];
    uVar10 = param_3[2];
    uVar5 = FUN_01246e90(param_1);
    uVar4 = FUN_01682548(uVar5,uVar7,uVar10,*puVar1);
    lVar6 = FUN_0149b698(param_1);
    FUN_0149b690(lVar6 + 0x10,1);
    (**(code **)(*(long *)*param_3 + 0x508))((long *)*param_3,0xb);
    FUN_01680de8(param_1,*param_3);
    uVar9 = 3;
    if ((uVar4 & 1) != 0) {
      uVar9 = 4;
    }
  }
LAB_01680ce4:
  *param_2 = uVar9;
  return;
}


