/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01363c14; name: FUN_01363c14
 */


void FUN_01363c14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_68;
  
  lVar20 = *param_1;
  lVar14 = *(long *)(lVar20 + 0x48);
  plVar15 = (long *)*param_4;
  lVar11 = lVar14 - *(long *)(lVar20 + 0x40) >> 3;
  lVar12 = *plVar15;
  if ((ulong)(plVar15[2] - lVar12 >> 3) < (ulong)(lVar11 * -0x5555555555555555)) {
    plVar19 = plVar15 + 3;
    lVar14 = plVar15[1];
    local_80 = (long *)0x0;
    local_78 = plVar19;
    local_98 = (long *)(**(code **)(*(long *)plVar15[3] + 0x10))
                                 ((long *)plVar15[3],lVar11 * 0x5555555555555558,8);
    if (local_98 == (long *)0x0) {
      (**(code **)(*(long *)*plVar19 + 0xe8))();
    }
    plVar17 = local_98 + (lVar14 - lVar12 >> 3);
    plVar16 = local_98 + lVar11 * 0xaaaaaaaaaaaaaab;
    plVar13 = (long *)*plVar15;
    plVar21 = (long *)plVar15[1];
    if (plVar21 == plVar13) {
      plVar18 = plVar17;
      local_88 = plVar13;
    }
    else {
      plVar18 = plVar17 + -1;
      local_90 = plVar17;
      local_88 = plVar17;
      local_80 = plVar16;
      FUN_01366a9c(plVar19,plVar18,plVar21 + -1);
      if (plVar21 + -1 != plVar13) {
        do {
          plVar18 = plVar18 + -1;
          FUN_01366a9c(plVar19,plVar18,plVar21 + -2);
          plVar21 = plVar21 + -1;
        } while (plVar13 + 1 != plVar21);
      }
      plVar13 = (long *)*plVar15;
      local_88 = (long *)plVar15[1];
    }
    *plVar15 = (long)plVar18;
    plVar15[1] = (long)plVar17;
    local_80 = (long *)plVar15[2];
    plVar15[2] = (long)plVar16;
    local_98 = plVar13;
    local_90 = plVar13;
    FUN_0136442c(&local_98);
    lVar20 = *param_1;
    lVar14 = *(long *)(lVar20 + 0x48);
  }
  puVar8 = PTR_PTR_047d4508;
  lVar11 = *(long *)(lVar20 + 0x40);
  if (lVar11 != lVar14) {
    do {
      local_68 = (long *)FUN_0136418c(&local_98,param_1[1]);
      if (local_68 == (long *)0x0) {
        plVar19 = (long *)0x0;
      }
      else {
        lVar12 = local_68[6];
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar9;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        plVar19 = local_68;
      }
      FUN_011a6b30(&local_98,lVar11);
      puVar2 = (undefined8 *)puVar8;
      if (*(long *)(lVar11 + 8) != 0) {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 8) + 0x38);
      }
      puVar3 = (undefined8 *)puVar8;
      if (*(long *)(lVar11 + 0x10) != 0) {
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x10) + 0x38);
      }
      FUN_01364af4(plVar19,&local_98,param_1[1],*puVar2,*puVar3,(int)param_1[2],0);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      lVar12 = plVar15[1];
      if (lVar12 == plVar15[2]) {
        FUN_01366944(plVar15,&local_68);
      }
      else {
        FUN_013642b4(plVar15 + 3,lVar12,&local_68);
        plVar15[1] = lVar12 + 8;
      }
      if (plVar19 != (long *)0x0) {
        lVar12 = plVar19[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar19 + 0x50))(plVar19);
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != lVar14);
    lVar20 = *param_1;
  }
  plVar19 = plVar15 + 7;
  if (plVar19 != (long *)(lVar20 + 0x78)) {
    if (plVar15[0xe] == *(long *)(lVar20 + 0xb0)) {
      lVar14 = plVar15[8];
    }
    else {
      FUN_01366b80(plVar19);
      lVar14 = *plVar19;
      *plVar19 = 0;
      if (lVar14 != 0) {
        lVar11 = plVar15[8];
        plVar17 = (long *)plVar15[9];
        uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,lVar11 << 3,8);
        }
        else {
          FUN_00c48fe8(plVar17,lVar14,lVar11 << 3,8);
        }
      }
      lVar14 = 0;
      plVar15[8] = 0;
    }
    lVar11 = *(long *)(lVar20 + 0x88);
    lVar12 = *(long *)(lVar20 + 0x90);
    lVar5 = *(long *)(lVar20 + 0xa0);
    plVar15[0xb] = *(long *)(lVar20 + 0x98);
    plVar15[0xc] = lVar5;
    plVar15[9] = lVar11;
    plVar15[10] = lVar12;
    lVar11 = *(long *)(lVar20 + 0xb0);
    lVar12 = *(long *)(lVar20 + 0xb8);
    lVar5 = *(long *)(lVar20 + 200);
    plVar15[0x10] = *(long *)(lVar20 + 0xc0);
    plVar15[0x11] = lVar5;
    plVar15[0xe] = lVar11;
    plVar15[0xf] = lVar12;
    *(undefined4 *)(plVar15 + 0x13) = *(undefined4 *)(lVar20 + 0xd8);
    plVar17 = *(long **)(lVar20 + 0xa8);
    if (lVar14 != 0) {
      *(undefined8 *)*plVar19 = 0;
      if (((lVar14 != 1) && (*(undefined8 *)(*plVar19 + 8) = 0, lVar14 != 2)) &&
         (*(undefined8 *)(*plVar19 + 0x10) = 0, lVar14 != 3)) {
        lVar11 = 3;
        do {
          *(undefined8 *)(*plVar19 + lVar11 * 8) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar14 != lVar11);
      }
      plVar16 = (long *)plVar15[0xd];
      plVar15[0x12] = 0;
      plVar15[0xd] = 0;
      while (plVar16 != (long *)0x0) {
        if (plVar17 == (long *)0x0) {
          do {
            plVar19 = (long *)*plVar16;
            if ((long *)plVar16[2] != (long *)0x0) {
              (**(code **)(*(long *)plVar16[2] + 0x20))();
            }
            plVar17 = (long *)plVar15[0xe];
            uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
            if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar17 + 0x18))(plVar17,plVar16,0x20,8);
            }
            else {
              FUN_00c48fe8(plVar17,plVar16,0x20,8);
            }
            plVar16 = plVar19;
          } while (plVar19 != (long *)0x0);
          return;
        }
        local_98 = plVar16 + 2;
        local_90 = plVar16 + 3;
        FUN_013668d4(&local_98,plVar17 + 2);
        lVar14 = *plVar16;
        FUN_013663e4(plVar19,plVar16);
        plVar17 = (long *)*plVar17;
        plVar16 = (long *)lVar14;
      }
    }
    for (; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
      FUN_01364ac0(plVar19,plVar17 + 2);
    }
  }
  return;
}


