/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f91d8; name: FUN_018f91d8
 */


ulong FUN_018f91d8(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  char local_38 [4];
  undefined4 local_34;
  
  if (param_2 != 0) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_38,1,0);
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar6 = 0;
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    if ((uVar4 & 1) != 0) {
      uVar4 = 0;
      if (local_38[0] != '\x05') goto LAB_018f9318;
      plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1]);
      if ((uVar4 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_34,4,0);
        uVar1 = uVar1 ^ 1;
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
      if ((uVar1 & 1) == 0) {
        uVar6 = FUN_018f9354(param_1,local_34,param_2,param_3);
        uVar4 = uVar6 & 0xffffffffffffff00;
        uVar6 = uVar6 & 0xff;
        goto LAB_018f9318;
      }
    }
  }
  uVar4 = 0;
  uVar6 = 0;
LAB_018f9318:
  return uVar4 | uVar6;
}


