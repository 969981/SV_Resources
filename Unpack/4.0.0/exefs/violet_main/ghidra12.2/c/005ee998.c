/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005ee998; name: FUN_005ee998
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005ee998(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *******ppppppplVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  void *__src;
  char cVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  void *__dest;
  long lVar15;
  long ******pppppplVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *local_2b0;
  undefined8 local_2a8;
  long *plStack_2a0;
  long local_298;
  long *local_290;
  long *local_288;
  long *local_280;
  long local_278;
  undefined8 local_270;
  long local_268;
  long *local_260;
  long *local_258;
  long *******ppppppplStack_250;
  long *******local_248;
  long local_240;
  long *local_238;
  byte local_230;
  undefined7 uStack_22f;
  undefined8 local_220;
  long *plStack_218;
  byte local_208;
  undefined7 uStack_207;
  undefined8 local_1f8;
  long *plStack_1f0;
  long local_1e8;
  long *local_1e0;
  long *local_1d8;
  long *******local_1d0;
  long *******local_1c8;
  long local_1c0;
  long *local_1b8;
  byte local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a0;
  long *plStack_198;
  byte local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  long *plStack_170;
  long local_168;
  long *local_160;
  long *local_158;
  long *******local_150;
  long *******local_148;
  long local_140;
  long *local_138;
  byte local_130;
  undefined7 uStack_12f;
  undefined8 local_120;
  long *plStack_118;
  byte local_108;
  undefined7 uStack_107;
  undefined8 local_f8;
  long *local_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  long *******local_d0;
  long *******local_c8;
  long local_c0;
  long *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *local_98;
  byte local_88;
  undefined7 uStack_87;
  long **local_78;
  long *local_70;
  long local_68;
  
  lVar15 = *(long *)(param_1 + 0x128);
  local_278 = 0;
  local_270 = FUN_01cf7e20();
  local_268 = 0;
  lVar17 = *(long *)(param_1 + 0xf8);
  lVar7 = *(long *)(param_1 + 0x100);
  local_280 = &local_278;
  if (lVar17 != lVar7) {
    puVar1 = PTR_DAT_047ceb20 + 0x10;
    puVar2 = PTR_DAT_047ceb28 + 0x10;
    puVar3 = PTR_DAT_047ceb30 + 0x10;
    do {
      local_e0 = (long *)&LAB_02625a00;
      FUN_00248820(&local_e0);
      plVar13 = *(long **)(param_1 + 200);
      local_258 = *(long **)(param_1 + 0xd0);
      if (local_258 != (long *)0x0) {
        plVar10 = local_258 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = *plVar10 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppppppplStack_250 = *(long ********)(param_1 + 0xd8);
      local_248 = *(long ********)(param_1 + 0xe0);
      if (local_248 != (long *******)0x0) {
        ppppppplVar4 = local_248 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_240 = *(long *)(param_1 + 0xe8);
      local_238 = *(long **)(param_1 + 0xf0);
      if (local_238 != (long *)0x0) {
        plVar10 = local_238 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = *plVar10 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
                    /* try { // try from 005eead8 to 005eeae3 has its CatchHandler @ 005ef748 */
      local_260 = plVar13;
      FUN_005ee2e0(&local_230,lVar17);
      local_1e8 = 5;
      plVar20 = (long *)plVar13[0x48];
      puVar19 = (undefined8 *)plVar13[0x97];
      plVar10 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x88,8);
      plVar10[2] = 0;
      plVar10[3] = (long)plVar20;
      plVar13 = plVar10 + 4;
      plVar11 = plVar10 + 1;
      *plVar11 = 0;
      *plVar10 = (long)puVar1;
      FUN_006c4254(plVar13);
      plVar10[4] = (long)puVar2;
      nn::os::InitializeEvent(plVar10 + 6,0,0);
      plVar10[4] = (long)puVar3;
      nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
      *(undefined1 *)(plVar10 + 0x10) = 0;
      if (plVar10 != (long *)0x0) {
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar9) {
            *plVar11 = *plVar11 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x1c0,8);
      plVar11[2] = 0;
      plVar11[3] = (long)plVar20;
      plVar18 = plVar11 + 1;
      *plVar18 = 0;
      *plVar11 = (long)&PTR_LAB_044cfe30;
      FUN_006c5398(plVar11 + 4);
      plVar11[4] = (long)&PTR_LAB_044cfe68;
      lVar12 = (**(code **)(*plVar20 + 0x10))(plVar20,0x10000,0x10);
      if (lVar12 == 0) {
        local_e0 = (long *)CONCAT44(local_e0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e0,"");
      }
      FUN_006c4058(plVar11 + 10,plVar13,0,lVar12,0x10000,1);
      plVar11[10] = (long)&PTR_LAB_044cfe98;
      plVar11[0x33] = (long)plVar20;
      plVar11[0x34] = 0x10000;
      *(undefined1 *)((long)plVar11 + 0x1b9) = 1;
      plVar11[0x35] = (long)plVar13;
      plVar11[0x36] = (long)plVar10;
      local_1e0 = local_260;
      local_1d8 = local_258;
      if (local_258 != (long *)0x0) {
        plVar20 = local_258 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_1d0 = ppppppplStack_250;
      local_1c8 = local_248;
      if (local_248 != (long *******)0x0) {
        ppppppplVar4 = local_248 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_1c0 = local_240;
      local_1b8 = local_238;
      if (local_238 != (long *)0x0) {
        plVar20 = local_238 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
                    /* try { // try from 005eec84 to 005eec8b has its CatchHandler @ 005ef76c */
      FUN_005ee2e0(&local_1b0,&local_230);
      local_168 = local_1e8;
      local_160 = local_1e0;
      local_158 = local_1d8;
      if (local_1d8 != (long *)0x0) {
        plVar20 = local_1d8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_150 = local_1d0;
      local_148 = local_1c8;
      if (local_1c8 != (long *******)0x0) {
        ppppppplVar4 = local_1c8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_140 = local_1c0;
      local_138 = local_1b8;
      if (local_1b8 != (long *)0x0) {
        plVar20 = local_1b8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
                    /* try { // try from 005eecf4 to 005eecfb has its CatchHandler @ 005ef830 */
      FUN_005ee2e0(&local_130,&local_1b0);
      local_e8 = local_168;
      local_e0 = local_160;
      local_d8 = local_158;
      if (local_158 != (long *)0x0) {
        plVar20 = local_158 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_d0 = local_150;
      local_c8 = local_148;
      if (local_148 != (long *******)0x0) {
        ppppppplVar4 = local_148 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_c0 = local_140;
      local_b8 = local_138;
      if (local_138 != (long *)0x0) {
        plVar20 = local_138 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
                    /* try { // try from 005eed70 to 005eed7b has its CatchHandler @ 005ef8c4 */
      FUN_005ee2e0(&local_b0,&local_130);
      local_68 = local_e8;
      plVar11[0x23] = (long)local_e0;
      plVar11[0x24] = (long)local_d8;
      if (local_d8 != (long *)0x0) {
        plVar20 = local_d8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plVar11[0x25] = (long)local_d0;
      plVar11[0x26] = (long)local_c8;
      if (local_c8 != (long *******)0x0) {
        ppppppplVar4 = local_c8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plVar11[0x27] = local_c0;
      plVar11[0x28] = (long)local_b8;
      if (local_b8 != (long *)0x0) {
        plVar20 = local_b8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = *plVar20 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
                    /* try { // try from 005eedf4 to 005eedfb has its CatchHandler @ 005ef958 */
      FUN_005ee2e0(plVar11 + 0x29,&local_b0);
      plVar11[0x32] = local_68;
      if ((local_88 & 1) != 0) {
        (**(code **)(*local_70 + 0x18))
                  (local_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
      }
      if ((local_b0 & 1) != 0) {
        (**(code **)(*local_98 + 0x18))
                  (local_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
      }
      if (local_b8 != (long *)0x0) {
        plVar20 = local_b8 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_c8 != (long *******)0x0) {
        ppppppplVar4 = local_c8 + 1;
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_c8)[2])(local_c8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_d8 != (long *)0x0) {
        plVar20 = local_d8 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((local_108 & 1) != 0) {
        (**(code **)(*local_f0 + 0x18))
                  (local_f0,local_f8,CONCAT71(uStack_107,local_108) & 0xfffffffffffffffe,1);
      }
      if ((local_130 & 1) != 0) {
        (**(code **)(*plStack_118 + 0x18))
                  (plStack_118,local_120,CONCAT71(uStack_12f,local_130) & 0xfffffffffffffffe,1);
      }
      if (local_138 != (long *)0x0) {
        plVar20 = local_138 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_148 != (long *******)0x0) {
        ppppppplVar4 = local_148 + 1;
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_148)[2])(local_148);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_158 != (long *)0x0) {
        plVar20 = local_158 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((local_188 & 1) != 0) {
        (**(code **)(*plStack_170 + 0x18))
                  (plStack_170,local_178,CONCAT71(uStack_187,local_188) & 0xfffffffffffffffe,1);
      }
      if ((local_1b0 & 1) != 0) {
        (**(code **)(*plStack_198 + 0x18))
                  (plStack_198,local_1a0,CONCAT71(uStack_1af,local_1b0) & 0xfffffffffffffffe,1);
      }
      if (local_1b8 != (long *)0x0) {
        plVar20 = local_1b8 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_1b8 + 0x10))(local_1b8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1c8 != (long *******)0x0) {
        ppppppplVar4 = local_1c8 + 1;
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_1c8)[2])(local_1c8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1d8 != (long *)0x0) {
        plVar20 = local_1d8 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_160 = (long *)0x0;
      local_158 = (long *)0x0;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *plVar18 = *plVar18 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_e0 = plVar11 + 4;
      local_d8 = plVar11;
      (**(code **)*puVar19)(puVar19,&local_e0,&local_160);
      if (local_d8 != (long *)0x0) {
        plVar20 = local_d8 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_158 != (long *)0x0) {
        plVar20 = local_158 + 1;
        do {
          lVar12 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
          std::__shared_weak_count::__release_weak();
        }
      }
      do {
        lVar12 = *plVar18;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *plVar18 = lVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_290 = plVar13;
      local_288 = plVar10;
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__shared_weak_count::__release_weak();
      }
      if ((local_208 & 1) != 0) {
        (**(code **)(*plStack_1f0 + 0x18))
                  (plStack_1f0,local_1f8,CONCAT71(uStack_207,local_208) & 0xfffffffffffffffe,1);
      }
      if ((local_230 & 1) != 0) {
        (**(code **)(*plStack_218 + 0x18))
                  (plStack_218,local_220,CONCAT71(uStack_22f,local_230) & 0xfffffffffffffffe,1);
      }
      if (local_238 != (long *)0x0) {
        plVar13 = local_238 + 1;
        do {
          lVar12 = *plVar13;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar9) {
            *plVar13 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_238 + 0x10))(local_238);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_248 != (long *******)0x0) {
        ppppppplVar4 = local_248 + 1;
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar9) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_248)[2])(local_248);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_258 != (long *)0x0) {
        plVar13 = local_258 + 1;
        do {
          lVar12 = *plVar13;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar9) {
            *plVar13 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_258 + 0x10))(local_258);
          std::__shared_weak_count::__release_weak();
        }
      }
                    /* try { // try from 005ef34c to 005ef387 has its CatchHandler @ 005efa20 */
      plVar13 = (long *)FUN_005efae0(&local_280,&local_160,lVar17 + 0x28);
      if (*plVar13 == 0) {
        FUN_005efbf8(&local_e0,&local_280,lVar17 + 0x28,&local_290);
        local_e0[2] = (long)local_160;
        *local_e0 = 0;
        local_e0[1] = 0;
        *plVar13 = (long)local_e0;
        plVar10 = local_e0;
        if ((long *)*local_280 != (long *)0x0) {
          plVar10 = (long *)*plVar13;
          local_280 = (long *)*local_280;
        }
        FUN_010108e0(local_278,plVar10);
        local_268 = local_268 + 1;
      }
      if (local_288 != (long *)0x0) {
        plVar13 = local_288 + 1;
        do {
          lVar12 = *plVar13;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar9) {
            *plVar13 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_288 + 0x10))(local_288);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar17 = lVar17 + 0x48;
    } while (lVar17 != lVar7);
  }
  local_2a8 = 0;
  plStack_2a0 = (long *)FUN_01cf7e20();
  local_298 = 0;
  local_2b0 = &local_2a8;
  if (local_280 != &local_278) {
    plVar13 = (long *)(PTR_DAT_047cbb30 + 0x10);
    plVar10 = (long *)(PTR_DAT_047cbb38 + 0x10);
    plVar11 = local_280;
    do {
      pbVar5 = (byte *)(plVar11 + 4);
      local_78 = (long **)0x0;
      local_70 = (long *)0x0;
      local_e0 = plVar13;
      local_d8 = plVar10;
      local_d0 = (long *******)&local_d0;
      local_c8 = (long *******)&local_d0;
      (**(code **)(*(long *)plVar11[8] + 0x10))((long *)plVar11[8],&local_b8);
      local_78 = &local_d8;
      thunk_FUN_006c4e40(&local_e0);
      local_e0 = plVar13;
      FUN_006c4274(&local_d8);
      plVar20 = (long *)plVar11[8];
      plVar18 = (long *)plVar11[9];
      plVar11[8] = 0;
      plVar11[9] = 0;
      uVar14 = (**(code **)(*plVar20 + 0x30))();
      if (plVar18 != (long *)0x0) {
        plVar20 = plVar18 + 1;
        do {
          lVar17 = *plVar20;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          std::__shared_weak_count::__release_weak();
        }
      }
                    /* try { // try from 005ef500 to 005ef50f has its CatchHandler @ 005efa0c */
      plVar20 = (long *)FUN_027caa34(&local_2b0,&local_e0,pbVar5);
      if (*plVar20 == 0) {
        puVar19 = (undefined8 *)(**(code **)(*plStack_2a0 + 0x10))(plStack_2a0,0x48,8);
        plVar18 = (long *)FUN_01cf7e20();
        puVar19[7] = plVar18;
        if ((*pbVar5 & 1) == 0) {
          lVar17 = plVar11[5];
          uVar22 = *(undefined8 *)pbVar5;
          puVar19[6] = plVar11[6];
          puVar19[5] = lVar17;
          puVar19[4] = uVar22;
        }
        else {
          uVar6 = plVar11[5];
          __src = (void *)plVar11[6];
          if (uVar6 < 0x17) {
            __dest = (void *)((long)puVar19 + 0x21);
            *(char *)(puVar19 + 4) = (char)((int)uVar6 << 1);
          }
          else {
            if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 005ef718 to 005ef71f has its CatchHandler @ 005ef720 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar21 = uVar6 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar21,1);
            puVar19[5] = uVar6;
            puVar19[6] = __dest;
            puVar19[4] = uVar21 | 1;
          }
          memcpy(__dest,__src,uVar6 + 1);
        }
        puVar19[8] = uVar14;
        puVar19[2] = local_e0;
        *puVar19 = 0;
        puVar19[1] = 0;
        *plVar20 = (long)puVar19;
        if ((undefined8 *)*local_2b0 != (undefined8 *)0x0) {
          puVar19 = (undefined8 *)*plVar20;
          local_2b0 = (undefined8 *)*local_2b0;
        }
        FUN_010108e0(local_2a8,puVar19);
        local_298 = local_298 + 1;
        plVar20 = (long *)plVar11[1];
        if ((long *)plVar11[1] != (long *)0x0) goto LAB_005ef61c;
LAB_005ef62c:
        plVar20 = plVar11 + 2;
        plVar18 = (long *)*plVar20;
        if ((long *)*plVar18 != plVar11) {
          do {
            lVar17 = *plVar20;
            plVar20 = (long *)(lVar17 + 0x10);
            plVar18 = (long *)*plVar20;
          } while (*plVar18 != lVar17);
        }
      }
      else {
        plVar20 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_005ef62c;
LAB_005ef61c:
        do {
          plVar18 = plVar20;
          plVar20 = (long *)*plVar18;
        } while ((long *)*plVar18 != (long *)0x0);
      }
      plVar11 = plVar18;
    } while (plVar18 != &local_278);
  }
  FUN_005f5154(&local_280,local_278);
  nn::os::LockMutex((MutexType *)(lVar15 + 0x38));
  *(undefined8 **)(lVar15 + 0x58) = local_2b0;
  *(long **)(lVar15 + 0x68) = plStack_2a0;
  *(undefined8 *)(lVar15 + 0x60) = local_2a8;
  plVar13 = (long *)(lVar15 + 0x60);
  *(long *)(lVar15 + 0x70) = local_298;
  if (local_298 == 0) {
    *(long **)(lVar15 + 0x58) = plVar13;
  }
  else {
    *(long **)(*plVar13 + 0x10) = plVar13;
    local_2a8 = 0;
    local_298 = 0;
    local_2b0 = &local_2a8;
  }
  *(undefined1 *)(lVar15 + 0x78) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar15 + 0x38));
  FUN_027c2bd0(&local_2b0,local_2a8);
  return 1;
}


