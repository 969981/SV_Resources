/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc2a18; name: FUN_01dc2a18
 */


void FUN_01dc2a18(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  puVar3 = PTR_PTR_047d4508;
  lVar7 = 0;
  do {
    if ((*(uint *)(param_1 + 0x6904) >> (ulong)((uint)lVar7 & 0x1f) & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x6cd0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x58))(plVar5);
      }
      plVar6 = *(long **)(param_1 + (ulong)*(byte *)(param_1 + 0x68da + lVar7) * 0x98 + 0x30);
      plVar1 = (long *)puVar3;
      plVar2 = (long *)PTR_DAT_047d8b70;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 7;
        plVar2 = plVar6 + 6;
      }
      local_80 = *plVar2;
      lStack_78 = *plVar1;
      if (plVar6 == (long *)0x0) {
        local_70 = 0;
      }
      else {
        local_70 = plVar6[8];
        local_68 = (long *)0x0;
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      local_68 = plVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x58))(plVar5);
        lVar4 = FUN_00c8c7b4(plVar5[0x2e],&local_80);
        (**(code **)(*plVar5 + 0x60))(plVar5);
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | param_2 & 1;
        }
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x60))(plVar5);
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x1e);
  return;
}


