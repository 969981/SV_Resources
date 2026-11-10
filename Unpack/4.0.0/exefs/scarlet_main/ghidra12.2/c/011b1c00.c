/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b1c00; name: FUN_011b1c00
 */


/* WARNING: Removing unreachable block (ram,0x011b21bc) */
/* WARNING: Removing unreachable block (ram,0x011b21c0) */
/* WARNING: Removing unreachable block (ram,0x011b21c8) */
/* WARNING: Removing unreachable block (ram,0x011b21d0) */
/* WARNING: Removing unreachable block (ram,0x011b2d58) */
/* WARNING: Removing unreachable block (ram,0x011b21d4) */

uint FUN_011b1c00(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [8];
  code *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  void *__s;
  undefined8 uVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  ulong uVar35;
  void *local_188;
  undefined1 local_140 [8];
  code *local_138;
  undefined1 *local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  long *local_108;
  undefined8 uStack_100;
  long *local_c0;
  char *local_b8;
  ulong local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  long *local_70 [2];
  
  uVar10 = FUN_00d1a7a0(param_1 + 0x40);
  uVar35 = (ulong)(uVar10 >> 10);
  plVar1 = (long *)(param_1 + 0x130);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
    cVar5 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = lVar13;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011b1c54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x138) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar20) {
            *plVar1 = lVar13;
            *(undefined8 *)(param_1 + 0x138) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011b1c54;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = lVar13;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011b1c54:
  lVar13 = *(long *)(param_1 + 0x150);
  if ((ulong)(*(long *)(param_1 + 0x158) - lVar13 >> 3) <= uVar35) {
    puVar2 = PTR_DAT_047d66f8 + 0x10;
    lVar27 = tpidr_el0;
    do {
      plVar30 = *(long **)(param_1 + 8);
      lVar13 = *(long *)(param_1 + 0x188);
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar34 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar34 + 0x80)) {
LAB_011b31b0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar34 + *(ulong *)(lVar34 + 0x80) * 8) = plVar30;
      *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + 1;
      plVar16 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x10f0,8);
      if (plVar16 == (long *)0x0) {
        (**(code **)(*plVar30 + 0xe8))(plVar30);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      *plVar16 = (long)puVar2;
      plVar16[2] = 0;
      *(undefined4 *)(plVar16 + 3) = 0;
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar15 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        if (*(long *)(lVar15 + 0x80) != 0) {
          lVar21 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8);
        }
      }
      plVar16[1] = lVar21;
      plVar33 = plVar16 + 5;
      *plVar33 = 0;
      *plVar16 = (long)&PTR_LAB_045d7bf0;
      plVar16[4] = (long)&PTR_LAB_045d7c28;
      plVar16[0x206] = 0;
      plVar16[0x207] = 0;
      plVar16[0x208] = 0;
      plVar16[0x209] = 0;
      FUN_011b3324(plVar16 + 0x20a);
      plVar16[0x210] = 0;
      plVar16[0x20f] = 0;
      FUN_011b345c(plVar16 + 0x211);
      plVar16[0x218] = 0;
      plVar16[0x217] = 0;
      plVar16[0x216] = 0;
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
          (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
         (lVar15 = *(long *)(lVar27 + 0x30), lVar15 == 0)) {
        if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar15 = DAT_04859430;
        *(long *)(lVar27 + 0x30) = DAT_04859430;
      }
      plVar16[0x219] = lVar15;
      plVar16[0x21a] = 0x3ffffffffffff;
      plVar16[0x21b] = 0;
      *(undefined4 *)(plVar16 + 0x21c) = 0;
      plVar16[0x21d] = lVar13;
      local_128 = (long *)0x0;
      local_a0 = (long *)0x3f80000000000004;
      uStack_98 = 0x3f800000;
      local_90 = 0x1010001;
      local_8c = 0x100;
      local_140 = (undefined1  [8])0xcc7b04092977f1ce;
      local_138 = (code *)0x3c051a8;
      local_130 = (undefined1 *)0xe;
      pcVar14 = (char *)(**(code **)(*DAT_0485a020 + 0x50))(DAT_0485a020,local_140,0);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      lVar13 = *(long *)(*(long *)plVar16[0x21d] + 0x38) - *(long *)(*(long *)plVar16[0x21d] + 0x30)
               >> 4;
      uVar22 = lVar13 * -0x5555555555555555;
      uVar25 = plVar16[0x209] - plVar16[0x208] >> 3;
      if (uVar25 < uVar22) {
        FUN_00ede218(plVar16 + 0x208,uVar22 - uVar25);
      }
      else if (uVar22 < uVar25) {
        FUN_011b3288(plVar16 + 0x208,plVar16[0x208] + lVar13 * 0x5555555555555558);
      }
      plVar28 = (long *)plVar16[0x209];
      plVar18 = plVar28;
      if (plVar28 != (long *)plVar16[0x208]) {
        uVar22 = 0;
        do {
          uVar31 = *(undefined8 *)(param_1 + 0x28);
          if (*pcVar14 == '\0') {
            plVar28 = (long *)FUN_00d44228();
            if (plVar28 != (long *)0x0) {
              (**(code **)(*plVar28 + 0x18))(plVar28);
            }
          }
          else {
            if (((*PTR_DAT_047d4240 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar17 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar17;
            FUN_00cf9884(&local_c0,uVar17,pcVar14);
            plVar28 = local_c0;
          }
          plVar18 = (long *)PTR_DAT_047d8b70;
          if (plVar28 != (long *)0x0) {
            plVar18 = plVar28 + 6;
          }
          local_140 = (undefined1  [8])*plVar18;
          plVar18 = (long *)PTR_PTR_047d4508;
          if (plVar28 != (long *)0x0) {
            plVar18 = plVar28 + 7;
          }
          local_138 = (code *)*plVar18;
          if (plVar28 == (long *)0x0) {
            local_130 = (undefined1 *)0x0;
            local_128 = (long *)0x0;
          }
          else {
            local_130 = (undefined1 *)plVar28[8];
            (**(code **)(*plVar28 + 0x18))(plVar28);
            local_128 = plVar28;
          }
          local_a8 = (long *)0x0;
          local_c0 = (long *)0xb1827a5e7f677548;
          local_b8 = "[OcclusionQuery]";
          local_b0 = 0x10;
          FUN_0151ede0(local_70,uVar31,&local_a0,local_140,&local_c0,plVar16[1]);
          auVar6._8_8_ = local_138;
          auVar6._0_8_ = local_140;
          lVar13 = plVar16[0x208];
          plVar18 = *(long **)(lVar13 + uVar22 * 8);
          *(undefined8 *)(lVar13 + uVar22 * 8) = 0;
          if (plVar18 != (long *)0x0) {
            plVar29 = plVar18 + 5;
            do {
              lVar15 = *plVar29;
              iVar12 = (int)lVar15 + -1;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar20) {
                *(int *)plVar29 = iVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 == 0) {
              (**(code **)(*plVar18 + 0x10))();
            }
            else if ((int)lVar15 == 0) goto LAB_011b2bcc;
          }
          *(long **)(lVar13 + uVar22 * 8) = local_70[0];
          local_70[0] = (long *)0x0;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if (local_128 != (long *)0x0) {
            (**(code **)(*local_128 + 0x20))();
          }
          if (plVar28 != (long *)0x0) {
            (**(code **)(*plVar28 + 0x20))(plVar28);
          }
          lVar13 = *(long *)(plVar16[0x208] + uVar22 * 8);
          if (*(long *)(*(long *)plVar16[0x21d] + 0x38) != *(long *)(*(long *)plVar16[0x21d] + 0x30)
             ) {
            *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) & 0xfffffffe;
            lVar13 = *(long *)(plVar16[0x208] + uVar22 * 8);
            if (1 < (ulong)((*(long *)(*(long *)plVar16[0x21d] + 0x38) -
                             *(long *)(*(long *)plVar16[0x21d] + 0x30) >> 4) * -0x5555555555555555))
            {
              *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) & 0xfffffffd;
              lVar13 = *(long *)(plVar16[0x208] + uVar22 * 8);
              if (2 < (ulong)((*(long *)(*(long *)plVar16[0x21d] + 0x38) -
                               *(long *)(*(long *)plVar16[0x21d] + 0x30) >> 4) * -0x5555555555555555
                             )) {
                *(ulong *)(lVar13 + 0xd0) = *(ulong *)(lVar13 + 0xd0) & 0xfffffffb;
                lVar13 = *(long *)(plVar16[0x208] + uVar22 * 8);
                if (3 < (ulong)((*(long *)(*(long *)plVar16[0x21d] + 0x38) -
                                 *(long *)(*(long *)plVar16[0x21d] + 0x30) >> 4) *
                               -0x5555555555555555)) {
                  uVar25 = 3;
                  do {
                    uVar24 = (uint)uVar25;
                    uVar25 = uVar25 + 1;
                    *(ulong *)(lVar13 + 0xd0) =
                         *(ulong *)(lVar13 + 0xd0) & (ulong)(uint)~(1 << (ulong)(uVar24 & 0x1f));
                    lVar13 = *(long *)(plVar16[0x208] + uVar22 * 8);
                  } while (uVar25 < (ulong)((*(long *)(*(long *)plVar16[0x21d] + 0x38) -
                                             *(long *)(*(long *)plVar16[0x21d] + 0x30) >> 4) *
                                           -0x5555555555555555));
                }
              }
            }
          }
          uVar24 = (uint)uVar22;
          uVar22 = uVar22 + 1;
          *(ulong *)(lVar13 + 0xd0) =
               (ulong)(*(uint *)(lVar13 + 0xd0) | 1 << (ulong)(uVar24 & 0x1f));
          plVar28 = (long *)plVar16[0x208];
          plVar18 = (long *)plVar16[0x209];
        } while (uVar22 < (ulong)(plVar16[0x209] - (long)plVar28 >> 3));
      }
      for (; plVar28 != plVar18; plVar28 = plVar28 + 1) {
        FUN_00eb3bec(*(undefined8 *)(*plVar28 + 200),1);
        FUN_00eb4900(*(undefined8 *)(*plVar28 + 200),0);
        FUN_00eb2008(*(undefined8 *)(*plVar28 + 200),4);
        lVar13 = *plVar28;
        FUN_00f190b8(*(undefined8 *)(lVar13 + 200),0,1);
        *(undefined1 *)(lVar13 + 0x158) = 0;
        FUN_00eb2d18(*(undefined8 *)(*plVar28 + 200),0,1);
        FUN_015b3280(*(undefined8 *)(*plVar28 + 200),0,0,0,0,0);
      }
      (*DAT_04859f60)(local_70,&DAT_04859f80);
      local_140 = (undefined1  [8])&DAT_00000400;
      local_80 = 0x100;
      uStack_7c = 2;
      local_84 = 0;
      local_c0 = (long *)0x0;
      local_a0 = local_70[0];
      lVar13 = FUN_011b3808(auStack_78,local_70[0][1],&local_a0,&uStack_7c,local_140,&local_80,
                            &local_84,&local_c0);
      if (lVar13 != 0) {
        piVar3 = (int *)(lVar13 + 0x28);
        do {
          iVar12 = *piVar3;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar20) {
            *piVar3 = iVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == -1) goto LAB_011b31b4;
      }
      plVar28 = plVar16 + 0x206;
      plVar18 = (long *)*plVar28;
      *plVar28 = 0;
      if (plVar18 != (long *)0x0) {
        plVar29 = plVar18 + 5;
        do {
          lVar15 = *plVar29;
          iVar12 = (int)lVar15 + -1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar20) {
            *(int *)plVar29 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar18 + 0x10))();
        }
        else {
          auVar6 = _local_140;
          if ((int)lVar15 == 0) goto LAB_011b2bcc;
        }
      }
      auVar6._8_8_ = local_138;
      auVar6._0_8_ = local_140;
      *plVar28 = lVar13;
      if (local_70[0] != (long *)0x0) {
        plVar18 = local_70[0] + 5;
        do {
          lVar13 = *plVar18;
          iVar12 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar20) {
            *(int *)plVar18 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_011b2bcc;
      }
      lVar13 = *(long *)(param_1 + 0x30);
      local_c0 = (long *)*plVar28;
      if (local_c0 != (long *)0x0) {
        plVar28 = local_c0 + 5;
        do {
          lVar15 = *plVar28;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar20) {
            *(int *)plVar28 = (int)lVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar15 == -1) goto LAB_011b31b4;
      }
      plVar28 = (long *)(lVar13 + 0x30);
      local_a0 = (long *)((ulong)local_a0 & 0xffffffffffffff00);
      (**(code **)(*plVar28 + 0x50))(local_140,plVar28,&local_c0,&local_a0);
      auVar6._8_8_ = local_138;
      auVar6._0_8_ = local_140;
      plVar28 = (long *)plVar16[0x207];
      plVar16[0x207] = 0;
      if (plVar28 != (long *)0x0) {
        plVar18 = plVar28 + 5;
        do {
          lVar13 = *plVar18;
          iVar12 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar20) {
            *(int *)plVar18 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar28 + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_011b2bcc;
      }
      auVar8 = local_140;
      local_140 = (undefined1  [8])0x0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_138;
      plVar16[0x207] = (long)auVar8;
      if (local_c0 != (long *)0x0) {
        plVar28 = local_c0 + 5;
        do {
          lVar13 = *plVar28;
          iVar12 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar20) {
            *(int *)plVar28 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_c0 + 0x10))();
        }
        else {
          auVar6 = auVar7 << 0x40;
          if ((int)lVar13 == 0) goto LAB_011b2bcc;
        }
      }
      plVar28 = (long *)plVar16[0x208];
      plVar18 = plVar16 + 0x20f;
      plVar29 = (long *)plVar16[0x209];
      if (((plVar28 != plVar29) &&
          ((**(code **)(*(long *)(plVar16[0x207] + 0x30) + 0x10))
                     ((long *)(plVar16[0x207] + 0x30),*plVar28 + 200,1), plVar28 + 1 != plVar29)) &&
         ((**(code **)(*(long *)(plVar16[0x207] + 0x30) + 0x10))
                    ((long *)(plVar16[0x207] + 0x30),plVar28[1] + 200,1), plVar28 + 2 != plVar29)) {
        (**(code **)(*(long *)(plVar16[0x207] + 0x30) + 0x10))
                  ((long *)(plVar16[0x207] + 0x30),plVar28[2] + 200,1);
        for (plVar28 = plVar28 + 3; plVar28 != plVar29; plVar28 = plVar28 + 1) {
          (**(code **)(*(long *)(plVar16[0x207] + 0x30) + 0x10))
                    ((long *)(plVar16[0x207] + 0x30),*plVar28 + 200,1);
        }
      }
      lVar13 = *(long *)(*(long *)plVar16[0x21d] + 0x38) - *(long *)(*(long *)plVar16[0x21d] + 0x30)
               >> 4;
      uVar22 = lVar13 * -0x5555555555555555;
      uVar25 = plVar16[0x210] - plVar16[0x20f] >> 3;
      if (uVar25 < uVar22) {
        FUN_011b3b50(plVar18,uVar22 - uVar25);
      }
      else if (uVar22 < uVar25) {
        FUN_02732ab0(plVar18,plVar16[0x20f] + lVar13 * 0x5555555555555558);
      }
      lVar13 = *(long *)(*(long *)plVar16[0x21d] + 0x38) - *(long *)(*(long *)plVar16[0x21d] + 0x30)
               >> 4;
      uVar22 = lVar13 * -0x5555555555555555;
      lVar15 = plVar16[0x216];
      uVar25 = plVar16[0x217] - lVar15 >> 0xe;
      if (uVar25 < uVar22) {
        if ((ulong)(plVar16[0x218] - plVar16[0x217] >> 0xe) < uVar22 - uVar25) {
          uVar26 = plVar16[0x21a];
          if (0x7ffffffffffffffe < uVar26) {
            uVar26 = 0x7fffffffffffffff;
          }
          if (uVar26 < uVar22) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar15 = plVar16[0x218] - lVar15;
          uVar23 = lVar15 >> 0xd;
          plVar28 = plVar16 + 0x219;
          if (uVar22 <= uVar23) {
            uVar22 = uVar23;
          }
          if (uVar26 >> 1 <= (ulong)(lVar15 >> 0xe)) {
            uVar22 = uVar26;
          }
          if (uVar22 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = (**(code **)(*(long *)*plVar28 + 0x10))((long *)*plVar28,uVar22 << 0xe,8);
            if (lVar15 == 0) {
              (**(code **)(*(long *)*plVar28 + 0xe8))();
            }
          }
          local_188 = (void *)(lVar15 + uVar25 * 0x4000);
          lVar21 = lVar13 * -0x5555555555554000 + uVar25 * -0x4000;
          __s = local_188;
          do {
            lVar32 = *plVar28;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar19 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar19 == 0) {
              memset(__s,0,0x4000);
            }
            else {
              if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_011b31b0;
              *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar32;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
              memset(__s,0,0x4000);
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            }
            lVar21 = lVar21 + -0x4000;
            __s = (void *)((long)__s + 0x4000);
          } while (lVar21 != 0);
          lVar21 = plVar16[0x216];
          lVar32 = plVar16[0x217];
          if (lVar32 != lVar21) {
            do {
              lVar32 = lVar32 + -0x4000;
              local_188 = (void *)((long)local_188 + -0x4000);
              FUN_011b449c(plVar28,local_188,lVar32);
            } while (lVar21 != lVar32);
            lVar21 = plVar16[0x216];
          }
          plVar16[0x216] = (long)local_188;
          plVar16[0x217] = lVar15 + lVar13 * -0x5555555555554000;
          lVar13 = plVar16[0x218];
          plVar16[0x218] = lVar15 + uVar22 * 0x4000;
          if (lVar21 != 0) {
            plVar28 = (long *)*plVar28;
            uVar22 = (**(code **)(*plVar28 + 0xf8))(plVar28);
            if (((uVar22 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar28 + 0x18))(plVar28,lVar21,lVar13 - lVar21,8);
            }
            else {
              FUN_00c48fe8(plVar28,lVar21,lVar13 - lVar21,8);
            }
          }
        }
        else {
          FUN_011b46a4();
        }
      }
      else if (uVar22 < uVar25) {
        plVar16[0x217] = lVar15 + lVar13 * -0x5555555555554000;
      }
      if (plVar16[0x210] != plVar16[0x20f]) {
        uVar22 = 0;
        do {
          local_b0 = local_b0 & 0xffffffff00000000;
          local_c0 = (long *)&DAT_00004000;
          local_b8 = (char *)0x10;
          (*DAT_04859f60)(local_70,&DAT_04859f80);
          local_a0 = local_70[0];
          lVar13 = FUN_00cf3764(local_140,local_70[0][1],&local_a0);
          if (lVar13 == 0) {
            lVar15 = 0;
          }
          else {
            piVar3 = (int *)(lVar13 + 0x28);
            do {
              iVar12 = *piVar3;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar20) {
                *piVar3 = iVar12 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 == -1) goto LAB_011b31b4;
            lVar15 = lVar13;
          }
          lVar21 = *(long *)(*(long *)(lVar15 + 0x70) + 0x30);
          local_140 = *(undefined1 (*) [8])(lVar21 + 8);
          local_138 = *(code **)(lVar21 + 0x6098);
          local_130 = (undefined1 *)(lVar21 + 0x10);
          _local_140 = FUN_00d56874(*(undefined8 *)(lVar21 + 0x6140),local_140,&local_c0,0,0);
          local_130 = (undefined1 *)((ulong)local_130 & 0xffffffffffffff00);
          FUN_00d56380(lVar15 + 0x30,local_140);
          uVar11 = FUN_00d56320(lVar15 + 0x30);
          *(undefined4 *)(lVar15 + 0x78) = uVar11;
          lVar15 = *plVar18;
          plVar28 = *(long **)(lVar15 + uVar22 * 8);
          *(undefined8 *)(lVar15 + uVar22 * 8) = 0;
          if (plVar28 != (long *)0x0) {
            plVar29 = plVar28 + 5;
            do {
              lVar21 = *plVar29;
              iVar12 = (int)lVar21 + -1;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar20) {
                *(int *)plVar29 = iVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 == 0) {
              (**(code **)(*plVar28 + 0x10))();
            }
            else {
              auVar6 = _local_140;
              if ((int)lVar21 == 0) goto LAB_011b2bcc;
            }
          }
          *(long *)(lVar15 + uVar22 * 8) = lVar13;
          if (local_70[0] != (long *)0x0) {
            plVar28 = local_70[0] + 5;
            do {
              lVar13 = *plVar28;
              iVar12 = (int)lVar13 + -1;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar20) {
                *(int *)plVar28 = iVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 == 0) {
              (**(code **)(*local_70[0] + 0x10))();
            }
            else {
              auVar6 = _local_140;
              if ((int)lVar13 == 0) goto LAB_011b2bcc;
            }
          }
          memset((void *)(plVar16[0x216] + uVar22 * 0x4000),0,0x4000);
          uVar22 = uVar22 + 1;
        } while (uVar22 < (ulong)(plVar16[0x210] - plVar16[0x20f] >> 3));
      }
      (*DAT_04859f60)(&local_c0,&DAT_04859f80);
      local_128 = (long *)plVar16[1];
      local_140 = (undefined1  [8])0x0;
      local_138 = (code *)0x0;
      local_130 = (undefined1 *)0x0;
      local_120 = 0x1fffffffffffffff;
      uStack_118 = 0;
      local_110 = 0;
      local_a0 = (long *)0x0;
      local_108 = (long *)0x0;
      uStack_100 = 0;
      FUN_011b3e90(&local_c0,local_140,&local_a0);
      FUN_011b35a0(local_70,&local_c0);
      plVar28 = (long *)plVar16[0x208];
      plVar18 = (long *)plVar16[0x209];
      if (plVar28 != plVar18) {
        FUN_00c97970(*(undefined8 *)(*plVar28 + 200),local_70,0x10);
        lVar13 = *plVar28;
        FUN_00c75684(*(undefined8 *)(lVar13 + 200),0,&local_108);
        FUN_00c752dc(lVar13,local_140,1);
        if (plVar28 + 1 != plVar18) {
          FUN_00c97970(*(undefined8 *)(plVar28[1] + 200),local_70,0x10);
          lVar13 = plVar28[1];
          FUN_00c75684(*(undefined8 *)(lVar13 + 200),0,&local_108);
          FUN_00c752dc(lVar13,local_140,1);
          if (plVar28 + 2 != plVar18) {
            FUN_00c97970(*(undefined8 *)(plVar28[2] + 200),local_70,0x10);
            lVar13 = plVar28[2];
            FUN_00c75684(*(undefined8 *)(lVar13 + 200),0,&local_108);
            FUN_00c752dc(lVar13,local_140,1);
            for (plVar28 = plVar28 + 3; plVar28 != plVar18; plVar28 = plVar28 + 1) {
              FUN_00c97970(*(undefined8 *)(*plVar28 + 200),local_70,0x10);
              lVar13 = *plVar28;
              FUN_00c75684(*(undefined8 *)(lVar13 + 200),0,&local_108);
              FUN_00c752dc(lVar13,local_140,1);
            }
          }
        }
      }
      auVar6._8_8_ = local_138;
      auVar6._0_8_ = local_140;
      if (local_70[0] != (long *)0x0) {
        plVar28 = local_70[0] + 5;
        do {
          lVar13 = *plVar28;
          iVar12 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar20) {
            *(int *)plVar28 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_011b2bcc;
      }
      auVar6._8_8_ = local_138;
      auVar6._0_8_ = local_140;
      if (local_108 != (long *)0x0) {
        plVar28 = local_108 + 5;
        do {
          lVar13 = *plVar28;
          iVar12 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar20) {
            *(int *)plVar28 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_108 + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_011b2bcc;
      }
      plVar28 = local_128;
      auVar8 = local_140;
      if (local_140 != (undefined1  [8])0x0) {
        local_138 = (code *)local_140;
        lVar13 = (long)local_130 - (long)local_140;
        uVar22 = (**(code **)(*local_128 + 0xf8))(local_128);
        if (((uVar22 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar28 + 0x18))(plVar28,auVar8,lVar13,4);
        }
        else {
          FUN_00c48fe8(plVar28,auVar8,lVar13,4);
        }
      }
      auVar6._8_8_ = local_138;
      auVar6._0_8_ = local_140;
      if (local_c0 != (long *)0x0) {
        plVar28 = local_c0 + 5;
        do {
          lVar13 = *plVar28;
          iVar12 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar20) {
            *(int *)plVar28 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_c0 + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_011b2bcc;
      }
      local_140 = (undefined1  [8])plVar16;
      plVar16[1] = (long)plVar30;
      plVar16[2] = (long)plVar16;
      *(undefined4 *)(plVar16 + 3) = 0x810f0;
      *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + -1;
      do {
        lVar13 = *plVar33;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar20) {
          *(int *)plVar33 = (int)lVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar13 == -1) {
LAB_011b31b4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      puVar4 = *(undefined8 **)(param_1 + 0x158);
      if (puVar4 < *(undefined8 **)(param_1 + 0x160)) {
        uVar31 = *(undefined8 *)(param_1 + 0x168);
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          *puVar4 = local_140;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_011b31b0;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar31;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *puVar4 = local_140;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        local_140 = (undefined1  [8])0x0;
        *(undefined8 **)(param_1 + 0x158) = puVar4 + 1;
      }
      else {
        FUN_011b47cc(param_1 + 0x150,local_140);
        auVar6._8_8_ = local_138;
        auVar6._0_8_ = local_140;
        if (local_140 != (undefined1  [8])0x0) {
          plVar30 = (long *)((long)local_140 + 0x28);
          do {
            lVar13 = *plVar30;
            iVar12 = (int)lVar13 + -1;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar20) {
              *(int *)plVar30 = iVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*(long *)local_140 + 0x10))();
          }
          else if ((int)lVar13 == 0) {
LAB_011b2bcc:
            _local_140 = auVar6;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      lVar13 = *(long *)(param_1 + 0x150);
    } while ((ulong)(*(long *)(param_1 + 0x158) - lVar13 >> 3) <= uVar35);
  }
  lVar13 = *(long *)(lVar13 + uVar35 * 8);
  if (*(long *)(**(long **)(lVar13 + 0x10e8) + 0x38) !=
      *(long *)(**(long **)(lVar13 + 0x10e8) + 0x30)) {
    uVar35 = 0;
    lVar27 = (ulong)(uVar10 & 0x3ff) << 4;
    do {
      lVar34 = *(long *)(*(long *)(lVar13 + 0x1078) + uVar35 * 8);
      local_140 = (undefined1  [8])&LAB_02bc2f5c;
      local_138 = FUN_02bc2f7c;
      local_120 = CONCAT44(local_120._4_4_,uVar10) & 0xffffffff000003ff;
      local_130 = &LAB_02bc2f80;
      local_128 = (long *)&LAB_02bc2f8c;
      pcVar14 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar34 + 0x70) + 0x110),lVar34 + 0x30
                                    );
      if (*pcVar14 == '\0' || *(long *)(pcVar14 + 8) == 0) {
        lVar15 = 0;
      }
      else {
        if (*(long *)(*(long *)(pcVar14 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_buffer","Map",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                     ,0x31);
        }
        lVar15 = (**(code **)PTR_DAT_047d8da8)();
      }
      *(undefined8 *)(lVar15 + (ulong)(uVar10 & 0x3ff) * 0x10 + 8) = 0;
      *(undefined8 *)(lVar15 + (local_120 & 0xffffffff) * 0x10) = 0;
      FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar34 + 0x70) + 0x110),lVar34 + 0x30);
      pcVar9 = local_138;
      if (local_138 != (code *)0x0) {
        local_130 = (undefined1 *)0x0;
        local_128 = (long *)0x0;
        local_140 = (undefined1  [8])0x0;
        local_138 = (code *)0x0;
        (*pcVar9)(&local_120);
      }
      *(undefined8 *)(*(long *)(lVar13 + 0x10b0) + lVar27 + 8) = 0;
      *(undefined8 *)(*(long *)(lVar13 + 0x10b0) + lVar27) = 0;
      uVar35 = uVar35 + 1;
      lVar27 = lVar27 + 0x4000;
    } while (uVar35 < (ulong)((*(long *)(**(long **)(lVar13 + 0x10e8) + 0x38) -
                               *(long *)(**(long **)(lVar13 + 0x10e8) + 0x30) >> 4) *
                             -0x5555555555555555));
  }
  do {
    lVar13 = *plVar1;
    lVar27 = *(long *)(param_1 + 0x138);
    cVar5 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x138) = lVar27;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar34 = *plVar1;
    lVar15 = *(long *)(param_1 + 0x138);
    if (lVar34 != lVar13 || lVar15 != lVar27) {
      bVar20 = false;
      ClearExclusiveLocal();
      goto LAB_011b1e14;
    }
    cVar5 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar20) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x134) = lVar27;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar20 = true;
LAB_011b1e14:
  if (!bVar20) {
    do {
      lVar13 = *plVar1;
      lVar27 = *(long *)(param_1 + 0x138);
      if (lVar13 != lVar34 || lVar27 != lVar15) {
        bVar20 = false;
        ClearExclusiveLocal();
        goto joined_r0x011b2fbc;
      }
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar20) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x134) = lVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar20 = true;
joined_r0x011b2fbc:
    if (!bVar20) {
      do {
        lVar34 = *plVar1;
        lVar15 = *(long *)(param_1 + 0x138);
        if (lVar34 != lVar13 || lVar15 != lVar27) {
          bVar20 = false;
          ClearExclusiveLocal();
          lVar13 = lVar34;
          lVar27 = lVar15;
          goto joined_r0x011b2fbc;
        }
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar20) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x134) = lVar27;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar20 = true;
      lVar13 = lVar34;
      lVar27 = lVar15;
      goto joined_r0x011b2fbc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return uVar10;
}


