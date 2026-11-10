/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02afba2c; name: FUN_02afba2c
 */


undefined8 FUN_02afba2c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 local_44 [4];
  undefined4 local_28;
  undefined1 local_24 [4];
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 + 6,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      local_44[0] = 5;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,local_44,1,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      local_28 = (undefined4)param_3;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,4,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,4,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 + 1,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        local_24[0] = 0xc;
        plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,local_24,1,0);
        }
        lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
        *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
        plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,0);
        }
        lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
        *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_3;
        return 1;
      }
    }
  }
  return 0;
}


