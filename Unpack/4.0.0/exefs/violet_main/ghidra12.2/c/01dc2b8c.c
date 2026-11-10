/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc2b8c; name: FUN_01dc2b8c
 */


void FUN_01dc2b8c(long param_1,int param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  if (param_2 == 2) {
    lVar3 = 0x68f8;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      lVar3 = param_1 + 0x68bc;
      uVar4 = 0x1e;
      goto LAB_01dc2bdc;
    }
    lVar3 = 0x68b0;
  }
  lVar3 = param_1 + lVar3;
  uVar4 = 6;
LAB_01dc2bdc:
  if (param_4 < uVar4) {
    bVar2 = *(byte *)(lVar3 + (ulong)param_4);
    plVar5 = *(long **)(param_1 + 0x6cd0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x58))(plVar5);
    }
    plVar6 = *(long **)(param_1 + (ulong)bVar2 * 0x98 + 0xa8);
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 6;
    }
    local_50 = *plVar1;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 7;
    }
    lStack_48 = *plVar1;
    if (plVar6 == (long *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = plVar6[8];
    }
    local_38 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    local_38 = plVar6;
    if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00e895f4(plVar5[0x2e],&local_50), lVar3 != 0)) {
      FUN_00dfcea4();
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))(plVar5);
    }
  }
  return;
}


