/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01181d0c; name: FUN_01181d0c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01181d0c(long ****param_1)

{
  short *psVar1;
  ulong *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  short sVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  long lVar20;
  uint *puVar21;
  undefined8 uVar22;
  long ****pppplVar23;
  long ***ppplVar24;
  long **pplVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  uint uVar32;
  long **pplVar33;
  code *pcVar34;
  undefined1 *puVar35;
  uint uVar36;
  long ***ppplVar37;
  long ***ppplVar38;
  long **pplVar39;
  ulong uVar40;
  long lVar41;
  long ***ppplVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  long ***ppplVar45;
  long **pplVar46;
  long ***ppplVar47;
  ulong uVar48;
  undefined1 uVar49;
  long **pplVar50;
  long *plVar51;
  long *plVar52;
  long ****pppplVar53;
  undefined8 *puVar54;
  code *pcVar55;
  long ***ppplVar56;
  long *plVar57;
  long *plVar58;
  long ***ppplVar59;
  char *pcVar60;
  byte *pbVar61;
  long *plVar62;
  long ***local_350;
  byte *local_340;
  long ***local_320;
  long ****local_318;
  long ****local_310;
  long *local_308;
  long *local_300;
  long *local_2f8 [8];
  undefined1 local_2b8;
  undefined8 *local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  long ****local_270;
  long ***local_268;
  long ***local_260;
  long ***local_258;
  int local_250;
  undefined4 uStack_24c;
  long *local_248;
  long ****local_240;
  undefined8 *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  char *local_220;
  char *local_218;
  undefined8 *local_210;
  undefined8 uStack_208;
  char local_200 [4];
  char local_1fc [4];
  undefined8 *local_1f8;
  undefined8 uStack_1f0;
  long ***local_1e8;
  long *local_1e0;
  ulong *local_1d8;
  undefined8 uStack_1d0;
  long ****local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  long ****local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  long ****local_170;
  long ***local_168;
  code *local_160;
  code *local_158;
  long **local_150;
  long **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long **local_70 [2];
  
  switch(*(undefined1 *)((long)param_1 + 0x3b4)) {
  case 0:
    for (ppplVar47 = param_1[0x27]; ppplVar47 != param_1[0x28]; ppplVar47 = ppplVar47 + 1) {
      pplVar25 = *ppplVar47;
      if (*(char *)((long)pplVar25 + 0x1b2) == '\0') {
        if (pplVar25[0x1f] == (long *)0x0) {
          return 0;
        }
        if ((*(byte *)(pplVar25[0x1f] + 0x3d) & 1) == 0) {
          return 0;
        }
      }
      if (*(char *)((long)pplVar25 + 0x1b1) == '\0') {
        return 0;
      }
      for (plVar58 = pplVar25[0x2e]; plVar58 != (long *)0x0; plVar58 = (long *)*plVar58) {
        lVar41 = plVar58[6];
        lVar26 = lVar41 + 0x138;
        if (*(long *)(lVar41 + 0x180) != 0) {
          lVar26 = lVar41 + 0x178;
        }
        if ((*(long *)(lVar41 + 0x50) != 0) &&
           ((*(byte *)(*(long *)(lVar41 + 0x50) + 0x1e8) & 1) == 0)) {
          return 0;
        }
        if ((*(long *)(lVar26 + 8) != 0) && ((*(byte *)(*(long *)(lVar26 + 8) + 0x1e8) & 1) == 0)) {
          return 0;
        }
        if (*(long *)(lVar41 + 0x90) != 0) {
          if ((*(byte *)(*(long *)(lVar41 + 0x90) + 0x1e8) & 1) == 0) {
            return 0;
          }
          if (*(long *)(lVar41 + 200) == 0) {
            return 0;
          }
        }
      }
    }
    FUN_00c9e664(&local_1e8,param_1 + 0x1d);
    if (param_1[0x91] == (long ***)0x0) {
      if (local_1e0 == (long *)0x0) {
        plVar58 = (long *)0x0;
      }
      else {
        plVar58 = (long *)local_1e0[9];
      }
      ppplVar47 = (long ***)plVar58[1];
      if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar26 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_011859f8;
      *(long ****)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = ppplVar47;
      *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
      pppplVar23 = (long ****)(*(code *)(*ppplVar47)[2])(ppplVar47,0x340,0x10);
      if (pppplVar23 == (long ****)0x0) goto LAB_01185d04;
      FUN_0118a890();
      *(undefined4 *)(pppplVar23 + 3) = 0x100340;
      pppplVar23[1] = ppplVar47;
      pppplVar23[2] = (long ***)pppplVar23;
      *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
      (*(code *)(*pppplVar23)[0xb])(pppplVar23);
      pppplVar53 = pppplVar23 + 4;
      (*(code *)(*pppplVar53)[0x1d])(pppplVar53,plVar58);
      (*(code *)(*pppplVar53)[0xd])(pppplVar53);
      local_170 = pppplVar23;
      FUN_00df8c30(plVar58 + 0x21,&local_170);
      if (local_170 != (long ****)0x0) {
        ppplVar47 = local_170[0x13];
        psVar1 = (short *)((long)ppplVar47 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          ppplVar47[2] = (long **)0x0;
          (*(code *)(*local_170)[10])();
        }
        else if (sVar10 == 0) goto LAB_01184540;
      }
      (**(code **)(*plVar58 + 0x100))(plVar58,pppplVar53);
      plVar57 = plVar58 + 0x88;
      lVar41 = *plVar57;
      lVar26 = nn::os::GetCurrentThread();
      if (lVar26 != lVar41) {
        lVar26 = nn::os::GetCurrentThread();
LAB_011838d4:
        if (*plVar57 == 0) break;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar58 + 0x89));
        do {
          if (*plVar57 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar58 + 0x89));
              while (*plVar57 == 0) {
                cVar11 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                if (bVar17) {
                  *plVar57 = lVar26;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_011838e4;
              }
            } while( true );
          }
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
          if (bVar17) {
            *plVar57 = lVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
LAB_011838e4:
        bVar17 = false;
        goto LAB_011838e8;
      }
      plVar57 = (long *)0x0;
      bVar17 = true;
LAB_011838e8:
      if ((*(byte *)(plVar58 + 0x8b) >> 2 & 1) == 0) {
        FUN_00d37964(plVar58,0,0);
      }
      else {
        (*(code *)(*pppplVar53)[0x1f])(pppplVar53);
      }
      if (!bVar17) {
        *plVar57 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar57 + 1));
      }
      (*(code *)(*pppplVar23)[0xb])(pppplVar23);
      ppplVar47 = param_1[0x91];
      param_1[0x91] = (long ***)pppplVar23;
      if (ppplVar47 != (long ***)0x0) {
        (*(code *)(*ppplVar47)[0xc])();
        pppplVar23 = (long ****)param_1[0x91];
      }
      ppplVar47 = pppplVar23[0x41];
      if (ppplVar47 != (long ***)0x0) {
        pppplVar23[0x42] = (long ***)0x0;
        pppplVar23[0x43] = (long ***)0x0;
        pppplVar23[0x40] = (long ***)0x0;
        pppplVar23[0x41] = (long ***)0x0;
        (*(code *)ppplVar47)(pppplVar23 + 0x44);
      }
      if (param_1[0x3c] != (long ***)0x0) {
        (*(code *)param_1[0x3c])(param_1 + 0x3e,pppplVar23 + 0x44);
        ppplVar47 = param_1[0x3d];
        pppplVar23[0x41] = param_1[0x3b];
        pppplVar23[0x43] = ppplVar47;
        ppplVar47 = param_1[0x3a];
        pppplVar23[0x42] = param_1[0x3c];
        pppplVar23[0x40] = ppplVar47;
      }
      FUN_0102825c(param_1[0x91],param_1 + 0x4a);
      if (param_1[0x91][0x24] != (long **)0x0) {
        *(undefined1 *)(param_1[0x91][0x24] + 0x42) = *(undefined1 *)(param_1 + 0x90);
      }
    }
    if (param_1[0x93] == (long ***)0x0) {
      if (local_1e0 == (long *)0x0) {
        lVar26 = 0;
      }
      else {
        lVar26 = local_1e0[9];
      }
      ppplVar47 = (long ***)FUN_0118aa4c(lVar26,*(undefined8 *)(lVar26 + 8));
      if (ppplVar47 == (long ***)0x0) goto LAB_011839c4;
      pplVar25 = ppplVar47[0x13];
      if (pplVar25[2] == (long *)0x0) goto LAB_01185b40;
      psVar1 = (short *)((long)pplVar25 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar11 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar10 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar10 == 0) {
        plVar58 = (long *)(**(code **)*pplVar25[2])();
        pplVar25[1] = plVar58;
        *(undefined4 *)((long)pplVar25 + 0x1c) = 0xfffffffe;
LAB_011839c4:
        ppplVar24 = param_1[0x93];
        param_1[0x93] = ppplVar47;
        if (ppplVar24 != (long ***)0x0) {
          pplVar25 = ppplVar24[0x13];
          psVar1 = (short *)((long)pplVar25 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar10 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar10 == 1) {
            pplVar25[2] = (long *)0x0;
            (*(code *)(*ppplVar24)[10])();
          }
          else if (sVar10 == 0) goto LAB_01184540;
        }
        *(undefined1 *)(param_1[0x93] + 0x5c) = 1;
        goto LAB_011839dc;
      }
      if (sVar10 != -1) goto LAB_011839c4;
      goto LAB_01184614;
    }
