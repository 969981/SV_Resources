/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01881f54; name: FUN_01881f54
 */


void FUN_01881f54(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  char local_70;
  char local_6c;
  char local_68;
  char local_64;
  
  bVar6 = FUN_00f7e274(param_4);
  if (bVar6 != 0) {
    uVar16 = 0;
    do {
      if (*(int *)(param_1 + uVar16 * 0x10) != 0) {
        if (((uint)uVar16 & 0xff) < (uint)*(byte *)(param_4 + 0x30)) {
          plVar15 = *(long **)(param_4 + uVar16 * 8);
        }
        else {
          plVar15 = (long *)0x0;
        }
        cVar7 = (**(code **)(*param_5 + 0x1a0))(param_5,0);
        cVar8 = (**(code **)(*param_5 + 0x1a0))(param_5,1);
        local_70 = (**(code **)(*param_5 + 0x1a0))(param_5,2);
        local_6c = (**(code **)(*param_5 + 0x1a0))(param_5,5);
        local_68 = (**(code **)(*param_5 + 0x1a0))(param_5,3);
        local_64 = (**(code **)(*param_5 + 0x1a0))(param_5,4);
        uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15);
        plVar14 = *(long **)(param_2 + 400);
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 5;
          do {
            lVar11 = *plVar1;
            cVar9 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar11 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        lVar11 = (**(code **)(*plVar14 + 0x30))(plVar14,uVar10);
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 5;
          do {
            lVar5 = *plVar1;
            iVar4 = (int)lVar5 + -1;
            cVar9 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
          else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (lVar11 < -0x306f578eef79be49) {
          if (lVar11 == -0x3c7fc2629a232dd7) {
            local_70 = local_70 << 1;
            local_6c = local_6c << 1;
            local_68 = local_68 << 1;
            cVar7 = cVar7 << 1;
            cVar8 = cVar8 << 1;
            local_64 = local_64 << 1;
          }
          else if (lVar11 == -0x670e91d055c1d63f) {
            cVar9 = FUN_0297eaf4(param_2,0x98f16e2faa3e29c1,1);
            local_68 = local_68 + cVar9;
          }
          else if (lVar11 == -0x74516627f2ffca8f) {
            cVar9 = FUN_0297eaf4(param_2,0x8bae99d80d003571,1);
            local_6c = local_6c + cVar9;
          }
        }
        else if (lVar11 < 0x4d3149ca727e99ee) {
          if (lVar11 == -0x306f578eef79be49) {
            cVar9 = FUN_0297eaf4(param_2,0xcf90a871108641b7,1);
            cVar8 = cVar8 + cVar9;
          }
          else if (lVar11 == 0x30b2c9c369634099) {
            cVar9 = FUN_0297eaf4(param_2,0x30b2c9c369634099,1);
            cVar7 = cVar7 + cVar9;
          }
        }
        else if (lVar11 == 0x7e64a2d056a47975) {
          cVar9 = FUN_0297eaf4(param_2,0x7e64a2d056a47975,1);
          local_64 = local_64 + cVar9;
        }
        else if (lVar11 == 0x4d3149ca727e99ee) {
          cVar9 = FUN_0297eaf4(param_2,0x4d3149ca727e99ee,1);
          local_70 = local_70 + cVar9;
        }
        lVar11 = *(long *)(param_3 + 0x290);
        uVar10 = (**(code **)(*plVar15 + 0x98))(plVar15);
        puVar12 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar11 + 8) + 0x50),uVar10);
        if (puVar12 == (uint *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar2 = *puVar12;
          if (4 < (int)uVar2) {
            uVar2 = 0;
          }
          uVar13 = (ulong)uVar2;
        }
        cVar9 = *(char *)(*(long *)(param_2 + 0x38) + uVar13 + 0x4d8);
        if (cVar9 != '\0') {
          cVar7 = cVar9 + cVar7;
          cVar8 = cVar9 + cVar8;
          local_70 = cVar9 + local_70;
          local_6c = cVar9 + local_6c;
          local_68 = cVar9 + local_68;
          local_64 = cVar9 + local_64;
        }
        lVar11 = param_1 + uVar16 * 0x10;
        *(char *)(lVar11 + 4) = cVar7;
        *(char *)(lVar11 + 5) = cVar8;
        *(char *)(lVar11 + 6) = local_70;
        *(char *)(lVar11 + 7) = local_6c;
        *(char *)(lVar11 + 8) = local_68;
        *(char *)(lVar11 + 9) = local_64;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != bVar6);
  }
  return;
}


