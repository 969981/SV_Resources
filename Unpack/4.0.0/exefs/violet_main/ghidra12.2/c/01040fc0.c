/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01040fc0; name: FUN_01040fc0
 */


void FUN_01040fc0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  puVar3 = PTR_DAT_047d8b70;
  puVar2 = PTR_PTR_047d4508;
  for (plVar5 = *(long **)(param_1 + 0x170); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar4 = *(long **)(plVar5[6] + 8);
    lVar6 = *param_2;
    plVar1 = (long *)puVar3;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 6;
    }
    local_60 = *plVar1;
    if (local_60 != *(long *)(lVar6 + 0x3b8)) {
      plVar1 = (long *)puVar2;
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 7;
      }
      lStack_58 = *plVar1;
      if (plVar4 == (long *)0x0) {
        local_50 = 0;
        local_48 = plVar4;
        FUN_010410a4(lVar6 + 0x4a8,&local_60);
      }
      else {
        local_50 = plVar4[8];
        (**(code **)(*plVar4 + 0x18))(plVar4);
        local_48 = plVar4;
        FUN_010410a4(lVar6 + 0x4a8,&local_60);
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
    }
  }
  return;
}


