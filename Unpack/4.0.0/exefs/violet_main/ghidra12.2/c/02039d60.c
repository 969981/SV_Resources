/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02039d60; name: FUN_02039d60
 */


void FUN_02039d60(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  lVar5 = *param_2;
  if (*(int *)(lVar5 + (ulong)*(uint *)(param_1 + 0x104)) == param_3) {
    *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x100)) = 0xffffffff;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar2 = PTR_DAT_047d3e30;
    puVar9 = (undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x108));
    *puVar9 = *(undefined8 *)PTR_DAT_047d3e30;
    puVar9[1] = *(undefined8 *)(puVar2 + 8);
    puVar9[2] = *(undefined8 *)(puVar2 + 0x10);
    plVar8 = *(long **)(puVar2 + 0x18);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    plVar4 = (long *)puVar9[3];
    puVar9[3] = plVar8;
    if (plVar4 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x02039dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))();
    return;
  }
  switch(param_3) {
  case 0:
    uVar1 = *(uint *)(param_1 + 0x108);
    uVar6 = 0xd12c9fa8becdb294;
    pcVar7 = "loc_pos_front";
    break;
  case 1:
    uVar1 = *(uint *)(param_1 + 0x108);
    uVar6 = 0x5ffeee0b8714c6c6;
    pcVar7 = "loc_pos_back";
    goto LAB_02039ea4;
  case 2:
    uVar1 = *(uint *)(param_1 + 0x108);
    uVar6 = 0x2a4fded6fb8a9ac4;
    pcVar7 = "loc_pos_left";
LAB_02039ea4:
    puVar9 = (undefined8 *)(lVar5 + (ulong)uVar1);
    *puVar9 = uVar6;
    puVar9[1] = pcVar7;
    uVar6 = 0xc;
    goto LAB_02039ed8;
  case 3:
    uVar1 = *(uint *)(param_1 + 0x108);
    uVar6 = 0xa2216459b5afc411;
    pcVar7 = "loc_pos_right";
    break;
  default:
    goto switchD_02039e24_default;
  }
  puVar9 = (undefined8 *)(lVar5 + (ulong)uVar1);
  *puVar9 = uVar6;
  puVar9[1] = pcVar7;
  uVar6 = 0xd;
LAB_02039ed8:
  puVar9[2] = uVar6;
  plVar4 = puVar9 + 3;
  plVar8 = (long *)*plVar4;
  *plVar4 = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *plVar4 = 0;
switchD_02039e24_default:
  *(int *)(*param_2 + (ulong)*(uint *)(param_1 + 0x100)) = param_3;
  return;
}


