/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f01c8; name: FUN_005f01c8
 */


/* WARNING: Removing unreachable block (ram,0x005f108c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_005f01c8(long param_1)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long *plVar8;
  undefined2 uVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long *****ppppplVar19;
  long lVar20;
  long ***ppplVar21;
  long lVar22;
  long ******pppppplVar23;
  long ***ppplVar24;
  long ***ppplVar25;
  long ****pppplVar26;
  long ******pppppplVar27;
  long *******ppppppplVar28;
  ulong uVar29;
  long *******ppppppplVar30;
  ulong uVar31;
  long *******ppppppplVar32;
  long *******ppppppplVar33;
  undefined8 *puVar34;
  long *plVar35;
  long ****pppplVar36;
  long lVar37;
  ulong uVar38;
  long ****pppplVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long *****ppppplVar42;
  undefined8 uVar43;
  long *****ppppplVar44;
  long *****ppppplVar45;
  long ******pppppplStack_240;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  undefined4 local_218 [2];
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  long *local_1f8;
  long *******local_1f0;
  long *******ppppppplStack_1e8;
  long *******local_1e0;
  long *******local_1d8;
  byte local_1d0;
  undefined7 uStack_1cf;
  undefined8 local_1c0;
  long *plStack_1b8;
  long *local_180;
  long *local_178;
  long ******local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long ******local_140;
  long ****pppplStack_138;
  long *******local_130;
  long *******ppppppplStack_128;
  long *****ppppplStack_120;
  long *****ppppplStack_118;
  long *****local_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long ******local_e0;
  long *****ppppplStack_d8;
  long *******local_d0;
  long *******ppppppplStack_c8;
  undefined1 auStack_b8 [64];
  long *****local_78;
  undefined8 local_70;
  
  lVar37 = *(long *)(param_1 + 0x158);
  if (*(int *)(param_1 + 0x11c) == 1) {
    FUN_006c3948(&pppppplStack_240);
    if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
      lVar22 = param_1 + 0xf9;
    }
    else {
      lVar22 = *(long *)(param_1 + 0x108);
    }
    local_140 = *(long *******)(param_1 + 200);
    pppplStack_138 = *(long *****)(param_1 + 0xd0);
    uVar9 = *(undefined2 *)(param_1 + 0x118);
    if (pppplStack_138 != (long ****)0x0) {
      pppplVar26 = pppplStack_138 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
        if (bVar12) {
          *pppplVar26 = (long ***)((long)*pppplVar26 + 1);
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    ppppppplStack_128 = (long *******)local_140[0x39];
    local_130 = (long *******)local_140[0x38];
    ppppplStack_118 = local_140[0x3b];
    ppppplStack_120 = local_140[0x3a];
    ppppplStack_108 = local_140[0x3d];
    local_110 = local_140[0x3c];
    ppppplStack_f8 = local_140[0x3f];
    ppppplStack_100 = local_140[0x3e];
    local_f0 = 0;
    local_e8 = (long *)0x0;
    FUN_0024f2d0(&local_210,uVar9);
    puVar40 = (undefined8 *)((ulong)&local_210 | 1);
    if (((ulong)local_210 & 1) != 0) {
      puVar40 = local_200;
    }
    local_218[0] = 2;
    FUN_005f1468(&local_1f0,lVar22,puVar40,0,local_218);
    FUN_005f13c0(&local_180,&local_140,&local_1f0);
    ppppplVar19 = (long *****)(PTR_DAT_047cbb30 + 0x10);
    local_d0 = (long *******)&local_d0;
    local_70 = 0;
    local_78 = (long *****)0x0;
    ppppplStack_d8 = (long *****)(PTR_DAT_047cbb38 + 0x10);
    local_e0 = (long ******)ppppplVar19;
    ppppppplStack_c8 = local_d0;
    (**(code **)(*local_180 + 0x10))(local_180,auStack_b8);
    local_78 = (long *****)&ppppplStack_d8;
    thunk_FUN_006c4e40(&local_e0);
    local_e0 = (long ******)ppppplVar19;
    FUN_006c4274(&ppppplStack_d8);
    plVar8 = local_178;
    plVar35 = local_180;
    local_180 = (long *)0x0;
    local_178 = (long *)0x0;
    (**(code **)(*plVar35 + 0x30))(&local_170);
    if (plVar8 != (long *)0x0) {
      plVar35 = plVar8 + 1;
      do {
        lVar22 = *plVar35;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar12) {
          *plVar35 = lVar22 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_178 != (long *)0x0) {
      plVar35 = local_178 + 1;
      do {
        lVar22 = *plVar35;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar12) {
          *plVar35 = lVar22 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*local_178 + 0x10))(local_178);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((local_1d0 & 1) != 0) {
      (**(code **)(*plStack_1b8 + 0x18))
                (plStack_1b8,local_1c0,CONCAT71(uStack_1cf,local_1d0) & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_1f0 & 1) != 0) {
      (*(code *)(*local_1d8)[3])(local_1d8,local_1e0,(ulong)local_1f0 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_210 & 1) != 0) {
      (**(code **)(*local_1f8 + 0x18))(local_1f8,local_200,(ulong)local_210 & 0xfffffffffffffffe,1);
    }
    ppppppplStack_c8 = (long *******)FUN_01cf7e20();
    lVar22 = CONCAT44(uStack_164,uStack_168) - (long)local_170;
    local_e0 = (long ******)0x0;
    ppppplStack_d8 = (long *****)0x0;
    local_d0 = (long *******)0x0;
    if (lVar22 == 0) {
      bVar12 = false;
    }
    else {
      if ((ulong)(lVar22 >> 5) >> 0x3b != 0) {
                    /* try { // try from 005f1220 to 005f1227 has its CatchHandler @ 005f1228 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      local_e0 = (long ******)(*(code *)(*ppppppplStack_c8)[2])(ppppppplStack_c8,lVar22,0x10);
      local_d0 = (long *******)(local_e0 + (lVar22 >> 5) * 4);
      ppppplVar19 = (long *****)local_e0;
      pppppplVar27 = local_170;
      if (local_170 == (long ******)CONCAT44(uStack_164,uStack_168)) {
        ppppplStack_d8 = (long *****)local_e0;
LAB_005f04a4:
        bVar12 = false;
        bVar10 = false;
        if (ppppplStack_d8 == (long *****)0x0) goto LAB_005f04d4;
      }
      else {
        do {
          pppppplVar23 = pppppplVar27 + 4;
          ppppplVar42 = *pppppplVar27;
          ppppplVar45 = pppppplVar27[3];
          ppppplVar44 = pppppplVar27[2];
          ppppplStack_d8 = ppppplVar19 + 4;
          ppppplVar19[1] = (long ****)pppppplVar27[1];
          *ppppplVar19 = (long ****)ppppplVar42;
          ppppplVar19[3] = (long ****)ppppplVar45;
          ppppplVar19[2] = (long ****)ppppplVar44;
          ppppplVar19 = ppppplStack_d8;
          pppppplVar27 = pppppplVar23;
        } while ((long ******)CONCAT44(uStack_164,uStack_168) != pppppplVar23);
        if (local_e0 == (long ******)ppppplStack_d8) goto LAB_005f04a4;
        pppppplStack_240 = (long ******)*local_e0;
        uStack_22c = *(undefined8 *)((long)local_e0 + 0x14);
        uStack_230 = (undefined4)((ulong)*(undefined8 *)((long)local_e0 + 0xc) >> 0x20);
        uStack_238 = SUB84(local_e0[1],0);
        local_234 = (undefined4)((ulong)local_e0[1] >> 0x20);
        bVar10 = true;
      }
      bVar12 = bVar10;
      ppppplStack_d8 = (long *****)local_e0;
      (*(code *)(*ppppppplStack_c8)[3])
                (ppppppplStack_c8,local_e0,(long)local_d0 - (long)local_e0,0x10);
    }
LAB_005f04d4:
    if (local_170 != (long ******)0x0) {
      uStack_168 = SUB84(local_170,0);
      uStack_164 = (undefined4)((ulong)local_170 >> 0x20);
      (**(code **)(*(long *)CONCAT44(uStack_154,uStack_158) + 0x18))
                ((long *)CONCAT44(uStack_154,uStack_158),local_170,
                 CONCAT44(uStack_15c,local_160) - (long)local_170,0x10);
    }
    if (local_e8 != (long *)0x0) {
      plVar35 = local_e8 + 1;
      do {
        lVar22 = *plVar35;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar10) {
          *plVar35 = lVar22 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (pppplStack_138 != (long ****)0x0) {
      pppplVar26 = pppplStack_138 + 1;
      do {
        ppplVar24 = *pppplVar26;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
        if (bVar10) {
          *pppplVar26 = (long ***)((long)ppplVar24 + -1);
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (ppplVar24 == (long ***)0x0) {
        (*(code *)(*pppplStack_138)[2])(pppplStack_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (bVar12) {
      local_200 = (undefined8 *)0x0;
      local_210 = (undefined8 *)0x0;
      local_208 = (undefined8 *)0x0;
      local_1f8 = (long *)FUN_01cf7e20();
      if (*(long *)(param_1 + 0x140) != 0) {
        ppplVar24 = (long ***)(PTR_DAT_047ceb20 + 0x10);
        ppplVar1 = (long ***)(PTR_DAT_047ceb28 + 0x10);
        uVar38 = 0;
        ppplVar2 = (long ***)(PTR_DAT_047ceb30 + 0x10);
        do {
          local_e0 = (long ******)0x5f5e100;
          FUN_00248820(&local_e0);
          pppplVar26 = *(long *****)(param_1 + 200);
          pppplVar5 = *(long *****)(param_1 + 0xd0);
          if (pppplVar5 != (long ****)0x0) {
            pppplVar3 = pppplVar5 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
              if (bVar12) {
                *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          pppplVar3 = *(long *****)(param_1 + 0xd8);
          pppplVar6 = *(long *****)(param_1 + 0xe0);
          if (pppplVar6 != (long ****)0x0) {
            pppplVar4 = pppplVar6 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar4,0x10);
              if (bVar12) {
                *pppplVar4 = (long ***)((long)*pppplVar4 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          pppplVar4 = *(long *****)(param_1 + 0xe8);
          pppplVar7 = *(long *****)(param_1 + 0xf0);
          if (pppplVar7 != (long ****)0x0) {
            pppplVar17 = pppplVar7 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
              if (bVar12) {
                *pppplVar17 = (long ***)((long)*pppplVar17 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          uStack_168 = uStack_238;
          local_170 = pppppplStack_240;
          uStack_15c = (undefined4)uStack_22c;
          uStack_158 = (undefined4)((ulong)uStack_22c >> 0x20);
          uStack_164 = local_234;
          local_160 = uStack_230;
          pppplVar36 = (long ****)pppplVar26[0x48];
          ppplVar21 = pppplVar26[0x97];
          pppplVar17 = (long ****)(*(code *)(*pppplVar36)[2])(pppplVar36,0x88,8);
          pppplVar17[2] = (long ***)0x0;
          pppplVar39 = pppplVar17 + 1;
          *pppplVar39 = (long ***)0x0;
          pppplVar18 = pppplVar17 + 4;
          *pppplVar17 = ppplVar24;
          pppplVar17[3] = (long ***)pppplVar36;
          FUN_006c4254();
          pppplVar17[4] = ppplVar1;
          nn::os::InitializeEvent(pppplVar17 + 6,0,0);
          pppplVar17[4] = ppplVar2;
          nn::os::InitializeMutex((MutexType *)(pppplVar17 + 0xb),false,0);
          *(undefined1 *)(pppplVar17 + 0x10) = 0;
          if (pppplVar17 != (long ****)0x0) {
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar39,0x10);
              if (bVar12) {
                *pppplVar39 = (long ***)((long)*pppplVar39 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          ppppplVar19 = (long *****)(*(code *)(*pppplVar36)[2])(pppplVar36,0x1b0,0x10);
          ppppplVar19[2] = (long ****)0x0;
          ppppplVar42 = ppppplVar19 + 1;
          *ppppplVar42 = (long ****)0x0;
          *ppppplVar19 = (long ****)&PTR_LAB_044d00e8;
          ppppplVar19[4] = pppplVar36;
          FUN_006c5398(ppppplVar19 + 6);
          ppppplVar19[6] = (long ****)&PTR_LAB_044d0120;
          lVar22 = (*(code *)(*pppplVar36)[2])(pppplVar36,0x10000,0x10);
          if (lVar22 == 0) {
            local_e0 = (long ******)CONCAT44(local_e0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e0,"");
          }
          FUN_006c4058(ppppplVar19 + 0xc,pppplVar18,0,lVar22,0x10000,1);
          ppppplVar19[0xc] = (long ****)&PTR_LAB_044d0150;
          ppppplVar19[0x30] = pppplVar36;
          ppppplVar19[0x31] = (long ****)0x10000;
          *(undefined1 *)((long)ppppplVar19 + 0x1a1) = 1;
          ppppplVar19[0x32] = pppplVar18;
          ppppplVar19[0x33] = pppplVar17;
          if (pppplVar5 != (long ****)0x0) {
            pppplVar36 = pppplVar5 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (pppplVar6 != (long ****)0x0) {
            pppplVar36 = pppplVar6 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (pppplVar7 != (long ****)0x0) {
            pppplVar36 = pppplVar7 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          ppppppplStack_1e8 = (long *******)CONCAT44(uStack_164,uStack_168);
          local_1d8 = (long *******)CONCAT44(uStack_154,uStack_158);
          local_1e0 = (long *******)CONCAT44(uStack_15c,local_160);
          local_140 = local_170;
          if (pppplVar5 != (long ****)0x0) {
            pppplVar36 = pppplVar5 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (pppplVar6 != (long ****)0x0) {
            pppplVar36 = pppplVar6 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (pppplVar7 != (long ****)0x0) {
            pppplVar36 = pppplVar7 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          local_1f0 = (long *******)local_170;
          if (pppplVar5 != (long ****)0x0) {
            pppplVar36 = pppplVar5 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (pppplVar6 != (long ****)0x0) {
            pppplVar36 = pppplVar6 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          if (pppplVar7 != (long ****)0x0) {
            pppplVar36 = pppplVar7 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar36,0x10);
              if (bVar12) {
                *pppplVar36 = (long ***)((long)*pppplVar36 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          local_e0 = local_170;
          ppppplVar19[0x26] = pppplVar26;
          ppppplVar19[0x27] = pppplVar5;
          if (pppplVar5 != (long ****)0x0) {
            pppplVar26 = pppplVar5 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)*pppplVar26 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          ppppplVar19[0x28] = pppplVar3;
          ppppplVar19[0x29] = pppplVar6;
          if (pppplVar6 != (long ****)0x0) {
            pppplVar26 = pppplVar6 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)*pppplVar26 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          ppppplVar19[0x2a] = pppplVar4;
          ppppplVar19[0x2b] = pppplVar7;
          pppplStack_138 = (long ****)ppppppplStack_1e8;
          local_130 = local_1e0;
          ppppppplStack_128 = local_1d8;
          ppppplStack_d8 = (long *****)ppppppplStack_1e8;
          local_d0 = local_1e0;
          ppppppplStack_c8 = local_1d8;
          if (pppplVar7 == (long ****)0x0) {
            ppppplVar19[0x2d] = (long ****)ppppppplStack_1e8;
            ppppplVar19[0x2c] = (long ****)local_170;
            ppppplVar19[0x2f] = (long ****)local_1d8;
            ppppplVar19[0x2e] = (long ****)local_1e0;
          }
          else {
            pppplVar26 = pppplVar7 + 1;
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)*pppplVar26 + 1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            ppppplVar19[0x2d] = (long ****)ppppppplStack_1e8;
            ppppplVar19[0x2c] = (long ****)local_170;
            ppppplVar19[0x2f] = (long ****)local_1d8;
            ppppplVar19[0x2e] = (long ****)local_1e0;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar6 != (long ****)0x0) {
            pppplVar26 = pppplVar6 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar6)[2])(pppplVar6);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar5 != (long ****)0x0) {
            pppplVar26 = pppplVar5 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar5)[2])(pppplVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar7 != (long ****)0x0) {
            pppplVar26 = pppplVar7 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar6 != (long ****)0x0) {
            pppplVar26 = pppplVar6 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar6)[2])(pppplVar6);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar5 != (long ****)0x0) {
            pppplVar26 = pppplVar5 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar5)[2])(pppplVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar7 != (long ****)0x0) {
            pppplVar26 = pppplVar7 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar6 != (long ****)0x0) {
            pppplVar26 = pppplVar6 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar6)[2])(pppplVar6);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar5 != (long ****)0x0) {
            pppplVar26 = pppplVar5 + 1;
            do {
              ppplVar25 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar25 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar25 == (long ***)0x0) {
              (*(code *)(*pppplVar5)[2])(pppplVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
          local_1f0 = (long *******)0x0;
          ppppppplStack_1e8 = (long *******)0x0;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar42,0x10);
            if (bVar12) {
              *ppppplVar42 = (long ****)((long)*ppppplVar42 + 1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          local_e0 = (long ******)(ppppplVar19 + 6);
          ppppplStack_d8 = ppppplVar19;
          (*(code *)**ppplVar21)(ppplVar21,&local_e0,&local_1f0);
          if (ppppplStack_d8 != (long *****)0x0) {
            ppppplVar44 = ppppplStack_d8 + 1;
            do {
              pppplVar26 = *ppppplVar44;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppplVar44,0x10);
              if (bVar12) {
                *ppppplVar44 = (long ****)((long)pppplVar26 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (pppplVar26 == (long ****)0x0) {
              (*(code *)(*ppppplStack_d8)[2])(ppppplStack_d8);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (ppppppplStack_1e8 != (long *******)0x0) {
            ppppppplVar30 = ppppppplStack_1e8 + 1;
            do {
              pppppplVar27 = *ppppppplVar30;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
              if (bVar12) {
                *ppppppplVar30 = (long ******)((long)pppppplVar27 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (pppppplVar27 == (long ******)0x0) {
              (*(code *)(*ppppppplStack_1e8)[2])(ppppppplStack_1e8);
              std::__shared_weak_count::__release_weak();
            }
          }
          do {
            pppplVar26 = *ppppplVar42;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppplVar42,0x10);
            if (bVar12) {
              *ppppplVar42 = (long ****)((long)pppplVar26 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (pppplVar26 == (long ****)0x0) {
            (*(code *)(*ppppplVar19)[2])(ppppplVar19);
            std::__shared_weak_count::__release_weak();
          }
          if (pppplVar7 != (long ****)0x0) {
            pppplVar26 = pppplVar7 + 1;
            do {
              ppplVar21 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar21 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar21 == (long ***)0x0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar6 != (long ****)0x0) {
            pppplVar26 = pppplVar6 + 1;
            do {
              ppplVar21 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar21 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar21 == (long ***)0x0) {
              (*(code *)(*pppplVar6)[2])(pppplVar6);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (pppplVar5 == (long ****)0x0) {
LAB_005f0c48:
            if (local_200 <= local_208) goto LAB_005f0c54;
LAB_005f05a8:
            *local_208 = pppplVar18;
            local_208[1] = pppplVar17;
            local_208 = local_208 + 2;
          }
          else {
            pppplVar26 = pppplVar5 + 1;
            do {
              ppplVar21 = *pppplVar26;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppplVar26,0x10);
              if (bVar12) {
                *pppplVar26 = (long ***)((long)ppplVar21 + -1);
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (ppplVar21 != (long ***)0x0) goto LAB_005f0c48;
            (*(code *)(*pppplVar5)[2])(pppplVar5);
            std::__shared_weak_count::__release_weak();
            if (local_208 < local_200) goto LAB_005f05a8;
LAB_005f0c54:
            lVar22 = (long)local_208 - (long)local_210 >> 4;
            uVar31 = lVar22 + 1;
            if (uVar31 >> 0x3c != 0) {
                    /* try { // try from 005f1210 to 005f1217 has its CatchHandler @ 005f126c */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar29 = (long)local_200 - (long)local_210 >> 3;
            if (uVar31 <= uVar29) {
              uVar31 = uVar29;
            }
            if (0x7fffffffffffffe < (ulong)((long)local_200 - (long)local_210 >> 4)) {
              uVar31 = 0xfffffffffffffff;
            }
            if (uVar31 == 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = (**(code **)(*local_1f8 + 0x10))(local_1f8,uVar31 << 4,8);
            }
            puVar15 = local_200;
            puVar14 = local_210;
            puVar40 = (undefined8 *)(lVar20 + lVar22 * 0x10);
            local_200 = (undefined8 *)(lVar20 + uVar31 * 0x10);
            *puVar40 = pppplVar18;
            puVar40[1] = pppplVar17;
            puVar41 = puVar40;
            puVar13 = local_208;
            while( true ) {
              puVar16 = puVar40 + 2;
              puVar34 = local_208;
              if (puVar13 == local_210) break;
              puVar34 = puVar13 + -2;
              uVar43 = *puVar34;
              puVar41[-1] = puVar13[-1];
              puVar41[-2] = uVar43;
              *puVar34 = 0;
              puVar13[-1] = 0;
              puVar41 = puVar41 + -2;
              puVar13 = puVar34;
            }
            while( true ) {
              local_210 = puVar41;
              local_208 = puVar16;
              if (puVar34 == puVar14) break;
              plVar35 = (long *)puVar34[-1];
              puVar34 = puVar34 + -2;
              puVar16 = local_208;
              puVar41 = local_210;
              if (plVar35 != (long *)0x0) {
                plVar8 = plVar35 + 1;
                do {
                  lVar22 = *plVar8;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar12) {
                    *plVar8 = lVar22 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (lVar22 == 0) {
                  (**(code **)(*plVar35 + 0x10))(plVar35);
                  std::__shared_weak_count::__release_weak();
                  puVar16 = local_208;
                  puVar41 = local_210;
                }
              }
            }
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)(*local_1f8 + 0x18))(local_1f8,puVar14,(long)puVar15 - (long)puVar14,8);
            }
          }
          uVar38 = uVar38 + 1;
        } while (uVar38 < *(ulong *)(param_1 + 0x140));
      }
      local_1f0 = (long *******)0x0;
      ppppppplStack_1e8 = (long *******)0x0;
      local_1e0 = (long *******)0x0;
      local_1d8 = (long *******)FUN_01cf7e20();
      puVar40 = local_208;
      if (local_210 == local_208) {
        ppppppplVar33 = (long *******)0x0;
        ppppppplVar28 = (long *******)0x0;
        ppppppplVar30 = (long *******)0x0;
      }
      else {
        ppppplVar19 = (long *****)(PTR_DAT_047cbb30 + 0x10);
        ppppplVar42 = (long *****)(PTR_DAT_047cbb38 + 0x10);
        puVar41 = local_210;
        do {
          local_78 = (long *****)0x0;
          local_70 = 0;
          local_e0 = (long ******)ppppplVar19;
          ppppplStack_d8 = ppppplVar42;
          local_d0 = (long *******)&local_d0;
          ppppppplStack_c8 = (long *******)&local_d0;
          (**(code **)(*(long *)*puVar41 + 0x10))((long *)*puVar41,auStack_b8);
          local_78 = (long *****)&ppppplStack_d8;
          thunk_FUN_006c4e40(&local_e0);
          local_e0 = (long ******)ppppplVar19;
          FUN_006c4274(&ppppplStack_d8);
          plVar35 = (long *)*puVar41;
          plVar8 = (long *)puVar41[1];
          *puVar41 = 0;
          puVar41[1] = 0;
          pppppplVar27 = (long ******)(**(code **)(*plVar35 + 0x30))();
          if (plVar8 == (long *)0x0) {
LAB_005f0e7c:
            if (local_1e0 <= ppppppplStack_1e8) goto LAB_005f0e88;
LAB_005f0dfc:
            *ppppppplStack_1e8 = pppppplVar27;
            ppppppplVar30 = local_1f0;
            ppppppplStack_1e8 = ppppppplStack_1e8 + 1;
            ppppppplVar28 = local_1e0;
          }
          else {
            plVar35 = plVar8 + 1;
            do {
              lVar22 = *plVar35;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar12) {
                *plVar35 = lVar22 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (lVar22 != 0) goto LAB_005f0e7c;
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
            if (ppppppplStack_1e8 < local_1e0) goto LAB_005f0dfc;
LAB_005f0e88:
            lVar22 = (long)ppppppplStack_1e8 - (long)local_1f0 >> 3;
            uVar38 = lVar22 + 1;
            if (uVar38 >> 0x3d != 0) {
                    /* try { // try from 005f1218 to 005f121f has its CatchHandler @ 005f1268 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar31 = (long)local_1e0 - (long)local_1f0 >> 2;
            if (uVar38 <= uVar31) {
              uVar38 = uVar31;
            }
            if (0xffffffffffffffe < (ulong)((long)local_1e0 - (long)local_1f0 >> 3)) {
              uVar38 = 0x1fffffffffffffff;
            }
            if (uVar38 == 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = (*(code *)(*local_1d8)[2])(local_1d8,uVar38 << 3,8);
            }
            ppppppplVar33 = local_1f0;
            ppppppplVar30 = (long *******)(lVar20 + lVar22 * 8);
            ppppppplVar28 = (long *******)(lVar20 + uVar38 * 8);
            ppppppplVar32 = ppppppplVar30 + 1;
            *ppppppplVar30 = pppppplVar27;
            while (ppppppplStack_1e8 != local_1f0) {
              ppppppplStack_1e8 = ppppppplStack_1e8 + -1;
              ppppppplVar30 = ppppppplVar30 + -1;
              *ppppppplVar30 = *ppppppplStack_1e8;
            }
            ppppppplStack_1e8 = ppppppplVar32;
            if (local_1f0 != (long *******)0x0) {
              lVar22 = (long)local_1e0 - (long)local_1f0;
              local_1f0 = ppppppplVar30;
              local_1e0 = ppppppplVar28;
              (*(code *)(*local_1d8)[3])(local_1d8,ppppppplVar33,lVar22,8);
              ppppppplVar30 = local_1f0;
              ppppppplVar28 = local_1e0;
            }
          }
          local_1e0 = ppppppplVar28;
          local_1f0 = ppppppplVar30;
          puVar41 = puVar41 + 2;
        } while (puVar41 != puVar40);
        ppppppplVar33 = local_1f0;
        ppppppplVar30 = local_1f0;
        if (local_1f0 == ppppppplStack_1e8) {
          ppppppplVar28 = local_1f0;
        }
        else {
          ppppppplVar28 = ppppppplStack_1e8;
          if (*local_1f0 != (long ******)0x2710) {
            do {
              ppppppplVar30 = ppppppplVar30 + 1;
              if (ppppppplStack_1e8 == ppppppplVar30) {
                ppppppplVar30 = ppppppplStack_1e8;
                goto LAB_005f106c;
              }
            } while (*ppppppplVar30 != (long ******)0x2710);
          }
          ppppppplVar32 = ppppppplVar30;
          if (ppppppplVar30 == ppppppplStack_1e8) {
          }
          else {
            while (ppppppplVar30 = ppppppplVar30 + 1, ppppppplVar30 != ppppppplStack_1e8) {
              if (*ppppppplVar30 != (long ******)0x2710) {
                *ppppppplVar32 = *ppppppplVar30;
                ppppppplVar32 = ppppppplVar32 + 1;
              }
            }
            ppppppplVar30 = ppppppplVar32;
          }
        }
      }
LAB_005f106c:
      if (ppppppplVar28 != ppppppplVar30) {
        ppppppplVar28 = ppppppplVar30;
        ppppppplStack_1e8 = ppppppplVar30;
      }
      if (ppppppplVar33 == ppppppplVar28) {
        pppppplVar27 = (long ******)0x2710;
        if (ppppppplVar33 != (long *******)0x0) goto LAB_005f1100;
      }
      else {
                    /* try { // try from 005f10ac to 005f10bb has its CatchHandler @ 005f12a4 */
        FUN_005f4580(ppppppplVar33,ppppppplVar28,&local_e0);
        uVar38 = (ulong)((long)ppppppplStack_1e8 - (long)local_1f0 >> 3) >> 1;
        ppppppplVar33 = local_1f0;
        if (((uint)((long)ppppppplStack_1e8 - (long)local_1f0) >> 3 & 1) == 0) {
          lVar22 = (long)local_1f0[uVar38] + (long)(local_1f0 + uVar38)[-1];
          if (lVar22 < 0) {
            lVar22 = lVar22 + 1;
          }
          pppppplVar27 = (long ******)(lVar22 >> 1);
        }
        else {
          pppppplVar27 = local_1f0[uVar38];
        }
LAB_005f1100:
        ppppppplStack_1e8 = ppppppplVar33;
        (*(code *)(*local_1d8)[3])(local_1d8,ppppppplVar33,(long)local_1e0 - (long)ppppppplVar33,8);
      }
      puVar41 = local_210;
      puVar40 = local_208;
      if (local_210 != (undefined8 *)0x0) {
        while (puVar40 != puVar41) {
          plVar35 = (long *)puVar40[-1];
          puVar40 = puVar40 + -2;
          if (plVar35 != (long *)0x0) {
            plVar8 = plVar35 + 1;
            do {
              lVar22 = *plVar8;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar12) {
                *plVar8 = lVar22 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plVar35 + 0x10))(plVar35);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        local_208 = puVar41;
        (**(code **)(*local_1f8 + 0x18))(local_1f8,local_210,(long)local_200 - (long)local_210,8);
      }
      goto LAB_005f11a8;
    }
  }
  pppppplVar27 = (long ******)0x2710;
LAB_005f11a8:
  nn::os::LockMutex((MutexType *)(lVar37 + 0x38));
  *(long *******)(lVar37 + 0x58) = pppppplVar27;
  *(undefined1 *)(lVar37 + 0x60) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar37 + 0x38));
  return 1;
}


