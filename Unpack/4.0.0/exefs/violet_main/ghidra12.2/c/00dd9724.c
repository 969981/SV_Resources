/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd9724; name: FUN_00dd9724
 */


void FUN_00dd9724(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,4);
  if ((uVar2 & 1) == 0) {
    FUN_00ca7394(param_1 + 0x90,3);
    lVar3 = *(long *)(param_1 + 0x90);
    local_38 = 0x22;
    uStack_34 = 1;
    FUN_00c85118(lVar3,&uStack_34,&local_38);
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 0xc;
    FUN_00ebd51c(lVar3,param_2,param_3,1);
    lVar3 = *(long *)(param_1 + 0x90);
    local_38 = 0x22;
    uStack_34 = 2;
    FUN_00c85118(lVar3 + 0x48,&uStack_34,&local_38);
    *(int *)(lVar3 + 0x88) = *(int *)(lVar3 + 0x88) + 0xc;
    FUN_00ebd51c(lVar3 + 0x48,param_2,param_3,1);
    lVar3 = *(long *)(param_1 + 0x90);
    local_38 = 0x22;
    uStack_34 = 4;
    FUN_00c85118(lVar3 + 0x90,&uStack_34,&local_38);
    *(int *)(lVar3 + 0xd0) = *(int *)(lVar3 + 0xd0) + 0xc;
    FUN_00ebd51c(lVar3 + 0x90,param_2,param_3,1);
    return;
  }
  FUN_00ca7394(param_1 + 0x90,4);
  FUN_02730a6c(param_1,param_2,param_3);
  return;
}


