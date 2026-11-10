/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa1e80; name: FUN_01fa1e80
 */


float FUN_01fa1e80(long param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  ushort *puVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long *local_60;
  long *local_58;
  
  FUN_00c9e664(&local_60,param_1 + 0xe8);
  if (local_58 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = local_58[9];
  }
  plVar5 = (long *)(lVar10 + 0x110);
  lVar8 = *plVar5;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar8) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01fa1ed0:
    if (*plVar5 == 0) goto code_r0x01fa1ed8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
    do {
      if (*plVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
          while (*plVar5 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar9) {
              *plVar5 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01fa1ee0;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *plVar5 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01fa1ee0:
    bVar9 = false;
    goto LAB_01fa1ee4;
  }
  bVar9 = true;
LAB_01fa1ee4:
  plVar5 = (long *)FUN_00c943e0(*(undefined8 *)(lVar10 + 0x128),*(undefined8 *)(lVar10 + 0x130));
  if ((*(long **)(lVar10 + 0x130) == plVar5) || (*plVar5 == 0)) {
    plVar5 = (long *)FUN_00c943e0(*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x168));
    if (*(long **)(lVar10 + 0x168) == plVar5) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      if (*plVar5 != 0) {
        lVar4 = *plVar5 + -0x20;
      }
    }
  }
  else {
    lVar4 = *plVar5 + -0x20;
  }
  if (!bVar9) {
    *(undefined8 *)(lVar10 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x118));
  }
  if (local_58 != (long *)0x0) {
    plVar5 = local_58 + 5;
    do {
      lVar10 = *plVar5;
      iVar3 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(int *)plVar5 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  if (lVar4 == 0) {
    return 0.0;
  }
  piVar6 = *(int **)(lVar4 + 0x160);
  if (piVar6 == (int *)0x0) {
    return 0.0;
  }
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar1 = *puVar7;
  if (uVar1 < 0x1d) {
    fVar11 = *(float *)(lVar4 + 0x200) * 0.0;
    if (uVar1 < 7) {
      fVar14 = 1.2;
      fVar13 = 0.8;
      goto LAB_01fa1fb4;
    }
  }
  else {
    if ((ulong)puVar7[0xe] == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)((long)piVar6 + (ulong)puVar7[0xe]);
    }
    fVar11 = fVar11 * *(float *)(lVar4 + 0x200);
  }
  if ((ulong)puVar7[3] == 0) {
    fVar13 = 0.8;
  }
  else {
    fVar13 = *(float *)((long)piVar6 + (ulong)puVar7[3]);
  }
  if ((uVar1 < 9) || ((ulong)puVar7[4] == 0)) {
    fVar14 = 1.2;
  }
  else {
    fVar14 = *(float *)((long)piVar6 + (ulong)puVar7[4]);
  }
LAB_01fa1fb4:
  fVar12 = (float)(**(code **)PTR_PTR_047d9248)(0x3f000000);
  return fVar11 / (fVar13 + (fVar14 - fVar13) * fVar12);
code_r0x01fa1ed8:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar9) {
    *plVar5 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01fa1ee0;
  goto LAB_01fa1ed0;
}


