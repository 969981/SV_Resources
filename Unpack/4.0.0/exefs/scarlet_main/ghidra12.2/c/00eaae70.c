/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eaae70; name: FUN_00eaae70
 */


void FUN_00eaae70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long *local_78;
  long *plStack_70;
  long *local_68;
  long *local_60;
  undefined8 *puStack_58;
  
  if (*(char *)(param_1 + 0x1a3) == '\0') {
LAB_00eaae98:
    if (*(char *)(param_1 + 0x1a4) != '\0') {
      lVar6 = *(long *)(param_1 + 0xb0);
      uVar10 = *(ulong *)(param_1 + 0xe8);
      if (uVar10 < (ulong)((*(long *)(param_1 + 0xb8) - lVar6 >> 3) * -0x3333333333333333)) {
        do {
          FUN_00fff1a4(&local_78,*(undefined8 *)(param_1 + 0x30),lVar6 + uVar10 * 0x28);
          if ((((int)((ulong)(local_78[0x12] - local_78[0x11]) >> 3) * 0x3e0f83e1 != 0) &&
              (FUN_00eba4e0(param_1,0,&local_78),
              1 < (uint)((int)((ulong)(local_78[0x12] - local_78[0x11]) >> 3) * 0x3e0f83e1))) &&
             (FUN_00eba4e0(param_1,1,&local_78),
             2 < (uint)((int)((ulong)(local_78[0x12] - local_78[0x11]) >> 3) * 0x3e0f83e1))) {
            uVar9 = 2;
            do {
              FUN_00eba4e0(param_1,uVar9,&local_78);
              uVar9 = uVar9 + 1;
            } while (uVar9 < (uint)((int)((ulong)(local_78[0x12] - local_78[0x11]) >> 3) *
                                   0x3e0f83e1));
          }
          if (local_78 != (long *)0x0) {
            plVar8 = local_78 + 5;
            do {
              lVar6 = *plVar8;
              iVar4 = (int)lVar6 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *(int *)plVar8 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar6 == 0) {
LAB_00eab1f0:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          lVar6 = *(long *)(param_1 + 0xb0);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)((*(long *)(param_1 + 0xb8) - lVar6 >> 3) * -0x3333333333333333));
      }
    }
    return;
  }
  plVar8 = *(long **)(param_1 + 0xf0);
  plVar11 = *(long **)(param_1 + 0xf8);
LAB_00eaaeec:
  while (plVar11 != plVar8) {
    plVar5 = plVar11 + -2;
    plVar11 = plVar11 + -7;
    if ((long *)*plVar5 != (long *)0x0) {
      (**(code **)(*(long *)*plVar5 + 0x20))();
    }
    plVar5 = (long *)*plVar11;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 != 0) goto code_r0x00eaaf20;
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(long **)(param_1 + 0xf8) = plVar8;
  lVar6 = *(long *)(param_1 + 0x130);
  lVar7 = *(long *)(param_1 + 0x138);
  if (lVar7 != lVar6) {
    if (*(long **)(lVar7 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + -8) + 0x20))();
    }
    if (lVar7 + -0x20 != lVar6) {
      do {
        if (*(long **)(lVar7 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + -0x28) + 0x20))();
        }
        lVar7 = lVar7 + -0x20;
      } while (lVar6 + 0x20 != lVar7);
    }
  }
  plVar8 = (long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0x138) = lVar6;
  uVar10 = (ulong)(uint)((int)((ulong)(*(long *)(*plVar8 + 0x90) - *(long *)(*plVar8 + 0x88)) >> 3)
                        * 0x3e0f83e1);
  lVar6 = *(long *)(param_1 + 0xf0);
  if ((ulong)((*(long *)(param_1 + 0x100) - lVar6 >> 3) * 0x6db6db6db6db6db7) < uVar10) {
    lVar7 = *(long *)(param_1 + 0xf8);
    local_60 = (long *)0x0;
    puStack_58 = (undefined8 *)(param_1 + 0x108);
    local_78 = (long *)(**(code **)(**(long **)(param_1 + 0x108) + 0x10))
                                 (*(long **)(param_1 + 0x108),uVar10 * 0x38,8);
    if (local_78 == (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x108);
      (**(code **)(*plVar11 + 0xe8))(plVar11);
    }
    plStack_70 = local_78 + (lVar7 - lVar6 >> 3);
    local_60 = local_78 + uVar10 * 7;
    local_68 = plStack_70;
    FUN_00eab3ec((undefined8 *)(param_1 + 0xf0),&local_78);
    FUN_00eab2b0(&local_78);
    uVar10 = (ulong)(uint)((int)((ulong)(*(long *)(*plVar8 + 0x90) - *(long *)(*plVar8 + 0x88)) >> 3
                                ) * 0x3e0f83e1);
  }
  FUN_00f2b504(param_1 + 0x130,uVar10);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (((((int)((ulong)(*(long *)(*(long *)(param_1 + 0xa8) + 0x90) -
                      *(long *)(*(long *)(param_1 + 0xa8) + 0x88)) >> 3) * 0x3e0f83e1 != 0) &&
       (FUN_00eba4e0(param_1,0,plVar8),
       1 < (uint)((int)((ulong)(*(long *)(*(long *)(param_1 + 0xa8) + 0x90) -
                               *(long *)(*(long *)(param_1 + 0xa8) + 0x88)) >> 3) * 0x3e0f83e1))) &&
      (FUN_00eba4e0(param_1,1,plVar8),
      2 < (uint)((int)((ulong)(*(long *)(*(long *)(param_1 + 0xa8) + 0x90) -
                              *(long *)(*(long *)(param_1 + 0xa8) + 0x88)) >> 3) * 0x3e0f83e1))) &&
     (FUN_00eba4e0(param_1,2,plVar8),
     3 < (uint)((int)((ulong)(*(long *)(*(long *)(param_1 + 0xa8) + 0x90) -
                             *(long *)(*(long *)(param_1 + 0xa8) + 0x88)) >> 3) * 0x3e0f83e1))) {
    uVar9 = 3;
    do {
      FUN_00eba4e0(param_1,uVar9,plVar8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)((ulong)(*(long *)(*(long *)(param_1 + 0xa8) + 0x90) -
                                         *(long *)(*(long *)(param_1 + 0xa8) + 0x88)) >> 3) *
                           0x3e0f83e1));
  }
  goto LAB_00eaae98;
code_r0x00eaaf20:
  if ((int)lVar6 == 0) goto LAB_00eab1f0;
  goto LAB_00eaaeec;
}


