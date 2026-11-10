/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02706410; name: FUN_02706410
 */


long FUN_02706410(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *local_40 [2];
  
  iVar1 = (**(code **)(*DAT_04859de0 + 0x10))(DAT_04859de0,param_1,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)(*DAT_04859de8)(0x38);
    puVar2[4] = param_1;
    puVar2[5] = param_2 + param_1;
    puVar2[2] = 0;
    puVar2[6] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_0270653c(local_40);
    plVar3 = (long *)local_40[0][2];
    if ((long *)local_40[0][2] == (long *)0x0) {
      do {
        plVar6 = local_40[0];
        local_40[0] = (long *)*plVar6;
      } while (plVar6 == (long *)local_40[0][2]);
      if ((long *)plVar6[2] != local_40[0]) {
        plVar6 = local_40[0];
      }
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)plVar6[1];
      } while (plVar3 != (long *)0x0);
    }
    for (; plVar6 != &DAT_04859d88; plVar6 = (long *)*plVar6) {
      local_40[0] = plVar6;
      plVar3 = (long *)FUN_027065c0(local_40);
      if (plVar3 == plVar6) {
        uVar4 = 0;
      }
      else {
        uVar4 = plVar6[4] - plVar3[5];
      }
      uVar5 = uVar4;
      if ((plVar6[1] != 0) && (uVar5 = *(ulong *)(plVar6[1] + 0x30), uVar5 <= uVar4)) {
        uVar5 = uVar4;
      }
      uVar4 = uVar5;
      if ((plVar6[2] != 0) && (uVar4 = *(ulong *)(plVar6[2] + 0x30), uVar4 <= uVar5)) {
        uVar4 = uVar5;
      }
      plVar6[6] = uVar4;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


