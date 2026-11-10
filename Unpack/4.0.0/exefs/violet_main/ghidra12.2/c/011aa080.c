/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011aa080; name: FUN_011aa080
 */


undefined1  [16] FUN_011aa080(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  char local_24 [4];
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 <= param_4) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_24,1,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    if (((uVar3 & 1) != 0) && (local_24[0] == '\x10')) {
      lVar4 = param_2 * 4;
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      if (param_3 != 0) {
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar4,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3,lVar4,0);
          lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + lVar4;
          if ((uVar3 & 1) != 0) {
            uVar6 = 1;
            goto LAB_011aa1ac;
          }
          goto LAB_011aa1e0;
        }
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + lVar4;
    }
  }
LAB_011aa1e0:
  uVar6 = 0;
LAB_011aa1ac:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = uVar6;
  return auVar7;
}