LAB_011839dc:
    local_1c8 = param_1;
    local_70[0] = (long **)((ulong)local_70[0] & 0xffffffffffffff00);
    local_1b8 = (long *)((ulong)local_1b8 & 0xffffffffffffff00);
    ppplVar24 = param_1[0x27];
    ppplVar59 = param_1[0x28];
    if (ppplVar24 != ppplVar59) {
      plVar58 = (long *)PTR_DAT_047d8b70;
      do {
        pplVar25 = *ppplVar24;
        local_168 = (long ***)0x0;
        local_170 = (long ****)0x0;
        FUN_00c43ef0(&local_170,pplVar25 + 6);
        local_240 = (long ****)0x0;
        local_238 = (undefined8 *)0x0;
        ppplVar47 = (long ***)0x0;
        if (pplVar25 != (long **)0x0) {
          ppplVar47 = (long ***)(pplVar25 + 5);
        }
        if (local_170[2] == ppplVar47) {
          FUN_01187348(&local_240,&local_170);
        }
        pppplVar23 = local_170;
        if (local_170 != (long ****)0x0) {
          pppplVar53 = local_170 + 3;
          do {
            sVar10 = *(short *)pppplVar53;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
            if (bVar17) {
              *(short *)pppplVar53 = sVar10 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar10 == 1) {
            piVar27 = (int *)((long)local_170 + 0x1c);
            do {
              iVar19 = *piVar27;
              cVar11 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar17) {
                *piVar27 = -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar58 = (long *)PTR_DAT_047d8b70;
            if (iVar19 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar26 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar26;
              local_310 = (long ****)*pppplVar23;
              FUN_00c44438(lVar26 + 0x8040,&local_310);
              plVar58 = (long *)PTR_DAT_047d8b70;
            }
          }
          else if (sVar10 == 0) goto LAB_01185b00;
        }
        plVar57 = (*ppplVar24)[0x1f];
        if ((plVar57 == (long *)0x0) || ((*(byte *)(plVar57 + 0x3d) & 1) == 0)) {
          lVar26 = 0;
        }
        else {
          puVar21 = (uint *)(**(code **)(*(*ppplVar24)[0x1f] + 0x70))();
          lVar26 = (long)puVar21 + (ulong)*puVar21;
        }
        pcVar34 = (code *)FUN_01187e80(lVar26,(*ppplVar24)[0x27]);
        local_350 = (long ***)*ppplVar24;
        local_170 = (long ****)&local_1c8;
        local_168 = (long ***)0x0;
        local_160 = (code *)0x0;
        FUN_01186804(&local_168,&local_240);
        local_150 = (long **)local_70;
        local_158 = pcVar34;
        local_148 = &local_1b8;
        ppplVar47 = local_168;
        for (pplVar25 = local_350[0x2e]; local_168 = ppplVar47, pplVar25 != (long **)0x0;
            pplVar25 = (long **)*pplVar25) {
          plVar57 = pplVar25[6];
          cVar11 = *(char *)(local_350 + 0x36);
          pplVar50 = local_350[0x35];
          if (pplVar50 != (long **)0x0) {
            (*(code *)(*pplVar50)[3])(pplVar50);
          }
          if ((char)*plVar57 == '\0') {
LAB_01183b34:
            if (cVar11 != '\0') {
              *(char *)local_148 = '\x01';
            }
            pcVar34 = local_158;
            plVar52 = (long *)plVar57[1];
            plVar62 = plVar58;
            if (plVar52 != (long *)0x0) {
              plVar62 = plVar52 + 6;
            }
            local_310 = (long ****)*plVar62;
            local_308 = (long *)PTR_PTR_047d4508;
            if (plVar52 != (long *)0x0) {
              local_308 = plVar52 + 7;
            }
            local_308 = (long *)*local_308;
            if (plVar52 == (long *)0x0) {
              local_300 = (long *)0x0;
              local_2f8[0] = (long *)0x0;
              piVar27 = (int *)FUN_01186e60(local_158,&local_310);
            }
            else {
              local_300 = (long *)plVar52[8];
              (**(code **)(*plVar52 + 0x18))(plVar52);
              local_2f8[0] = plVar52;
              piVar27 = (int *)FUN_01186e60(pcVar34,&local_310);
              (**(code **)(*plVar52 + 0x20))(plVar52);
            }
            pppplVar23 = local_170;
            local_2b0 = (undefined8 *)0x0;
            local_2a8 = 0;
            FUN_01186804(&local_2b0,&local_168);
            plVar52 = (long *)plVar57[1];
            cVar11 = *(char *)local_148;
            ppplVar42 = *pppplVar23;
            pplVar33 = ppplVar42[0x91];
            plVar62 = plVar58;
            if (plVar52 != (long *)0x0) {
              plVar62 = plVar52 + 6;
            }
            local_310 = (long ****)*plVar62;
            local_308 = (long *)PTR_PTR_047d4508;
            if (plVar52 != (long *)0x0) {
              local_308 = plVar52 + 7;
            }
            local_308 = (long *)*local_308;
            if (plVar52 == (long *)0x0) {
              local_300 = (long *)0x0;
            }
            else {
              local_300 = (long *)plVar52[8];
              local_2f8[0] = (long *)0x0;
              (**(code **)(*plVar52 + 0x18))(plVar52);
            }
            local_2f8[0] = plVar52;
            plVar62 = (long *)FUN_00cb7028(pplVar33,&local_310);
            lVar26 = *plVar62;
            if (local_2f8[0] != (long *)0x0) {
              (**(code **)(*local_2f8[0] + 0x20))();
            }
            if (lVar26 == 0) {
              lVar26 = plVar57[3];
              if ((lVar26 != 0) && (**(char **)(lVar26 + 0x38) != '\0')) {
                if ((plVar57[10] == 0) || ((*(byte *)(plVar57[10] + 0x1e8) & 1) == 0)) {
                  pppplVar23 = (long ****)0x0;
                }
                else {
                  if (piVar27 == (int *)0x0) {
                    plVar62 = (long *)plVar57[2];
                    if (plVar62 != (long *)0x0) {
                      plVar58 = plVar62 + 6;
                    }
                    pppplVar23 = (long ****)*plVar58;
                    local_308 = (long *)PTR_PTR_047d4508;
                    if (plVar62 != (long *)0x0) {
                      local_308 = plVar62 + 7;
                    }
                    local_308 = (long *)*local_308;
                    local_310 = pppplVar23;
                    if (plVar62 == (long *)0x0) {
                      local_300 = (long *)0x0;
                      local_2f8[0] = (long *)0x0;
                    }
                    else {
                      local_300 = (long *)plVar62[8];
                      (**(code **)(*plVar62 + 0x18))(plVar62);
                      local_2f8[0] = plVar62;
                    }
                    plVar58 = (long *)PTR_DAT_047d8b70;
                  }
                  else if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 7) ||
                          (uVar40 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[3],
                          uVar40 == 0)) {
                    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
                      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3e28);
                    }
                    pppplVar23 = *(long *****)PTR_DAT_047d3e30;
                    local_308 = *(long **)(PTR_DAT_047d3e30 + 8);
                    local_300 = *(long **)(PTR_DAT_047d3e30 + 0x10);
                    local_2f8[0] = *(long **)(PTR_DAT_047d3e30 + 0x18);
                    local_310 = pppplVar23;
                    if (local_2f8[0] != (long *)0x0) {
                      (**(code **)(*local_2f8[0] + 0x18))();
                    }
                  }
                  else {
                    puVar21 = (uint *)((long)piVar27 + uVar40);
                    uVar48 = (ulong)*puVar21;
                    plVar62 = (long *)((long)puVar21 + uVar48 + 4);
                    local_300 = (long *)strlen((char *)plVar62);
                    bVar12 = *(byte *)((long)puVar21 + uVar48 + 4);
                    pppplVar23 = (long ****)&DAT_cbf29ce484222645;
                    if (bVar12 != 0) {
                      pbVar61 = (byte *)((long)piVar27 + uVar48 + uVar40 + 5);
                      do {
                        pppplVar23 = (long ****)
                                     (((ulong)pppplVar23 ^ (ulong)bVar12) * 0x100000001b3);
                        bVar12 = *pbVar61;
                        pbVar61 = pbVar61 + 1;
                      } while (bVar12 != 0);
                    }
                    local_2f8[0] = (long *)0x0;
                    plVar58 = (long *)PTR_DAT_047d8b70;
                    local_310 = pppplVar23;
                    local_308 = plVar62;
                  }
                  bVar17 = *(int *)((long)ppplVar42 + 0x394) != 0;
                  pppplVar53 = (long ****)0xba3221feb8ccc29f;
                  if (bVar17) {
                    pppplVar53 = (long ****)0xba3220feb8ccc0ec;
                  }
                  pcVar60 = &UNK_03c5ec04;
                  if (bVar17) {
                    pcVar60 = "ver_01";
                  }
                  if (*(char *)(ppplVar42 + 0x73) != '\0') {
                    if (pppplVar23 != pppplVar53) {
                      puVar43 = *(undefined8 **)(plVar57[10] + 0x210);
                      puVar44 = *(undefined8 **)(plVar57[10] + 0x218);
                      puVar54 = puVar43;
                      if ((puVar43 != puVar44) && ((long ****)*puVar43 != pppplVar53)) {
                        do {
                          puVar54 = puVar54 + 0x19;
                          if (puVar44 == puVar54) {
                            puVar54 = puVar44;
                            goto LAB_01183db8;
                          }
                        } while ((long ****)*puVar54 != pppplVar53);
                      }
LAB_01183db8:
                      if (puVar44 != puVar54) {
                        if (-1 < (int)((ulong)((long)puVar54 - (long)puVar43) >> 3) * -0x3d70a3d7) {
                          local_300 = (long *)0x6;
                          local_310 = pppplVar53;
                          local_308 = (long *)pcVar60;
                        }
                      }
                    }
                  }
                  ppplVar47 = (long ***)ppplVar42[0x2e];
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar26 = nn::os::GetTlsValue(DAT_04865a30);
                  if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_011859f8;
                  *(long ****)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = ppplVar47;
                  *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
                  pppplVar23 = (long ****)(*(code *)(*ppplVar47)[2])(ppplVar47,0x158,8);
                  if (pppplVar23 == (long ****)0x0) {
                    pplVar25 = *ppplVar47;
                    goto LAB_01185d0c;
                  }
                  FUN_0102f570(pppplVar23,&local_310);
                  puVar54 = *(undefined8 **)(plVar57[10] + 0x210);
                  lVar41 = *(long *)(plVar57[10] + 0x218) - (long)puVar54;
                  if (lVar41 != 0) {
                    uVar40 = (lVar41 >> 3) * -0x70a3d70a3d70a3d7;
                    if (uVar40 < 2) {
                      uVar40 = 1;
                    }
                    do {
                      if ((long ****)*puVar54 == local_310) {
                        FUN_0102f6ec(pppplVar23);
                        break;
                      }
                      uVar40 = uVar40 - 1;
                      puVar54 = puVar54 + 0x19;
                    } while (uVar40 != 0);
                  }
                  *(undefined4 *)(pppplVar23 + 3) = 0x80158;
                  pppplVar23[1] = ppplVar47;
                  pppplVar23[2] = (long ***)pppplVar23;
                  *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
                  pppplVar53 = pppplVar23 + 5;
                  do {
                    iVar19 = *(int *)pppplVar53;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
                    if (bVar17) {
                      *(int *)pppplVar53 = iVar19 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (iVar19 == -1) goto LAB_01185ab0;
                  if (local_2f8[0] != (long *)0x0) {
                    (**(code **)(*local_2f8[0] + 0x20))();
                  }
                }
                pplVar33 = ppplVar42[0x91];
                lVar26 = *plVar57;
                plVar52 = (long *)plVar57[1];
                plVar62 = plVar58;
                if (plVar52 != (long *)0x0) {
                  plVar62 = plVar52 + 6;
                }
                local_310 = (long ****)*plVar62;
                local_308 = (long *)PTR_PTR_047d4508;
                if (plVar52 != (long *)0x0) {
                  local_308 = plVar52 + 7;
                }
                local_308 = (long *)*local_308;
                if (plVar52 == (long *)0x0) {
                  local_300 = (long *)0x0;
                }
                else {
                  local_300 = (long *)plVar52[8];
                  local_2f8[0] = (long *)0x0;
                  (**(code **)(*plVar52 + 0x18))(plVar52);
                }
                pplVar39 = ppplVar42[0x2f];
                local_2f8[0] = plVar52;
                local_270 = pppplVar23;
                if (pppplVar23 != (long ****)0x0) {
                  pppplVar53 = pppplVar23 + 5;
                  do {
                    iVar19 = *(int *)pppplVar53;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
                    if (bVar17) {
                      *(int *)pppplVar53 = iVar19 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if (iVar19 == -1) goto LAB_01185ab0;
                }
                local_1b0 = (long ****)&DAT_cbf29ce484222645;
                local_1a8 = &DAT_03c886bc;
                local_1a0 = 0;
                local_198 = (long *)0x0;
                FUN_010289bc(pplVar33,plVar57 + 3,&local_310,cVar11 != '\0' && (char)lVar26 == '\0',
                             pplVar39,&local_270,&local_1b0);
                if (local_198 != (long *)0x0) {
                  (**(code **)(*local_198 + 0x20))();
                }
                if (local_270 != (long ****)0x0) {
                  pppplVar53 = local_270 + 5;
                  do {
                    iVar19 = *(int *)pppplVar53;
                    iVar14 = iVar19 + -1;
                    cVar11 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
                    if (bVar17) {
                      *(int *)pppplVar53 = iVar14;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar14 == 0) {
                    (*(code *)(*local_270)[2])();
                  }
                  else if (iVar19 == 0) goto LAB_01185ad8;
                }
                if (local_2f8[0] != (long *)0x0) {
                  (**(code **)(*local_2f8[0] + 0x20))();
                }
                if (pppplVar23 != (long ****)0x0) {
                  if (pppplVar23[0x29] != (long ***)0x0) {
                    plVar52 = (long *)plVar57[1];
                    plVar62 = plVar58;
                    if (plVar52 != (long *)0x0) {
                      plVar62 = plVar52 + 6;
                    }
                    pplVar33 = ppplVar42[0x93];
                    local_310 = (long ****)*plVar62;
                    local_308 = (long *)PTR_PTR_047d4508;
                    if (plVar52 != (long *)0x0) {
                      local_308 = plVar52 + 7;
                    }
                    local_308 = (long *)*local_308;
                    if (plVar52 == (long *)0x0) {
                      local_300 = (long *)0x0;
                    }
                    else {
                      local_300 = (long *)plVar52[8];
                      local_2f8[0] = (long *)0x0;
                      (**(code **)(*plVar52 + 0x18))(plVar52);
                    }
                    pppplVar53 = pppplVar23 + 5;
                    do {
                      iVar19 = *(int *)pppplVar53;
                      cVar11 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
                      if (bVar17) {
                        *(int *)pppplVar53 = iVar19 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                    local_2f8[0] = plVar52;
                    local_1b0 = pppplVar23;
                    if (iVar19 == -1) goto LAB_01185ab0;
                    FUN_0118b6d8(pplVar33,&local_310,&local_1b0,0);
                    if (local_1b0 != (long ****)0x0) {
                      pppplVar53 = local_1b0 + 5;
                      do {
                        iVar19 = *(int *)pppplVar53;
                        iVar14 = iVar19 + -1;
                        cVar11 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
                        if (bVar17) {
                          *(int *)pppplVar53 = iVar14;
                          cVar11 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar11 != '\0');
                      if (iVar14 == 0) {
                        (*(code *)(*local_1b0)[2])();
                      }
                      else if (iVar19 == 0) goto LAB_01185ad8;
                    }
                    if (local_2f8[0] != (long *)0x0) {
                      (**(code **)(*local_2f8[0] + 0x20))();
                    }
                    if (piVar27 != (int *)0x0) {
                      uVar40 = (ulong)*(ushort *)((long)piVar27 + (8 - (long)*piVar27));
                      puVar3 = (uint *)((long)piVar27 + uVar40);
                      uVar48 = (ulong)*puVar3;
                      puVar3 = (uint *)((long)puVar3 + uVar48);
                      puVar21 = puVar3 + 1;
                      uVar28 = (ulong)*puVar3;
                      if (uVar28 != 0) {
                        puVar3 = puVar21 + uVar28;
                        lVar26 = (long)piVar27 + uVar48 + uVar40 + 9;
                        do {
                          uVar32 = *puVar21;
                          piVar27 = (int *)((long)puVar21 + (ulong)uVar32);
                          if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 5) ||
                             (uVar40 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[2],
                             uVar40 == 0)) {
                            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
                              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                              __cxa_guard_release(PTR_DAT_047d3e28);
                            }
                            local_310 = *(long *****)PTR_DAT_047d3e30;
                            local_308 = *(long **)(PTR_DAT_047d3e30 + 8);
                            local_2f8[0] = *(long **)(PTR_DAT_047d3e30 + 0x18);
                            local_300 = *(long **)(PTR_DAT_047d3e30 + 0x10);
                            if (local_2f8[0] != (long *)0x0) {
                              (**(code **)(*local_2f8[0] + 0x18))();
                            }
                          }
                          else {
                            puVar4 = (uint *)((long)piVar27 + uVar40);
                            uVar48 = (ulong)*puVar4;
                            plVar58 = (long *)((long)puVar4 + uVar48 + 4);
                            local_300 = (long *)strlen((char *)plVar58);
                            bVar12 = *(byte *)((long)puVar4 + uVar48 + 4);
                            local_310 = (long ****)&DAT_cbf29ce484222645;
                            if (bVar12 != 0) {
                              pbVar61 = (byte *)(lVar26 + uVar48 + uVar40 + (ulong)uVar32);
                              do {
                                local_310 = (long ****)
                                            (((ulong)local_310 ^ (ulong)bVar12) * 0x100000001b3);
                                bVar12 = *pbVar61;
                                pbVar61 = pbVar61 + 1;
                              } while (bVar12 != 0);
                            }
                            local_308 = plVar58;
                            local_2f8[0] = (long *)0x0;
                          }
                          plVar58 = (long *)PTR_DAT_047d8b70;
                          if (local_310 != (long ****)0x47be5e4a33151278) {
                            pplVar33 = ppplVar42[0x93];
                            plVar62 = (long *)plVar57[1];
                            if (plVar62 != (long *)0x0) {
                              (**(code **)(*plVar62 + 0x18))(plVar62);
                            }
                            if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 7) ||
                               (uVar40 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[3],
                               uVar40 == 0)) {
                              iVar19 = 0;
                            }
                            else {
                              iVar19 = *(int *)((long)piVar27 + uVar40);
                            }
                            lVar41 = FUN_0118723c(pplVar33 + 0x3f,&local_310);
                            if (lVar41 != 0) {
                              local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,iVar19);
                              local_250 = *(int *)(lVar41 + 0x44);
                              local_210 = (undefined8 *)
                                          CONCAT44(local_210._4_4_,*(int *)(lVar41 + 0x40));
                              ppuVar6 = (undefined8 **)&local_250;
                              if (iVar19 <= *(int *)(lVar41 + 0x44)) {
                                ppuVar6 = &local_1f8;
                              }
                              ppuVar7 = &local_210;
                              if (*(int *)(lVar41 + 0x40) <= iVar19) {
                                ppuVar7 = ppuVar6;
                              }
                              if (*(int *)(lVar41 + 0x4c) != *(int *)ppuVar7) {
                                *(int *)(lVar41 + 0x4c) = *(int *)ppuVar7;
                                *(undefined1 *)(lVar41 + 0x54) = 1;
                              }
                            }
                            if (plVar62 != (long *)0x0) {
                              (**(code **)(*plVar62 + 0x20))(plVar62);
                            }
                          }
                          if (local_2f8[0] != (long *)0x0) {
                            (**(code **)(*local_2f8[0] + 0x20))();
                          }
                          puVar21 = puVar21 + 1;
                          lVar26 = lVar26 + 4;
                        } while (puVar21 != puVar3);
                      }
                    }
                  }
                  pppplVar53 = pppplVar23 + 5;
                  do {
                    iVar19 = *(int *)pppplVar53;
                    iVar14 = iVar19 + -1;
                    cVar11 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
                    if (bVar17) {
                      *(int *)pppplVar53 = iVar14;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar14 == 0) {
                    (*(code *)(*pppplVar23)[2])();
                  }
                  else if (iVar19 == 0) goto LAB_01185ad8;
                }
              }
            }
            puVar54 = local_2b0;
            if (local_2b0 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_2b0 + 3);
              do {
                sVar10 = *psVar1;
                cVar11 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar17) {
                  *psVar1 = sVar10 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (sVar10 == 1) {
                piVar27 = (int *)((long)local_2b0 + 0x1c);
                do {
                  iVar19 = *piVar27;
                  cVar11 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
                  if (bVar17) {
                    *piVar27 = -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar19 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar26 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar26;
                  local_310 = (long ****)*puVar54;
                  FUN_00c44438(lVar26 + 0x8040,&local_310);
                }
              }
              else if (sVar10 == 0) goto LAB_01185b00;
            }
          }
          else if (*(char *)local_150 == '\0') {
            *(char *)local_150 = '\x01';
            goto LAB_01183b34;
          }
          if (pplVar50 != (long **)0x0) {
            (*(code *)(*pplVar50)[4])(pplVar50);
          }
          ppplVar47 = local_168;
        }
        if (ppplVar47 != (long ***)0x0) {
          ppplVar42 = ppplVar47 + 3;
          do {
            sVar10 = *(short *)ppplVar42;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(ppplVar42,0x10);
            if (bVar17) {
              *(short *)ppplVar42 = sVar10 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar10 == 1) {
            piVar27 = (int *)((long)ppplVar47 + 0x1c);
            do {
              iVar19 = *piVar27;
              cVar11 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar17) {
                *piVar27 = -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar58 = (long *)PTR_DAT_047d8b70;
            if (iVar19 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar26 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar26;
              local_310 = (long ****)*ppplVar47;
              FUN_00c44438(lVar26 + 0x8040,&local_310);
              plVar58 = (long *)PTR_DAT_047d8b70;
            }
          }
          else if (sVar10 == 0) goto LAB_01185b00;
        }
        pppplVar23 = local_240;
        if (local_240 != (long ****)0x0) {
          pppplVar53 = local_240 + 3;
          do {
            sVar10 = *(short *)pppplVar53;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
            if (bVar17) {
              *(short *)pppplVar53 = sVar10 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar10 == 1) {
            piVar27 = (int *)((long)local_240 + 0x1c);
            do {
              iVar19 = *piVar27;
              cVar11 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
              if (bVar17) {
                *piVar27 = -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar58 = (long *)PTR_DAT_047d8b70;
            if (iVar19 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar26 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar26;
              local_170 = (long ****)*pppplVar23;
              FUN_00c44438(lVar26 + 0x8040,&local_170);
              plVar58 = (long *)PTR_DAT_047d8b70;
            }
          }
          else if (sVar10 == 0) goto LAB_01185b00;
        }
        ppplVar24 = ppplVar24 + 1;
      } while (ppplVar24 != ppplVar59);
    }
    puVar16 = PTR_DAT_047d8b70;
    puVar15 = PTR_PTR_047d4508;
    ppplVar47 = param_1[0x93];
    if (ppplVar47 != (long ***)0x0) {
      if ((param_1[0x74] != (long ***)0x0) &&
         (pplVar25 = param_1[0x74][6], pplVar25 != (long **)0x0)) {
        pcVar55 = (code *)pplVar25[2];
        bVar17 = pcVar55 == (code *)0x0;
        pcVar34 = (code *)PTR_DAT_047d8b70;
        if (!bVar17) {
          pcVar34 = pcVar55 + 0x30;
        }
        local_170 = *(long *****)pcVar34;
        while( true ) {
          local_168 = (long ***)puVar15;
          if (!bVar17) {
            local_168 = (long ***)(pcVar55 + 0x38);
          }
          local_168 = (long ***)*local_168;
          if (pcVar55 == (code *)0x0) {
            local_160 = (code *)0x0;
          }
          else {
            local_160 = *(code **)(pcVar55 + 0x40);
            local_158 = (code *)0x0;
            (**(code **)(*(long *)pcVar55 + 0x18))(pcVar55);
          }
          local_158 = pcVar55;
          FUN_0118fe00(ppplVar47,&local_170,*(undefined1 *)(pplVar25 + 3));
          if (local_158 != (code *)0x0) {
            (**(code **)(*(long *)local_158 + 0x20))();
          }
          pplVar25 = (long **)*pplVar25;
          ppplVar47 = param_1[0x93];
          if (pplVar25 == (long **)0x0) break;
          pcVar55 = (code *)pplVar25[2];
          bVar17 = pcVar55 == (code *)0x0;
          pcVar34 = (code *)puVar16;
          if (!bVar17) {
            pcVar34 = pcVar55 + 0x30;
          }
          local_170 = *(long *****)pcVar34;
        }
        if (ppplVar47 == (long ***)0x0) goto LAB_011844d0;
      }
      ppplVar24 = param_1[0xb2];
      ppplVar59 = param_1[0xb3];
      if (ppplVar24 != ppplVar59) {
        do {
          pplVar25 = ppplVar47[0x45];
          if (pplVar25 != (long **)0x0) {
            iVar19 = *(int *)(ppplVar24 + 1);
            do {
              if ((long **)pplVar25[2] == *ppplVar24) {
                local_170 = (long ****)CONCAT44(local_170._4_4_,iVar19);
                local_1b0 = (long ****)CONCAT44(local_1b0._4_4_,*(int *)((long)pplVar25 + 0x74));
                ppppplVar8 = &local_1b0;
                if (iVar19 <= *(int *)((long)pplVar25 + 0x74)) {
                  ppppplVar8 = &local_170;
                }
                local_310 = (long ****)CONCAT44(local_310._4_4_,*(int *)(pplVar25 + 0xe));
                ppppplVar9 = &local_310;
                if (*(int *)(pplVar25 + 0xe) <= iVar19) {
                  ppppplVar9 = ppppplVar8;
                }
                if (*(int *)((long)pplVar25 + 0x7c) != *(int *)ppppplVar9) {
                  *(int *)((long)pplVar25 + 0x7c) = *(int *)ppppplVar9;
                  *(undefined1 *)((long)pplVar25 + 0x84) = 1;
                }
                break;
              }
              pplVar25 = (long **)*pplVar25;
            } while (pplVar25 != (long **)0x0);
          }
          ppplVar24 = ppplVar24 + 2;
          if (ppplVar24 == ppplVar59) goto LAB_01184ca4;
          ppplVar47 = param_1[0x93];
        } while( true );
      }
    }
LAB_011844d0:
    if (local_1e0 == (long *)0x0) {
LAB_011844f4:
      if (local_1e8 != (long ***)0x0) {
        (*(code *)(*local_1e8)[0xc])();
      }
      *(undefined1 *)((long)param_1 + 0x3b4) = 1;
      goto switchD_01181d50_caseD_1;
    }
    plVar58 = local_1e0 + 5;
    do {
      lVar26 = *plVar58;
      iVar19 = (int)lVar26 + -1;
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar58,0x10);
      if (bVar17) {
        *(int *)plVar58 = iVar19;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*local_1e0 + 0x10))();
      goto LAB_011844f4;
    }
    if ((int)lVar26 != 0) goto LAB_011844f4;
    goto LAB_01185ad8;
  case 1:
    goto switchD_01181d50_caseD_1;
  case 2:
    goto switchD_01181d50_caseD_2;
  case 3:
    goto switchD_01181d50_caseD_3;
  case 4:
    goto switchD_01181d50_caseD_4;
  default:
    goto switchD_01181d50_default;
  }
  cVar11 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
  if (bVar17) {
    *plVar57 = lVar26;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_011838e4;
  goto LAB_011838d4;
LAB_01184ca4:
  param_1[0xb3] = param_1[0xb2];
  goto LAB_011844d0;
code_r0x01182df4:
  cVar11 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(pplVar50,0x10);
  if (bVar18) {
    *pplVar50 = plVar57;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_01182dfc;
  goto LAB_01182dec;
LAB_01184c20:
  plVar51 = plVar57;
LAB_011827dc:
  if (plVar52 != (long *)0x0) {
    (**(code **)(*plVar52 + 0x20))(plVar52);
  }
  if (plVar51 != (long *)0x0) {
    lVar26 = plVar51[6];
    puVar54 = (undefined8 *)(lVar26 + 8);
    (**(code **)*puVar54)(puVar54);
    uVar40 = FUN_0118b638();
    lVar26 = lVar26 + -0x20;
    if ((uVar40 & 1) == 0) {
      lVar26 = 0;
    }
    FUN_016a6bd4(&local_1b8,lVar26);
  }
  if (local_1b8 == (long *)0x0) {
LAB_011827ec:
    plVar57 = (long *)FUN_0118766c(&local_170,ppplVar59[0x2e],&local_1b0);
    if (plVar57 != (long *)0x0) {
      lVar26 = plVar57[6];
      if (*(long *)(lVar26 + 0x10) == 0) goto LAB_01185b40;
      psVar1 = (short *)(lVar26 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar10 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar10 == 0) {
        uVar22 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
        *(undefined8 *)(lVar26 + 8) = uVar22;
        *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
      }
      else if (sVar10 == -1) goto LAB_01184614;
    }
    plVar52 = local_1b8;
    local_1b8 = (long *)0x0;
    if (plVar52 != (long *)0x0) {
      lVar26 = plVar52[6];
      psVar1 = (short *)(lVar26 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar11 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar10 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar26 + 0x10) = 0;
        (**(code **)(*plVar52 + 0x50))();
      }
      else if (sVar10 == 0) goto LAB_01184540;
    }
    pcVar55 = *(code **)(pbVar61 + 8);
    pcVar34 = (code *)PTR_DAT_047d8b70;
    if (pcVar55 != (code *)0x0) {
      pcVar34 = pcVar55 + 0x30;
    }
    local_170 = *(long *****)pcVar34;
    local_168 = (long ***)PTR_PTR_047d4508;
    if (pcVar55 != (code *)0x0) {
      local_168 = (long ***)(pcVar55 + 0x38);
    }
    local_168 = (long ***)*local_168;
    local_1b8 = plVar57;
    if (pcVar55 == (code *)0x0) {
      local_160 = (code *)0x0;
      local_158 = (code *)0x0;
      FUN_01187040(plVar57,&local_170);
    }
    else {
      local_160 = *(code **)(pcVar55 + 0x40);
      (**(code **)(*(long *)pcVar55 + 0x18))(pcVar55);
      local_158 = pcVar55;
      FUN_01187040(plVar57,&local_170);
      (**(code **)(*(long *)pcVar55 + 0x20))(pcVar55);
    }
    plVar57 = local_1b8;
    if (bVar17) {
      *(undefined1 *)(local_1b8 + 9) = 1;
      local_1b8[10] = (long)local_340;
      if (local_318 != (long ****)0x0) {
        (*(code *)(*local_318)[3])(local_318);
      }
      plVar52 = (long *)plVar57[0xb];
      plVar57[0xb] = (long)local_318;
      if (plVar52 != (long *)0x0) {
        (**(code **)(*plVar52 + 0x20))();
      }
      if (local_320 != (long ***)0x0) {
        (*(code *)(*local_320)[3])(local_320);
      }
      plVar52 = (long *)plVar57[0xc];
      plVar57[0xc] = (long)local_320;
      if (plVar52 != (long *)0x0) {
        (**(code **)(*plVar52 + 0x20))();
      }
    }
    plVar57 = local_1b8;
    if ((*pbVar61 != 0) && (*pcVar60 != '\0')) {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar19 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar22 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar22;
      FUN_00cf9884(&local_170,uVar22,pcVar60);
      pppplVar23 = local_170;
      plVar52 = (long *)plVar57[0x75];
      plVar57[0x75] = 0;
      if (plVar52 != (long *)0x0) {
        (**(code **)(*plVar52 + 0x20))();
      }
      plVar57[0x75] = (long)pppplVar23;
      local_168 = (long ***)0x0;
      local_170 = (long ****)0x0;
      FUN_00c43ef0(&local_170,ppplVar59 + 0x13);
      local_1c8 = (long ****)0x0;
      uStack_1c0 = 0;
      if (local_170[2] == ppplVar59 + 5) {
        FUN_012968b4(&local_1c8,&local_170);
      }
      pppplVar23 = local_170;
      if (local_170 != (long ****)0x0) {
        pppplVar53 = local_170 + 3;
        do {
          sVar10 = *(short *)pppplVar53;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
          if (bVar17) {
            *(short *)pppplVar53 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          piVar27 = (int *)((long)local_170 + 0x1c);
          do {
            iVar19 = *piVar27;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar17) {
              *piVar27 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_1e8 = *pppplVar23;
            FUN_00c44438(lVar26 + 0x8040,&local_1e8);
          }
        }
        else if (sVar10 == 0) goto LAB_01185b00;
      }
      plVar57 = local_1b8;
      local_1e8 = (long ***)0x0;
      local_1e0 = (long *)0x0;
      FUN_01277088(&local_1e8,&local_1c8);
      local_1d8 = (ulong *)0x0;
      uStack_1d0 = 0;
      FUN_01186804(&local_1d8,&local_1f8);
      local_148 = (long **)0x0;
      local_150 = (long **)0x0;
      local_158 = (code *)0x0;
      local_160 = (code *)0x0;
      local_168 = (long ***)0x0;
      local_170 = (long ****)0x0;
      FUN_0127739c(&local_150,&local_1e8);
      local_140 = 0;
      uStack_138 = 0;
      FUN_01365a38(&local_140,&local_1d8);
      local_170 = (long ****)&LAB_028fff44;
      local_168 = (long ***)FUN_02901154;
      local_160 = FUN_02901338;
      local_158 = FUN_02901378;
      pcVar34 = (code *)plVar57[0x77];
      if (pcVar34 == (code *)0x0) {
LAB_011829f8:
        (*local_160)(&local_150,plVar57 + 0x7a);
        plVar57[0x79] = (long)local_158;
        plVar57[0x76] = (long)local_170;
        plVar57[0x77] = (long)local_168;
        plVar57[0x78] = (long)local_160;
      }
      else {
        plVar57[0x78] = 0;
        plVar57[0x79] = 0;
        plVar57[0x76] = 0;
        plVar57[0x77] = 0;
        (*pcVar34)(plVar57 + 0x7a);
        if (local_160 != (code *)0x0) goto LAB_011829f8;
      }
      ppplVar42 = local_168;
      if (local_168 != (long ***)0x0) {
        local_158 = (code *)0x0;
        local_160 = (code *)0x0;
        local_168 = (long ***)0x0;
        local_170 = (long ****)0x0;
        (*(code *)ppplVar42)(&local_150);
      }
      if (local_1d8 != (ulong *)0x0) {
        puVar2 = local_1d8 + 3;
        do {
          sVar10 = (short)*puVar2;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar17) {
            *(short *)puVar2 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          piVar27 = (int *)((long)local_1d8 + 0x1c);
          do {
            iVar19 = *piVar27;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar17) {
              *piVar27 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_70[0] = (long **)*local_1d8;
            FUN_00c44438(lVar26 + 0x8040,local_70);
          }
        }
        else if (sVar10 == 0) goto LAB_01185b00;
      }
      ppplVar42 = local_1e8;
      if (local_1e8 != (long ***)0x0) {
        ppplVar37 = local_1e8 + 3;
        do {
          sVar10 = *(short *)ppplVar37;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(ppplVar37,0x10);
          if (bVar17) {
            *(short *)ppplVar37 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          piVar27 = (int *)((long)local_1e8 + 0x1c);
          do {
            iVar19 = *piVar27;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar17) {
              *piVar27 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_70[0] = *ppplVar42;
            FUN_00c44438(lVar26 + 0x8040,local_70);
          }
        }
        else if (sVar10 == 0) goto LAB_01185b00;
      }
      pppplVar23 = local_1c8;
      if (local_1c8 != (long ****)0x0) {
        pppplVar53 = local_1c8 + 3;
        do {
          sVar10 = *(short *)pppplVar53;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
          if (bVar17) {
            *(short *)pppplVar53 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          piVar27 = (int *)((long)local_1c8 + 0x1c);
          do {
            iVar19 = *piVar27;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar17) {
              *piVar27 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_170 = (long ****)*pppplVar23;
            FUN_00c44438(lVar26 + 0x8040,&local_170);
          }
        }
        else if (sVar10 == 0) goto LAB_01185b00;
      }
    }
  }
  pplVar50 = ppplVar59[0xa3];
  local_1e8 = (long ***)(local_1b8 + 4);
  ppplVar42 = (long ***)0x0;
  if (local_1b8 != (long *)0x0) {
    (*(code *)(*local_1e8)[2])();
    ppplVar42 = local_1e8;
  }
  local_1e8 = ppplVar42;
  pcVar55 = *(code **)(pbVar61 + 8);
  pcVar34 = (code *)PTR_DAT_047d8b70;
  if (pcVar55 != (code *)0x0) {
    pcVar34 = pcVar55 + 0x30;
  }
  local_170 = *(long *****)pcVar34;
  local_168 = (long ***)PTR_PTR_047d4508;
  if (pcVar55 != (code *)0x0) {
    local_168 = (long ***)(pcVar55 + 0x38);
  }
  local_168 = (long ***)*local_168;
  if (pcVar55 == (code *)0x0) {
    local_160 = (code *)0x0;
  }
  else {
    local_160 = *(code **)(pcVar55 + 0x40);
    local_158 = (code *)0x0;
    (**(code **)(*(long *)pcVar55 + 0x18))(pcVar55);
  }
  local_158 = pcVar55;
  FUN_01188090(pplVar50,&local_1e8,&local_170,*pbVar61 ^ 1);
  if (local_158 != (code *)0x0) {
    (**(code **)(*(long *)local_158 + 0x20))();
  }
  if (local_1e8 != (long ***)0x0) {
    (*(code *)(*local_1e8)[3])();
  }
  if (ppplVar59[0xa3] != ppplVar59[0x92]) goto LAB_01182d44;
  ppplVar42 = ppplVar59 + 0x9c;
  pppplVar23 = (long ****)(*(code *)(*ppplVar59[0x9c])[2])(ppplVar59[0x9c],0x38,8);
  if (pppplVar23 == (long ****)0x0) {
    (*(code *)(**ppplVar42)[0x1d])();
  }
  pplVar50 = *ppplVar42;
  local_170 = pppplVar23;
  local_168 = ppplVar42;
  if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar26 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar26 != 0) {
    if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_011859f8;
    *(long ***)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = pplVar50;
    *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
  }
  lVar41 = *(long *)(pbVar61 + 8);
  puVar54 = (undefined8 *)PTR_DAT_047d8b70;
  if (lVar41 != 0) {
    puVar54 = (undefined8 *)(lVar41 + 0x30);
  }
  puVar43 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar41 != 0) {
    puVar43 = (undefined8 *)(lVar41 + 0x38);
  }
  ppplVar37 = (long ***)*puVar43;
  ppplVar42 = (long ***)0x0;
  if (lVar41 != 0) {
    ppplVar42 = *(long ****)(lVar41 + 0x40);
  }
  pppplVar23[2] = (long ***)*puVar54;
  pppplVar23[3] = ppplVar37;
  pppplVar23[4] = ppplVar42;
  pppplVar23[5] = (long ***)0x0;
  ppplVar42 = *(long ****)(pbVar61 + 8);
  if (ppplVar42 == (long ***)0x0) {
    pppplVar23[5] = (long ***)0x0;
  }
  else {
    (*(code *)(*ppplVar42)[3])(ppplVar42);
    ppplVar37 = pppplVar23[5];
    pppplVar23[5] = ppplVar42;
    if (ppplVar37 != (long ***)0x0) {
      (*(code *)(*ppplVar37)[4])();
    }
  }
  ppplVar42 = (long ***)0x0;
  if (local_1b8 != (long *)0x0) {
    ppplVar42 = (long ***)(local_1b8 + 4);
  }
  pppplVar23[6] = ppplVar42;
  if (local_1b8 != (long *)0x0) {
    (*(code *)(*ppplVar42)[2])();
  }
  if (lVar26 != 0) {
    *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
  }
  local_160 = (code *)CONCAT71(local_160._1_7_,1);
  ppplVar37 = pppplVar23[2];
  *pppplVar23 = (long ***)0x0;
  pppplVar23[1] = ppplVar37;
  ppplVar56 = (long ***)ppplVar59[0x96];
  ppplVar42 = ppplVar59 + 0x95;
  if (ppplVar56 != (long ***)0x0) {
    uVar40 = (long)ppplVar56 - 1;
    if (((ulong)ppplVar56 & uVar40) == 0) {
      plVar57 = (*ppplVar42)[uVar40 & (ulong)ppplVar37];
      if (plVar57 != (long *)0x0) {
        do {
          plVar57 = (long *)*plVar57;
          if ((plVar57 == (long *)0x0) || ((plVar57[1] & uVar40) != (uVar40 & (ulong)ppplVar37)))
          goto LAB_01182c30;
        } while ((long ***)plVar57[2] != ppplVar37);
        goto LAB_01184898;
      }
    }
    else {
      ppplVar38 = ppplVar37;
      if (ppplVar56 <= ppplVar37) {
        uVar40 = 0;
        if (ppplVar56 != (long ***)0x0) {
          uVar40 = (ulong)ppplVar37 / (ulong)ppplVar56;
        }
        ppplVar38 = (long ***)((long)ppplVar37 - uVar40 * (long)ppplVar56);
      }
      plVar57 = (*ppplVar42)[(long)ppplVar38];
      if (plVar57 != (long *)0x0) {
        do {
          plVar57 = (long *)*plVar57;
          if (plVar57 == (long *)0x0) goto LAB_01182c30;
          ppplVar45 = (long ***)plVar57[1];
          if (ppplVar56 <= ppplVar45) {
            uVar40 = 0;
            if (ppplVar56 != (long ***)0x0) {
              uVar40 = (ulong)ppplVar45 / (ulong)ppplVar56;
            }
            ppplVar45 = (long ***)((long)ppplVar45 - uVar40 * (long)ppplVar56);
          }
          if (ppplVar45 != ppplVar38) goto LAB_01182c30;
        } while ((long ***)plVar57[2] != ppplVar37);
LAB_01184898:
        local_170 = (long ****)0x0;
        if (pppplVar23 != (long ****)0x0) {
          FUN_0118ffb8(&local_168,pppplVar23);
        }
        goto LAB_01182d44;
      }
    }
  }
LAB_01182c30:
  if ((ppplVar56 == (long ***)0x0) ||
     (*(float *)(ppplVar59 + 0xa1) * (float)ppplVar56 < (float)((long)ppplVar59[0xa0] + 1))) {
    ppplVar37 = (long ***)
                ((ulong)(ppplVar56 < (long ***)0x3 || ((ulong)ppplVar56 & (long)ppplVar56 - 1U) != 0
                        ) | (long)ppplVar56 << 1);
    ppplVar38 = (long ***)(long)((float)((long)ppplVar59[0xa0] + 1) / *(float *)(ppplVar59 + 0xa1));
    if (ppplVar38 <= ppplVar37) {
      ppplVar38 = ppplVar37;
    }
    if ((long)ppplVar38 - 1U == 0) {
      ppplVar38 = (long ***)0x2;
    }
    else if (((ulong)ppplVar38 & (long)ppplVar38 - 1U) != 0) {
      ppplVar38 = (long ***)std::__next_prime((ulong)ppplVar38);
      ppplVar56 = (long ***)ppplVar59[0x96];
    }
    if (ppplVar56 < ppplVar38) {
      ppplVar37 = ppplVar38;
LAB_01182c9c:
      FUN_0118a238(ppplVar42,ppplVar37);
    }
    else if (ppplVar38 < ppplVar56) {
      ppplVar37 = (long ***)(long)((float)ppplVar59[0xa0] / *(float *)(ppplVar59 + 0xa1));
      if ((ppplVar56 < (long ***)0x3) ||
         (uVar40 = (long)ppplVar56 - ((ulong)ppplVar56 >> 1 & 0x5555555555555555),
         uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333),
         1 < (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        ppplVar37 = (long ***)std::__next_prime((ulong)ppplVar37);
      }
      else if ((long ***)0x1 < ppplVar37) {
        ppplVar37 = (long ***)(1L << (-LZCOUNT((long)ppplVar37 + -1) & 0x3fU));
      }
      if (ppplVar37 <= ppplVar38) {
        ppplVar37 = ppplVar38;
      }
      if (ppplVar37 < ppplVar56) goto LAB_01182c9c;
    }
    ppplVar56 = (long ***)ppplVar59[0x96];
    ppplVar37 = pppplVar23[1];
  }
  uVar40 = (long)ppplVar56 - ((ulong)ppplVar56 >> 1 & 0x5555555555555555);
  uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333);
  uVar40 = (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar40 < 2) {
    ppplVar37 = (long ***)((long)ppplVar56 - 1U & (ulong)ppplVar37);
  }
  else if (ppplVar56 <= ppplVar37) {
    uVar48 = 0;
    if (ppplVar56 != (long ***)0x0) {
      uVar48 = (ulong)ppplVar37 / (ulong)ppplVar56;
    }
    ppplVar37 = (long ***)((long)ppplVar37 - uVar48 * (long)ppplVar56);
  }
  pplVar50 = (long **)(*ppplVar42)[(long)ppplVar37];
  if (pplVar50 == (long **)0x0) {
    *pppplVar23 = (long ***)ppplVar59[0x9b];
    ppplVar59[0x9b] = (long **)pppplVar23;
    ppplVar59[0x95][(long)ppplVar37] = (long *)(ppplVar59 + 0x9b);
    if (*pppplVar23 != (long ***)0x0) {
      ppplVar37 = (long ***)(*pppplVar23)[1];
      if (uVar40 < 2) {
        ppplVar37 = (long ***)((ulong)ppplVar37 & (long)ppplVar56 - 1U);
      }
      else if (ppplVar56 <= ppplVar37) {
        uVar40 = 0;
        if (ppplVar56 != (long ***)0x0) {
          uVar40 = (ulong)ppplVar37 / (ulong)ppplVar56;
        }
        ppplVar37 = (long ***)((long)ppplVar37 - uVar40 * (long)ppplVar56);
      }
      pplVar50 = *ppplVar42 + (long)ppplVar37;
      goto LAB_01182d30;
    }
  }
  else {
    *pppplVar23 = (long ***)*pplVar50;
LAB_01182d30:
    *pplVar50 = (long *)pppplVar23;
  }
  ppplVar59[0xa0] = (long **)((long)ppplVar59[0xa0] + 1);
  local_170 = (long ****)0x0;
LAB_01182d44:
  if (local_1b8 != (long *)0x0) {
    lVar26 = local_1b8[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar10 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar26 + 0x10) = 0;
      (**(code **)(*local_1b8 + 0x50))();
    }
    else if (sVar10 == 0) goto LAB_01184540;
  }
LAB_01182d4c:
  if (local_320 != (long ***)0x0) {
    (*(code *)(*local_320)[4])();
  }
  if (local_318 != (long ****)0x0) {
    (*(code *)(*local_318)[4])();
  }
  FUN_01185de0(&local_1b0);
  puVar54 = local_1f8;
  if (local_1f8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_1f8 + 3);
    do {
      sVar10 = *psVar1;
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar10 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar10 == 1) {
      piVar27 = (int *)((long)local_1f8 + 0x1c);
      do {
        iVar19 = *piVar27;
        cVar11 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar17) {
          *piVar27 = -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar19 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar26 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar26;
        local_170 = (long ****)*puVar54;
        FUN_00c44438(lVar26 + 0x8040,&local_170);
      }
    }
    else if (sVar10 == 0) goto LAB_01185b00;
  }
LAB_01182d6c:
  if (plVar62 != (long *)0x0) {
    (**(code **)(*plVar62 + 0x20))(plVar62);
  }
  plVar58 = (long *)*plVar58;
  if (plVar58 == (long *)0x0) goto LAB_01182fe0;
  goto LAB_01182598;
code_r0x01183480:
  cVar11 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
  if (bVar17) {
    *plVar57 = lVar26;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_01183488;
  goto LAB_01183478;
code_r0x011835c0:
  cVar13 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar58,0x10);
  if (bVar17) {
    *plVar58 = lVar26;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_011835c8;
  goto LAB_011835b8;
code_r0x01183678:
  cVar11 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(ppplVar24,0x10);
  if (bVar17) {
    *ppplVar24 = pplVar25;
    cVar11 = ExclusiveMonitorsStatus();
  }
  if (cVar11 == '\0') goto LAB_01183680;
  goto LAB_01183670;
switchD_01181d50_caseD_1:
  ppplVar47 = param_1[0x91];
  if (ppplVar47 == (long ***)0x0) {
    bVar17 = true;
  }
  else if (*(char *)((long)ppplVar47 + 0x11a) == '\0') {
    bVar17 = false;
  }
  else {
    bVar17 = *(int *)(ppplVar47 + 0x26) == 3;
  }
  if (param_1[0x93] == (long ***)0x0) {
    bVar18 = true;
  }
  else {
    bVar18 = *(char *)((long)param_1[0x93] + 0x11a) != '\0';
  }
  if (!(bool)(bVar17 & bVar18)) {
    return 0;
  }
  if ((param_1[0x91] != (long ***)0x0) && (pplVar25 = param_1[0x91][0x24], pplVar25 != (long **)0x0)
     ) {
    *(undefined1 *)((long)pplVar25 + 0x213) = 0;
  }
  FUN_00c9e664(&local_170,param_1 + 0x1d);
  lVar26 = DAT_0485a0d8;
  pplVar25 = param_1[0x91][0x24];
  if (((*PTR_DAT_047daf58 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar19 != 0)) {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  plVar58 = (long *)PTR_DAT_047daf60;
  if (pplVar25[0x18] != (long *)0x0) {
    plVar58 = pplVar25[0x18] + 0xe;
  }
  if (*plVar58 != 0) {
    ppplVar47 = param_1[0x27];
    ppplVar24 = param_1[0x28];
    if (ppplVar47 != ppplVar24) {
      pppplVar23 = param_1 + 0x83;
      pppplVar53 = param_1 + 0x89;
      do {
        for (plVar57 = (*ppplVar47)[0x2e]; plVar57 != (long *)0x0; plVar57 = (long *)*plVar57) {
          lVar41 = plVar57[6];
          if (*(long *)(lVar41 + 0x90) == 0) {
            plVar62 = (long *)FUN_00da5204();
          }
          else {
            plVar62 = (long *)(*(long *)(lVar41 + 0x90) + 0x40);
          }
          puVar54 = (undefined8 *)PTR_PTR_047d4508;
          if (*plVar62 != 0) {
            puVar54 = (undefined8 *)(*plVar62 + 0x38);
          }
          pplVar25 = (long **)*puVar54;
          if (pplVar25 == (long **)0x0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            ppplVar59 = *(long ****)PTR_DAT_047d3e30;
            pplVar25 = *(long ***)(PTR_DAT_047d3e30 + 8);
            pplVar50 = *(long ***)(PTR_DAT_047d3e30 + 0x10);
            pplVar33 = *(long ***)(PTR_DAT_047d3e30 + 0x18);
            if (pplVar33 != (long **)0x0) {
              (*(code *)(*pplVar33)[3])(pplVar33);
            }
          }
          else {
            pplVar50 = (long **)strlen((char *)pplVar25);
            bVar12 = *(byte *)pplVar25;
            if (bVar12 == 0) {
              ppplVar59 = (long ***)&DAT_cbf29ce484222645;
            }
            else {
              ppplVar59 = (long ***)&DAT_cbf29ce484222645;
              pplVar33 = pplVar25;
              do {
                pplVar33 = (long **)((long)pplVar33 + 1);
                ppplVar59 = (long ***)(((ulong)ppplVar59 ^ (ulong)bVar12) * 0x100000001b3);
                bVar12 = *(byte *)pplVar33;
              } while (bVar12 != 0);
            }
            pplVar33 = (long **)0x0;
          }
          ppplVar42 = param_1[0x84];
          if (ppplVar42 != (long ***)0x0) {
            uVar40 = (long)ppplVar42 - ((ulong)ppplVar42 >> 1 & 0x5555555555555555);
            uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333);
            uVar40 = (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar40 < 2) {
              ppplVar37 = (long ***)((ulong)((long)ppplVar42 + -1) & (ulong)ppplVar59);
            }
            else {
              ppplVar37 = ppplVar59;
              if (ppplVar42 <= ppplVar59) {
                uVar48 = 0;
                if (ppplVar42 != (long ***)0x0) {
                  uVar48 = (ulong)ppplVar59 / (ulong)ppplVar42;
                }
                ppplVar37 = (long ***)((long)ppplVar59 - uVar48 * (long)ppplVar42);
              }
            }
            if (((*pppplVar23)[(long)ppplVar37] != (long **)0x0) &&
               (plVar62 = *(*pppplVar23)[(long)ppplVar37], plVar62 != (long *)0x0)) {
              if (uVar40 < 2) {
                do {
                  if ((long ***)plVar62[1] == ppplVar59) {
                    if ((long ***)plVar62[2] == ppplVar59) goto LAB_01181f5c;
                  }
                  else if ((long ***)((ulong)plVar62[1] & (ulong)((long)ppplVar42 + -1)) !=
                           ppplVar37) break;
                  plVar62 = (long *)*plVar62;
                } while (plVar62 != (long *)0x0);
              }
              else {
                do {
                  ppplVar56 = (long ***)plVar62[1];
                  if (ppplVar56 == ppplVar59) {
                    if ((long ***)plVar62[2] == ppplVar59) goto LAB_01181f5c;
                  }
                  else {
                    if (ppplVar42 <= ppplVar56) {
                      uVar40 = 0;
                      if (ppplVar42 != (long ***)0x0) {
                        uVar40 = (ulong)ppplVar56 / (ulong)ppplVar42;
                      }
                      ppplVar56 = (long ***)((long)ppplVar56 - uVar40 * (long)ppplVar42);
                    }
                    if (ppplVar56 != ppplVar37) break;
                  }
                  plVar62 = (long *)*plVar62;
                } while (plVar62 != (long *)0x0);
              }
            }
          }
          if (*(long *)(lVar41 + 200) == 0) goto LAB_01181f5c;
          FUN_01187dc0(*(long *)(lVar41 + 200),lVar26 + 0x40,plVar58);
          ppplVar42 = param_1[0x84];
          if (ppplVar42 == (long ***)0x0) {
LAB_0118201c:
            ppplVar37 = (long ***)(*(code *)(*param_1[0x8a])[2])(param_1[0x8a],0x38,8);
            if (ppplVar37 == (long ***)0x0) {
              (*(code *)(*param_1[0x8a])[0x1d])();
            }
            ppplVar56 = param_1[0x8a];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar20 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar20 != 0) {
              if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_011859f8;
              *(long ****)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = ppplVar56;
              *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            }
            ppplVar37[2] = (long **)ppplVar59;
            ppplVar37[3] = pplVar25;
            ppplVar37[4] = pplVar50;
            ppplVar37[5] = pplVar33;
            if (pplVar33 != (long **)0x0) {
              (*(code *)(*pplVar33)[3])(pplVar33);
            }
            pplVar25 = *(long ***)(lVar41 + 200);
            ppplVar37[6] = pplVar25;
            if (pplVar25 != (long **)0x0) {
              pplVar25 = pplVar25 + 5;
              do {
                iVar19 = *(int *)pplVar25;
                cVar11 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(pplVar25,0x10);
                if (bVar17) {
                  *(int *)pplVar25 = iVar19 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar19 == -1) goto LAB_01185ab0;
            }
            if (lVar20 != 0) {
              *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
            }
            *ppplVar37 = (long **)0x0;
            ppplVar37[1] = (long **)ppplVar59;
            if ((ppplVar42 == (long ***)0x0) ||
               (ppplVar56 = local_350,
               *(float *)(param_1 + 0x8f) * (float)ppplVar42 < (float)((long)param_1[0x8e] + 1))) {
              ppplVar42 = (long ***)
                          ((ulong)(ppplVar42 < (long ***)0x3 ||
                                  ((ulong)ppplVar42 & (ulong)((long)ppplVar42 + -1)) != 0) |
                          (long)ppplVar42 << 1);
              ppplVar56 = (long ***)
                          (long)((float)((long)param_1[0x8e] + 1) / *(float *)(param_1 + 0x8f));
              if (ppplVar56 <= ppplVar42) {
                ppplVar56 = ppplVar42;
              }
              if ((long)ppplVar56 - 1U == 0) {
                ppplVar56 = (long ***)0x2;
              }
              else if (((ulong)ppplVar56 & (long)ppplVar56 - 1U) != 0) {
                ppplVar56 = (long ***)std::__next_prime((ulong)ppplVar56);
              }
              ppplVar42 = param_1[0x84];
              if (ppplVar42 < ppplVar56) {
                ppplVar38 = ppplVar56;
LAB_0118215c:
                FUN_0118a564(pppplVar23,ppplVar38);
              }
              else if (ppplVar56 < ppplVar42) {
                ppplVar38 = (long ***)(long)((float)param_1[0x8e] / *(float *)(param_1 + 0x8f));
                if ((ppplVar42 < (long ***)0x3) ||
                   (uVar40 = (long)ppplVar42 - ((ulong)ppplVar42 >> 1 & 0x5555555555555555),
                   uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333),
                   1 < (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  ppplVar38 = (long ***)std::__next_prime((ulong)ppplVar38);
                }
                else if ((long ***)0x1 < ppplVar38) {
                  ppplVar38 = (long ***)(1L << (-LZCOUNT((long)ppplVar38 + -1) & 0x3fU));
                }
                if (ppplVar38 <= ppplVar56) {
                  ppplVar38 = ppplVar56;
                }
                if (ppplVar38 < ppplVar42) goto LAB_0118215c;
              }
              ppplVar42 = param_1[0x84];
              if (((ulong)ppplVar42 & (ulong)((long)ppplVar42 + -1)) == 0) {
                ppplVar56 = (long ***)((ulong)((long)ppplVar42 + -1) & (ulong)ppplVar59);
              }
              else if (ppplVar59 < ppplVar42) {
                ppplVar56 = ppplVar59;
              }
              else {
                uVar40 = 0;
                if (ppplVar42 != (long ***)0x0) {
                  uVar40 = (ulong)ppplVar59 / (ulong)ppplVar42;
                }
                ppplVar56 = (long ***)((long)ppplVar59 - uVar40 * (long)ppplVar42);
              }
            }
            ppplVar59 = (long ***)(*pppplVar23)[(long)ppplVar56];
            if (ppplVar59 == (long ***)0x0) {
              *ppplVar37 = (long **)*pppplVar53;
              *pppplVar53 = ppplVar37;
              (*pppplVar23)[(long)ppplVar56] = (long **)pppplVar53;
              if (*ppplVar37 != (long **)0x0) {
                ppplVar59 = (long ***)(*ppplVar37)[1];
                if (((ulong)ppplVar42 & (ulong)((long)ppplVar42 + -1)) == 0) {
                  ppplVar59 = (long ***)((ulong)ppplVar59 & (ulong)((long)ppplVar42 + -1));
                }
                else if (ppplVar42 <= ppplVar59) {
                  uVar40 = 0;
                  if (ppplVar42 != (long ***)0x0) {
                    uVar40 = (ulong)ppplVar59 / (ulong)ppplVar42;
                  }
                  ppplVar59 = (long ***)((long)ppplVar59 - uVar40 * (long)ppplVar42);
                }
                ppplVar59 = *pppplVar23 + (long)ppplVar59;
                goto LAB_01185180;
              }
            }
            else {
              *ppplVar37 = *ppplVar59;
LAB_01185180:
              *ppplVar59 = (long **)ppplVar37;
            }
            param_1[0x8e] = (long ***)((long)param_1[0x8e] + 1);
          }
          else {
            puVar35 = (undefined1 *)((long)ppplVar42 + -1);
            if (((ulong)ppplVar42 & (ulong)puVar35) == 0) {
              local_350 = (long ***)((ulong)puVar35 & (ulong)ppplVar59);
              pplVar39 = (*pppplVar23)[(long)local_350];
              if (pplVar39 == (long **)0x0) goto LAB_0118201c;
              do {
                pplVar39 = (long **)*pplVar39;
                if ((pplVar39 == (long **)0x0) ||
                   ((long ***)pplVar39[1] != ppplVar59 &&
                    (long ***)((ulong)pplVar39[1] & (ulong)puVar35) != local_350))
                goto LAB_0118201c;
              } while ((long ***)pplVar39[2] != ppplVar59);
            }
            else {
              local_350 = ppplVar59;
              if (ppplVar42 <= ppplVar59) {
                uVar40 = 0;
                if (ppplVar42 != (long ***)0x0) {
                  uVar40 = (ulong)ppplVar59 / (ulong)ppplVar42;
                }
                local_350 = (long ***)((long)ppplVar59 - uVar40 * (long)ppplVar42);
              }
              pplVar39 = (*pppplVar23)[(long)local_350];
              if (pplVar39 == (long **)0x0) goto LAB_0118201c;
              do {
                pplVar39 = (long **)*pplVar39;
                if (pplVar39 == (long **)0x0) goto LAB_0118201c;
                ppplVar37 = (long ***)pplVar39[1];
                if (ppplVar37 != ppplVar59) {
                  if (ppplVar42 <= ppplVar37) {
                    uVar40 = 0;
                    if (ppplVar42 != (long ***)0x0) {
                      uVar40 = (ulong)ppplVar37 / (ulong)ppplVar42;
                    }
                    ppplVar37 = (long ***)((long)ppplVar37 - uVar40 * (long)ppplVar42);
                  }
                  if (ppplVar37 != local_350) goto LAB_0118201c;
                }
              } while ((long ***)pplVar39[2] != ppplVar59);
            }
          }
LAB_01181f5c:
          if (pplVar33 != (long **)0x0) {
            (*(code *)(*pplVar33)[4])(pplVar33);
          }
        }
        ppplVar47 = ppplVar47 + 1;
      } while (ppplVar47 != ppplVar24);
    }
  }
  if (local_168 != (long ***)0x0) {
    ppplVar47 = local_168 + 5;
    do {
      iVar19 = *(int *)ppplVar47;
      iVar14 = iVar19 + -1;
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(ppplVar47,0x10);
      if (bVar17) {
        *(int *)ppplVar47 = iVar14;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar14 == 0) {
      (*(code *)(*local_168)[2])();
    }
    else if (iVar19 == 0) goto LAB_01185ad8;
  }
  if (local_170 != (long ****)0x0) {
    (*(code *)(*local_170)[0xc])();
  }
  *(undefined1 *)((long)param_1 + 0x3b4) = 2;
switchD_01181d50_caseD_2:
  ppplVar47 = param_1[0x91];
  if (ppplVar47 == (long ***)0x0) {
    bVar17 = true;
  }
  else if (*(char *)((long)ppplVar47 + 0x11a) == '\0') {
    bVar17 = false;
  }
  else {
    bVar17 = *(int *)(ppplVar47 + 0x26) == 3;
  }
  if (param_1[0x93] == (long ***)0x0) {
    bVar18 = true;
  }
  else {
    bVar18 = *(char *)((long)param_1[0x93] + 0x11a) != '\0';
  }
  if (!(bool)(bVar17 & bVar18)) {
switchD_01181d50_default:
    return 0;
  }
  FUN_00c9e664(&local_250,param_1 + 0x1d);
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_270 = *(long *****)PTR_DAT_047d3e30;
  local_268 = *(long ****)(PTR_DAT_047d3e30 + 8);
  local_260 = *(long ****)(PTR_DAT_047d3e30 + 0x10);
  local_258 = *(long ****)(PTR_DAT_047d3e30 + 0x18);
  if (local_258 != (long ***)0x0) {
    (*(code *)(*local_258)[3])();
  }
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_2b0 = (undefined8 *)(PTR_DAT_047dcde8 + 0x10);
  local_2a8 = 0;
  ppplVar47 = param_1[0x27];
  ppplVar24 = param_1[0x28];
  if (ppplVar47 == ppplVar24) {
    uVar49 = 0;
  }
  else {
    uVar49 = 0;
    do {
      pplVar25 = *ppplVar47;
      for (plVar58 = pplVar25[0x2e]; plVar58 != (long *)0x0; plVar58 = (long *)*plVar58) {
        pcVar60 = (char *)plVar58[6];
        plVar57 = pplVar25[0x35];
        if (plVar57 != (long *)0x0) {
          (**(code **)(*plVar57 + 0x18))(plVar57);
        }
        if (*pcVar60 != '\0' && local_2a8 == 0) {
          ppplVar42 = *(long ****)(pcVar60 + 8);
          ppplVar59 = (long ***)PTR_DAT_047d8b70;
          if (ppplVar42 != (long ***)0x0) {
            ppplVar59 = ppplVar42 + 6;
          }
          pppplVar23 = (long ****)*ppplVar59;
          ppplVar59 = (long ***)PTR_PTR_047d4508;
          if (ppplVar42 != (long ***)0x0) {
            ppplVar59 = ppplVar42 + 7;
          }
          ppplVar59 = (long ***)*ppplVar59;
          if (ppplVar42 == (long ***)0x0) {
            ppplVar37 = (long ***)0x0;
          }
          else {
            ppplVar37 = (long ***)ppplVar42[8];
            (*(code *)(*ppplVar42)[3])(ppplVar42);
          }
          ppplVar56 = local_258;
          local_258 = (long ***)0x0;
          local_270 = pppplVar23;
          local_268 = ppplVar59;
          local_260 = ppplVar37;
          if (ppplVar56 != (long ***)0x0) {
            (*(code *)(*ppplVar56)[4])();
          }
          pcVar29 = pcVar60 + 0x138;
          if (*(long *)(pcVar60 + 0x180) != 0) {
            pcVar29 = pcVar60 + 0x178;
          }
          local_258 = ppplVar42;
          FUN_0118779c(&local_2b0,pcVar29);
          if (*(long *)(pcVar60 + 0x180) != 0) {
            uVar49 = 1;
          }
        }
        if (plVar57 != (long *)0x0) {
          (**(code **)(*plVar57 + 0x20))(plVar57);
        }
      }
      ppplVar47 = ppplVar47 + 1;
    } while (ppplVar47 != ppplVar24);
  }
  local_308 = (long *)CONCAT44(uStack_24c,local_250);
  local_310 = param_1;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x58))();
  }
  local_300 = local_248;
  if (local_248 != (long *)0x0) {
    plVar58 = local_248 + 5;
    do {
      lVar26 = *plVar58;
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar58,0x10);
      if (bVar17) {
        *(int *)plVar58 = (int)lVar26 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if ((int)lVar26 == -1) {
LAB_01185ab0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_01186a68(local_2f8,&local_2b0);
  local_1fc[0] = '\0';
  local_200[0] = '\0';
  ppplVar47 = param_1[0x27];
  ppplVar24 = param_1[0x28];
  local_2b8 = uVar49;
  if (ppplVar47 != ppplVar24) {
    do {
      pplVar25 = *ppplVar47;
      local_168 = (long ***)0x0;
      local_170 = (long ****)0x0;
      FUN_00c43ef0(&local_170,pplVar25 + 6);
      local_210 = (undefined8 *)0x0;
      uStack_208 = 0;
      ppplVar59 = (long ***)0x0;
      if (pplVar25 != (long **)0x0) {
        ppplVar59 = (long ***)(pplVar25 + 5);
      }
      if (local_170[2] == ppplVar59) {
        FUN_01187348(&local_210,&local_170);
      }
      pppplVar23 = local_170;
      if (local_170 != (long ****)0x0) {
        pppplVar53 = local_170 + 3;
        do {
          sVar10 = *(short *)pppplVar53;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(pppplVar53,0x10);
          if (bVar17) {
            *(short *)pppplVar53 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          piVar27 = (int *)((long)local_170 + 0x1c);
          do {
            iVar19 = *piVar27;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar17) {
              *piVar27 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_1b0 = (long ****)*pppplVar23;
            FUN_00c44438(lVar26 + 0x8040,&local_1b0);
          }
        }
        else if (sVar10 == 0) {
LAB_01185b00:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      plVar58 = (*ppplVar47)[0x1f];
      if ((plVar58 == (long *)0x0) || ((*(byte *)(plVar58 + 0x3d) & 1) == 0)) {
        lVar26 = 0;
      }
      else {
        puVar21 = (uint *)(**(code **)(*(*ppplVar47)[0x1f] + 0x70))();
        lVar26 = (long)puVar21 + (ulong)*puVar21;
      }
      uVar22 = FUN_01187e80(lVar26,(*ppplVar47)[0x27]);
      local_240 = (long ****)&local_310;
      pplVar25 = *ppplVar47;
      local_238 = (undefined8 *)0x0;
      uStack_230 = 0;
      FUN_01186804(&local_238,&local_210);
      local_220 = local_1fc;
      local_218 = local_200;
      plVar58 = pplVar25[0x2e];
      local_228 = uVar22;
      if (plVar58 != (long *)0x0) {
LAB_01182598:
        plVar62 = pplVar25[0x35];
        pbVar61 = (byte *)plVar58[6];
        cVar11 = *(char *)(pplVar25 + 0x36);
        plVar57 = (long *)PTR_PTR_047d4508;
        if (plVar62 != (long *)0x0) {
          plVar57 = plVar62 + 7;
        }
        pcVar60 = (char *)*plVar57;
        if (plVar62 != (long *)0x0) {
          (**(code **)(*plVar62 + 0x18))(plVar62);
        }
        uVar22 = local_228;
        if (*pbVar61 == 0) {
LAB_011825dc:
          if (cVar11 != '\0') {
            *local_218 = '\x01';
          }
          pcVar55 = *(code **)(pbVar61 + 8);
          pcVar34 = (code *)PTR_DAT_047d8b70;
          if (pcVar55 != (code *)0x0) {
            pcVar34 = pcVar55 + 0x30;
          }
          local_170 = *(long *****)pcVar34;
          local_168 = (long ***)PTR_PTR_047d4508;
          if (pcVar55 != (code *)0x0) {
            local_168 = (long ***)(pcVar55 + 0x38);
          }
          local_168 = (long ***)*local_168;
          if (pcVar55 == (code *)0x0) {
            local_160 = (code *)0x0;
            local_158 = (code *)0x0;
            FUN_01186e60(local_228,&local_170);
          }
          else {
            local_160 = *(code **)(pcVar55 + 0x40);
            (**(code **)(*(long *)pcVar55 + 0x18))(pcVar55);
            local_158 = pcVar55;
            FUN_01186e60(uVar22,&local_170);
            (**(code **)(*(long *)pcVar55 + 0x20))(pcVar55);
          }
          pppplVar23 = local_240;
          local_1f8 = (undefined8 *)0x0;
          uStack_1f0 = 0;
          FUN_01186804(&local_1f8,&local_238);
          cVar11 = *local_218;
          ppplVar59 = *pppplVar23;
          pbVar5 = pbVar61 + 0x138;
          if (*(long *)(pbVar61 + 0x180) != 0) {
            pbVar5 = pbVar61 + 0x178;
          }
          FUN_01186a68(&local_1b0,pbVar5);
          if ((*(char *)(pppplVar23 + 0xb) == '\0') && (*(long *)(pbVar61 + 0x128) != 0)) {
            FUN_0118b400(&local_1e8,*(undefined8 *)(pbVar61 + 0x18));
            ppplVar42 = local_1e8;
            if (local_1e8 == (long ***)0x0) goto LAB_011826b4;
            pplVar50 = local_1e8[7];
            if (*(char *)pplVar50 == '\0') {
              local_320 = (long ***)0x0;
              local_318 = (long ****)0x0;
              bVar17 = false;
              local_340 = (byte *)0x0;
LAB_01185d4c:
              (*(code *)(*local_1e8)[4])(local_1e8);
            }
            else {
              if (pppplVar23[2] == (long ***)0x0) {
                pplVar33 = (long **)0x0;
              }
              else {
                pplVar33 = pppplVar23[2][9];
              }
              (*(code *)(*local_1e8)[3])(local_1e8);
              memset(&local_170,0,0x100);
              snprintf((char *)&local_170,0x100,"%p_%s_%s",pplVar33,(char *)pplVar33[0x6e],
                       (char *)pplVar50);
              FUN_01367120(&local_1c8,&local_170);
              (*(code *)(*ppplVar42)[4])(ppplVar42);
              local_318 = local_1c8;
              if (local_1c8 != (long ****)0x0) {
                (*(code *)(*local_1c8)[3])(local_1c8);
              }
              local_320 = local_1e8;
              local_340 = pbVar61 + 0xd0;
              if (local_1e8 != (long ***)0x0) {
                (*(code *)(*local_1e8)[3])(local_1e8);
              }
              FUN_0118779c(&local_1b0,pppplVar23 + 3);
              if (local_1c8 != (long ****)0x0) {
                (*(code *)(*local_1c8)[4])();
              }
              bVar17 = true;
              if (local_1e8 != (long ***)0x0) goto LAB_01185d4c;
            }
          }
          else {
LAB_011826b4:
            local_320 = (long ***)0x0;
            local_318 = (long ****)0x0;
            bVar17 = false;
            local_340 = (byte *)0x0;
          }
          if (((cVar11 != '\0') && (local_1a8 != (undefined1 *)0x0)) &&
             ((local_1a8[0x1e8] & 1) != 0)) {
            pplVar50 = ppplVar59[0xa3];
            if (pplVar50 == (long **)0x0) {
              if (pppplVar23[2] == (long ***)0x0) {
                pplVar50 = (long **)0x0;
              }
              else {
                pplVar50 = pppplVar23[2][9];
              }
              uVar22 = FUN_01188b88(pplVar50,pplVar50[1]);
              FUN_00d94550(ppplVar59 + 0x92,uVar22);
              pplVar33 = ppplVar59[0x92];
              ppplVar59[0xa3] = pplVar33;
              pplVar50 = pplVar33 + 0x2b;
              plVar57 = (long *)nn::os::GetCurrentThread();
LAB_01182dec:
              if (*pplVar50 == (long *)0x0) goto code_r0x01182df4;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(pplVar33 + 0x2c));
              do {
                if (*pplVar50 != (long *)0x0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(pplVar33 + 0x2c));
                    while (*pplVar50 == (long *)0x0) {
                      cVar11 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(pplVar50,0x10);
                      if (bVar18) {
                        *pplVar50 = plVar57;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                      if (cVar11 == '\0') goto LAB_01182dfc;
                    }
                  } while( true );
                }
                cVar11 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(pplVar50,0x10);
                if (bVar18) {
                  *pplVar50 = plVar57;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
LAB_01182dfc:
              *(undefined1 *)((long)pplVar33 + 0x249) = 1;
              pplVar33[0x2b] = (long *)0x0;
              nn::os::SignalLightEvent((LightEventType *)(pplVar33 + 0x2c));
              pplVar50 = ppplVar59[0xa3];
            }
            plVar52 = *(long **)(pbVar61 + 8);
            plVar57 = (long *)PTR_DAT_047d8b70;
            if (plVar52 != (long *)0x0) {
              plVar57 = plVar52 + 6;
            }
            lVar26 = *plVar57;
            if (plVar52 != (long *)0x0) {
              (**(code **)(*plVar52 + 0x18))(plVar52);
            }
            plVar57 = pplVar50[0x2f];
            plVar51 = pplVar50[0x30];
            if (plVar57 == plVar51) {
LAB_0118272c:
              if (plVar57 == plVar51) goto LAB_011832b4;
              lVar26 = *plVar57;
            }
            else {
              do {
                if (*(long *)(*plVar57 + 0x1d0) == lVar26) goto LAB_0118272c;
                plVar57 = plVar57 + 1;
              } while (plVar51 != plVar57);
LAB_011832b4:
              lVar26 = 0;
            }
            if (plVar52 != (long *)0x0) {
              (**(code **)(*plVar52 + 0x20))(plVar52);
            }
            if (lVar26 != 0) goto LAB_01182d4c;
            local_1b8 = (long *)0x0;
            if (ppplVar59[0xa3] == ppplVar59[0x92]) {
              plVar52 = *(long **)(pbVar61 + 8);
              plVar57 = (long *)PTR_DAT_047d8b70;
              if (plVar52 != (long *)0x0) {
                plVar57 = plVar52 + 6;
              }
              pplVar50 = (long **)*plVar57;
              if (plVar52 != (long *)0x0) {
                (**(code **)(*plVar52 + 0x18))(plVar52);
              }
              pplVar33 = ppplVar59[0x96];
              if (pplVar33 == (long **)0x0) {
LAB_011827d8:
                plVar51 = (long *)0x0;
              }
              else {
                uVar40 = (long)pplVar33 - ((ulong)pplVar33 >> 1 & 0x5555555555555555);
                uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333);
                uVar40 = (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar40 < 2) {
                  pplVar39 = (long **)((long)pplVar33 - 1U & (ulong)pplVar50);
                }
                else if (pplVar50 < pplVar33) {
                  pplVar39 = pplVar50;
                }
                else {
                  uVar48 = 0;
                  if (pplVar33 != (long **)0x0) {
                    uVar48 = (ulong)pplVar50 / (ulong)pplVar33;
                  }
                  pplVar39 = (long **)((long)pplVar50 - uVar48 * (long)pplVar33);
                }
                if ((ppplVar59[0x95][(long)pplVar39] == (long *)0x0) ||
                   (plVar57 = (long *)*ppplVar59[0x95][(long)pplVar39], plVar57 == (long *)0x0))
                goto LAB_011827d8;
                if (uVar40 < 2) {
                  do {
                    if ((long **)plVar57[1] == pplVar50) {
                      if ((long **)plVar57[2] == pplVar50) goto LAB_01184c20;
                    }
                    else if ((long **)((ulong)plVar57[1] & (long)pplVar33 - 1U) != pplVar39)
                    goto LAB_011827d8;
                    plVar57 = (long *)*plVar57;
                    plVar51 = (long *)0x0;
                  } while (plVar57 != (long *)0x0);
                }
                else {
                  do {
                    pplVar46 = (long **)plVar57[1];
                    if (pplVar46 == pplVar50) {
                      if ((long **)plVar57[2] == pplVar50) goto LAB_01184c20;
                    }
                    else {
                      if (pplVar33 <= pplVar46) {
                        uVar40 = 0;
                        if (pplVar33 != (long **)0x0) {
                          uVar40 = (ulong)pplVar46 / (ulong)pplVar33;
                        }
                        pplVar46 = (long **)((long)pplVar46 - uVar40 * (long)pplVar33);
                      }
                      if (pplVar46 != pplVar39) goto LAB_011827d8;
                    }
                    plVar57 = (long *)*plVar57;
                    plVar51 = (long *)0x0;
                  } while (plVar57 != (long *)0x0);
                }
              }
              goto LAB_011827dc;
            }
            goto LAB_011827ec;
          }
          goto LAB_01182d4c;
        }
        if (*local_220 == '\0') {
          *local_220 = '\x01';
          goto LAB_011825dc;
        }
        goto LAB_01182d6c;
      }
LAB_01182fe0:
      puVar54 = local_238;
      if (local_238 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_238 + 3);
        do {
          sVar10 = *psVar1;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          piVar27 = (int *)((long)local_238 + 0x1c);
          do {
            iVar19 = *piVar27;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar17) {
              *piVar27 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_170 = (long ****)*puVar54;
            FUN_00c44438(lVar26 + 0x8040,&local_170);
          }
        }
        else if (sVar10 == 0) goto LAB_01185b00;
      }
      puVar54 = local_210;
      if (local_210 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_210 + 3);
        do {
          sVar10 = *psVar1;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar10 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 1) {
          piVar27 = (int *)((long)local_210 + 0x1c);
          do {
            iVar19 = *piVar27;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar27,0x10);
            if (bVar17) {
              *piVar27 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_170 = (long ****)*puVar54;
            FUN_00c44438(lVar26 + 0x8040,&local_170);
          }
        }
        else if (sVar10 == 0) goto LAB_01185b00;
      }
      ppplVar47 = ppplVar47 + 1;
    } while (ppplVar47 != ppplVar24);
  }
  FUN_01185de0(local_2f8);
  if (local_300 != (long *)0x0) {
    plVar58 = local_300 + 5;
    do {
      lVar26 = *plVar58;
      iVar19 = (int)lVar26 + -1;
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar58,0x10);
      if (bVar17) {
        *(int *)plVar58 = iVar19;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*local_300 + 0x10))();
      goto LAB_011832e8;
    }
    if ((int)lVar26 != 0) goto LAB_011832e8;
LAB_01185ad8:
    pcVar60 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar29 = "DecrementReferenceInternal";
    pcVar30 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar31 = "Reference counter underflows.";
LAB_01185af8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar60,pcVar29,pcVar30,0x58,pcVar31);
  }
LAB_011832e8:
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x60))();
  }
  if ((param_1[0xa3] != (long ***)0x0) && (*(char *)local_268 != '\0')) {
    if (param_1[0x94] == (long ***)0x0) {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar19 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar26 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar26;
      if (*(char *)(lVar26 + 0x38) != '\0') {
        if (local_248 == (long *)0x0) {
          plVar58 = (long *)0x0;
        }
        else {
          plVar58 = (long *)local_248[9];
        }
        ppplVar47 = (long ***)plVar58[1];
        if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar26 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar26 + 0x80)) {
LAB_011859f8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long ****)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = ppplVar47;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
        pppplVar23 = (long ****)(*(code *)(*ppplVar47)[2])(ppplVar47,0x760,0x10);
        if (pppplVar23 == (long ****)0x0) {
LAB_01185d04:
          pplVar25 = *ppplVar47;
LAB_01185d0c:
          (*(code *)pplVar25[0x1d])(ppplVar47);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                     ,0x40);
        }
        FUN_0111b608(pppplVar23,&local_270);
        *(undefined4 *)(pppplVar23 + 3) = 0x100760;
        pppplVar23[1] = ppplVar47;
        pppplVar23[2] = (long ***)pppplVar23;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
        ppplVar47 = pppplVar23[0x13];
        if (ppplVar47[2] == (long **)0x0) goto LAB_01185b40;
        psVar1 = (short *)((long)ppplVar47 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar10 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 != 0) {
          if (sVar10 != -1) goto LAB_01183408;
LAB_01184614:
          pcVar60 = "count != 0";
          pcVar29 = "AddReference";
          pcVar30 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar31 = "Reference counter overflows.";
          goto LAB_01185af8;
        }
        pplVar25 = (long **)(*(code *)**ppplVar47[2])();
        ppplVar47[1] = pplVar25;
        *(undefined4 *)((long)ppplVar47 + 0x1c) = 0xfffffffe;
LAB_01183408:
        pppplVar53 = pppplVar23 + 4;
        (*(code *)(*pppplVar53)[0x1d])(pppplVar53,plVar58);
        (*(code *)(*pppplVar53)[0xd])(pppplVar53);
        local_170 = pppplVar23;
        FUN_00df8c30(plVar58 + 0x21,&local_170);
        if (local_170 != (long ****)0x0) {
          ppplVar47 = local_170[0x13];
          psVar1 = (short *)((long)ppplVar47 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar10 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar10 == 1) {
            ppplVar47[2] = (long **)0x0;
            (*(code *)(*local_170)[10])();
          }
          else if (sVar10 == 0) goto LAB_01184540;
        }
        (**(code **)(*plVar58 + 0x100))(plVar58,pppplVar53);
        plVar57 = plVar58 + 0x88;
        lVar41 = *plVar57;
        lVar26 = nn::os::GetCurrentThread();
        if (lVar26 != lVar41) {
          lVar26 = nn::os::GetCurrentThread();
LAB_01183478:
          if (*plVar57 == 0) goto code_r0x01183480;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar58 + 0x89));
          do {
            if (*plVar57 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar58 + 0x89));
                while (*plVar57 == 0) {
                  cVar11 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                  if (bVar17) {
                    *plVar57 = lVar26;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                  if (cVar11 == '\0') goto LAB_01183488;
                }
              } while( true );
            }
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
            if (bVar17) {
              *plVar57 = lVar26;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
LAB_01183488:
          bVar17 = false;
          goto LAB_0118348c;
        }
        plVar57 = (long *)0x0;
        bVar17 = true;
