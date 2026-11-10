/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0144ed9c; name: FUN_0144ed9c
 */


void FUN_0144ed9c(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  FUN_00d1a240(param_1,0x80ffffff);
  *param_1 = &PTR_LAB_0456f0f8;
  param_1[4] = &PTR_LAB_0456f258;
  param_1[5] = &DAT_0456f380;
  param_1[6] = &PTR_LAB_0456f3d8;
  plVar10 = param_1 + 7;
  *plVar10 = (long)&PTR_LAB_0456f400;
  param_1[0x24] = &PTR_LAB_0456f438;
  *(undefined1 *)(param_1 + 0x25) = *param_2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_00c93e08(param_1 + 0x26,param_2 + 8);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_00d0a71c(param_1 + 0x28,param_2 + 0x18);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_011750c4(param_1 + 0x2a,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = param_2[0x38];
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (plVar11 = *(long **)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), plVar11 == (long *)0x0)) {
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x31] = 0xfffffffffffffff;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  param_1[0x30] = plVar11;
  *(undefined1 *)(param_1 + 0x35) = *param_2;
  *(undefined1 *)((long)param_1 + 0x1a9) = *param_2;
  lVar8 = param_1[0x2d];
  param_1[0x36] = 0;
  if ((ulong)(param_1[0x2f] - lVar8 >> 4) < 4) {
    lVar13 = param_1[0x2e];
    puVar1 = param_1 + 0x30;
    local_70 = 0;
    puStack_68 = puVar1;
    local_88 = (**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xe8))();
    }
    lVar13 = local_88 + (lVar13 - lVar8 >> 4) * 0x10;
    lVar8 = local_88 + 0x40;
    lVar12 = param_1[0x2d];
    lVar15 = param_1[0x2e];
    if (lVar15 == lVar12) {
      lVar14 = lVar13;
      local_78 = lVar12;
    }
    else {
      lVar14 = lVar13 + -0x10;
      local_80 = lVar13;
      local_78 = lVar13;
      local_70 = lVar8;
      FUN_0144f398(puVar1,lVar14,lVar15 + -0x10);
      if (lVar15 + -0x10 != lVar12) {
        do {
          lVar14 = lVar14 + -0x10;
          FUN_0144f398(puVar1,lVar14,lVar15 + -0x20);
          lVar15 = lVar15 + -0x10;
        } while (lVar12 + 0x10 != lVar15);
      }
      lVar12 = param_1[0x2d];
      local_78 = param_1[0x2e];
    }
    param_1[0x2d] = lVar14;
    param_1[0x2e] = lVar13;
    local_70 = param_1[0x2f];
    param_1[0x2f] = lVar8;
    local_88 = lVar12;
    local_80 = lVar12;
    FUN_0144f1c0(&local_88);
  }
  if ((*(char *)(param_1 + 0xb) != '\x01') || (*(char *)((long)param_1 + 0x59) != '\x03')) {
    uVar4 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x301;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar10);
    }
    (**(code **)(*plVar10 + 0x20))(plVar10,uVar4);
  }
  if (((*PTR_DAT_047d88d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = uVar9;
  FUN_00ea8824(&local_88,uVar9,param_1 + 0x28);
  plVar10 = (long *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x36] = local_88;
  return;
}


