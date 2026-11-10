/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c7a1c; name: FUN_029c7a1c
 */


void FUN_029c7a1c(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  char *__s;
  ulong uVar13;
  long *plVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar13 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar15 = *(undefined1 **)PTR_DAT_047d3e30;
    __s = *(char **)(PTR_DAT_047d3e30 + 8);
    sVar8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar14 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  else {
    puVar3 = (uint *)((long)param_2 + uVar13);
    uVar16 = (ulong)*puVar3;
    __s = (char *)((long)puVar3 + uVar16 + 4);
    puVar15 = &DAT_cbf29ce484222645;
    sVar8 = strlen(__s);
    bVar4 = *(byte *)((long)puVar3 + uVar16 + 4);
    if (bVar4 != 0) {
      pbVar12 = (byte *)((long)param_2 + uVar16 + uVar13 + 5);
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar4 != 0);
    }
    plVar14 = (long *)0x0;
  }
  *(undefined1 **)(param_1 + 0x68) = puVar15;
  *(char **)(param_1 + 0x70) = __s;
  *(size_t *)(param_1 + 0x78) = sVar8;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar9 = *(long **)(param_1 + 0x80);
  *(long **)(param_1 + 0x80) = plVar14;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  uVar17 = 0;
  uVar19 = 0;
  if (6 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar19 = 0;
    if (uVar13 != 0) {
      uVar19 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = uVar19;
  uVar19 = 0;
  if (8 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar19 = 0;
    if (uVar13 != 0) {
      uVar19 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar19;
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar13 != 0)) {
    uVar17 = *(undefined4 *)((long)param_2 + uVar13);
  }
  *(undefined4 *)(param_1 + 0x94) = uVar17;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xd) {
    uVar19 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
    uVar19 = 0;
    if (uVar13 != 0) {
      uVar19 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar19;
  fVar18 = 0.0;
  uVar19 = 0;
  if (0xe < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    uVar19 = 0;
    if (uVar13 != 0) {
      uVar19 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar19;
  uVar19 = 0;
  if (0x10 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    uVar19 = 0;
    if (uVar13 != 0) {
      uVar19 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar19;
  fVar20 = 0.0;
  if (0x12 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9];
    fVar20 = 0.0;
    if (uVar13 != 0) {
      fVar20 = *(float *)((long)param_2 + uVar13);
    }
  }
  fVar22 = 0.0;
  fVar21 = *(float *)(param_1 + 0xbc) + 0.001;
  if (*(float *)(param_1 + 0xbc) <= fVar20 + -0.001) {
    fVar21 = fVar20;
  }
  *(float *)(param_1 + 0xb8) = fVar21;
  if (0x14 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
    fVar22 = 0.0;
    if (uVar13 != 0) {
      fVar22 = *(float *)((long)param_2 + uVar13);
    }
  }
  fVar20 = fVar21 + -0.001;
  if (fVar22 + 0.001 <= fVar21) {
    fVar20 = fVar22;
  }
  *(float *)(param_1 + 0xbc) = fVar20;
  fVar20 = 0.0;
  if (0x16 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
    fVar20 = 0.0;
    if (uVar13 != 0) {
      fVar20 = *(float *)((long)param_2 + uVar13);
    }
  }
  fVar22 = *(float *)(param_1 + 0xc4) + -0.001;
  if (fVar20 + 0.001 <= *(float *)(param_1 + 0xc4)) {
    fVar22 = fVar20;
  }
  *(float *)(param_1 + 0xc0) = fVar22;
  if ((0x18 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc], uVar13 != 0)) {
    fVar18 = *(float *)((long)param_2 + uVar13);
  }
  fVar20 = fVar22 + 0.001;
  if (fVar22 <= fVar18 + -0.001) {
    fVar20 = fVar18;
  }
  *(float *)(param_1 + 0xc4) = fVar20;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) {
    bVar6 = false;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    bVar6 = false;
    if (uVar13 != 0) {
      bVar6 = *(char *)((long)param_2 + uVar13) != '\0';
    }
  }
  *(bool *)(param_1 + 200) = bVar6;
  lVar10 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
  if ((lVar10 != 0) && (plVar14 = *(long **)(lVar10 + 0x120), plVar14 != (long *)0x0)) {
    plVar9 = plVar14 + 5;
    do {
      lVar10 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar10 == -1) {
LAB_029c7fc0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if (((*PTR_DAT_047daf58 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047daf58);
    }
    plVar11 = (long *)PTR_DAT_047daf60;
    if (plVar14[0x18] != 0) {
      plVar11 = (long *)(plVar14[0x18] + 0x70);
    }
    lVar10 = *plVar11;
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) goto LAB_029c7fc0;
    }
    plVar11 = *(long **)(param_1 + 0xd0);
    *(long *)(param_1 + 0xd0) = lVar10;
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 5;
      do {
        lVar10 = *plVar2;
        iVar7 = (int)lVar10 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_029c7ee4;
    }
    do {
      lVar10 = *plVar9;
      iVar7 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x029c7f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x10))(plVar14);
      return;
    }
    if ((int)lVar10 == 0) {
LAB_029c7ee4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


