/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143dc58; name: FUN_0143dc58
 */


void FUN_0143dc58(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_0459ae00;
  param_1[4] = (long)&PTR_LAB_0459ae78;
  param_1[5] = (long)&DAT_0459aec8;
  if ((long *)param_1[0x31] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x31] + 0x20))();
  }
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 0x20))();
  }
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 0x20))();
  }
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 0x20))();
  }
  FUN_0143def4(param_1 + 0x15,param_1[0x1b]);
  lVar14 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar14 != 0) {
    lVar6 = param_1[0x16];
    plVar7 = (long *)param_1[0x17];
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar11 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar14,lVar6 << 3,8);
        goto LAB_0143dcf8;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,lVar6 << 3,8);
  }
LAB_0143dcf8:
  FUN_0143def4(param_1 + 8,param_1[0xe]);
  lVar14 = param_1[8];
  param_1[8] = 0;
  if (lVar14 != 0) {
    lVar6 = param_1[9];
    plVar7 = (long *)param_1[10];
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar11 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar14,lVar6 << 3,8);
        goto LAB_0143dd48;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,lVar6 << 3,8);
  }
LAB_0143dd48:
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


