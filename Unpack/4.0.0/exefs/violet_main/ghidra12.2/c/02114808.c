/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02114808; name: FUN_02114808
 */


void FUN_02114808(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  long lVar5;
  short sVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 local_48;
  
  *param_1 = (long)&PTR_FUN_04592468;
  param_1[8] = (long)&PTR_LAB_04592590;
  lVar13 = param_1[0x1e];
  param_1[4] = (long)&PTR_LAB_045924e8;
  param_1[5] = (long)&DAT_04592538;
  lVar5 = lVar13;
  if (param_1[0x1f] != 0) {
    lVar5 = lVar13 + param_1[0x1f] * 0x18;
  }
  for (; lVar13 != lVar5; lVar13 = lVar13 + 0x18) {
    plVar15 = (long *)param_1[1];
    uVar16 = *(undefined8 *)(lVar13 + 0x10);
    uVar7 = *(undefined4 *)(lVar13 + 0xc);
    uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,uVar16,uVar7,8);
    }
    else {
      FUN_00c48fe8(plVar15,uVar16,uVar7,8);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xec8));
  plVar15 = (long *)param_1[0xec7];
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[6];
    psVar3 = (short *)(lVar13 + 0x1a);
    do {
      sVar6 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))();
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (param_1[0x20] != 0) {
    FUN_01792114(param_1 + 0x1a,param_1[0x1e]);
  }
  if (param_1[0x15] != 0) {
    FUN_017921a0(param_1 + 0xf,param_1[0x13]);
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar14 = (undefined8 *)param_1[6];
  if (puVar14 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar14 + 3);
    do {
      sVar6 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48 = *puVar14;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