LAB_0118348c:
        if ((*(byte *)(plVar58 + 0x8b) >> 2 & 1) == 0) {
          FUN_00d37964(plVar58,0,0);
        }
        else {
          (*(code *)(*pppplVar53)[0x1f])(pppplVar53);
        }
        if (!bVar17) {
          *plVar57 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar57 + 1));
        }
        ppplVar47 = pppplVar23[0x13];
        if (ppplVar47[2] == (long **)0x0) {
LAB_01185b40:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)((long)ppplVar47 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar11 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar10 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar10 == 0) {
          pplVar25 = (long **)(*(code *)**ppplVar47[2])();
          ppplVar47[1] = pplVar25;
          *(undefined4 *)((long)ppplVar47 + 0x1c) = 0xfffffffe;
        }
        else if (sVar10 == -1) goto LAB_01184614;
        ppplVar47 = param_1[0x94];
        param_1[0x94] = (long ***)pppplVar23;
        if (ppplVar47 != (long ***)0x0) {
          pplVar25 = ppplVar47[0x13];
          psVar1 = (short *)((long)pplVar25 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar10 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (sVar10 == 1) {
            pplVar25[2] = (long *)0x0;
            (*(code *)(*ppplVar47)[10])();
          }
          else if (sVar10 == 0) {
LAB_01184540:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
    else {
      FUN_0118b534(param_1[0x94],&local_270);
      FUN_0118f5d4(param_1[0x94]);
    }
  }
  ppplVar47 = local_258;
  param_1[0x77] = (long ***)local_270;
  param_1[0x78] = local_268;
  param_1[0x79] = local_260;
  if (local_258 != (long ***)0x0) {
    (*(code *)(*local_258)[3])(local_258);
  }
  ppplVar24 = param_1[0x7a];
  param_1[0x7a] = ppplVar47;
  if (ppplVar24 != (long ***)0x0) {
    (*(code *)(*ppplVar24)[4])();
  }
  FUN_0118779c(param_1 + 0x7b,&local_2b0);
  FUN_01185de0(&local_2b0);
  if (local_258 != (long ***)0x0) {
    (*(code *)(*local_258)[4])();
  }
  if (local_248 != (long *)0x0) {
    plVar58 = local_248 + 5;
    do {
      lVar26 = *plVar58;
      iVar19 = (int)lVar26 + -1;
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar58,0x10);
      if (bVar17) {
        *(int *)plVar58 = iVar19;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*local_248 + 0x10))();
    }
    else if ((int)lVar26 == 0) goto LAB_01185ad8;
  }
  if ((long *)CONCAT44(uStack_24c,local_250) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(uStack_24c,local_250) + 0x60))();
  }
  *(undefined1 *)((long)param_1 + 0x3b4) = 3;
