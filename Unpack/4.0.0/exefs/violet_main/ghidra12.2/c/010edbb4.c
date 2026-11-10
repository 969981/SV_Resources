/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010edbb4; name: FUN_010edbb4
 */


void FUN_010edbb4(long *param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  undefined8 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  short sVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  
  lVar10 = *(long *)(param_2 + 0x78);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar10 + 0x1a);
    sVar18 = *(short *)(lVar10 + 0x1a);
LAB_010ee154:
    sVar4 = *psVar2;
    if (sVar4 == sVar18) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_010ee178;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_010ee178:
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x010ee180;
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + -0x28);
      FUN_0125ccec(param_1,plVar8,param_2 + 0x10);
      lVar10 = *(long *)(lVar10 + 8);
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_010edbe0;
    }
  }
LAB_010edbdc:
  *param_1 = 0;
LAB_010edbe0:
  if (*param_1 == 0) {
    lVar10 = FUN_010f06f4(*(undefined8 *)(param_2 + 0x60));
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
      if (iVar7 == -1) goto LAB_010ede94;
    }
    plVar8 = (long *)*param_1;
    *param_1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar20 = plVar8 + 5;
      do {
        lVar9 = *plVar20;
        iVar7 = (int)lVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *(int *)plVar20 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_010ee2c4;
    }
    *param_1 = lVar10;
    lVar10 = FUN_010f06f4(*(undefined8 *)(param_2 + 0x60));
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
      if (iVar7 == -1) {
LAB_010ede94:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar8 = (long *)*param_1;
    *param_1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar20 = plVar8 + 5;
      do {
        lVar9 = *plVar20;
        iVar7 = (int)lVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *(int *)plVar20 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
LAB_010ee2c4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *param_1 = lVar10;
    uVar11 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = 0;
    lVar9 = *(long *)(lVar10 + 0x30);
    *(undefined8 *)(lVar10 + 0x30) = uVar11;
    if (lVar9 != 0) {
      FUN_00e51108(lVar10 + 0x38);
    }
    uVar11 = *(undefined8 *)(param_2 + 0x90);
    uVar15 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(lVar10 + 0x48) = uVar15;
    *(undefined8 *)(lVar10 + 0x38) = uVar11;
    lVar10 = *param_1;
    if (*(long *)(lVar10 + 0xa8) != 0) {
      plVar8 = *(long **)(lVar10 + 0x80);
      if (plVar8 != (long *)0x0) {
        plVar20 = (long *)*plVar8;
        FUN_00e50378(plVar8 + 3);
        plVar21 = *(long **)(lVar10 + 0x88);
        uVar12 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar12 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,plVar8,0x80,8);
        }
        else {
          FUN_00c48fe8(plVar21,plVar8,0x80,8);
        }
        while (plVar20 != (long *)0x0) {
          plVar21 = (long *)*plVar20;
          FUN_00e50378(plVar20 + 3);
          plVar8 = *(long **)(lVar10 + 0x88);
          uVar12 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar12 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,plVar20,0x80,8);
            plVar20 = plVar21;
          }
          else {
            FUN_00c48fe8(plVar8,plVar20,0x80,8);
            plVar20 = plVar21;
          }
        }
      }
      uVar12 = *(ulong *)(lVar10 + 0x58);
      *(undefined8 *)(lVar10 + 0x80) = 0;
      if (uVar12 != 0) {
        uVar17 = uVar12 & 3;
        if (uVar12 - 1 < 3) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            *(undefined8 *)(*(long *)(lVar10 + 0x50) + uVar13 * 8) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x50) + uVar13 * 8 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x50) + uVar13 * 8 + 0x10) = 0;
            lVar9 = uVar13 * 8;
            uVar13 = uVar13 + 4;
            *(undefined8 *)(*(long *)(lVar10 + 0x50) + lVar9 + 0x18) = 0;
          } while ((uVar12 & 0xfffffffffffffffc) != uVar13);
        }
        if (uVar17 != 0) {
          lVar9 = uVar13 << 3;
          do {
            *(undefined8 *)(*(long *)(lVar10 + 0x50) + lVar9) = 0;
            uVar17 = uVar17 - 1;
            lVar9 = lVar9 + 8;
          } while (uVar17 != 0);
        }
      }
      *(undefined8 *)(lVar10 + 0xa8) = 0;
    }
    uVar11 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    lVar9 = *(long *)(lVar10 + 0x50);
    *(undefined8 *)(lVar10 + 0x50) = uVar11;
    if (lVar9 != 0) {
      plVar8 = *(long **)(lVar10 + 0x60);
      lVar16 = *(long *)(lVar10 + 0x58) << 3;
      uVar12 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar16,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar9,lVar16,8);
      }
    }
    *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    uVar11 = *(undefined8 *)(param_2 + 0xc0);
    uVar15 = *(undefined8 *)(param_2 + 200);
    uVar3 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(lVar10 + 0x78) = uVar3;
    *(undefined8 *)(lVar10 + 0x60) = uVar11;
    *(undefined8 *)(lVar10 + 0x68) = uVar15;
    uVar11 = *(undefined8 *)(param_2 + 0xe8);
    uVar15 = *(undefined8 *)(param_2 + 0xf0);
    uVar3 = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(lVar10 + 0xa0) = uVar3;
    *(undefined8 *)(lVar10 + 0x88) = uVar11;
    *(undefined8 *)(lVar10 + 0x90) = uVar15;
    lVar16 = *(long *)(param_2 + 0x108);
    *(long *)(lVar10 + 0xa8) = lVar16;
    *(undefined4 *)(lVar10 + 0xb0) = *(undefined4 *)(param_2 + 0x110);
    lVar9 = *(long *)(param_2 + 0xe0);
    *(long *)(lVar10 + 0x80) = lVar9;
    if (lVar16 != 0) {
      uVar17 = *(ulong *)(lVar10 + 0x58);
      uVar12 = *(ulong *)(lVar9 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar12 = uVar17 - 1 & uVar12;
      }
      else if (uVar17 <= uVar12) {
        uVar13 = 0;
        if (uVar17 != 0) {
          uVar13 = uVar12 / uVar17;
        }
        uVar12 = uVar12 - uVar13 * uVar17;
      }
      *(long **)(*(long *)(lVar10 + 0x50) + uVar12 * 8) = (long *)(lVar10 + 0x80);
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined8 *)(param_2 + 0x108) = 0;
    }
    lVar10 = *param_1;
    plVar8 = (long *)(lVar10 + 0xb8);
    if (*plVar8 != 0) {
      FUN_010f0c2c(plVar8);
      lVar9 = *(long *)(lVar10 + 0xb8);
      plVar20 = *(long **)(lVar10 + 0xd0);
      lVar16 = *(long *)(lVar10 + 200) - lVar9;
      uVar12 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar9,lVar16,8);
      }
      else {
        FUN_00c48fe8(plVar20,lVar9,lVar16,8);
      }
      *(undefined8 *)(lVar10 + 0xc0) = 0;
      *(undefined8 *)(lVar10 + 200) = 0;
      *plVar8 = 0;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x130);
    uVar15 = *(undefined8 *)(param_2 + 0x138);
    uVar3 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(lVar10 + 0xe0) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(lVar10 + 0xe8) = uVar3;
    *(undefined8 *)(lVar10 + 0xd0) = uVar11;
    *(undefined8 *)(lVar10 + 0xd8) = uVar15;
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(lVar10 + 0xc0) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(lVar10 + 200) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    lVar10 = *param_1;
    plVar8 = (long *)(lVar10 + 0xf0);
    if (*plVar8 != 0) {
      FUN_010f0c94(plVar8);
      lVar9 = *(long *)(lVar10 + 0xf0);
      plVar20 = *(long **)(lVar10 + 0x108);
      lVar16 = *(long *)(lVar10 + 0x100) - lVar9;
      uVar12 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar9,lVar16,8);
      }
      else {
        FUN_00c48fe8(plVar20,lVar9,lVar16,8);
      }
      *(undefined8 *)(lVar10 + 0xf8) = 0;
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *plVar8 = 0;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x168);
    uVar15 = *(undefined8 *)(param_2 + 0x170);
    uVar3 = *(undefined8 *)(param_2 + 0x180);
    *(undefined8 *)(lVar10 + 0x118) = *(undefined8 *)(param_2 + 0x178);
    *(undefined8 *)(lVar10 + 0x120) = uVar3;
    *(undefined8 *)(lVar10 + 0x108) = uVar11;
    *(undefined8 *)(lVar10 + 0x110) = uVar15;
    *(undefined8 *)(lVar10 + 0xf0) = *(undefined8 *)(param_2 + 0x150);
    *(undefined8 *)(lVar10 + 0xf8) = *(undefined8 *)(param_2 + 0x158);
    *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_2 + 0x150) = 0;
    *(undefined8 *)(param_2 + 0x158) = 0;
    *(undefined8 *)(param_2 + 0x160) = 0;
    *(undefined8 *)(*param_1 + 0x160) = *(undefined8 *)(param_2 + 0x1c8);
    lVar9 = *param_1;
    lVar10 = *(long *)(lVar9 + 0x128);
    if (lVar10 != 0) {
      lVar16 = *(long *)(lVar9 + 0x130);
      if (*(long *)(lVar9 + 0x130) == lVar10) {
        lVar16 = lVar10;
      }
      else {
        do {
          pcVar14 = *(code **)(lVar16 + -0x78);
          lVar19 = lVar16 + -0x80;
          if (pcVar14 != (code *)0x0) {
            *(undefined8 *)(lVar16 + -0x70) = 0;
            *(undefined8 *)(lVar16 + -0x68) = 0;
            *(undefined8 *)(lVar16 + -0x80) = 0;
            *(undefined8 *)(lVar16 + -0x78) = 0;
            (*pcVar14)(lVar16 + -0x60);
          }
          lVar16 = lVar19;
        } while (lVar10 != lVar19);
        lVar16 = *(long *)(lVar9 + 0x128);
      }
      plVar8 = *(long **)(lVar9 + 0x140);
      *(long *)(lVar9 + 0x130) = lVar10;
      lVar10 = *(long *)(lVar9 + 0x138) - lVar16;
      uVar12 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar16,lVar10,0x10);
      }
      else {
        FUN_00c48fe8(plVar8,lVar16,lVar10,0x10);
      }
      *(undefined8 *)(lVar9 + 0x130) = 0;
      *(undefined8 *)(lVar9 + 0x138) = 0;
      *(long *)(lVar9 + 0x128) = 0;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x1a0);
    uVar15 = *(undefined8 *)(param_2 + 0x1a8);
    uVar3 = *(undefined8 *)(param_2 + 0x1b8);
    *(undefined8 *)(lVar9 + 0x150) = *(undefined8 *)(param_2 + 0x1b0);
    *(undefined8 *)(lVar9 + 0x158) = uVar3;
    *(undefined8 *)(lVar9 + 0x140) = uVar11;
    *(undefined8 *)(lVar9 + 0x148) = uVar15;
    *(undefined8 *)(lVar9 + 0x128) = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(lVar9 + 0x130) = *(undefined8 *)(param_2 + 400);
    *(undefined8 *)(lVar9 + 0x138) = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(param_2 + 0x188) = 0;
    *(undefined8 *)(param_2 + 400) = 0;
    *(undefined8 *)(param_2 + 0x198) = 0;
  }
  return;
code_r0x010ee180:
  sVar18 = sVar4;
  if (sVar4 == 0) goto LAB_010edbdc;
  goto LAB_010ee154;
}


