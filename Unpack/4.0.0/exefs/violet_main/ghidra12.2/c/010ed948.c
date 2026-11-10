/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ed948; name: FUN_010ed948
 */


void FUN_010ed948(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_28;
  
  plVar9 = *(long **)(param_2 + 0xb0);
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
  if (puVar7 == (undefined8 *)0x0) {
    lVar8 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *param_1 = (long)puVar7;
    param_1[1] = (long)plVar9;
    param_1[2] = 0x20;
    param_1[3] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar8 = *param_1;
  }
  FUN_010ee314(&local_28,**(undefined8 **)(param_2 + 0x110));
  plVar9 = *(long **)(lVar8 + 8);
  *(undefined8 *)(lVar8 + 8) = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar5 = *plVar10;
      iVar6 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_010edacc;
  }
  *(undefined8 *)(lVar8 + 8) = local_28;
  FUN_010edbb4(&local_28,**(undefined8 **)(param_2 + 0x130));
  lVar8 = *param_1;
  plVar9 = *(long **)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 0x10) = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar5 = *plVar10;
      iVar6 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_010edacc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar8 + 0x10) = local_28;
  plVar10 = (long *)*param_1;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar8 = *(long *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *plVar10 = lVar8;
  *(undefined8 *)(*param_1 + 0x18) = *(undefined8 *)(param_2 + 0x100);
  return;
}


