/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dfe66c; name: FUN_00dfe66c
 */


/* WARNING: Removing unreachable block (ram,0x00dfe6c8) */
/* WARNING: Removing unreachable block (ram,0x00dfe6cc) */
/* WARNING: Removing unreachable block (ram,0x00dfe6d4) */
/* WARNING: Removing unreachable block (ram,0x00dfe6dc) */
/* WARNING: Removing unreachable block (ram,0x00dfed60) */
/* WARNING: Removing unreachable block (ram,0x00dfe6e0) */
/* WARNING: Removing unreachable block (ram,0x00dfe714) */
/* WARNING: Removing unreachable block (ram,0x00dfe718) */
/* WARNING: Removing unreachable block (ram,0x00dfe720) */
/* WARNING: Removing unreachable block (ram,0x00dfe728) */
/* WARNING: Removing unreachable block (ram,0x00dfecf0) */
/* WARNING: Removing unreachable block (ram,0x00dfe72c) */

void FUN_00dfe66c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  plVar7 = *(long **)(param_1 + 0x450);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar4 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) goto LAB_00dfed80;
  }
  plVar8 = *(long **)(param_1 + 0x458);
  local_60 = plVar7;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 5;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
LAB_00dfed80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_58 = *(undefined8 *)(param_1 + 0x380);
  local_68 = plVar8;
  FUN_00e00b14(&local_90,*(undefined8 *)(param_1 + 8));
  FUN_00e00b80(param_1 + 0x578,&local_90);
  if (local_90 != (long *)0x0) {
    plVar7 = local_90 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_00dfec58;
  }
  FUN_00e00e28(*(undefined8 *)(param_1 + 0x578),&local_68);
  local_80 = 0x1f;
  local_78 = (long *)0x0;
  local_b0 = 0x794375920c5cf8bd;
  pcStack_a8 = "[Copy SceneColor]";
  local_90 = (long *)0xb6b279fe04ef1289;
  puStack_88 = PTR_s_BeforeWater_047e14d0;
  local_a0 = 0x11;
  local_98 = (long *)0x0;
  FUN_00dfeda8(&local_70,DAT_0485a0d0,&local_90,&local_b0,0);
  plVar7 = *(long **)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x508) = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar4 = *plVar8;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_00dfec58;
  }
  uVar6 = local_70;
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x508) = uVar6;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x508) + 0xf0) = 0x80000000;
  puVar5 = PTR_s_SSRCalc_047e14d8;
  local_80 = 0x1f;
  local_78 = (long *)0x0;
  local_a0 = 0x11;
  local_98 = (long *)0x0;
  local_90 = (long *)0x174c6db3002376ca;
  puStack_88 = PTR_s_SSRCalc_047e14d8;
  local_b0 = 0x37f4a5360d880193;
  pcStack_a8 = "[Copy SceneDepth]";
  FUN_00dfeda8(&local_70,DAT_0485a0d0,&local_90,&local_b0,0);
  plVar7 = *(long **)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x518) = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar4 = *plVar8;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_00dfec58;
  }
  uVar6 = local_70;
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x518) = uVar6;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x518) + 0xf0) = 0x80000000;
  local_80 = 0x1f;
  local_78 = (long *)0x0;
  local_90 = (long *)0x174c6db3002376ca;
  puStack_88 = puVar5;
  local_b0 = 0x794375920c5cf8bd;
  pcStack_a8 = "[Copy SceneColor]";
  local_a0 = 0x11;
  local_98 = (long *)0x0;
  FUN_00dfeda8(&local_70,DAT_0485a0d0,&local_90,&local_b0,0);
  plVar7 = *(long **)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x510) = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar4 = *plVar8;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_00dfec58;
  }
  uVar6 = local_70;
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x510) = uVar6;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x510) + 0xf0) = 0x80000001;
  local_80 = 0x1f;
  local_78 = (long *)0x0;
  local_90 = (long *)0x174c6db3002376ca;
  puStack_88 = puVar5;
  local_b0 = 0x37f4a5360d880193;
  pcStack_a8 = "[Copy SceneDepth]";
  local_a0 = 0x11;
  local_98 = (long *)0x0;
  FUN_00dfeda8(&local_70,DAT_0485a0d0,&local_90,&local_b0,0);
  plVar7 = *(long **)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x520) = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar4 = *plVar8;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_00dfec58;
  }
  uVar6 = local_70;
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x520) = uVar6;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x520) + 0xf0) = 0x80000001;
  lVar4 = DAT_0485a0f0;
  lVar9 = *(long *)(param_1 + 0x518);
  if (*(long *)(DAT_0485a0f0 + 0x38) != *(long *)(DAT_0485a0f0 + 0x30)) {
    *(ulong *)(lVar9 + 0xd0) = *(ulong *)(lVar9 + 0xd0) & 0xfffffffe;
    *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) =
         *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) & 0xfffffffe;
    *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) =
         *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) & 0xfffffffe;
    *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) =
         *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) & 0xfffffffe;
    lVar9 = *(long *)(param_1 + 0x518);
    if (1 < (ulong)((*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 4) * -0x5555555555555555))
    {
      *(ulong *)(lVar9 + 0xd0) = *(ulong *)(lVar9 + 0xd0) & 0xfffffffd;
      *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) =
           *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) & 0xfffffffd;
      *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) =
           *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) & 0xfffffffd;
      *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) =
           *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) & 0xfffffffd;
      lVar9 = *(long *)(param_1 + 0x518);
      if (2 < (ulong)((*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 4) * -0x5555555555555555
                     )) {
        *(ulong *)(lVar9 + 0xd0) = *(ulong *)(lVar9 + 0xd0) & 0xfffffffb;
        *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) =
             *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) & 0xfffffffb;
        *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) =
             *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) & 0xfffffffb;
        *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) =
             *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) & 0xfffffffb;
        lVar9 = *(long *)(param_1 + 0x518);
        if (3 < (ulong)((*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 4) *
                       -0x5555555555555555)) {
          uVar11 = 3;
          do {
            uVar10 = (uint)uVar11;
            uVar11 = uVar11 + 1;
            uVar12 = (ulong)(uint)~(1 << (ulong)(uVar10 & 0x1f));
            *(ulong *)(lVar9 + 0xd0) = *(ulong *)(lVar9 + 0xd0) & uVar12;
            *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) =
                 *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) & uVar12;
            *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) =
                 *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) & uVar12;
            *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) =
                 *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) & uVar12;
            lVar9 = *(long *)(param_1 + 0x518);
          } while (uVar11 < (ulong)((*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 4) *
                                   -0x5555555555555555));
        }
      }
    }
  }
  *(ulong *)(lVar9 + 0xd0) =
       (ulong)(*(uint *)(lVar9 + 0xd0) | 1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  *(ulong *)(*(long *)(param_1 + 0x520) + 0xd0) =
       (ulong)(*(uint *)(*(long *)(param_1 + 0x520) + 0xd0) |
              1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  *(ulong *)(*(long *)(param_1 + 0x508) + 0xd0) =
       (ulong)(*(uint *)(*(long *)(param_1 + 0x508) + 0xd0) |
              1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  *(ulong *)(*(long *)(param_1 + 0x510) + 0xd0) =
       (ulong)(*(uint *)(*(long *)(param_1 + 0x510) + 0xd0) |
              1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  if (local_60 != (long *)0x0) {
    plVar7 = local_60 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_00dfec58;
  }
  if (local_68 != (long *)0x0) {
    plVar7 = local_68 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_00dfec58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


