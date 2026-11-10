/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ebb70; name: FUN_005ebb70
 */


/* WARNING: Removing unreachable block (ram,0x005ec958) */
/* WARNING: Removing unreachable block (ram,0x005ec95c) */
/* WARNING: Removing unreachable block (ram,0x005ec964) */
/* WARNING: Removing unreachable block (ram,0x005ec96c) */
/* WARNING: Removing unreachable block (ram,0x005ec970) */
/* WARNING: Removing unreachable block (ram,0x005ec920) */
/* WARNING: Removing unreachable block (ram,0x005ec924) */
/* WARNING: Removing unreachable block (ram,0x005ec92c) */
/* WARNING: Removing unreachable block (ram,0x005ec934) */
/* WARNING: Removing unreachable block (ram,0x005ec938) */
/* WARNING: Removing unreachable block (ram,0x005ec990) */
/* WARNING: Removing unreachable block (ram,0x005ec994) */
/* WARNING: Removing unreachable block (ram,0x005ec99c) */
/* WARNING: Removing unreachable block (ram,0x005ec9a4) */
/* WARNING: Removing unreachable block (ram,0x005ec9a8) */

void FUN_005ebb70(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  long *plVar1;
  undefined *puVar2;
  long **pplVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long **pplVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  Result *pRVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long local_190;
  long local_188;
  long local_180;
  long *plStack_178;
  long **local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long **local_150;
  long *plStack_148;
  long *local_140;
  long *local_138;
  long **local_130;
  long *plStack_128;
  long local_120;
  long local_118;
  long local_110;
  long *plStack_108;
  long **local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e8;
  long **local_e0;
  long *plStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long *plStack_b8;
  long **local_b0;
  long *plStack_a8;
  long *local_a0;
  long *plStack_98;
  long **local_90;
  long *plStack_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  FUN_006c3a68(&local_160,param_2,*param_2 + 0x1c0);
  plVar18 = local_160;
  iVar9 = nn::socket::Socket(2,2,0x11);
  plVar19 = local_160;
  uVar7 = DAT_03cb5448;
  if (iVar9 < 0) {
    plVar18 = (long *)FUN_01cf7e20();
  }
  else {
    *(int *)(plVar18 + 2) = iVar9;
    *(undefined8 *)((long)plVar18 + 0x14) = uVar7;
    FUN_006c397c(&local_b0,0,0);
    uVar10 = FUN_006c3bd0(plVar19,&local_b0);
    if ((uVar10 & 1) != 0) {
      local_150 = *(long ***)(*param_2 + 0x238);
                    /* try { // try from 005ebc0c to 005ebc1b has its CatchHandler @ 005ecd14 */
      local_100 = local_150;
      FUN_005ed140(&local_b0,&local_150,&local_100);
      plVar19 = plStack_a8;
      pplVar3 = local_b0;
      plVar18 = local_160;
      local_170 = local_b0;
      local_168 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar11 = plStack_a8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (local_160[1] == 0) {
LAB_005ec9fc:
                    /* try { // try from 005ec9fc to 005ec9ff has its CatchHandler @ 005eca3c */
        FUN_005ee2b0();
      }
      else {
        lVar16 = local_160[4];
        lVar20 = *local_160;
        plVar11 = (long *)std::__shared_weak_count::lock();
        if (plVar11 == (long *)0x0) goto LAB_005ec9fc;
        plVar1 = plVar11 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        plStack_a8 = (long *)plVar18[7];
        local_b0 = (long **)plVar18[6];
        plStack_98 = (long *)plVar18[9];
        local_a0 = (long *)plVar18[8];
        plStack_88 = (long *)plVar18[0xb];
        local_90 = (long **)plVar18[10];
        local_78 = plVar18[0xd];
        local_80 = plVar18[0xc];
        plVar21 = *(long **)(lVar16 + 0x240);
        puVar15 = *(undefined8 **)(lVar16 + 0x4b8);
        plVar12 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x78,8);
        plVar12[2] = 0;
        plVar13 = plVar12 + 1;
        *plVar13 = 0;
        puVar2 = PTR_DAT_047cc0d8;
        plVar12[3] = (long)plVar21;
        plVar1 = plVar12 + 4;
        *plVar12 = (long)(puVar2 + 0x10);
        FUN_006c4254(plVar1);
        plVar12[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
        nn::os::InitializeEvent(plVar12 + 6,0,0);
        plVar12[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar12 + 0xb),false,0);
        if (plVar12 != (long *)0x0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar13 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x1a8,8);
        plVar22 = plVar13 + 1;
        *plVar22 = 0;
        plVar13[2] = 0;
        plVar13[3] = (long)plVar21;
        *plVar13 = (long)&PTR_FUN_044cfaa0;
        FUN_006c5398(plVar13 + 4);
        plVar13[4] = (long)&PTR_LAB_044cfad8;
        lVar16 = (**(code **)(*plVar21 + 0x10))(plVar21,0x10000,0x10);
        param_5 = 0;
        if (lVar16 != 0) {
          FUN_006c4058(plVar13 + 10,plVar1,0,lVar16,0x10000,1);
          *(undefined1 *)((long)plVar13 + 0x1a1) = 1;
          plVar13[0x30] = (long)plVar21;
          plVar13[0x31] = 0x10000;
          plVar13[10] = (long)&PTR_LAB_044cfb08;
          plVar13[0x32] = (long)plVar1;
          plVar13[0x33] = (long)plVar12;
          plVar13[0x28] = (long)plStack_88;
          plVar13[0x27] = (long)local_90;
          plVar13[0x2a] = local_78;
          plVar13[0x29] = local_80;
          plVar13[0x24] = (long)plStack_a8;
          plVar13[0x23] = (long)local_b0;
          plVar13[0x26] = (long)plStack_98;
          plVar13[0x25] = (long)local_a0;
          plVar13[0x2f] = (long)plVar21;
          plVar13[0x2b] = lVar20;
          plVar13[0x2c] = (long)plVar11;
          plVar13[0x2d] = (long)pplVar3;
          plVar13[0x2e] = (long)plVar19;
          local_150 = (long **)0x0;
          plStack_148 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar6) {
                *plVar22 = *plVar22 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_100 = (long **)(plVar13 + 4);
          plStack_f8 = plVar13;
          (**(code **)*puVar15)(puVar15,&local_100,&local_150);
          if (plStack_f8 != (long *)0x0) {
            plVar19 = plStack_f8 + 1;
            do {
              lVar16 = *plVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plStack_148 != (long *)0x0) {
            plVar19 = plStack_148 + 1;
            do {
              lVar16 = *plVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_148 + 0x10))(plStack_148);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plVar13 != (long *)0x0) {
            do {
              lVar16 = *plVar22;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar6) {
                *plVar22 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              std::__shared_weak_count::__release_weak();
            }
          }
          *(undefined1 *)(plVar12 + 5) = 1;
          plVar18[0xf] = (long)plVar1;
          plVar19 = (long *)plVar18[0x10];
          plVar18[0x10] = (long)plVar12;
          if (plVar19 != (long *)0x0) {
            plVar1 = plVar19 + 1;
            do {
              lVar16 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar19 = plVar11 + 1;
          do {
            lVar16 = *plVar19;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *plVar19 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            std::__shared_weak_count::__release_weak();
          }
          plVar18 = (long *)plVar18[0x10];
          if (plVar18 != (long *)0x0) {
            plVar19 = plVar18 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = *plVar19 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              lVar16 = *plVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar11 = local_158;
          plVar19 = local_168;
          pplVar8 = local_170;
          pplVar3 = (long **)*param_2;
          plVar18 = (long *)param_2[1];
          if (plVar18 != (long *)0x0) {
            plVar1 = plVar18 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (local_158 != (long *)0x0) {
            plVar1 = local_158 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (local_168 != (long *)0x0) {
            plVar1 = local_168 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = *plVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
                    /* try { // try from 005ec01c to 005ec027 has its CatchHandler @ 005ecce0 */
          FUN_005ecd18(&local_190,param_3);
          plVar22 = pplVar3[0x48];
          plVar13 = pplVar3[0x97];
          plVar12 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0xa0,8);
          plVar12[2] = 0;
          plVar21 = plVar12 + 1;
          *plVar21 = 0;
          puVar2 = PTR_DAT_047ceaf0;
          plVar12[3] = (long)plVar22;
          plVar1 = plVar12 + 4;
          *plVar12 = (long)(puVar2 + 0x10);
          FUN_006c4254(plVar1);
          plVar12[4] = (long)(PTR_DAT_047ceaf8 + 0x10);
          nn::os::InitializeEvent(plVar12 + 6,0,0);
          plVar12[4] = (long)(PTR_DAT_047ceb00 + 0x10);
          nn::os::InitializeMutex((MutexType *)(plVar12 + 0xb),false,0);
          *(undefined1 *)(plVar12 + 0x13) = 0;
          if (plVar12 != (long *)0x0) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar6) {
                *plVar21 = *plVar21 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar21 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,400,8);
          plVar21[2] = 0;
          plVar17 = plVar21 + 1;
          *plVar17 = 0;
          *plVar21 = (long)&PTR_LAB_044cfca8;
          plVar21[3] = (long)plVar22;
          FUN_006c5398();
          plVar21[4] = (long)&PTR_LAB_044cfce0;
          lVar16 = (**(code **)(*plVar22 + 0x10))(plVar22,0x10000,0x10);
          if (lVar16 == 0) {
            local_b0 = (long **)CONCAT44(local_b0._4_4_,0x220);
            pRVar14 = (Result *)&local_b0;
            param_5 = 0;
            goto LAB_005eca2c;
          }
          FUN_006c4058(plVar21 + 10,plVar1,0,lVar16,0x10000,1);
          *(undefined1 *)((long)plVar21 + 0x189) = 1;
          plVar21[0x2d] = (long)plVar22;
          plVar21[0x2e] = 0x10000;
          plVar21[10] = (long)&PTR_LAB_044cfd10;
          plVar21[0x2f] = (long)plVar1;
          plVar21[0x30] = (long)plVar12;
          local_138 = plVar11;
          local_140 = local_160;
          plStack_128 = plVar19;
          local_130 = pplVar8;
          local_150 = pplVar3;
          plStack_148 = plVar18;
                    /* try { // try from 005ec1a4 to 005ec1af has its CatchHandler @ 005ecc1c */
          FUN_005ecd18(&local_120,&local_190);
          plStack_d8 = plStack_128;
          local_e0 = local_130;
          local_e8 = local_138;
          local_f0 = local_140;
          plStack_f8 = plStack_148;
          local_100 = local_150;
          local_150 = (long **)0x0;
          plStack_148 = (long *)0x0;
          local_140 = (long *)0x0;
          local_138 = (long *)0x0;
          local_130 = (long **)0x0;
          plStack_128 = (long *)0x0;
                    /* try { // try from 005ec1dc to 005ec1e7 has its CatchHandler @ 005ecb68 */
          FUN_005ecd18(&local_d0,&local_120);
          plStack_88 = plStack_d8;
          local_90 = local_e0;
          plStack_98 = local_e8;
          local_a0 = local_f0;
          plStack_a8 = plStack_f8;
          local_b0 = local_100;
          local_100 = (long **)0x0;
          plStack_f8 = (long *)0x0;
          local_f0 = (long *)0x0;
          local_e8 = (long *)0x0;
          local_e0 = (long **)0x0;
          plStack_d8 = (long *)0x0;
                    /* try { // try from 005ec214 to 005ec21f has its CatchHandler @ 005ecad4 */
          FUN_005ecd18(&local_80,&local_d0);
          plVar21[0x24] = (long)plStack_a8;
          plVar21[0x23] = (long)local_b0;
          local_b0 = (long **)0x0;
          plStack_a8 = (long *)0x0;
          plVar21[0x26] = (long)plStack_98;
          plVar21[0x25] = (long)local_a0;
          local_a0 = (long *)0x0;
          plStack_98 = (long *)0x0;
          plVar21[0x28] = (long)plStack_88;
          plVar21[0x27] = (long)local_90;
          local_90 = (long **)0x0;
          plStack_88 = (long *)0x0;
                    /* try { // try from 005ec254 to 005ec25b has its CatchHandler @ 005eca40 */
          FUN_005ecd18(plVar21 + 0x29,&local_80);
          lVar20 = local_80;
          lVar16 = local_78;
          if (local_80 != 0) {
            for (; lVar16 != lVar20; lVar16 = lVar16 + -0x48) {
              if ((*(byte *)(lVar16 + -0x20) & 1) == 0) {
                bVar4 = *(byte *)(lVar16 + -0x48);
              }
              else {
                (**(code **)(**(long **)(lVar16 + -8) + 0x18))
                          (*(long **)(lVar16 + -8),*(undefined8 *)(lVar16 + -0x10),
                           *(ulong *)(lVar16 + -0x20) & 0xfffffffffffffffe,1);
                bVar4 = *(byte *)(lVar16 + -0x48);
              }
              if ((bVar4 & 1) != 0) {
                (**(code **)(**(long **)(lVar16 + -0x30) + 0x18))
                          (*(long **)(lVar16 + -0x30),*(undefined8 *)(lVar16 + -0x38),
                           *(ulong *)(lVar16 + -0x48) & 0xfffffffffffffffe,1);
              }
            }
            local_78 = lVar20;
            (**(code **)(*plStack_68 + 0x18))(plStack_68,local_80,local_70 - local_80,8);
          }
          if (plStack_88 != (long *)0x0) {
            plVar18 = plStack_88 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plStack_98 != (long *)0x0) {
            plVar18 = plStack_98 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plStack_a8 != (long *)0x0) {
            plVar18 = plStack_a8 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              std::__shared_weak_count::__release_weak();
            }
          }
          lVar16 = local_d0;
          if (local_d0 != 0) {
            lVar20 = local_c8;
            if (local_c8 != local_d0) {
              do {
                if ((*(byte *)(lVar20 + -0x20) & 1) == 0) {
                  bVar4 = *(byte *)(lVar20 + -0x48);
                }
                else {
                  (**(code **)(**(long **)(lVar20 + -8) + 0x18))
                            (*(long **)(lVar20 + -8),*(undefined8 *)(lVar20 + -0x10),
                             *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe,1);
                  bVar4 = *(byte *)(lVar20 + -0x48);
                }
                if ((bVar4 & 1) != 0) {
                  (**(code **)(**(long **)(lVar20 + -0x30) + 0x18))
                            (*(long **)(lVar20 + -0x30),*(undefined8 *)(lVar20 + -0x38),
                             *(ulong *)(lVar20 + -0x48) & 0xfffffffffffffffe,1);
                }
                lVar20 = lVar20 + -0x48;
              } while (lVar16 != lVar20);
            }
            local_c8 = lVar16;
            (**(code **)(*plStack_b8 + 0x18))(plStack_b8,local_d0,local_c0 - local_d0,8);
          }
          if (plStack_d8 != (long *)0x0) {
            plVar18 = plStack_d8 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_e8 != (long *)0x0) {
            plVar18 = local_e8 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*local_e8 + 0x10))(local_e8);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plStack_f8 != (long *)0x0) {
            plVar18 = plStack_f8 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              std::__shared_weak_count::__release_weak();
            }
          }
          lVar16 = local_120;
          if (local_120 != 0) {
            lVar20 = local_118;
            if (local_118 != local_120) {
              do {
                if ((*(byte *)(lVar20 + -0x20) & 1) == 0) {
                  bVar4 = *(byte *)(lVar20 + -0x48);
                }
                else {
                  (**(code **)(**(long **)(lVar20 + -8) + 0x18))
                            (*(long **)(lVar20 + -8),*(undefined8 *)(lVar20 + -0x10),
                             *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe,1);
                  bVar4 = *(byte *)(lVar20 + -0x48);
                }
                if ((bVar4 & 1) != 0) {
                  (**(code **)(**(long **)(lVar20 + -0x30) + 0x18))
                            (*(long **)(lVar20 + -0x30),*(undefined8 *)(lVar20 + -0x38),
                             *(ulong *)(lVar20 + -0x48) & 0xfffffffffffffffe,1);
                }
                lVar20 = lVar20 + -0x48;
              } while (lVar16 != lVar20);
            }
            local_118 = lVar16;
            (**(code **)(*plStack_108 + 0x18))(plStack_108,local_120,local_110 - local_120,8);
          }
          if (plStack_128 != (long *)0x0) {
            plVar18 = plStack_128 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_128 + 0x10))(plStack_128);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_138 != (long *)0x0) {
            plVar18 = local_138 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*local_138 + 0x10))(local_138);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plStack_148 != (long *)0x0) {
            plVar18 = plStack_148 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_148 + 0x10))(plStack_148);
              std::__shared_weak_count::__release_weak();
            }
          }
          local_100 = (long **)0x0;
          plStack_f8 = (long *)0x0;
          if (plVar21 != (long *)0x0) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_b0 = (long **)(plVar21 + 4);
          plStack_a8 = plVar21;
          (**(code **)*plVar13)(plVar13,&local_b0,&local_100);
          if (plStack_a8 != (long *)0x0) {
            plVar18 = plStack_a8 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plStack_f8 != (long *)0x0) {
            plVar18 = plStack_f8 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              std::__shared_weak_count::__release_weak();
            }
          }
          *param_1 = plVar1;
          param_1[1] = plVar12;
          if (plVar21 != (long *)0x0) {
            do {
              lVar16 = *plVar17;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              std::__shared_weak_count::__release_weak();
            }
          }
          lVar16 = local_190;
          if (local_190 != 0) {
            lVar20 = local_188;
            if (local_188 != local_190) {
              do {
                if ((*(byte *)(lVar20 + -0x20) & 1) == 0) {
                  bVar4 = *(byte *)(lVar20 + -0x48);
                }
                else {
                  (**(code **)(**(long **)(lVar20 + -8) + 0x18))
                            (*(long **)(lVar20 + -8),*(undefined8 *)(lVar20 + -0x10),
                             *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe,1);
                  bVar4 = *(byte *)(lVar20 + -0x48);
                }
                if ((bVar4 & 1) != 0) {
                  (**(code **)(**(long **)(lVar20 + -0x30) + 0x18))
                            (*(long **)(lVar20 + -0x30),*(undefined8 *)(lVar20 + -0x38),
                             *(ulong *)(lVar20 + -0x48) & 0xfffffffffffffffe,1);
                }
                lVar20 = lVar20 + -0x48;
              } while (lVar16 != lVar20);
            }
            local_188 = lVar16;
            (**(code **)(*plStack_178 + 0x18))(plStack_178,local_190,local_180 - local_190,8);
          }
          if (local_168 != (long *)0x0) {
            plVar18 = local_168 + 1;
            do {
              lVar16 = *plVar18;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar6) {
                *plVar18 = lVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*local_168 + 0x10))(local_168);
              std::__shared_weak_count::__release_weak();
            }
          }
          goto LAB_005ec3d0;
        }
      }
      pRVar14 = (Result *)&local_100;
      local_100 = (long **)CONCAT44(local_100._4_4_,0x220);
