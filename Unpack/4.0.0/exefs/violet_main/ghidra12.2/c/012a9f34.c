/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a9f34; name: FUN_012a9f34
 */


void FUN_012a9f34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long *plVar19;
  undefined8 *puVar20;
  
  FUN_00d1a240(param_1,0x800b8080);
  *param_1 = &DAT_0459b3a0;
  param_1[4] = &PTR_LAB_0459b510;
  param_1[5] = &DAT_0459b638;
  param_1[6] = &PTR_LAB_0459b690;
  puVar1 = param_1 + 0x3a;
  puVar20 = param_1 + 7;
  *puVar20 = &PTR_LAB_0459b6b8;
  param_1[0x24] = &PTR_LAB_0459b6f0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x26] = &PTR_FUN_0459b740;
  param_1[0x27] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = &DAT_cbf29ce484222645;
  param_1[0x31] = &DAT_03c886bc;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar9 = PTR_DAT_047d8e40;
  param_1[0x34] = 0x121d7307bd58c49b;
  param_1[0x35] = puVar9;
  param_1[0x36] = 0x1f;
  param_1[0x37] = 0;
  FUN_015107a4(puVar1);
  param_1[0x52] = 0;
  puVar9 = PTR_DAT_047dd278;
  uVar5 = *(undefined4 *)(PTR_DAT_047dd278 + 0x18);
  param_1[0x42] = *(undefined8 *)(PTR_DAT_047dd278 + 0x10);
  uVar15 = *(undefined8 *)puVar9;
  param_1[0x41] = *(undefined8 *)(puVar9 + 8);
  *(undefined4 *)(param_1 + 0x43) = uVar5;
  param_1[0x40] = uVar15;
  *(undefined1 *)((long)param_1 + 0x21d) = 1;
  FUN_012b4424(puVar1);
  FUN_012b427c(puVar1,PTR_DAT_047d8ae8);
  param_1[0x58] = 0x1fffffffffffffff;
  param_1[0x5f] = 0x1fffffffffffffff;
  plVar19 = (long *)param_1[1];
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = plVar19;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = plVar19;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = &DAT_cbf29ce484222645;
  param_1[100] = &DAT_03c886bc;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  if ((*(char *)(param_1 + 0xb) != -0x7f) || (*(char *)((long)param_1 + 0x59) != -0x7f)) {
    uVar6 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x8181;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],puVar20);
    }
    (**(code **)(param_1[7] + 0x20))(puVar20,uVar6);
    plVar19 = (long *)param_1[1];
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_012aa4cc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar19;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,0x8c0,0x10);
  if (lVar12 != 0) {
    FUN_012aaa94();
    *(undefined4 *)(lVar12 + 0x18) = 0x1008c0;
    *(long **)(lVar12 + 8) = plVar19;
    *(long *)(lVar12 + 0x10) = lVar12;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    lVar11 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar15;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
      pcVar14 = "count != 0";
      pcVar16 = "AddReference";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar18 = "Reference counter overflows.";
      goto LAB_012aa568;
    }
    plVar19 = (long *)param_1[0x2e];
    param_1[0x2e] = 0;
    if (plVar19 != (long *)0x0) {
      lVar11 = plVar19[6];
      psVar2 = (short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar19 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    param_1[0x2e] = lVar12;
    plVar19 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012aa4cc;
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar19;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,0x120,8);
    if (lVar12 != 0) {
      FUN_012aa570();
      *(undefined4 *)(lVar12 + 0x18) = 0x80120;
      *(long **)(lVar12 + 8) = plVar19;
      *(long *)(lVar12 + 0x10) = lVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      piVar3 = (int *)(lVar12 + 0x28);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = iVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar19 = (long *)param_1[0x2f];
      param_1[0x2f] = 0;
      if (plVar19 != (long *)0x0) {
        plVar13 = plVar19 + 5;
        do {
          lVar11 = *plVar13;
          iVar10 = (int)lVar11 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar8) {
            *(int *)plVar13 = iVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
          pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar16 = "DecrementReferenceInternal";
          pcVar17 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar18 = "Reference counter underflows.";
LAB_012aa568:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar14,pcVar16,pcVar17,0x58,pcVar18);
        }
      }
      param_1[0x2f] = lVar12;
      plVar19 = (long *)*param_2;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
      plVar13 = (long *)param_1[0x62];
      param_1[0x62] = plVar19;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      param_1[99] = param_2[1];
      param_1[100] = param_2[2];
      param_1[0x65] = param_2[3];
      plVar19 = (long *)param_2[4];
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
      plVar13 = (long *)param_1[0x66];
      param_1[0x66] = plVar19;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 5);
      param_1[0x30] = *param_3;
      param_1[0x31] = param_3[1];
      param_1[0x32] = param_3[2];
      plVar19 = (long *)param_3[3];
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
      plVar13 = (long *)param_1[0x33];
      param_1[0x33] = plVar19;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0x25) = 1;
      return;
    }
  }
  (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
             ,0x40);
}


