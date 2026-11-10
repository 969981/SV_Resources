/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01433a54; name: FUN_01433a54
 */


void FUN_01433a54(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 local_38;
  
  *param_1 = (long)&PTR_FUN_04546798;
  param_1[4] = (long)&PTR_LAB_04546810;
  param_1[5] = (long)&PTR_FUN_04546860;
  plVar9 = (long *)param_1[0x2bd];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01433e30;
  }
  plVar9 = (long *)param_1[700];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01433e30;
  }
  plVar9 = (long *)param_1[699];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01433e30;
  }
  plVar9 = (long *)param_1[0x2ba];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_01433e30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar12 = param_1[0x293];
  if (lVar12 != 0) {
    lVar13 = param_1[0x295];
    param_1[0x294] = lVar12;
    plVar9 = (long *)param_1[0x296];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if ((uVar10 & 1) != 0) {
      lVar11 = FUN_00c4e600();
      if (0 < *(int *)(lVar11 + 0x12c8)) {
        FUN_00c48fe8(plVar9,lVar12,lVar13 - lVar12,4);
        goto LAB_01433b7c;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar12,lVar13 - lVar12,4);
  }
LAB_01433b7c:
  FUN_013e6dc0(param_1 + 0x180);
  FUN_01433e94(param_1 + 0x172);
  FUN_00db239c(param_1 + 0x169);
  FUN_00db239c(param_1 + 0x161);
  FUN_00db239c(param_1 + 0x155);
  FUN_00db239c(param_1 + 0x14d);
  FUN_00db239c(param_1 + 0x141);
  FUN_00db239c(param_1 + 0x139);
  FUN_00db239c(param_1 + 0x12d);
  FUN_00db239c(param_1 + 0x125);
  FUN_00db239c(param_1 + 0x119);
  FUN_00db239c(param_1 + 0x111);
  FUN_00db239c(param_1 + 0x105);
  FUN_00db239c(param_1 + 0xfd);
  FUN_00db239c(param_1 + 0xf1);
  FUN_00db239c(param_1 + 0xe9);
  FUN_00db239c(param_1 + 0xdd);
  FUN_00db239c(param_1 + 0xd5);
  FUN_00db239c(param_1 + 0xc9);
  FUN_00db239c(param_1 + 0xc1);
  FUN_00db239c(param_1 + 0xb5);
  FUN_00db239c(param_1 + 0xad);
  FUN_00db239c(param_1 + 0xa2);
  FUN_00db239c(param_1 + 0x9a);
  FUN_00db239c(param_1 + 0x92);
  FUN_00db239c(param_1 + 0x8a);
  FUN_00db239c(param_1 + 0x82);
  FUN_00db239c(param_1 + 0x7a);
  FUN_00db239c(param_1 + 0x72);
  FUN_00db239c(param_1 + 0x6a);
  FUN_00db239c(param_1 + 0x62);
  FUN_00db239c(param_1 + 0x5a);
  FUN_00db239c(param_1 + 0x52);
  FUN_00db239c(param_1 + 0x4a);
  FUN_00db239c(param_1 + 0x42);
  FUN_00db239c(param_1 + 0x3a);
  FUN_00db239c(param_1 + 0x32);
  FUN_00db239c(param_1 + 0x2a);
  FUN_00db239c(param_1 + 0x22);
  FUN_00db239c(param_1 + 0x1a);
  FUN_00db239c(param_1 + 0x12);
  FUN_00db239c(param_1 + 10);
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar14 = (undefined8 *)param_1[6];
  if (puVar14 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar14 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = *puVar14;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


