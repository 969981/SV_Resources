/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01438af0; name: FUN_01438af0
 */


void FUN_01438af0(long *param_1,uint param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined1 local_38 [8];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar22 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar22;
  puVar11 = PTR_DAT_047d4a88;
  puVar10 = PTR_DAT_047d4a80;
  puVar5 = *(undefined8 **)(lVar22 + 0x1c8);
  for (puVar4 = *(undefined8 **)(lVar22 + 0x1c0); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    plVar23 = (long *)*puVar4;
    plVar15 = (long *)(**(code **)plVar23[5])(plVar23 + 5);
    if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
      uVar17 = FUN_01b5c440();
      *(undefined8 *)puVar11 = uVar17;
      __cxa_guard_release(puVar10);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar11) goto LAB_01438b9c;
    }
  }
  plVar23 = (long *)0x0;
LAB_01438b9c:
  if (*(uint *)((long)plVar23 + 0x54) <= param_2) {
LAB_01438dd8:
    FUN_014154e4(param_1,plVar23);
    return;
  }
  lVar22 = plVar23[8];
  if (lVar22 == 0) {
    if (plVar23[9] == 0) goto LAB_01438dd8;
    uVar13 = (**(code **)(*plVar23 + 0x88))(plVar23);
    uVar8 = 0;
    if (uVar13 != 0) {
      uVar8 = param_2 / uVar13;
    }
    uVar14 = (**(code **)(*plVar23 + 0x88))(plVar23);
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = param_2 / uVar14;
    }
    param_2 = param_2 - uVar13 * uVar14;
    lVar22 = *(long *)(plVar23[9] + (ulong)uVar8 * 8);
  }
  if (lVar22 == 0) goto LAB_01438dd8;
  lVar16 = FUN_01438e60(plVar23[1]);
  *param_1 = lVar16;
  if (lVar16 != 0) {
    lVar16 = *(long *)(lVar16 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar17;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar18 = "count != 0";
      pcVar19 = "AddReference";
      pcVar20 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar21 = "Reference counter overflows.";
      goto LAB_01438e14;
    }
  }
  lVar16 = FUN_00fee8fc(local_38 + 0x10,plVar23[1]);
  if (lVar16 != 0) {
    piVar2 = (int *)(lVar16 + 0x28);
    do {
      iVar12 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar24 = *param_1;
  plVar15 = *(long **)(lVar24 + 0x48);
  *(undefined8 *)(lVar24 + 0x48) = 0;
  if (plVar15 != (long *)0x0) {
    plVar23 = plVar15 + 5;
    do {
      lVar9 = *plVar23;
      iVar12 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(int *)plVar23 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
      pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar19 = "DecrementReferenceInternal";
      pcVar20 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
      pcVar21 = "Reference counter underflows.";
LAB_01438e14:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar18,pcVar19,pcVar20,0x58,pcVar21);
    }
  }
  *(long *)(lVar24 + 0x48) = lVar16;
  lVar22 = lVar22 + (ulong)param_2 * 0x170;
  lVar16 = *param_1;
  *(undefined1 *)(lVar16 + 0x40) = *(undefined1 *)(lVar22 + 8);
  FUN_00f13ad8(*(undefined8 *)(lVar16 + 0x48),lVar22 + 9);
  *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)(lVar22 + 0x168);
  return;
}


