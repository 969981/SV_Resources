/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c9fbf4; name: FUN_00c9fbf4
 */


void FUN_00c9fbf4(undefined8 param_1,long param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long *local_78;
  long *plStack_70;
  long *local_68;
  
  lVar9 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_2 + 0x58) + 0x30));
  if ((lVar9 != 0) && (plVar13 = *(long **)(lVar9 + 0x120), plVar13 != (long *)0x0)) {
    plVar1 = plVar13 + 5;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar9 = *(long *)(DAT_0485a0d8 + 0x38);
    if (lVar9 != 0) {
      lVar15 = *(long *)(param_2 + 0x2a0);
      lVar11 = lVar15 + (long)param_3 * 0x550;
      pcVar3 = *(char **)(lVar11 + 0xb0);
      uVar4 = *(undefined8 *)(lVar11 + 0xb8);
      plVar14 = *(long **)(lVar11 + 0xc0);
      plVar5 = *(long **)(lVar11 + 200);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      local_90 = CONCAT71(local_90._1_7_,1);
      local_88 = pcVar3;
      local_80 = uVar4;
      local_78 = plVar14;
      plStack_70 = plVar5;
      FUN_00c5ecb4(&local_68,lVar9,&local_90);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (local_68 != (long *)0x0) {
        local_90 = 0x444e7b0e8e77459b;
        local_88 = "UVScaleOffset";
        lVar11 = (long)param_3;
        local_80 = 0xd;
        local_78 = (long *)0x0;
        lVar9 = lVar15 + lVar11 * 0x550;
        if (0 < *(int *)(lVar9 + 0x280)) {
          lVar12 = lVar15 + lVar11 * 0x550;
          local_90 = *(undefined8 *)(lVar12 + 0x180);
          local_88 = *(char **)(lVar12 + 0x188);
          local_80 = *(undefined8 *)(lVar12 + 400);
          plVar14 = *(long **)(lVar12 + 0x198);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
          local_78 = plVar14;
        }
        piVar2 = (int *)(lVar9 + 0x280);
        uVar10 = FUN_029b9184(local_68,auStack_a0,&local_90);
        if ((uVar10 & 1) != 0) {
          local_98 = param_1;
          FUN_01925908(local_68,&local_90,auStack_a0);
        }
        if (1 < *piVar2) {
          puVar16 = (undefined8 *)(lVar15 + lVar11 * 0x550 + 0x1b8);
          lVar9 = 1;
          do {
            local_90 = puVar16[-3];
            local_88 = (char *)puVar16[-2];
            local_80 = puVar16[-1];
            plVar14 = (long *)*puVar16;
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
            }
            if (local_78 != (long *)0x0) {
              lVar11 = *local_78;
              local_78 = plVar14;
              (**(code **)(lVar11 + 0x20))();
              plVar14 = local_78;
            }
            local_78 = plVar14;
            uVar10 = FUN_029b9184(local_68,auStack_a0,&local_90);
            if ((uVar10 & 1) != 0) {
              local_98 = param_1;
              FUN_01925908(local_68,&local_90,auStack_a0);
            }
            lVar9 = lVar9 + 1;
            puVar16 = puVar16 + 4;
          } while (lVar9 < *piVar2);
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        plVar14 = local_68 + 5;
        do {
          lVar9 = *plVar14;
          iVar8 = (int)lVar9 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *(int *)plVar14 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
        else if ((int)lVar9 == 0) goto LAB_00c9fcfc;
      }
    }
    do {
      lVar9 = *plVar1;
      iVar8 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar9 == 0) {
LAB_00c9fcfc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