switchD_01181d50_caseD_3:
  ppplVar47 = param_1[0xa3];
  if (ppplVar47 == (long ***)0x0) {
    bVar17 = true;
  }
  else {
    cVar11 = *(char *)((long)ppplVar47 + 0x11a);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    if (((ulong)ppplVar47[0x4f] & 1) == 0) {
LAB_01184778:
      bVar12 = 0;
    }
    else {
      pplVar50 = ppplVar47[0x30];
      for (pplVar25 = ppplVar47[0x2f]; pplVar25 != pplVar50; pplVar25 = pplVar25 + 1) {
        plVar57 = *pplVar25;
        plVar58 = plVar57 + 0xc;
        lVar26 = nn::os::GetCurrentThread();
LAB_011835b8:
        if (*plVar58 == 0) goto code_r0x011835c0;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar57 + 0xd));
        do {
          if (*plVar58 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar57 + 0xd));
              while (*plVar58 == 0) {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                if (bVar17) {
                  *plVar58 = lVar26;
                  cVar13 = ExclusiveMonitorsStatus();
                }
                if (cVar13 == '\0') goto LAB_011835c8;
              }
            } while( true );
          }
          cVar13 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar58,0x10);
          if (bVar17) {
            *plVar58 = lVar26;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
LAB_011835c8:
        cVar13 = *(char *)((long)plVar57 + 0xeb);
        plVar57[0xc] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar57 + 0xd));
        if (cVar13 == '\0') goto LAB_01184778;
      }
      bVar12 = 1;
    }
    bVar17 = (bool)(cVar11 != '\0' & bVar12);
  }
  if ((param_1[0x94] == (long ***)0x0) || (param_1[0xa3] == (long ***)0x0)) {
    bVar18 = true;
  }
  else {
    bVar18 = *(char *)((long)param_1[0x94] + 0x11a) != '\0';
  }
  if (!bVar17) {
    return 0;
  }
  if (!bVar18) {
    return 0;
  }
  ppplVar47 = param_1[0xa3];
  if (ppplVar47 != (long ***)0x0) {
    ppplVar24 = ppplVar47 + 0x2b;
    pplVar25 = (long **)nn::os::GetCurrentThread();
LAB_01183670:
    if (*ppplVar24 == (long **)0x0) goto code_r0x01183678;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(ppplVar47 + 0x2c));
    do {
      if (*ppplVar24 != (long **)0x0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(ppplVar47 + 0x2c));
          while (*ppplVar24 == (long **)0x0) {
            cVar11 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(ppplVar24,0x10);
            if (bVar17) {
              *ppplVar24 = pplVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_01183680;
          }
        } while( true );
      }
      cVar11 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(ppplVar24,0x10);
      if (bVar17) {
        *ppplVar24 = pplVar25;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_01183680:
    *(undefined1 *)((long)ppplVar47 + 0x249) = 0;
    ppplVar47[0x2b] = (long **)0x0;
    nn::os::SignalLightEvent((LightEventType *)(ppplVar47 + 0x2c));
  }
  if (param_1[0x93] != (long ***)0x0) {
    *(undefined2 *)(param_1[0x93] + 0x5c) = 0x100;
  }
  if (*(char *)((long)param_1 + 0x481) != '\0') {
    if (param_1[0x91][0x24] != (long **)0x0) {
      *(undefined1 *)(param_1[0x91][0x24] + 0x42) = *(undefined1 *)(param_1 + 0x90);
    }
    *(undefined1 *)((long)param_1 + 0x481) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x3b4) = 4;
