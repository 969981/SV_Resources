/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347322c; name: FUN_0347322c
 */


void FUN_0347322c(undefined8 param_1,long param_2,int param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  ulong *puVar1;
  long *plVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *local_78;
  ulong uStack_70;
  float local_68;
  float fStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  plVar6 = (long *)0x0;
  if (param_6 == 0) {
    plVar6 = (long *)(param_2 + 0x150);
  }
  plVar2 = (long *)(param_2 + 0x178);
  if (param_6 != 5) {
    plVar2 = plVar6;
  }
  plVar6 = (long *)*plVar2;
  uVar11 = (ulong)param_6;
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6;
    do {
      if ((int)plVar12[1] == param_3) goto LAB_03473344;
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
    do {
      if ((int)plVar6[1] == param_3) goto LAB_03473334;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  plVar12 = plVar2 + 2;
  plVar6 = (long *)*plVar12;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x30);
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar6[2] = (long)(PTR_DAT_047e7198 + 0x10);
    *plVar6 = *plVar12;
    *plVar12 = (long)plVar6;
  }
  if ((undefined8 *)plVar2[1] == (undefined8 *)0x0) {
    *plVar2 = (long)plVar6;
  }
  else {
    *(undefined8 *)plVar2[1] = plVar6;
    plVar6 = (long *)*plVar12;
  }
  plVar2[1] = (long)plVar6;
  plVar2[2] = *plVar6;
  *plVar6 = 0;
  *(int *)((long)plVar2 + 0x24) = *(int *)((long)plVar2 + 0x24) + 1;
  plVar6 = (long *)plVar2[1];
  *(int *)(plVar6 + 1) = param_3;
LAB_03473334:
  plVar6[3] = param_2;
  plVar6[4] = 0;
  *(undefined4 *)(plVar6 + 5) = 0;
  *(undefined1 *)((long)plVar6 + 0x2c) = 0;
  plVar12 = plVar6;
LAB_03473344:
  puVar4 = *(ulong **)(param_2 + 0x1a8);
  if (puVar4 == (ulong *)0x0) {
    puVar4 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x28);
    if (puVar4 == (ulong *)0x0) {
      *(undefined8 *)(param_2 + 0x1a8) = 0;
      return;
    }
    *(undefined1 *)(puVar4 + 4) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0xffffffffffffffff;
    *(ulong **)(param_2 + 0x1a8) = puVar4;
  }
  uVar7 = 1L << ((ulong)*(uint *)(PTR_DAT_047e7190 + uVar11 * 4) & 0x3f);
  if ((*puVar4 & uVar7) == 0) {
    *puVar4 = *puVar4 | uVar7;
    FUN_034be24c();
    lVar5 = *(long *)(param_2 + 0x1a8);
    *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
    if (*(uint *)(lVar5 + 0x18) != 0) {
      puVar4 = *(ulong **)(lVar5 + 0x10);
      uVar10 = (ulong)*(uint *)(lVar5 + 0x18) * 0x10 - 0x10;
      uVar7 = (uVar10 >> 4) + 1;
      uVar8 = uVar7 & 3;
      if (uVar10 < 0x30) {
        uVar7 = 0xffffffffffffffff;
      }
      else {
        lVar9 = -(uVar7 & 0x1ffffffffffffffc);
        uVar7 = 0xffffffffffffffff;
        do {
          uVar10 = *puVar4;
          *(ulong *)(lVar5 + 8) = uVar10 & uVar7;
          uVar7 = puVar4[2] & uVar10 & uVar7;
          *(ulong *)(lVar5 + 8) = uVar7;
          uVar7 = puVar4[4] & uVar7;
          *(ulong *)(lVar5 + 8) = uVar7;
          puVar1 = puVar4 + 6;
          puVar4 = puVar4 + 8;
          uVar7 = *puVar1 & uVar7;
          lVar9 = lVar9 + 4;
          *(ulong *)(lVar5 + 8) = uVar7;
        } while (lVar9 != 0);
      }
      if (uVar8 != 0) {
        lVar9 = -uVar8;
        do {
          uVar7 = *puVar4 & uVar7;
          bVar3 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          *(ulong *)(lVar5 + 8) = uVar7;
          puVar4 = puVar4 + 2;
        } while (bVar3);
      }
    }
  }
  *(undefined1 *)((long)plVar12 + 0x2c) = 0;
  if (plVar12[4] != 0) {
    FUN_034e6c0c(param_1,*(undefined8 *)PTR_DAT_047e7038,plVar12[4],uVar11,param_4,param_5,2);
    return;
  }
  local_78 = plVar12 + 2;
  if (param_4 != 0) {
    local_68 = *(float *)(plVar12 + 5);
    fStack_64 = (float)param_1;
    if (local_68 != fStack_64) {
      local_58 = 0xd;
      local_54 = 0x101;
      local_52 = 0;
      uStack_70 = uVar11;
      local_60 = param_4;
      uStack_5c = param_5;
      lVar5 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_78,0);
      plVar12[4] = lVar5;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x034734b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*local_78)(param_1,local_78,uVar11,1);
  return;
}


