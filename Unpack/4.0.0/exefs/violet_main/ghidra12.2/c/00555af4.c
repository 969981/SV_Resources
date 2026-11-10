/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00555af4; name: FUN_00555af4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00555af4(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  undefined **ppuVar19;
  long local_180;
  long *local_178;
  uint local_170;
  undefined4 uStack_16c;
  undefined8 local_160;
  long *plStack_158;
  undefined **local_150;
  long *local_148;
  long *local_140;
  undefined ***local_130;
  long *plStack_128;
  byte local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  long *plStack_108;
  byte local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  long *plStack_e8;
  long local_d8;
  long local_d0;
  undefined4 local_c8;
  char local_c4;
  long lStack_c0;
  long *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  long *local_a0;
  long *plStack_98;
  undefined **local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined ***local_70;
  
  if (param_1[2] == 0) {
LAB_00556358:
                    /* try { // try from 00556358 to 0055635b has its CatchHandler @ 00556388 */
    FUN_00559590();
  }
  else {
    ppuVar19 = (undefined **)param_1[1];
    ppuVar6 = (undefined **)std::__shared_weak_count::lock();
    if (ppuVar6 == (undefined **)0x0) goto LAB_00556358;
    ppuVar1 = ppuVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar12 = ppuVar6 + 1;
    do {
      puVar14 = *ppuVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
      if (bVar5) {
        *ppuVar12 = puVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      std::__shared_weak_count::__release_weak();
    }
    if (param_1[2] != 0) {
      lVar18 = param_1[1];
      plVar7 = (long *)std::__shared_weak_count::lock();
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar8 = plVar7 + 1;
        do {
          lVar15 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
        if (param_1[2] != 0) {
          lVar15 = param_1[1];
          plVar8 = (long *)std::__shared_weak_count::lock();
          if (plVar8 != (long *)0x0) {
            plVar3 = plVar8 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *plVar3 = *plVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar9 = plVar8 + 1;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              std::__shared_weak_count::__release_weak();
            }
            plVar9 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
            lVar16 = *plVar9;
            uVar10 = FUN_00561744();
            FUN_01f6ef54(&local_180,lVar16 + 0x10,uVar10);
            pbVar11 = (byte *)(**(code **)(*param_1 + 0x18))(param_1);
            pbVar17 = *(byte **)(pbVar11 + 0x10);
            if ((*pbVar11 & 1) == 0) {
              pbVar17 = pbVar11 + 1;
            }
            FUN_01f6fa0c(&local_150,&local_180,pbVar17);
            ppuVar12 = (undefined **)FUN_0053a47c(&local_150);
            local_70 = (undefined ***)0x0;
            local_70 = (undefined ***)(**(code **)(*ppuVar12 + 0x10))(ppuVar12,0x20,8);
            *local_70 = &PTR_LAB_044c9890;
            local_70[1] = ppuVar12;
            local_70[2] = ppuVar19;
            local_70[3] = ppuVar6;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar5) {
                *ppuVar1 = *ppuVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar9 = (long *)FUN_0053a47c(&local_150);
            local_a0 = (long *)0x0;
            local_a0 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
            *local_a0 = (long)&PTR_LAB_044c9940;
            local_a0[1] = (long)plVar9;
            local_a0[2] = lVar18;
            local_a0[3] = (long)plVar7;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN_0053a3ac(&local_d8,&local_150,&local_90,&lStack_c0);
            if (local_a0 != (long *)0x0) {
              if (local_a0 == &lStack_c0) {
                pcVar13 = *(code **)(*local_a0 + 0x10);
              }
              else {
                pcVar13 = *(code **)(*local_a0 + 0x18);
              }
              (*pcVar13)();
            }
            if (local_70 != (undefined ***)0x0) {
              if (local_70 == &local_90) {
                pcVar13 = (code *)(*local_70)[2];
              }
              else {
                pcVar13 = (code *)(*local_70)[3];
              }
              (*pcVar13)();
            }
            lVar16 = local_d0;
            lVar18 = local_d8;
            local_d8 = 0;
            local_d0 = 0;
            param_1[0x1d] = lVar18;
            lVar18 = param_1[0x1e];
            param_1[0x1e] = lVar16;
            if (lVar18 != 0) {
              std::__shared_weak_count::__release_weak();
            }
            *(char *)((long)param_1 + 0xfc) = local_c4;
            *(undefined4 *)(param_1 + 0x1f) = local_c8;
            if (local_c4 != '\0') {
              FUN_01f6f208(&local_d8);
            }
            if (local_d0 != 0) {
              std::__shared_weak_count::__release_weak();
            }
            if ((local_100 & 1) != 0) {
              (**(code **)(*plStack_e8 + 0x18))
                        (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
            }
            if ((local_120 & 1) != 0) {
              (**(code **)(*plStack_108 + 0x18))
                        (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1
                        );
            }
            if (((ulong)local_140 & 1) != 0) {
              (**(code **)(*plStack_128 + 0x18))
                        (plStack_128,local_130,(ulong)local_140 & 0xfffffffffffffffe,1);
            }
            if (local_148 != (long *)0x0) {
              plVar7 = local_148 + 1;
              do {
                lVar18 = *plVar7;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar5) {
                  *plVar7 = lVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_148 + 0x10))(local_148);
                std::__shared_weak_count::__release_weak();
              }
            }
            if ((local_170 & 1) != 0) {
              (**(code **)(*plStack_158 + 0x18))
                        (plStack_158,local_160,CONCAT44(uStack_16c,local_170) & 0xfffffffffffffffe,1
                        );
            }
            if (local_178 != (long *)0x0) {
              plVar7 = local_178 + 1;
              do {
                lVar18 = *plVar7;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar5) {
                  *plVar7 = lVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_178 + 0x10))(local_178);
                std::__shared_weak_count::__release_weak();
              }
            }
            FUN_00551dcc(param_1 + 0x1d);
            plVar7 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
            lVar18 = *plVar7;
            uVar10 = FUN_00561750();
            FUN_01f6ef54(&local_180,lVar18 + 0x10,uVar10);
            if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
              lVar18 = (long)param_1 + 0x169;
            }
            else {
              lVar18 = param_1[0x2f];
            }
            FUN_01f6fa0c(&local_150,&local_180,lVar18);
            ppuVar12 = (undefined **)FUN_0053a47c(&local_150);
            local_70 = (undefined ***)0x0;
            local_70 = (undefined ***)(**(code **)(*ppuVar12 + 0x10))(ppuVar12,0x20,8);
            *local_70 = &PTR_LAB_044c9890;
            local_70[1] = ppuVar12;
            local_70[2] = ppuVar19;
            local_70[3] = ppuVar6;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar5) {
                *ppuVar1 = *ppuVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar7 = (long *)FUN_0053a47c(&local_150);
            local_a0 = (long *)0x0;
            local_a0 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,8);
            *local_a0 = (long)&PTR_LAB_044c99f0;
            local_a0[1] = (long)plVar7;
            local_a0[2] = lVar15;
            local_a0[3] = (long)plVar8;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *plVar3 = *plVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN_0053a3ac(&local_d8,&local_150,&local_90,&lStack_c0);
            if (local_a0 != (long *)0x0) {
              if (local_a0 == &lStack_c0) {
                pcVar13 = *(code **)(*local_a0 + 0x10);
              }
              else {
                pcVar13 = *(code **)(*local_a0 + 0x18);
              }
              (*pcVar13)();
            }
            if (local_70 != (undefined ***)0x0) {
              if (local_70 == &local_90) {
                pcVar13 = (code *)(*local_70)[2];
              }
              else {
                pcVar13 = (code *)(*local_70)[3];
              }
              (*pcVar13)();
            }
            lVar15 = local_d0;
            lVar18 = local_d8;
            local_d8 = 0;
            local_d0 = 0;
            lVar16 = param_1[0x21];
            param_1[0x20] = lVar18;
            param_1[0x21] = lVar15;
            if (lVar16 != 0) {
              std::__shared_weak_count::__release_weak();
            }
            *(char *)((long)param_1 + 0x114) = local_c4;
            *(undefined4 *)(param_1 + 0x22) = local_c8;
            if (local_c4 != '\0') {
              FUN_01f6f208(&local_d8);
            }
            if (local_d0 != 0) {
              std::__shared_weak_count::__release_weak();
            }
            if ((local_100 & 1) != 0) {
              (**(code **)(*plStack_e8 + 0x18))
                        (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
            }
            if ((local_120 & 1) != 0) {
              (**(code **)(*plStack_108 + 0x18))
                        (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1
                        );
            }
            if (((ulong)local_140 & 1) != 0) {
              (**(code **)(*plStack_128 + 0x18))
                        (plStack_128,local_130,(ulong)local_140 & 0xfffffffffffffffe,1);
            }
            if (local_148 != (long *)0x0) {
              plVar7 = local_148 + 1;
              do {
                lVar18 = *plVar7;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar5) {
                  *plVar7 = lVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_148 + 0x10))(local_148);
                std::__shared_weak_count::__release_weak();
              }
            }
            if ((local_170 & 1) != 0) {
              (**(code **)(*plStack_158 + 0x18))
                        (plStack_158,local_160,CONCAT44(uStack_16c,local_170) & 0xfffffffffffffffe,1
                        );
            }
            if (local_178 != (long *)0x0) {
              plVar7 = local_178 + 1;
              do {
                lVar18 = *plVar7;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar5) {
                  *plVar7 = lVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_178 + 0x10))(local_178);
                std::__shared_weak_count::__release_weak();
              }
            }
            FUN_00551dcc(param_1 + 0x20);
            plVar7 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
            lVar18 = *plVar7;
            uVar10 = FUN_00560c54();
            FUN_01f6ef54(&lStack_c0,lVar18 + 0x10,uVar10);
            local_148 = (long *)FUN_01f70668(&lStack_c0);
            local_150 = &PTR_LAB_044c9aa0;
            local_130 = &local_150;
            local_140 = param_1;
            uStack_88 = FUN_01f70668(&lStack_c0);
            local_90 = &PTR_LAB_044c9af8;
            local_80 = param_1;
            local_70 = &local_90;
            FUN_01f7067c(&local_180,&lStack_c0,&local_150,&local_90);
            if (local_70 != (undefined ***)0x0) {
              if (local_70 == &local_90) {
                pcVar13 = (code *)(*local_70)[2];
              }
              else {
                pcVar13 = (code *)(*local_70)[3];
              }
              (*pcVar13)();
            }
            if (local_130 != (undefined ***)0x0) {
              if (local_130 == &local_150) {
                pcVar13 = (code *)(*local_130)[2];
              }
              else {
                pcVar13 = (code *)(*local_130)[3];
              }
              (*pcVar13)();
            }
            plVar7 = local_178;
            lVar18 = local_180;
            local_180 = 0;
            local_178 = (long *)0x0;
            param_1[0x1a] = lVar18;
            lVar18 = param_1[0x1b];
            param_1[0x1b] = (long)plVar7;
            if (lVar18 != 0) {
              std::__shared_weak_count::__release_weak();
            }
            *(char *)((long)param_1 + 0xe4) = (char)uStack_16c;
            *(uint *)(param_1 + 0x1c) = local_170;
            if ((char)uStack_16c != '\0') {
              FUN_01f6f208(&local_180);
            }
            if (local_178 != (long *)0x0) {
              std::__shared_weak_count::__release_weak();
            }
            if ((local_b0 & 1) != 0) {
              (**(code **)(*plStack_98 + 0x18))
                        (plStack_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
            }
            if (local_b8 != (long *)0x0) {
              plVar7 = local_b8 + 1;
              do {
                lVar18 = *plVar7;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar5) {
                  *plVar7 = lVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar18 == 0) {
                (**(code **)(*local_b8 + 0x10))(local_b8);
                std::__shared_weak_count::__release_weak();
              }
            }
            FUN_00551dcc(param_1 + 0x1a);
            std::__shared_weak_count::__release_weak();
            std::__shared_weak_count::__release_weak();
            std::__shared_weak_count::__release_weak();
            return;
          }
        }
        goto LAB_00556360;
      }
    }
  }
                    /* try { // try from 0055635c to 0055635f has its CatchHandler @ 00556374 */
  FUN_00559590();
LAB_00556360:
                    /* try { // try from 00556360 to 00556363 has its CatchHandler @ 00556364 */
  uVar10 = FUN_00559590();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00556360 with catch @ 00556364
                        */
  std::__shared_weak_count::__release_weak();
  std::__shared_weak_count::__release_weak();
                    /* WARNING: Subroutine does not return */
  FUN_001fc5f0(uVar10);
}


