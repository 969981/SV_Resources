/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d05bc; name: FUN_015d05bc
 */


undefined8 FUN_015d05bc(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 + 5,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      local_28[0] = 4;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,local_28,1,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      local_24 = (undefined4)param_3;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,4,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_24,4,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
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
  return 0;
}


