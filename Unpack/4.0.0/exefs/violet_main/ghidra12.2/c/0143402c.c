/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143402c; name: FUN_0143402c
 */


/* WARNING: Removing unreachable block (ram,0x014347d4) */
/* WARNING: Removing unreachable block (ram,0x014347d8) */
/* WARNING: Removing unreachable block (ram,0x014347e0) */
/* WARNING: Removing unreachable block (ram,0x014347e8) */
/* WARNING: Removing unreachable block (ram,0x01434a44) */
/* WARNING: Removing unreachable block (ram,0x01434a4c) */
/* WARNING: Removing unreachable block (ram,0x01434a50) */
/* WARNING: Removing unreachable block (ram,0x01434a58) */
/* WARNING: Removing unreachable block (ram,0x01434a60) */
/* WARNING: Removing unreachable block (ram,0x01435198) */
/* WARNING: Removing unreachable block (ram,0x014351a8) */
/* WARNING: Removing unreachable block (ram,0x01434a70) */
/* WARNING: Removing unreachable block (ram,0x014347f0) */
/* WARNING: Removing unreachable block (ram,0x014347f4) */

void FUN_0143402c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *local_b0 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  FUN_00d1a240(param_1,0x80028180);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_04543738;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[4] = &PTR_LAB_04543878;
  param_1[5] = &PTR_LAB_045439a0;
  param_1[6] = &PTR_LAB_045439f8;
  param_1[7] = &PTR_LAB_04543a20;
  param_1[0x27] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
  param_1[0x2f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x37] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  lVar13 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar13 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(lVar13 + 0x30) = DAT_04859430;
  }
  param_1[0x68] = lVar10;
  param_1[0x69] = 0x1fffffffffffffff;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0xffffffff00000000;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  param_1[0xc0] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0xc1] = 0xf4b17a579f18960;
  param_1[0xc2] = 0x82a2b175229d6a5b;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  memset(param_1 + 0xc3,0,0x6c);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar13 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(lVar13 + 0x30) = DAT_04859430;
  }
  param_1[0xd4] = lVar10;
  param_1[0xd5] = 0xfffffffffffffff;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)((long)param_1 + 0x6d4) = 0;
  *(undefined8 *)((long)param_1 + 0x6c4) = 0;
  *(undefined8 *)((long)param_1 + 0x6cc) = 0;
  memcpy(param_1 + 0xdb,&DAT_03d303b0,0x40);
  *(undefined4 *)(param_1 + 0xe8) = 1;
  param_1[0xea] = 1;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe4] = 0;
  param_1[0xe9] = 0;
  *(undefined2 *)(param_1 + 0xeb) = 0;
  *(undefined8 *)((long)param_1 + 0x75c) = 0x200000001;
  *(undefined8 *)((long)param_1 + 0x764) = 0x1100000006;
  *(undefined8 *)((long)param_1 + 0x76c) = 0x6004200000012;
  *(undefined4 *)((long)param_1 + 0x774) = 0x60046;
  if (*(char *)(param_2 + 0x20) != '\0') {
    uVar17 = FUN_014375d4(param_1[1]);
    FUN_0143700c(&local_70,uVar17);
    FUN_014372a8(param_1 + 0xe9,0);
    param_1[0xe9] = local_70;
  }
  plVar16 = (long *)param_1[1];
  plVar12 = (long *)(param_2 + 0x10);
  if (((*PTR_DAT_047d7d30 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar9 != 0))
  {
    FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7d30);
  }
  lVar13 = *(long *)PTR_DAT_047d7d38;
  *(long *)PTR_DAT_047d7d40 = lVar13;
  FUN_01435d10(&local_a0,*(undefined8 *)(lVar13 + 0x390));
  if ((undefined8 *)*plVar12 == (undefined8 *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)*plVar12;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_01435288:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar16;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0xa8,8);
  if (lVar10 == 0) {
    lVar13 = *plVar16;
LAB_01435324:
    (**(code **)(lVar13 + 0xe8))(plVar16);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  plVar1 = param_1 + 0x74;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_00d0a71c(&local_70,plVar12);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  do {
    uVar8 = local_98;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_98,0x10);
    if (bVar6) {
      local_98 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_80,uVar11,uVar8);
  puVar7 = local_a0;
  local_a0 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar7 + 3);
    do {
      sVar15 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)puVar7 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_78 = *puVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_78);
      }
    }
    else if (sVar15 == 0) goto LAB_01434860;
  }
  puVar7 = local_90;
  if (local_80 == (undefined8 *)0x0) {
    FUN_01437aec(&local_90);
  }
  else {
    local_90 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar7 + 3);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)puVar7 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_78 = *puVar7;
          FUN_00c44438(lVar14 + 0x8040,&local_78);
        }
      }
      else if (sVar15 == 0) goto LAB_01434860;
    }
    local_90 = local_80;
    local_80 = (undefined8 *)0x0;
    local_88 = uVar8;
  }
  FUN_0143554c(lVar10,&local_70,&local_90,uVar17,param_3);
  puVar7 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar15 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_78 = *puVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_78);
      }
    }
    else if (sVar15 == 0) goto LAB_01434860;
  }
  puVar7 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_70 + 3);
    do {
      sVar15 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_70 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_78 = *puVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_78);
      }
    }
    else if (sVar15 == 0) goto LAB_01434860;
  }
  *(undefined4 *)(lVar10 + 0x18) = 0x800a8;
  *(long **)(lVar10 + 8) = plVar16;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  lVar13 = *(long *)(lVar10 + 0x30);
  if (*(long *)(lVar13 + 0x10) != 0) {
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar17;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_014352ac;
    plVar16 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar16 != (long *)0x0) {
      lVar13 = plVar16[6];
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))();
      }
      else if (sVar15 == 0) goto LAB_014346f0;
    }
    puVar7 = local_a0;
    *plVar1 = lVar10;
    if (local_a0 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_a0 + 3);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_70 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar13 + 0x8040,&local_70);
        }
      }
      else if (sVar15 == 0) goto LAB_01434860;
    }
    plVar16 = (long *)param_1[1];
    if ((undefined8 *)*plVar12 == (undefined8 *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)*plVar12;
    }
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01435288;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar16;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0xd0,8);
    if (lVar10 == 0) {
      lVar13 = *plVar16;
      goto LAB_01435324;
    }
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00d0a71c(&local_70,plVar12);
    FUN_01436234(lVar10,&local_70,uVar17,param_3);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_70 + 3);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)local_70 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_90 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar14 + 0x8040,&local_90);
        }
      }
      else if (sVar15 == 0) goto LAB_01434860;
    }
    *(undefined4 *)(lVar10 + 0x18) = 0x800d0;
    *(long **)(lVar10 + 8) = plVar16;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    lVar13 = *(long *)(lVar10 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0143528c;
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar17;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_014352ac;
    plVar12 = (long *)param_1[0x75];
    param_1[0x75] = 0;
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[6];
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))();
      }
      else if (sVar15 == 0) goto LAB_014346f0;
    }
    param_1[0x75] = lVar10;
    if (((*PTR_DAT_047d7d30 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar9 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    lVar13 = *(long *)PTR_DAT_047d7d38;
    *(long *)PTR_DAT_047d7d40 = lVar13;
    FUN_01435d10(&local_70,*(undefined8 *)(lVar13 + 0x390));
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      if (*(short *)((long)local_70 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_70 + 0x1a);
        sVar15 = *(short *)((long)local_70 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01434c2c;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01434c2c:
            bVar6 = false;
          }
          if (bVar6) {
            plVar12 = (long *)0x0;
            if (local_70[2] != 0) {
              plVar12 = (long *)(local_70[2] + -0x28);
            }
            goto LAB_01434c68;
          }
          sVar15 = sVar4;
        } while (sVar4 != 0);
      }
      plVar12 = (long *)0x0;
LAB_01434c68:
      psVar2 = (short *)(local_70 + 3);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)local_70 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_90 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar13 + 0x8040,&local_90);
        }
      }
      else if (sVar15 == 0) goto LAB_01434860;
      if (plVar12 != (long *)0x0) {
        FUN_00e12508(local_b0,param_1[0x75]);
        FUN_01437d10(plVar12,local_b0);
        if (local_b0[0] != (undefined8 *)0x0) {
          psVar2 = (short *)(local_b0[0] + 3);
          do {
            sVar15 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar15 == 1) {
            piVar3 = (int *)((long)local_b0[0] + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_70 = (undefined8 *)*local_b0[0];
              FUN_00c44438(lVar13 + 0x8040,&local_70);
            }
          }
          else if (sVar15 == 0) {
LAB_01434860:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar13 = plVar12[6];
        psVar2 = (short *)(lVar13 + 0x1a);
        do {
          sVar15 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar15 == 0) goto LAB_014346f0;
      }
    }
    plVar16 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01435288;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar16;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0x50,8);
    if (lVar10 == 0) {
      lVar13 = *plVar16;
      goto LAB_01435324;
    }
    FUN_01435420(lVar10,param_2);
    *(undefined4 *)(lVar10 + 0x18) = 0x80050;
    *(long **)(lVar10 + 8) = plVar16;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    lVar13 = *(long *)(lVar10 + 0x30);
    if (*(long *)(lVar13 + 0x10) != 0) {
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar15 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar17;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar15 == -1) {
LAB_014352ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar12 = (long *)param_1[0xc0];
      param_1[0xc0] = 0;
      if (plVar12 != (long *)0x0) {
        lVar13 = plVar12[6];
        psVar2 = (short *)(lVar13 + 0x1a);
        do {
          sVar15 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar15 == 0) {
LAB_014346f0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      param_1[0xc0] = lVar10;
      nn::crypto::GenerateCryptographicallyRandomBytes(&local_70,8);
      param_1[0xc3] = local_70;
      param_1[0xc1] = local_70;
      param_1[0xc2] = 0x82a2b175229d6a5b;
      return;
    }
  }
LAB_0143528c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x3d);
}


