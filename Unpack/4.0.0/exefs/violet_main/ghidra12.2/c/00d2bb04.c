/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2bb04; name: FUN_00d2bb04
 */


void FUN_00d2bb04(long param_1,code *param_2,long *param_3,int param_4)

{
  uint uVar1;
  code cVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  code *extraout_x1;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  code **ppcVar10;
  long lVar11;
  undefined1 *puVar12;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0 [13];
  int local_54;
  code *local_38;
  
  lVar11 = *(long *)(param_1 + 0x208);
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  if (*(code **)(lVar11 + 0xd0) != (code *)0x0) {
    ppcVar10 = local_c0;
    (**(code **)(lVar11 + 0xd0))(lVar11 + 0xe0,ppcVar10);
    local_d0 = *(code **)(lVar11 + 0xd0);
    local_c8 = *(code **)(lVar11 + 0xd8);
    local_e0 = *(code **)(lVar11 + 0xc0);
    local_d8 = *(code **)(lVar11 + 200);
    if ((local_e0 != (code *)0x0) &&
       (local_54 = param_4, local_38 = param_2, uVar5 = (*local_e0)(ppcVar10,&local_38,&local_54),
       pcVar6 = local_d8, (uVar5 & 1) == 0)) {
      if (local_d8 == (code *)0x0) {
        return;
      }
      local_d0 = (code *)0x0;
      local_c8 = (code *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      goto LAB_00d2be3c;
    }
  }
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar6)(local_c0);
  }
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar5 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar5 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar12 = *(undefined1 **)PTR_DAT_047d3e30;
    ppcVar10 = *(code ***)(PTR_DAT_047d3e30 + 0x18);
    if (ppcVar10 != (code **)0x0) {
      (**(code **)(*ppcVar10 + 0x18))(ppcVar10);
    }
  }
  else {
    uVar7 = (ulong)*(uint *)(param_2 + uVar5);
    cVar2 = (param_2 + uVar5)[uVar7 + 4];
    puVar12 = &DAT_cbf29ce484222645;
    if (cVar2 != (code)0x0) {
      pcVar6 = param_2 + uVar7 + uVar5 + 5;
      do {
        puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)(byte)cVar2) * 0x100000001b3);
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != (code)0x0);
    }
    ppcVar10 = (code **)0x0;
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar11 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar11;
  pcVar6 = param_2 + *(ushort *)(param_2 + (6 - (long)*(int *)param_2));
  if (*param_3 != 0) {
    for (plVar8 = *(long **)(lVar11 + 0xb1e0); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if ((undefined1 *)plVar8[2] == puVar12) {
        local_e0 = pcVar6 + *(uint *)pcVar6 + 4;
        local_38 = (code *)(ulong)*(uint *)(pcVar6 + *(uint *)pcVar6);
        uVar3 = (*(code *)plVar8[6])(plVar8 + 10,param_3,&local_e0,&local_38);
        memcpy(&local_e0,param_3,0x28);
        switch(uVar3) {
        case 1:
          local_d8 = extraout_x1;
          break;
        case 2:
          local_d0 = extraout_x1;
          break;
        case 3:
          local_c8 = extraout_x1;
          break;
        case 4:
          local_c0[0] = extraout_x1;
        }
        goto switchD_00d2bcf0_default;
      }
    }
  }
  memcpy(&local_e0,param_3,0x28);
switchD_00d2bcf0_default:
  if (local_d0 != (code *)0x0) {
    FUN_00d2bee4(&local_38);
    local_e0 = local_38;
    if (local_38 != (code *)0x0) {
      (**(code **)(*(long *)local_38 + 0x18))();
    }
  }
  if ((8 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
     (uVar5 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar5 != 0)) {
    pcVar6 = param_2 + uVar5 + *(uint *)(param_2 + uVar5);
    pcVar9 = pcVar6 + 4;
    uVar1 = *(uint *)pcVar6;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      param_4 = param_4 + 1;
      FUN_00d2bb04(param_1,pcVar9 + *(uint *)pcVar9,&local_e0,param_4);
      if (uVar1 != 1) {
        FUN_00d2bb04(param_1,pcVar6 + 8 + *(uint *)(pcVar6 + 8),&local_e0,param_4);
        if (pcVar6 + 0xc != pcVar9 + uVar5 * 4) {
          lVar11 = uVar5 * 4 + -8;
          pcVar6 = pcVar6 + 0xc;
          do {
            FUN_00d2bb04(param_1,pcVar6 + *(uint *)pcVar6,&local_e0,param_4);
            lVar11 = lVar11 + -4;
            pcVar6 = pcVar6 + 4;
          } while (lVar11 != 0);
        }
      }
    }
  }
  if (ppcVar10 == (code **)0x0) {
    return;
  }
  pcVar6 = *(code **)(*ppcVar10 + 0x20);
LAB_00d2be3c:
  (*pcVar6)(ppcVar10);
  return;
}


