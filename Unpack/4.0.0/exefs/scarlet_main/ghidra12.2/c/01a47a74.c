/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a47a74; name: FUN_01a47a74
 */


void FUN_01a47a74(undefined8 *param_1,long param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  void *__src;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  void *__dest;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  undefined8 local_120;
  long *local_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined4 *puStack_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined4 *local_d8;
  long *local_d0;
  char local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  long local_78;
  undefined1 auStack_70 [16];
  
  plVar14 = (long *)(param_2 + 0x120);
  lVar9 = nn::os::GetCurrentThread();
LAB_01a47aac:
  if (*plVar14 == 0) goto code_r0x01a47ab4;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x128));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x128));
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01a47abc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a47abc:
  FUN_0135d328(auStack_70,param_3,0);
  local_c8 = '\0';
  local_c0 = 0x400;
  uStack_b8 = 8;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 1;
  local_80 = 0x100;
  local_d8 = (undefined4 *)0x0;
  local_d0 = (long *)0x0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_e8 = (undefined4 *)0x0;
  local_e0 = (undefined4 *)0x0;
  FUN_01a4849c(&local_e8,*(long *)(param_2 + 0x140) - *(long *)(param_2 + 0x138) >> 3);
  lVar9 = *(long *)(param_2 + 0x138);
  if (*(long *)(param_2 + 0x140) != lVar9) {
    uVar17 = 0;
    do {
      plVar14 = *(long **)(lVar9 + uVar17 * 8);
      if (plVar14 != (long *)0x0) {
        lVar9 = plVar14[6];
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar10;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      if ((plVar14[0x17] == 0) || ((*(byte *)(plVar14[0x17] + 0x1e8) & 1) == 0)) {
LAB_01a47e6c:
        uVar12 = FUN_0132a414(plVar14);
        uVar7 = (undefined4)uVar12;
        if ((uVar12 & 0xff00000000) == 0) {
          uVar7 = 0xffffffff;
        }
        uVar7 = FUN_01a48350(&local_d0,uVar17,uVar7);
        local_120 = CONCAT44(local_120._4_4_,uVar7);
        if (local_e0 < local_d8) {
          *local_e0 = uVar7;
          local_e0 = local_e0 + 1;
        }
        else {
          FUN_028ff430(&local_e8,&local_120);
        }
      }
      else {
        puVar11 = (uint *)(**(code **)(*(long *)plVar14[0x17] + 0x70))();
        piVar2 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar11 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
        if (*(int *)((long)puVar11 + (ulong)*puVar11) != 1) goto LAB_01a47e6c;
      }
      lVar9 = plVar14[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))(plVar14);
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar9 = *(long *)(param_2 + 0x138);
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (uVar17 < (ulong)(*(long *)(param_2 + 0x140) - lVar9 >> 3));
  }
  local_f8 = (undefined4 *)0x0;
  puStack_f0 = (undefined4 *)0x0;
  local_100 = (undefined4 *)0x0;
  FUN_01a4862c(&local_100,*(undefined8 *)(*(long *)(param_2 + 0x498) + 0x250));
  lVar9 = *(long *)(param_2 + 0x498);
  if (*(long *)(lVar9 + 0x250) == 0) goto LAB_01a47be0;
  uVar17 = 0;
  iVar8 = 1;
LAB_01a47b50:
  plVar14 = *(long **)(lVar9 + 0x228);
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14;
    iVar16 = iVar8;
    do {
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) {
        lVar9 = plVar15[2];
        goto LAB_01a47b78;
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  lVar9 = 0;
  goto LAB_01a47f8c;
code_r0x01a47ab4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar5) {
    *plVar14 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01a47abc;
  goto LAB_01a47aac;
  while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
LAB_01a47b78:
    if (plVar14[2] == lVar9) {
      uVar7 = *(undefined4 *)((long)plVar14 + 0x7c);
      goto LAB_01a47b94;
    }
  }
LAB_01a47f8c:
  uVar7 = 0xffffffff;
LAB_01a47b94:
  uVar7 = FUN_01a48270(&local_d0,lVar9,uVar7);
  local_120 = CONCAT44(local_120._4_4_,uVar7);
  if (local_f8 < puStack_f0) {
    *local_f8 = uVar7;
    local_f8 = local_f8 + 1;
  }
  else {
    FUN_028ff5bc(&local_100,&local_120);
  }
  lVar9 = *(long *)(param_2 + 0x498);
  uVar17 = (ulong)((int)uVar17 + 1);
  iVar8 = iVar8 + 1;
  if (*(ulong *)(lVar9 + 0x250) <= uVar17) {
LAB_01a47be0:
    uVar10 = FUN_01a481b0(&local_d0,*(undefined4 *)(param_2 + 0x394),
                          *(undefined4 *)(param_2 + 0x390),*(undefined4 *)(param_2 + 0x39c),
                          &local_e8,&local_100);
    FUN_01692868(&local_d0,uVar10,0,1);
    __src = local_a0;
    uVar17 = (ulong)(uint)(((int)local_b0 - (int)local_a0) + (int)local_a8);
    __dest = (void *)(**(code **)(*param_3 + 0x10))(param_3,uVar17,8);
    local_108 = 8;
    local_118 = param_3;
    uStack_110 = uVar17;
    memcpy(__dest,__src,uVar17);
    *param_1 = __dest;
    param_1[1] = local_118;
    local_120 = 0;
    param_1[4] = uVar17;
    param_1[2] = uStack_110;
    param_1[3] = local_108;
    FUN_018b7ecc(&local_120);
    puVar6 = local_100;
    lVar9 = tpidr_el0;
    if (local_100 != (undefined4 *)0x0) {
      local_f8 = local_100;
      plVar14 = *(long **)(lVar9 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar17 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,puVar6,0,8);
      }
    }
    puVar6 = local_e8;
    if (local_e8 != (undefined4 *)0x0) {
      local_e0 = local_e8;
      plVar14 = *(long **)(lVar9 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar17 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,puVar6,0,8);
      }
    }
    lVar13 = local_78;
    if (local_78 != 0) {
      FUN_01f2d540(local_78,*(undefined8 *)(local_78 + 8));
      plVar14 = *(long **)(lVar9 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar17 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar13,0,8);
      }
    }
    if (local_a8 != (void *)0x0) {
      if (local_d0 == (long *)0x0) {
        operator_delete__(local_a8);
      }
      else {
        (**(code **)(*local_d0 + 0x18))(local_d0,local_a8,local_b0);
      }
    }
    local_a8 = (void *)0x0;
    if ((local_c8 != '\0') && (local_d0 != (long *)0x0)) {
      (**(code **)(*local_d0 + 8))();
    }
    FUN_0135d2ec(auStack_70);
    *(undefined8 *)(param_2 + 0x120) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x128));
    return;
  }
  goto LAB_01a47b50;
}