LAB_005eca2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",param_5,pRVar14,"");
    }
    plVar18 = (long *)FUN_01cf7e20();
  }
  plStack_a8 = (long *)0x0;
  local_a0 = (long *)FUN_01cf7e20();
  plStack_98 = (long *)0x0;
  local_b0 = &plStack_a8;
  plVar19 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x98,8);
  puVar2 = PTR_DAT_047ceb08 + 0x10;
  plVar19[2] = 0;
  plVar19[3] = (long)plVar18;
  *plVar19 = (long)puVar2;
  plVar19[1] = 0;
  FUN_006c4254(plVar19 + 4);
  plVar19[4] = (long)(PTR_DAT_047ceb10 + 0x10);
  plVar19[6] = (long)local_b0;
  plVar19[8] = (long)local_a0;
  plVar19[7] = (long)plStack_a8;
  plVar18 = plVar19 + 7;
  plVar19[9] = (long)plStack_98;
  if (plStack_98 == (long *)0x0) {
    plVar19[6] = (long)plVar18;
  }
  else {
    *(long **)(*plVar18 + 0x10) = plVar18;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    local_b0 = &plStack_a8;
  }
  nn::os::InitializeMutex((MutexType *)(plVar19 + 10),false,0);
  nn::os::InitializeEvent((EventType *)(plVar19 + 0xe),0,0);
  nn::os::SignalEvent((EventType *)(plVar19 + 0xe));
  *param_1 = plVar19 + 4;
  param_1[1] = plVar19;
  FUN_027c2bd0(&local_b0,plStack_a8);
LAB_005ec3d0:
  if (local_158 != (long *)0x0) {
    plVar18 = local_158 + 1;
    do {
      lVar16 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


