/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03414bfc; name: FUN_03414bfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03414bfc(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    plVar5 = (long *)(*param_1 + (ulong)((uint)param_2 - uVar3 * uVar2) * 8);
    plVar8 = (long *)*plVar5;
    while (plVar8 != (long *)0x0) {
      if (plVar8[0xe] == param_2) {
        plVar7 = (long *)plVar8[0x15];
        *plVar5 = plVar8[0xf];
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        FUN_0341e9a0(plVar8);
        plVar5 = param_1 + 0xb;
        plVar4 = (long *)*plVar5;
        if (plVar4 == (long *)0x0) goto LAB_03414ccc;
        if ((plVar8 < plVar4) || (plVar4 + 0x600 <= plVar8)) goto LAB_03414c98;
        plVar6 = (long *)0x0;
        goto LAB_03414cb8;
      }
      plVar5 = plVar8 + 0xf;
      plVar8 = (long *)*plVar5;
    }
  }
  return 0xf;
LAB_03414ccc:
  if (_DAT_00003010 == (long *)0x0) {
    _DAT_00003010 = plVar8;
    *plVar8 = 0;
  }
  else {
    *plVar8 = (long)_DAT_00003010;
    _DAT_00003010 = plVar8;
  }
  _DAT_00003008 = _DAT_00003008 + 1;
  goto LAB_03414d50;
  while ((plVar8 < plVar4 || (plVar4 + 0x600 <= plVar8))) {
LAB_03414c98:
    plVar6 = plVar4;
    plVar4 = (long *)plVar6[0x600];
    if (plVar4 == (long *)0x0) goto LAB_03414ccc;
  }
LAB_03414cb8:
  if (plVar4[0x602] == 0) {
    plVar4[0x602] = (long)plVar8;
    *plVar8 = 0;
  }
  else {
    *plVar8 = plVar4[0x602];
    plVar4[0x602] = (long)plVar8;
  }
  iVar1 = (int)plVar4[0x601] + 1;
  *(int *)(plVar4 + 0x601) = iVar1;
  if (iVar1 == 0x40) {
    if ((long *)*plVar5 != plVar4) {
      plVar5 = plVar6 + 0x600;
    }
    *plVar5 = plVar4[0x600];
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
  }
LAB_03414d50:
  if ((plVar7 != (long *)0x0) && ((int)plVar7[7] == 0)) {
    if (plVar7[2] != 0) {
      FUN_03415768(plVar7 + 1);
      plVar7[2] = 0;
    }
    plVar5 = (long *)param_1[0x10];
    plVar8 = (long *)0x0;
    if ((plVar5 == (long *)0x0) || (plVar7 == plVar5)) {
      plVar4 = plVar5;
    }
    else {
      plVar4 = plVar5;
      do {
        plVar8 = plVar4;
        plVar4 = (long *)*plVar8;
      } while (plVar4 != (long *)0x0 && plVar7 != plVar4);
    }
    if (plVar4 != (long *)0x0) {
      plVar6 = param_1 + 0x10;
      if (plVar5 != plVar4) {
        plVar6 = plVar8;
      }
      *plVar6 = *plVar4;
    }
    if (plVar7[2] != 0) {
      FUN_03415768(plVar7 + 1);
      plVar7[2] = 0;
    }
    plVar7[1] = (long)&PTR_FUN_047bf4e0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,plVar7);
  }
  return 1;
}


