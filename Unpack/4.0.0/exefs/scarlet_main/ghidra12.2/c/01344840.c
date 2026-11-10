/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01344840; name: FUN_01344840
 */


undefined8 FUN_01344840(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_240;
  undefined8 uStack_238;
  long *local_230;
  undefined8 *local_1d8 [2];
  long *local_1c8;
  undefined *local_1c0;
  code *local_1b8;
  undefined *local_1b0;
  code *pcStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long *local_190;
  undefined *local_140;
  code *local_138;
  undefined *local_130;
  code *pcStack_128;
  undefined1 auStack_120 [96];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [96];
  
  FUN_01143780(local_1d8,param_1,1);
  if (((DAT_04807b38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04807b38), iVar11 != 0)) {
    __cxa_guard_release(&DAT_04807b38);
  }
  local_240 = 0;
  uStack_238 = 0;
  FUN_00d32adc(&local_240,local_1d8);
  local_230 = local_1c8;
  if (local_1c8 != (long *)0x0) {
    lVar13 = local_1c8[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01344bf8;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar12;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_01344c18;
  }
  puVar9 = PTR_FUN_047d4338;
  puVar8 = PTR_FUN_047d4330;
  puVar7 = PTR_FUN_047d4328;
  puVar6 = PTR_LAB_047d4320;
  local_1c0 = (undefined *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined *)0x0;
  pcStack_1a8 = (code *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  FUN_00d32adc(&local_1a0,&local_240);
  local_190 = local_230;
  if (local_230 != (long *)0x0) {
    lVar13 = local_230[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
LAB_01344bf8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar12;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_01344c18:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_140 = (undefined *)0x0;
  local_138 = (code *)0x0;
  local_130 = (undefined *)0x0;
  pcStack_128 = (code *)0x0;
  local_1c0 = puVar6;
  local_1b8 = (code *)puVar7;
  local_1b0 = puVar8;
  pcStack_1a8 = (code *)puVar9;
  if (puVar8 == (undefined *)0x0) {
    local_b0 = (undefined *)0x0;
    pcStack_a8 = (code *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
  }
  else {
    (*(code *)puVar8)(&local_1a0,auStack_120);
    local_b0 = (undefined *)0x0;
    pcStack_a8 = (code *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    local_140 = local_1c0;
    local_138 = local_1b8;
    local_130 = local_1b0;
    pcStack_128 = pcStack_1a8;
    if (pcStack_1a8 != (code *)0x0) {
      (*pcStack_1a8)(auStack_120,auStack_a0);
      pcVar10 = local_138;
      local_c0 = local_140;
      local_b8 = local_138;
      local_b0 = local_130;
      pcStack_a8 = pcStack_128;
      if (local_138 != (code *)0x0) {
        local_130 = (undefined *)0x0;
        pcStack_128 = (code *)0x0;
        local_140 = (undefined *)0x0;
        local_138 = (code *)0x0;
        (*pcVar10)(auStack_120);
      }
    }
  }
  FUN_01344c78(&local_c0);
  pcVar10 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    pcStack_a8 = (code *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar10)(auStack_a0);
  }
  pcVar10 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined *)0x0;
    pcStack_128 = (code *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar10)(auStack_120);
  }
  pcVar10 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined *)0x0;
    pcStack_1a8 = (code *)0x0;
    local_1c0 = (undefined *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar10)(&local_1a0);
  }
  if (puVar7 != (undefined *)0x0) {
    (*(code *)puVar7)(&local_240);
  }
  if (local_1c8 != (long *)0x0) {
    lVar13 = local_1c8[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_1c8 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_1d8[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_1d8[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_1d8[0] + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_c0 = (undefined *)*local_1d8[0];
        FUN_00c44438(lVar13 + 0x8040,&local_c0);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return 0;
}


