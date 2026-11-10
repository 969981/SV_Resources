/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010416d0; name: FUN_010416d0
 */


void FUN_010416d0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  
  puVar3 = PTR_DAT_047d8b70;
  puVar2 = PTR_PTR_047d4508;
  for (plVar7 = *(long **)(param_1 + 0x170); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    lVar9 = plVar7[6];
    plVar4 = *(long **)(lVar9 + 8);
    lVar8 = *param_2;
    plVar1 = (long *)puVar3;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 6;
    }
    local_70 = *plVar1;
    if (local_70 != *(long *)(lVar8 + 0x3b8)) {
      lVar5 = *(long *)(lVar8 + 0x498);
      if (lVar5 != 0) {
        plVar1 = (long *)puVar2;
        if (plVar4 != (long *)0x0) {
          plVar1 = plVar4 + 7;
        }
        lStack_68 = *plVar1;
        if (plVar4 == (long *)0x0) {
          local_60 = 0;
        }
        else {
          local_60 = plVar4[8];
          local_58 = (long *)0x0;
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
        local_58 = plVar4;
        FUN_01042788(lVar5,&local_70);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        plVar4 = *(long **)(lVar9 + 8);
      }
      uVar6 = *(undefined8 *)(lVar8 + 0x488);
      plVar1 = (long *)puVar3;
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 6;
      }
      local_70 = *plVar1;
      plVar1 = (long *)puVar2;
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 7;
      }
      lStack_68 = *plVar1;
      if (plVar4 == (long *)0x0) {
        local_60 = 0;
      }
      else {
        local_60 = plVar4[8];
        local_58 = (long *)0x0;
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      local_58 = plVar4;
      FUN_0102acf4(uVar6,&local_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


