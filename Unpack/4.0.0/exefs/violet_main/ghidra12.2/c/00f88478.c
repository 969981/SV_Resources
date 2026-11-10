/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f88478; name: FUN_00f88478
 */


undefined1  [16] FUN_00f88478(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong unaff_x22;
  undefined1 auVar7 [16];
  char local_38 [4];
  uint local_34;
  
  if (param_2 != 0) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
    if ((uVar4 & 1) == 0) {
      unaff_x22 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_38,1,0);
      unaff_x22 = uVar4 & 0xffffffff;
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    if (((unaff_x22 & 1) != 0) && (local_38[0] == '\x04')) {
      plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1]);
      if ((uVar4 & 1) == 0) {
        unaff_x22 = 1;
      }
      else {
        uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_34,4,0);
        unaff_x22 = (ulong)(uVar1 ^ 1);
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
      if (((unaff_x22 & 1) == 0) && (unaff_x22 = (ulong)local_34, unaff_x22 <= param_3)) {
        plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,unaff_x22,plVar2[1]);
        if ((uVar4 & 1) == 0) {
          lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          *(ulong *)(lVar5 + 8) = *(long *)(lVar5 + 8) + unaff_x22;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,unaff_x22,0);
          lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          *(ulong *)(lVar5 + 8) = *(long *)(lVar5 + 8) + unaff_x22;
          if ((uVar4 & 1) != 0) {
            uVar6 = 1;
            goto LAB_00f8861c;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_00f8861c:
  auVar7._8_8_ = unaff_x22;
  auVar7._0_8_ = uVar6;
  return auVar7;
}


