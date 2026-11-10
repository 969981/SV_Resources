/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d55078; name: FUN_00d55078
 */


void FUN_00d55078(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_80;
  long *local_78;
  ulong local_70;
  long local_68;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar12 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d5038;
  param_1[1] = lVar12;
  plVar11 = param_1 + 7;
  param_1[4] = (long)&PTR_LAB_045d5128;
  param_1[6] = (long)&PTR_LAB_045d5158;
  memset(plVar11,0,0x70);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  lVar7 = tpidr_el0;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar7 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0x666666666666666;
  param_1[0x17] = 0;
  param_1[0x15] = lVar12;
  param_1[0x19] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar7 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x1a] = lVar12;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  param_1[0x1b] = 0x666666666666666;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar7 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0x555555555555555;
  param_1[0x24] = 0;
  param_1[0x22] = lVar12;
  param_1[0x26] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar7 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x27] = lVar12;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x28] = 0x555555555555555;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar7 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0x2aaaaaaaaaaaaaa;
  param_1[0x31] = 0;
  param_1[0x2f] = lVar12;
  param_1[0x33] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar7 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x34] = lVar12;
  plVar14 = (long *)param_1[1];
  param_1[0x35] = 0x2aaaaaaaaaaaaaa;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  param_1[0x3a] = 0;
  plVar13 = *(long **)(*(long *)(*param_2 + 0x38) + 0x30);
  if (plVar13 != (long *)0x0) {
    plVar8 = plVar13 + 5;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar7 == -1) goto LAB_00d55e74;
  }
  lVar7 = DAT_0485ac00;
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x10,8);
  if (plVar8 == (long *)0x0) {
    local_70 = 0;
    local_68 = 0;
    local_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00d55e70;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar14;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *plVar8 = 0;
    plVar15 = (long *)plVar13[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00d55e70;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x4c0,8);
    if (puVar10 == (undefined8 *)0x0) {
      lVar7 = *plVar15;
      goto LAB_00d55ea4;
    }
    FUN_00cf38a8(puVar10,plVar13);
    puVar10[2] = puVar10;
    *puVar10 = &DAT_045d63c8;
    puVar10[1] = plVar15;
    puVar10[4] = &PTR_LAB_045d6408;
    *(undefined4 *)(puVar10 + 3) = 0x804c0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    piVar1 = (int *)(puVar10 + 5);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_00d55e74;
    local_70 = local_70 & 0xffffffff00000000;
    local_80 = 0x440;
    local_78 = (long *)0x100;
    FUN_00d560a0(puVar10,&local_80,2,0,0);
    plVar15 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 5;
      do {
        lVar9 = *plVar2;
        iVar6 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_00d55880;
    }
    *plVar8 = (long)puVar10;
    plVar8[1] = lVar7 + 0x40;
    local_70 = 0x10;
    local_68 = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_78 = plVar14;
  }
  local_80 = 0;
  lVar7 = *plVar11;
  *plVar11 = (long)plVar8;
  if (lVar7 != 0) {
    FUN_00d59194(param_1 + 8);
  }
  param_1[9] = local_70;
  param_1[10] = local_68;
  param_1[8] = (long)local_78;
  lVar7 = DAT_0485ac00;
  plVar11 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x10,8);
  if (plVar11 != (long *)0x0) {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00d55e70;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar14;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *plVar11 = 0;
    plVar15 = (long *)plVar13[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00d55e70;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x720,8);
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00cf38a8(puVar10,plVar13);
      puVar10[2] = puVar10;
      *puVar10 = &DAT_045d6438;
      puVar10[1] = plVar15;
      puVar10[4] = &PTR_LAB_045d6478;
      *(undefined4 *)(puVar10 + 3) = 0x80720;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      piVar1 = (int *)(puVar10 + 5);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == -1) goto LAB_00d55e74;
      local_70 = local_70 & 0xffffffff00000000;
      local_80 = 0x6a0;
      local_78 = (long *)0x100;
      FUN_00d560a0(puVar10,&local_80,2,0,0);
      plVar8 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar8 != (long *)0x0) {
        plVar15 = plVar8 + 5;
        do {
          lVar9 = *plVar15;
          iVar6 = (int)lVar9 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00d55880;
      }
      *plVar11 = (long)puVar10;
      plVar11[1] = lVar7 + 0xa8;
      local_70 = 0x10;
      local_68 = 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      local_78 = plVar14;
      goto LAB_00d555e8;
    }
LAB_00d55e9c:
    lVar7 = *plVar15;
LAB_00d55ea4:
    (**(code **)(lVar7 + 0xe8))(plVar15);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = (long *)0x0;
LAB_00d555e8:
  local_80 = 0;
  lVar7 = param_1[0xb];
  param_1[0xb] = (long)plVar11;
  if (lVar7 != 0) {
    FUN_00d595a4(param_1 + 0xc);
  }
  param_1[0xd] = local_70;
  param_1[0xe] = local_68;
  param_1[0xc] = (long)local_78;
  lVar7 = DAT_0485ac00;
  plVar11 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x10,8);
  if (plVar11 == (long *)0x0) {
    local_70 = 0;
    local_68 = 0;
    local_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00d55e70:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar14;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *plVar11 = 0;
    plVar15 = (long *)plVar13[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00d55e70;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0xc0,8);
    if (puVar10 == (undefined8 *)0x0) goto LAB_00d55e9c;
    FUN_00cf38a8(puVar10,plVar13);
    puVar10[2] = puVar10;
    *puVar10 = &DAT_045d64a8;
    puVar10[1] = plVar15;
    puVar10[4] = &PTR_LAB_045d64e8;
    *(undefined4 *)(puVar10 + 3) = 0x800c0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    piVar1 = (int *)(puVar10 + 5);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
LAB_00d55e74:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_70 = local_70 & 0xffffffff00000000;
    local_80 = 0x40;
    local_78 = (long *)0x100;
    FUN_00d560a0(puVar10,&local_80,2,0,0);
    plVar8 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar8 != (long *)0x0) {
      plVar15 = plVar8 + 5;
      do {
        lVar9 = *plVar15;
        iVar6 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_00d55880;
    }
    *plVar11 = (long)puVar10;
    plVar11[1] = lVar7 + 0x110;
    local_70 = 0x10;
    local_68 = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    local_78 = plVar14;
  }
  local_80 = 0;
  lVar7 = param_1[0xf];
  param_1[0xf] = (long)plVar11;
  if (lVar7 != 0) {
    FUN_00d599b4(param_1 + 0x10);
  }
  param_1[0x11] = local_70;
  param_1[0x12] = local_68;
  param_1[0x10] = (long)local_78;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 5;
    do {
      lVar7 = *plVar11;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar7 == 0) {
LAB_00d55880:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


