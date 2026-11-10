/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc662c; name: FUN_01dc662c
 */


void FUN_01dc662c(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,long *param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  void *__src;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  uint local_68;
  uint uStack_64;
  
  if ((((0x20 < param_2) || (0x20 < param_4)) ||
      (6 < param_3 % 6 + param_6 || 5 < param_3 / 6 + param_7)) ||
     (6 < param_5 % 6 + param_6 || 5 < param_5 / 6 + param_7)) {
    return;
  }
  pvVar7 = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x10))
                             (*(long **)(param_1 + 8),(ulong)param_6 * (ulong)param_7 * 0x158,8);
  if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("buf","MovePokemon",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/game_data/savedata_accessor/box_pokemon_savedata_accessor.cpp"
               ,0x1e8);
  }
  FUN_013e3588(*(undefined8 *)(*param_8 + 0x70));
  if ((param_7 == 0) || (param_6 == 0)) {
LAB_01dc69d4:
    plVar10 = *(long **)(param_1 + 8);
    uVar13 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar13 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01dc6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,pvVar7,0x158,8);
      return;
    }
    FUN_00c48fe8(plVar10,pvVar7,0x158,8);
    return;
  }
  uVar9 = 0;
  pvVar12 = pvVar7;
  do {
    uVar13 = 0;
    do {
      uVar2 = param_3 + uVar9 * 6 + (int)uVar13;
      __src = (void *)(*(long *)(param_1 + 0x9d0) + (ulong)param_2 * 0x2850 + (ulong)uVar2 * 0x158);
      memcpy(pvVar12,__src,0x158);
      lVar11 = *(long *)(*param_8 + 0x70);
      plVar10 = (long *)(lVar11 + 0x20);
      lVar8 = nn::os::GetCurrentThread();
      while (*plVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_01dc67e4;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x28));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x28));
            while (*plVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01dc67e4;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01dc67e4:
      FUN_00f32a60(lVar11,__src,(long)__src + 0x148);
      *(undefined8 *)(lVar11 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x28));
      local_68 = param_2;
      uStack_64 = uVar2;
      FUN_020eae20(param_1 + 0x40,uVar9 * param_6 + (int)uVar13,&local_68);
      uVar2 = uVar2 + param_2 * 0x1e;
      if (0x3dd < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_020eaaa0();
      }
      lVar8 = param_1 + ((ulong)(uVar2 >> 3) & 0x1ffffff8);
      *(ulong *)(lVar8 + 0x40) =
           *(ulong *)(lVar8 + 0x40) & (1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffffU);
      uVar13 = uVar13 + 1;
      pvVar12 = (void *)((long)pvVar12 + 0x158);
    } while (uVar13 != param_6);
    uVar9 = uVar9 + 1;
    if (uVar9 == param_7) {
      uVar9 = 0;
      pvVar12 = pvVar7;
      do {
        uVar13 = 0;
        do {
          plVar10 = (long *)*param_8;
          if (plVar10 == (long *)0x0) {
            FUN_00f13ad8(0,pvVar12);
            FUN_00f167bc(0);
          }
          else {
            plVar1 = plVar10 + 5;
            do {
              lVar8 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = (int)lVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            FUN_00f13ad8(plVar10,pvVar12);
            FUN_00f167bc(plVar10);
            do {
              lVar8 = *plVar1;
              iVar5 = (int)lVar8 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
            else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          if (((*(byte *)(*(long *)(*(long *)(*param_8 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) ||
             (sVar6 = FUN_00cf44f4(), sVar6 != 0)) {
            uVar2 = param_5 + uVar9 * 6 + (int)uVar13;
            memcpy((void *)(*(long *)(param_1 + 0x9d0) + (ulong)param_4 * 0x2850 +
                           (ulong)uVar2 * 0x158),pvVar12,0x158);
            local_68 = param_4;
            uStack_64 = uVar2;
            FUN_020eae8c(param_1 + 0x40,&local_68,uVar9 * param_6 + (int)uVar13);
          }
          uVar13 = uVar13 + 1;
          pvVar12 = (void *)((long)pvVar12 + 0x158);
        } while (uVar13 != param_6);
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_7);
      goto LAB_01dc69d4;
    }
  } while( true );
}


