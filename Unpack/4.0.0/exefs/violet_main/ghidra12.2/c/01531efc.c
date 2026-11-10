/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01531efc; name: FUN_01531efc
 */


void FUN_01531efc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  FUN_01532274(0x3d072b02,param_1,param_2,0,1);
  *param_1 = &DAT_045ac6a8;
  param_1[4] = &PTR_LAB_045ac730;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_01049774(param_1 + 0x40);
  puVar9 = PTR_DAT_047ddca0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x50] = 0;
  param_1[0x40] = puVar9 + 0x10;
  *(undefined4 *)((long)param_1 + 0x287) = 0;
  param_1[0x52] = 0x18b5a49c4b095eea;
  param_1[0x53] = "Play_UI_Message";
  param_1[0x54] = 0xf;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined2 *)((long)param_1 + 0x342) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x101;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0;
  lVar16 = *param_3;
  param_1[0x6c] = lVar16;
  if (lVar16 != 0) {
    lVar16 = *(long *)(lVar16 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
      pcVar11 = "count != 0";
      pcVar13 = "AddReference";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar15 = "Reference counter overflows.";
      goto LAB_0153226c;
    }
  }
  *(undefined4 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  param_1[0xb] = param_1 + 0x40;
  *(undefined8 *)((long)param_1 + 100) = 0x3d072b0200000000;
  lVar16 = FUN_00f124d8(auStack_38,param_1[1],&DAT_03d63538);
  if (lVar16 != 0) {
    piVar2 = (int *)(lVar16 + 0x28);
    do {
      iVar4 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == -1) goto LAB_01532204;
  }
  plVar10 = (long *)param_1[0x69];
  param_1[0x69] = 0;
  if (plVar10 == (long *)0x0) {
LAB_01532084:
    param_1[0x69] = lVar16;
    lVar16 = FUN_00f124d8(auStack_18,param_1[1],&DAT_03d6353c);
    if (lVar16 != 0) {
      piVar2 = (int *)(lVar16 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) goto LAB_01532204;
    }
    plVar10 = (long *)param_1[0x6a];
    param_1[0x6a] = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar8 = *plVar3;
        iVar4 = (int)lVar8 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_0153218c;
    }
    param_1[0x6a] = lVar16;
    local_14 = 0x800;
    lVar16 = FUN_0152bfac(auStack_40,param_1[1],&local_14);
    if (lVar16 != 0) {
      piVar2 = (int *)(lVar16 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == -1) {
LAB_01532204:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar10 = (long *)param_1[0x6b];
    param_1[0x6b] = 0;
    if (plVar10 == (long *)0x0) {
LAB_01532118:
      param_1[0x6b] = lVar16;
      return;
    }
    plVar3 = plVar10 + 5;
    do {
      lVar8 = *plVar3;
      iVar4 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      goto LAB_01532118;
    }
    if ((int)lVar8 != 0) goto LAB_01532118;
  }
  else {
    plVar3 = plVar10 + 5;
    do {
      lVar8 = *plVar3;
      iVar4 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      goto LAB_01532084;
    }
    if ((int)lVar8 != 0) goto LAB_01532084;
  }
LAB_0153218c:
  pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar13 = "DecrementReferenceInternal";
  pcVar14 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar15 = "Reference counter underflows.";
LAB_0153226c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar11,pcVar13,pcVar14,0x58,pcVar15);
}


