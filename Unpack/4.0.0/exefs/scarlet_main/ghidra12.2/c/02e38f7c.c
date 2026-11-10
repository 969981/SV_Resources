/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e38f7c; name: FUN_02e38f7c
 */


void FUN_02e38f7c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,uint param_7)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  short sVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  byte local_6c;
  undefined1 auStack_68 [8];
  
  uVar21 = (ulong)param_7;
  if (*(uint *)(*(long *)(param_6 + 0x38) + 0x30) < 2) {
    if ((param_7 & 0xff) < 5) {
      plVar22 = *(long **)(param_2 + (ulong)(byte)param_7 * 8 + 0xa0);
      if (plVar22 != (long *)0x0) {
        plVar17 = plVar22 + 5;
        do {
          lVar5 = *plVar17;
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *(int *)plVar17 = (int)lVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar5 == -1) goto LAB_02e39480;
        do {
          lVar5 = *plVar17;
          iVar19 = (int)lVar5 + -1;
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *(int *)plVar17 = iVar19;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar19 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
        else if ((int)lVar5 == 0) goto LAB_02e394a8;
      }
    }
    else {
      plVar22 = (long *)0x0;
    }
    plVar17 = (long *)FUN_010a0d38(auStack_68,param_5);
    if (plVar17 == (long *)0x0) {
      FUN_0143adbc(*(undefined8 *)(param_3 + 0x30),0,uVar21,param_1 + 0x84);
      FUN_014bb53c(0,plVar22,param_6,param_3);
      FUN_014c1988(0,plVar22);
      FUN_02994ec8(0,plVar22);
      FUN_018e83f0(param_1,param_7 & 0xff,0);
    }
    else {
      plVar1 = plVar17 + 5;
      do {
        lVar5 = *plVar1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar5 == -1) {
LAB_02e39480:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_0143adbc(*(undefined8 *)(param_3 + 0x30),plVar17,uVar21,param_1 + 0x84);
      FUN_014bb53c(plVar17,plVar22,param_6,param_3);
      FUN_014c1988(plVar17,plVar22);
      FUN_02994ec8(plVar17,plVar22);
      FUN_018e83f0(param_1,param_7 & 0xff,plVar17);
      do {
        lVar5 = *plVar1;
        iVar19 = (int)lVar5 + -1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar19;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar19 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
      else if ((int)lVar5 == 0) {
LAB_02e394a8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if ((*(int *)(*(long *)(param_6 + 0x38) + 0x30) == 0) &&
     (*(int *)(*(long *)(param_1 + 0x38) + 0x88) != 0)) {
    FUN_01a2a148(param_6,param_3,param_2,param_1);
  }
  if (*(int *)(param_2 + 0x30) != 4) {
    FUN_015b53bc(param_1,param_3,param_4);
  }
  if (*(uint *)(*(long *)(param_6 + 0x38) + 0x30) < 2) {
    lVar5 = 0;
    if ((param_7 & 0xff) < 5) {
      lVar5 = *(long *)(param_4 + 0x30) + (uVar21 & 0xff) * 0x38 + 0x28;
    }
    uVar21 = (ulong)*(byte *)(lVar5 + 0x30);
    if (uVar21 != 0) {
      uVar23 = 0;
LAB_02e39198:
      uVar18 = 0;
      do {
        for (plVar22 = *(long **)(*(long *)(*(long *)(*(long *)(param_3 + 0x290) + 8) + 0x50) + 0x38
                                 ); plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
          if ((*(uint *)((long)plVar22 + 0x14) == (param_7 & 0xff)) &&
             ((uint)*(byte *)(plVar22 + 3) == ((uint)uVar23 & 0xff))) {
            iVar19 = *(int *)(plVar22 + 2);
            goto LAB_02e391dc;
          }
        }
        iVar19 = 0;
LAB_02e391dc:
        plVar22 = *(long **)(lVar5 + uVar18 * 8);
        iVar15 = (**(code **)(*plVar22 + 0x98))(plVar22);
        if (iVar15 == iVar19) {
          lVar2 = param_1 + uVar23 * 0x10;
          local_6c = *(byte *)(lVar2 + 0x9e);
          uVar14 = *(ushort *)(lVar2 + 0x9a);
          uVar3 = *(undefined1 *)(lVar2 + 0x9f);
          uVar7 = (**(code **)(*plVar22 + 0x440))(plVar22);
          uVar8 = (**(code **)(*plVar22 + 0x560))(plVar22,0);
          uVar9 = (**(code **)(*plVar22 + 0x560))(plVar22,2);
          uVar10 = (**(code **)(*plVar22 + 0x560))(plVar22,1);
          uVar11 = (**(code **)(*plVar22 + 0x560))(plVar22,3);
          uVar12 = (**(code **)(*plVar22 + 0x560))(plVar22,4);
          uVar18 = (**(code **)(*plVar22 + 0x88))(plVar22,0x2ae);
          if ((uVar18 & 1) != 0) {
            local_6c = (**(code **)(*plVar22 + 0x520))(plVar22,9);
            local_6c = local_6c & 1;
          }
          cVar6 = (**(code **)(*plVar22 + 0x708))(plVar22);
          if (cVar6 == '\0') goto LAB_02e393a0;
          uVar20 = 0;
          goto LAB_02e39334;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar21);
      goto LAB_02e393f0;
    }
  }
LAB_02e393fc:
  uVar21 = FUN_0154b6dc(*(undefined4 *)(param_4 + 0x36c));
  if (((uVar21 & 1) != 0) && (*(int *)(*(long *)(param_6 + 0x38) + 0x30) == 3)) {
    FUN_02e35c58(param_1 + 0x124,param_6,param_4);
  }
  return;
  while( true ) {
    uVar20 = uVar20 + 1;
    uVar16 = (**(code **)(*plVar22 + 0x708))(plVar22);
    if ((uVar16 & 0xff) <= uVar20) break;
LAB_02e39334:
    sVar13 = (**(code **)(*plVar22 + 0x730))(plVar22,uVar20);
    if (sVar13 == 0x379) {
      uVar14 = (**(code **)(*plVar22 + 0x768))(plVar22,uVar20);
      uVar14 = uVar14 & 0xff;
      break;
    }
  }
LAB_02e393a0:
  *(undefined2 *)(lVar2 + 0x90) = uVar7;
  *(undefined2 *)(lVar2 + 0x92) = uVar8;
  *(undefined2 *)(lVar2 + 0x94) = uVar9;
  *(undefined2 *)(lVar2 + 0x96) = uVar10;
  *(undefined2 *)(lVar2 + 0x98) = uVar11;
  *(ushort *)(lVar2 + 0x9a) = uVar14;
  *(undefined2 *)(lVar2 + 0x9c) = uVar12;
  *(byte *)(lVar2 + 0x9e) = local_6c;
  *(undefined1 *)(lVar2 + 0x9f) = uVar3;
LAB_02e393f0:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar21) goto LAB_02e393fc;
  goto LAB_02e39198;
}