switchD_01181d50_caseD_4:
  if (param_1[0x93] != (long ***)0x0) {
    local_158 = (code *)0x0;
    local_170 = (long ****)0x9216337e871200f;
    local_168 = (long ***)0x3bdd1b3;
    local_160 = (code *)0x7;
    lVar26 = FUN_01187130(param_1[0x93] + 0x3f,&local_170);
    if (lVar26 == 0) {
      uVar36 = 0;
      uVar32 = 0;
    }
    else {
      uVar32 = *(uint *)(lVar26 + 0x4c) & 0xffffff00;
      uVar36 = *(uint *)(lVar26 + 0x4c) & 0xff;
    }
    if (local_158 != (code *)0x0) {
      (**(code **)(*(long *)local_158 + 0x20))();
    }
    if (lVar26 != 0 && (uVar32 | uVar36) != 1) {
      local_170 = (long ****)0x98fac5aa6b419e9e;
      local_168 = (long ***)0x3c0c6ad;
      local_160 = (code *)0x9;
      local_158 = (code *)0x0;
      lVar26 = FUN_01187130(param_1[0x93] + 0x3f,&local_170);
      if (lVar26 == 0) {
        uVar36 = 0;
        uVar32 = 0;
      }
      else {
        uVar32 = *(uint *)(lVar26 + 0x4c) & 0xffffff00;
        uVar36 = *(uint *)(lVar26 + 0x4c) & 0xff;
      }
      if (local_158 != (code *)0x0) {
        (**(code **)(*(long *)local_158 + 0x20))();
      }
      if (lVar26 == 0 || (uVar32 | uVar36) != 1) {
        ppplVar47 = param_1[0x27];
        if ((long)param_1[0x28] - (long)ppplVar47 != 0) {
          uVar48 = 0;
          uVar40 = (long)param_1[0x28] - (long)ppplVar47 >> 3;
          while (ppplVar47[uVar48][0xe] != (long *)0x19b607274a2a575a) {
            uVar48 = (ulong)((int)uVar48 + 1);
            if (uVar40 <= uVar48) {
              return 1;
            }
          }
          if (-1 < (int)uVar48) {
            if (uVar40 <= uVar48) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            uVar40 = FUN_0132a414(param_1 + 0x27,ppplVar47[uVar48]);
            uVar28 = FUN_028fb550(ppplVar47[uVar48]);
            if ((int)uVar40 == (int)uVar28) {
              return 1;
            }
            if ((uVar40 & 0xff00000000) == 0) {
              return 1;
            }
            if ((uVar28 & 0xff00000000) == 0) {
              return 1;
            }
            FUN_014faeb4(param_1,uVar48,uVar28,0);
          }
        }
      }
    }
  }
  return 1;
}


