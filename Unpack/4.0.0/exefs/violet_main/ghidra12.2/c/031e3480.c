/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e3480; name: FUN_031e3480
 */


void FUN_031e3480(long *param_1,long *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 **ppuVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ThreadType *pTVar17;
  long *plVar18;
  size_t sVar19;
  long lVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  ulong *puVar24;
  uint uVar25;
  ulong uVar26;
  char *pcVar27;
  char *pcVar28;
  char cVar29;
  int iVar30;
  char *pcVar32;
  char *pcVar31;
  ulong *puVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 **ppuVar36;
  long *plVar37;
  byte *pbVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  byte *pbVar42;
  int iVar43;
  ulong uVar44;
  byte *pbVar45;
  int local_290;
  undefined8 *local_280;
  ulong local_278;
  ulong local_270;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  ulong local_250;
  ulong *local_248;
  ulong local_240;
  long local_238;
  int local_1d8;
  byte *local_1d0;
  byte *pbStack_1c8;
  undefined8 **local_1c0;
  undefined *local_1b8;
  undefined8 *local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 **local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 *local_170 [8];
  undefined4 local_130;
  ushort local_6c [6];
  
  puVar7 = PTR_DAT_047e5b68;
  pbStack_1c8 = param_4;
  if ((param_3 == param_4) || (*param_3 != 0x21)) {
    lVar20 = param_1[1];
    local_1d0 = param_3;
LAB_031e34d8:
    FUN_031dbdbc(&local_1c0,lVar20,puVar7);
    ppuVar36 = local_1c0;
    if (local_1c0 == (undefined8 **)0x0) goto code_r0x031e34f0;
    if (((ulong)local_1b0 & 1) != 0) {
      plVar18 = (long *)((ulong)local_1b0 & 0xfffffffffffffffe);
      plVar37 = plVar18 + 1;
      do {
        lVar20 = *plVar37;
        cVar29 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar5) {
          *(int *)plVar37 = (int)lVar20 + -1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
        (**(code **)(*plVar18 + 8))();
      }
    }
    lVar20 = FUN_031d4e54(ppuVar36,param_1,param_2);
    if (lVar20 != 0) {
      return;
    }
LAB_031e3580:
    puVar7 = PTR_DAT_047e5c38;
    puVar24 = (ulong *)param_1[1];
    uVar41 = 0;
    puVar33 = puVar24;
    do {
      uVar25 = (uint)*puVar33;
      if ((uVar25 >> 0x15 & 1) == 0) {
        uVar44 = 0;
      }
      else {
        uVar44 = CONCAT44(uVar25,uVar25) & 0x1fffff001fffff;
        uVar44 = puVar33[(ulong)(byte)(POPCOUNT((char)uVar44) + POPCOUNT((char)(uVar44 >> 8)) +
                                      POPCOUNT((char)(uVar44 >> 0x10))) + 2];
      }
      uVar41 = uVar44 | uVar41;
    } while (((*puVar33 & 1) == 0) && (puVar33 = (ulong *)puVar33[1], puVar33 != (ulong *)0x0));
    if (((uint)uVar41 >> 3 & 1) == 0) {
      do {
        FUN_031dbdbc(&local_1c0,puVar24,puVar7);
        if (local_1c0 != (undefined8 **)0x0) {
          if (((ulong)local_1b0 & 1) != 0) {
            plVar18 = (long *)((ulong)local_1b0 & 0xfffffffffffffffe);
            plVar37 = plVar18 + 1;
            do {
              lVar20 = *plVar37;
              cVar29 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar5) {
                *(int *)plVar37 = (int)lVar20 + -1;
                cVar29 = ExclusiveMonitorsStatus();
              }
            } while (cVar29 != '\0');
            if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
              (**(code **)(*plVar18 + 8))();
            }
          }
          (*(code *)*local_1c0)(param_1,param_2,&local_1d0);
          return;
        }
        if (((ulong)local_1b0 & 1) != 0) {
          plVar18 = (long *)((ulong)local_1b0 & 0xfffffffffffffffe);
          plVar37 = plVar18 + 1;
          do {
            lVar20 = *plVar37;
            cVar29 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar5) {
              *(int *)plVar37 = (int)lVar20 + -1;
              cVar29 = ExclusiveMonitorsStatus();
            }
          } while (cVar29 != '\0');
          if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
            (**(code **)(*plVar18 + 8))();
          }
        }
        puVar24 = (ulong *)puVar24[1];
      } while (puVar24 != (ulong *)0x0);
    }
    goto LAB_031e3630;
  }
  local_1d0 = param_3 + 1;
LAB_031e3630:
  pbVar45 = pbStack_1c8;
  pbVar9 = local_1d0;
  puVar33 = (ulong *)param_1[1];
  if (puVar33 == (ulong *)0x0) {
    return;
  }
  puVar24 = puVar33;
  if ((*puVar33 & 1) == 0) {
    do {
      puVar24 = (ulong *)puVar24[1];
    } while ((*puVar24 & 1) == 0);
  }
  if ((puVar24[2] & 0x1f) == 4) {
    lVar20 = *param_1;
    uVar41 = param_1[2];
    if ((uVar41 & 1) != 0) {
      piVar1 = (int *)((uVar41 & 0xfffffffffffffffe) + 8);
      do {
        cVar29 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      uVar41 = param_1[2];
    }
    if (lVar20 != 0) {
      local_1c0 = (undefined8 **)0x0;
      local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffffffffff00);
      (**(code **)(*(long *)(uVar41 & 0xfffffffffffffffe) + 0x38))
                ((long *)(uVar41 & 0xfffffffffffffffe),lVar20,puVar33,&local_1c0);
      puVar7 = local_1b8;
      ppuVar10 = local_1c0;
      local_1c0 = &local_1b0;
      local_1b8 = (undefined *)0x8000008000000001;
      local_1b0 = (undefined8 *)((ulong)local_1b0 & 0xffffffffffffff00);
      local_130 = 1;
      FUN_031e4f30(ppuVar10,puVar7,local_1d0,pbStack_1c8,&local_1c0);
      ppuVar36 = (undefined8 **)-(long)ppuVar10;
      if (((ulong)puVar7 & 0xff) == 0) {
        ppuVar36 = ppuVar10;
      }
      FUN_031c6c18(param_2,local_1c0,ppuVar36);
      puVar7 = local_1b8;
      local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
      if ((-1 < (long)puVar7) && (local_1c0 != (undefined8 **)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      goto LAB_031e4e1c;
    }
    puVar33 = (ulong *)param_1[1];
  }
  else {
    uVar41 = 0;
  }
  if (puVar33 == (ulong *)0x0) goto LAB_031e4e1c;
  puVar24 = puVar33;
  if ((*puVar33 & 1) == 0) {
    do {
      puVar24 = (ulong *)puVar24[1];
    } while ((*puVar24 & 1) == 0);
  }
  if ((puVar24[2] & 0x1f) == 3) {
    lVar20 = *param_1;
    uVar44 = param_1[2];
    if ((uVar44 & 1) != 0) {
      piVar1 = (int *)((uVar44 & 0xfffffffffffffffe) + 8);
      do {
        cVar29 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar29 = ExclusiveMonitorsStatus();
        }
      } while (cVar29 != '\0');
      uVar44 = param_1[2];
    }
    if (lVar20 == 0) {
      puVar33 = (ulong *)param_1[1];
      goto joined_r0x031e3814;
    }
    local_1c0 = (undefined8 **)0x0;
    (**(code **)(*(long *)(uVar44 & 0xfffffffffffffffe) + 0x38))
              ((long *)(uVar44 & 0xfffffffffffffffe),lVar20,puVar33,&local_1c0);
    FUN_031c6afc(param_2,local_1c0,0xffffffff);
  }
  else {
    uVar44 = 0;
joined_r0x031e3814:
    if (puVar33 != (ulong *)0x0) {
      puVar24 = puVar33;
      if ((*puVar33 & 1) == 0) {
        do {
          puVar24 = (ulong *)puVar24[1];
        } while ((*puVar24 & 1) == 0);
      }
      if ((puVar24[2] & 0x1f) == 5) {
        lVar20 = *param_1;
        uVar39 = param_1[2];
        if ((uVar39 & 1) != 0) {
          piVar1 = (int *)((uVar39 & 0xfffffffffffffffe) + 8);
          do {
            cVar29 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar29 = ExclusiveMonitorsStatus();
            }
          } while (cVar29 != '\0');
          uVar39 = param_1[2];
        }
        if (lVar20 == 0) {
          puVar33 = (ulong *)param_1[1];
          if (puVar33 != (ulong *)0x0) goto LAB_031e3904;
          goto LAB_031e4db4;
        }
        local_268 = &local_258;
        local_258 = local_258 & 0xffffffffffffff00;
        local_260 = 0x8000008000000001;
        local_1d8 = 1;
        if ((uVar39 & 1) != 0) {
          piVar1 = (int *)((uVar39 & 0xfffffffffffffffe) + 8);
          do {
            cVar29 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar29 = ExclusiveMonitorsStatus();
            }
          } while (cVar29 != '\0');
        }
        uVar35 = 0x11;
        puVar24 = puVar33;
        while( true ) {
          uVar25 = (uint)*puVar24;
          if ((uVar25 >> 0x14 & 1) != 0) break;
          if (((*puVar24 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
          goto LAB_031e3ac4;
        }
        uVar35 = 0x11;
        if (puVar24 != (ulong *)0x0) {
          uVar25 = uVar25 & 0xfffff;
          uVar22 = 9;
          if ((short)puVar24[(ulong)(byte)(POPCOUNT((char)uVar25) + POPCOUNT((char)(uVar25 >> 8)) +
                                          POPCOUNT((char)(uVar25 >> 0x10))) + 2] != 4) {
            uVar22 = 0x11;
          }
          uVar35 = (ulong)uVar22;
        }
LAB_031e3ac4:
        local_280 = (undefined8 *)CONCAT62(local_280._2_6_,0x3f);
        if (local_1d0 == pbStack_1c8) {
          local_280 = (undefined8 *)CONCAT71(local_280._1_7_,0x67);
LAB_031e4800:
          iVar30 = (local_260._4_4_ & 0x7fffffff) - 1;
          if ((local_260 & 0x7fffffff00000000) != 0 && iVar30 != 0) {
            iVar30 = 1;
          }
          if (local_1d8 != 0) {
            iVar30 = 1;
          }
          iVar43 = iVar30 + 1;
          if ((int)(local_260._4_4_ & 0x7fffffff) <= iVar30) {
            FUN_030b4a20(&local_268,PTR_PTR_047d1a50 + 0x20,iVar43);
          }
          if (((int)local_260 <= iVar30) || (iVar43 < (int)local_260)) {
            local_260 = CONCAT44(local_260._4_4_,iVar43);
          }
          *(undefined1 *)((long)local_268 + (long)iVar30) = 0;
          memcpy(local_268,&DAT_03ca40f5,(long)(int)local_260 - 1);
LAB_031e4880:
          FUN_031c6e40(&local_268,&DAT_03c9b2ac,uVar35 & 0xffffffff);
        }
        else {
          bVar21 = *local_1d0;
          uVar25 = bVar21 - 0x45;
          if (uVar25 < 0x23) {
            if ((1L << ((ulong)uVar25 & 0x3f) & 0x500000005U) == 0) {
              if ((1L << ((ulong)uVar25 & 0x3f) & 0x200000002U) == 0) goto LAB_031e4060;
              bVar21 = 0x66;
            }
          }
          else {
LAB_031e4060:
            local_6c[0] = (ushort)bVar21;
            if (DAT_04884830 == '\0') {
              if (DAT_046aaf68 != '\0') goto LAB_031e4e78;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1c0 = (undefined8 **)0x0;
                local_1b0 = &DAT_048847e0;
                local_1a8 = 1;
                pTVar17 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a0 = nn::os::GetThreadId(pTVar17);
                local_198 = (undefined8 **)0x0;
                local_190 = 0;
                local_188 = (char *)0x0;
                local_180 = 0;
                uStack_178 = 0;
                FUN_0322c554(&local_1c0,
                             "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                             ,&DAT_046a65d8,local_6c);
                local_188 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
                ;
                local_180 = 0xdc;
                FUN_0322c8e0(&local_1c0);
              }
              else {
LAB_031e4e78:
                local_1c0 = (undefined8 **)0x0;
                local_1b0 = &DAT_048847e0;
                local_1a8 = 1;
                pTVar17 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a0 = nn::os::GetThreadId(pTVar17);
                local_190 = 0;
                local_188 = (char *)0x0;
                local_180 = 0;
                uStack_178 = 0;
                local_170[0]._0_1_ = '\0';
                local_1b8 = (undefined *)0x10000000000;
                local_1c0 = local_170;
                local_198 = local_170;
                FUN_0322c554(&local_1c0,
                             "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                             ,&DAT_046a65d8,local_6c);
                local_188 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
                ;
                local_180 = 0xdc;
                if ((char)local_170[0] != '\0') {
                  sVar19 = strlen((char *)local_170);
                  *(undefined2 *)
                   ((long)local_170 + (long)(int)((int)sVar19 - (uint)((int)sVar19 == 0xff))) = 10;
                  printf("%s",local_170);
                  fflush(*(FILE **)PTR_stdout_047cb860);
                }
              }
              if (((ulong)local_198 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_198 + -1),0);
              }
            }
            bVar21 = 0x67;
          }
          local_280 = (undefined8 *)CONCAT71(local_280._1_7_,bVar21);
          iVar30 = (int)pbVar45 - (int)pbVar9;
          iVar43 = iVar30 + -1;
          if (iVar43 == 0 || iVar30 < 1) goto LAB_031e4800;
          local_1c0 = &local_1b0;
          local_1b8 = (undefined *)0x8000008000000000;
          local_130 = 1;
          FUN_031c6afc(&local_1c0,pbVar9 + 1,iVar43);
          uVar35 = strtoul((char *)local_1c0,(char **)0x0,10);
          puVar7 = local_1b8;
          local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
          if ((-1 < (long)puVar7) && (local_1c0 != (undefined8 **)0x0)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
          }
          iVar30 = (local_260._4_4_ & 0x7fffffff) - 1;
          if ((local_260 & 0x7fffffff00000000) != 0 && iVar30 != 0) {
            iVar30 = 1;
          }
          if (local_1d8 != 0) {
            iVar30 = 1;
          }
          iVar43 = iVar30 + 1;
          if ((int)(local_260._4_4_ & 0x7fffffff) <= iVar30) {
            FUN_030b4a20(&local_268,PTR_PTR_047d1a50 + 0x20,iVar43);
          }
          if (((int)local_260 <= iVar30) || (iVar43 < (int)local_260)) {
            local_260 = CONCAT44(local_260._4_4_,iVar43);
          }
          *(undefined1 *)((long)local_268 + (long)iVar30) = 0;
          memcpy(local_268,&DAT_03ca40f5,(long)(int)local_260 - 1);
          if (-1 < (int)uVar35) goto LAB_031e4880;
        }
        FUN_031c6fd4(&local_268,(int)local_260 + -1,&local_280,0xffffffff);
        plVar37 = (long *)(uVar39 & 0xfffffffffffffffe);
        if ((uVar39 & 1) != 0) {
          plVar18 = plVar37 + 1;
          do {
            lVar6 = *plVar18;
            cVar29 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *(int *)plVar18 = (int)lVar6 + -1;
              cVar29 = ExclusiveMonitorsStatus();
            }
          } while (cVar29 != '\0');
          if ((plVar37 != (long *)0x0) && ((int)lVar6 == 1)) {
            (**(code **)(*plVar37 + 8))(plVar37);
          }
        }
        puVar8 = local_268;
        local_1c0 = (undefined8 **)0x0;
        (**(code **)(*plVar37 + 0x38))(plVar37,lVar20,puVar33,&local_1c0);
        FUN_031c6c18(local_1c0,param_2,puVar8);
        pcVar27 = (char *)*param_2;
        cVar29 = *pcVar27;
        if (cVar29 != '\0') {
          lVar20 = 0;
          do {
            cVar4 = cVar29 + ' ';
            if (0x19 < (byte)(cVar29 + 0xbfU)) {
              cVar4 = cVar29;
            }
            if (cVar4 == 'e') {
              bVar21 = pcVar27[lVar20 + 1];
              uVar25 = bVar21 + 0x20;
              if (0x19 < bVar21 - 0x41) {
                uVar25 = (uint)bVar21;
              }
              if ((uVar25 & 0xff) == 0x2b) {
                if (-1 < (int)lVar20) {
                  uVar35 = lVar20 + 2;
                  iVar30 = (int)param_2[1];
                  lVar20 = (long)iVar30 + -2;
                  if ((int)uVar35 < (int)lVar20) {
                    pcVar28 = pcVar27 + (uVar35 & 0xffffffff);
                    pcVar27 = pcVar27 + lVar20;
                    pcVar32 = pcVar28;
                    if ((long)(uVar35 & 0xffffffff) < lVar20) goto LAB_031e49dc;
                    goto LAB_031e49f4;
                  }
                }
                break;
              }
            }
            cVar29 = pcVar27[lVar20 + 1];
            lVar20 = lVar20 + 1;
          } while (cVar29 != '\0');
        }
        goto LAB_031e497c;
      }
      uVar39 = 0;
      if (puVar33 == (ulong *)0x0) goto LAB_031e4db4;
LAB_031e3904:
      puVar24 = puVar33;
      if ((*puVar33 & 1) == 0) {
        do {
          puVar24 = (ulong *)puVar24[1];
        } while ((*puVar24 & 1) == 0);
      }
      if ((puVar24[2] & 0x1f) == 8) {
        lVar20 = *param_1;
        uVar35 = param_1[2];
        if ((uVar35 & 1) != 0) {
          piVar1 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
          do {
            cVar29 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar29 = ExclusiveMonitorsStatus();
            }
          } while (cVar29 != '\0');
          uVar35 = param_1[2];
        }
        if (lVar20 == 0) {
          puVar33 = (ulong *)param_1[1];
          goto LAB_031e3b24;
        }
        uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        iVar30 = 2;
        if (uVar25 < 3) {
          iVar30 = uVar25 - 1;
        }
        if ((int)param_2[0x12] != 0) {
          iVar30 = 2;
        }
        iVar43 = iVar30 + 1;
        if ((int)uVar25 <= iVar30) {
          FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,iVar43);
        }
        if (((int)param_2[1] <= iVar30) || (iVar43 < (int)param_2[1])) {
          *(int *)(param_2 + 1) = iVar43;
        }
        *(undefined1 *)(*param_2 + (long)iVar30) = 0;
        memcpy((void *)*param_2,&DAT_03c0680c,(long)(int)param_2[1] - 1);
        local_1b0 = (undefined8 *)0x0;
        local_1a8 = 0;
        plVar37 = (long *)(uVar35 & 0xfffffffffffffffe);
        local_1c0 = (undefined8 **)0x0;
        local_1b8 = (undefined *)0x0;
        (**(code **)(*plVar37 + 0x50))(plVar37,lVar20,puVar33,&local_1c0);
        iVar30 = (int)local_1b0;
        local_290 = (int)local_1b0;
        if ((local_1a8 & 1) != 0) {
          plVar13 = (long *)(local_1a8 & 0xfffffffffffffffe);
          plVar18 = plVar13 + 1;
          do {
            lVar6 = *plVar18;
            cVar29 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *(int *)plVar18 = (int)lVar6 + -1;
              cVar29 = ExclusiveMonitorsStatus();
            }
          } while (cVar29 != '\0');
          if ((plVar13 != (long *)0x0) && ((int)lVar6 == 1)) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        pbVar45 = pbStack_1c8;
        pbVar9 = local_1d0;
        if (local_1d0 == pbStack_1c8) {
          iVar43 = 0;
        }
        else {
          if (((long)pbStack_1c8 - (long)local_1d0 == 0) ||
             (pbVar14 = memchr(local_1d0,0x2c,(long)pbStack_1c8 - (long)local_1d0),
             pbVar14 == (byte *)0x0)) {
            pbVar38 = (byte *)0x0;
            pbVar42 = (byte *)0x0;
          }
          else {
            pbVar38 = pbVar14 + 1;
            pbVar42 = pbVar45;
            pbVar45 = pbVar14;
          }
          if (pbVar45 == pbVar9) {
            iVar43 = 0;
          }
          else {
            local_1c0 = &local_1b0;
            local_1b8 = (undefined *)0x8000008000000000;
            local_130 = 1;
            FUN_031c6afc(&local_1c0,pbVar9,(int)pbVar45 - (int)pbVar9);
            uVar15 = strtoul((char *)local_1c0,(char **)0x0,10);
            puVar7 = local_1b8;
            iVar12 = (int)uVar15;
            local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
            iVar3 = iVar30;
            if (iVar12 <= iVar30) {
              iVar3 = iVar12;
            }
            iVar43 = 0;
            if (-1 < iVar12) {
              iVar43 = iVar3;
            }
            if ((-1 < (long)puVar7) && (local_1c0 != (undefined8 **)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
          }
          if (pbVar38 != pbVar42) {
            local_1c0 = &local_1b0;
            local_1b8 = (undefined *)0x8000008000000000;
            local_130 = 1;
            FUN_031c6afc(&local_1c0,pbVar38,(int)pbVar42 - (int)pbVar38);
            uVar15 = strtoul((char *)local_1c0,(char **)0x0,10);
            puVar7 = local_1b8;
            iVar3 = iVar43 + (int)uVar15;
            if (iVar3 <= iVar30) {
              iVar30 = iVar3;
            }
            local_290 = iVar43;
            if (-1 < (int)uVar15) {
              local_290 = iVar30;
            }
            local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
            if ((-1 < (long)puVar7) && (local_1c0 != (undefined8 **)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
          }
        }
        if (iVar43 < local_290) {
          pcVar27 = "";
          do {
            sVar19 = strlen(pcVar27);
            iVar12 = (int)param_2[1];
            iVar30 = (int)((long)iVar12 + -1) + (int)sVar19;
            uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
            iVar23 = uVar25 - 1;
            iVar3 = iVar30;
            if (iVar23 <= iVar30) {
              iVar3 = iVar23;
            }
            if ((int)param_2[0x12] != 0) {
              iVar3 = iVar30;
            }
            iVar30 = iVar3 + 1;
            iVar23 = iVar12;
            if ((int)uVar25 <= iVar3) {
              FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar30);
              iVar23 = (int)param_2[1];
            }
            if (iVar23 <= iVar3 || iVar30 < iVar23) {
              *(int *)(param_2 + 1) = iVar30;
            }
            *(undefined1 *)(*param_2 + (long)iVar3) = 0;
            memmove((void *)(*param_2 + (long)iVar12 + -1),pcVar27,(long)((int)param_2[1] - iVar12))
            ;
            local_1b8 = (undefined *)0x8000008000000001;
            local_130 = 1;
            local_1b0 = (undefined8 *)((ulong)local_1b0 & 0xffffffffffffff00);
            local_258 = 0;
            local_250 = 0;
            local_268 = (undefined8 *)0x0;
            local_260 = 0;
            local_1c0 = &local_1b0;
            (**(code **)(*plVar37 + 0x50))(plVar37,lVar20,puVar33,&local_268);
            if ((iVar43 < 0) || ((int)local_258 <= iVar43)) {
              local_278 = 0;
              local_270 = 0;
              local_280 = (undefined8 *)0x0;
            }
            else {
              local_280 = (undefined8 *)((long)local_268 + (long)local_258._4_4_ * (long)iVar43);
              local_278 = local_260;
              local_270 = local_250;
              if ((local_250 & 1) != 0) {
                piVar1 = (int *)((local_250 & 0xfffffffffffffffe) + 8);
                do {
                  cVar29 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar29 = ExclusiveMonitorsStatus();
                  }
                } while (cVar29 != '\0');
              }
            }
            if ((local_250 & 1) != 0) {
              plVar13 = (long *)(local_250 & 0xfffffffffffffffe);
              plVar18 = plVar13 + 1;
              do {
                lVar6 = *plVar18;
                cVar29 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar5) {
                  *(int *)plVar18 = (int)lVar6 + -1;
                  cVar29 = ExclusiveMonitorsStatus();
                }
              } while (cVar29 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar6 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            FUN_031e3480(&local_280,&local_1c0,0,0);
            if ((local_270 & 1) != 0) {
              plVar13 = (long *)(local_270 & 0xfffffffffffffffe);
              plVar18 = plVar13 + 1;
              do {
                lVar6 = *plVar18;
                cVar29 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar5) {
                  *(int *)plVar18 = (int)lVar6 + -1;
                  cVar29 = ExclusiveMonitorsStatus();
                }
              } while (cVar29 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar6 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            if (local_1c0 != (undefined8 **)0x0) {
              FUN_031c6fd4(param_2,(int)param_2[1] + -1,local_1c0,0xffffffff);
            }
            puVar7 = local_1b8;
            local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
            if ((-1 < (long)puVar7) && (local_1c0 != (undefined8 **)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
            iVar43 = iVar43 + 1;
            pcVar27 = ", ";
          } while (iVar43 != local_290);
        }
        iVar43 = (int)param_2[1];
        uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        iVar30 = uVar25 - 1;
        if (iVar43 + 1 < iVar30) {
          iVar30 = iVar43 + 1;
        }
        if ((int)param_2[0x12] != 0) {
          iVar30 = iVar43 + 1;
        }
        iVar3 = iVar30 + 1;
        iVar12 = iVar43;
        if ((int)uVar25 <= iVar30) {
          FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar3);
          iVar12 = (int)param_2[1];
        }
        if ((iVar12 <= iVar30) || (iVar3 < iVar12)) {
          *(int *)(param_2 + 1) = iVar3;
        }
        *(undefined1 *)(*param_2 + (long)iVar30) = 0;
        memcpy((void *)(*param_2 + (long)iVar43 + -1),&DAT_03c5962b,(long)((int)param_2[1] - iVar43)
              );
      }
      else {
        uVar35 = 0;
LAB_031e3b24:
        if (puVar33 != (ulong *)0x0) {
          puVar24 = puVar33;
          if ((*puVar33 & 1) == 0) {
            do {
              puVar24 = (ulong *)puVar24[1];
            } while ((*puVar24 & 1) == 0);
          }
          if ((puVar24[2] & 0x1f) == 7) {
            lVar20 = *param_1;
            uVar15 = param_1[2];
            if ((uVar15 & 1) != 0) {
              piVar1 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
              do {
                cVar29 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar29 = ExclusiveMonitorsStatus();
                }
              } while (cVar29 != '\0');
              uVar15 = param_1[2];
            }
            if (lVar20 == 0) {
              puVar33 = (ulong *)param_1[1];
              goto LAB_031e3c40;
            }
            puVar24 = puVar33;
            while (uVar26 = *puVar24, ((uint)uVar26 >> 3 & 1) == 0) {
              if (((uVar26 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
              goto LAB_031e415c;
            }
            if (puVar24 != (ulong *)0x0) {
              ppuVar36 = (undefined8 **)puVar24[(ulong)(byte)POPCOUNT((byte)uVar26 & 7) + 2];
              goto LAB_031e4160;
            }
LAB_031e415c:
            ppuVar36 = (undefined8 **)0x0;
LAB_031e4160:
            if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffff) == 0) {
              FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,1);
            }
            if ((int)param_2[1] != 1) {
              *(undefined4 *)(param_2 + 1) = 1;
            }
            *(undefined1 *)*param_2 = 0;
            local_1b8 = &DAT_03c94a9b;
            local_1b0 = (undefined8 *)0x0;
            local_1a8 = 0;
            local_1a0 = 0;
            local_198 = (undefined8 **)0x0;
            local_1c0 = ppuVar36;
            FUN_031c71e0(param_2,0,&local_1c0,&local_190);
            (**(code **)(*(long *)(uVar15 & 0xfffffffffffffffe) + 0x38))
                      (&local_268,(long *)(uVar15 & 0xfffffffffffffffe),lVar20,puVar33);
            puVar7 = PTR_PTR_047d1a50;
            if (local_238 != -1) {
              pcVar27 = "";
              puVar2 = PTR_PTR_047d1a50 + 0x20;
              do {
                sVar19 = strlen(pcVar27);
                iVar3 = (int)param_2[1];
                iVar30 = (int)((long)iVar3 + -1) + (int)sVar19;
                uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
                iVar12 = uVar25 - 1;
                iVar43 = iVar30;
                if (iVar12 <= iVar30) {
                  iVar43 = iVar12;
                }
                if ((int)param_2[0x12] != 0) {
                  iVar43 = iVar30;
                }
                iVar30 = iVar43 + 1;
                iVar12 = iVar3;
                if ((int)uVar25 <= iVar43) {
                  FUN_030b4a20(param_2,puVar7 + 0x20,(long)iVar30);
                  iVar12 = (int)param_2[1];
                }
                if (iVar12 <= iVar43 || iVar30 < iVar12) {
                  *(int *)(param_2 + 1) = iVar30;
                }
                *(undefined1 *)(*param_2 + (long)iVar43) = 0;
                memmove((void *)(*param_2 + (long)iVar3 + -1),pcVar27,
                        (long)((int)param_2[1] - iVar3));
                if (((ulong *)0x1 < local_248) && (((uint)*local_248 >> 0x11 & 1) != 0)) {
                  uVar25 = (uint)*local_248 & 0x1ffff;
                  puVar33 = local_248;
                  if ((local_248[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                               POPCOUNT((char)(uVar25 >> 8)) +
                                              POPCOUNT((char)(uVar25 >> 0x10))) + 2] & 0x300000) !=
                      0) {
                    while( true ) {
                      uVar25 = (uint)*puVar33;
                      if ((uVar25 >> 0x10 & 1) != 0) break;
                      if (((*puVar33 & 1) != 0) ||
                         (puVar33 = (ulong *)puVar33[1], puVar33 == (ulong *)0x0))
                      goto LAB_031e43bc;
                    }
                    uVar25 = uVar25 & 0xffff;
                    pcVar27 = (char *)puVar33[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                                           POPCOUNT((char)(uVar25 >> 8))) + 2];
                    if (pcVar27 != (char *)0x0) {
                      sVar19 = strlen(pcVar27);
                      iVar3 = (int)param_2[1];
                      iVar30 = (int)((long)iVar3 + -1) + (int)sVar19;
                      uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
                      iVar12 = uVar25 - 1;
                      iVar43 = iVar30;
                      if (iVar12 <= iVar30) {
                        iVar43 = iVar12;
                      }
                      if ((int)param_2[0x12] != 0) {
                        iVar43 = iVar30;
                      }
                      iVar30 = iVar43 + 1;
                      iVar12 = iVar3;
                      if ((int)uVar25 <= iVar43) {
                        FUN_030b4a20(param_2,puVar2,(long)iVar30);
                        iVar12 = (int)param_2[1];
                      }
                      if (iVar12 <= iVar43 || iVar30 < iVar12) {
                        *(int *)(param_2 + 1) = iVar30;
                      }
                      *(undefined1 *)(*param_2 + (long)iVar43) = 0;
                      memmove((void *)(*param_2 + (long)iVar3 + -1),pcVar27,
                              (long)((int)param_2[1] - iVar3));
                    }
                  }
                }
LAB_031e43bc:
                iVar43 = (int)param_2[1];
                uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
                iVar3 = uVar25 - 1;
                iVar30 = iVar43;
                if (iVar3 <= iVar43) {
                  iVar30 = iVar3;
                }
                if ((int)param_2[0x12] != 0) {
                  iVar30 = iVar43;
                }
                iVar3 = iVar30 + 1;
                iVar12 = iVar43;
                if ((int)uVar25 <= iVar30) {
                  FUN_030b4a20(param_2,puVar7 + 0x20,(long)iVar3);
                  iVar12 = (int)param_2[1];
                }
                if ((iVar12 <= iVar30) || (iVar3 < iVar12)) {
                  *(int *)(param_2 + 1) = iVar3;
                }
                *(undefined1 *)(*param_2 + (long)iVar30) = 0;
                memcpy((void *)(*param_2 + (long)iVar43 + -1),&DAT_03c475c1,
                       (long)((int)param_2[1] - iVar43));
                local_1b8 = (undefined *)0x8000008000000001;
                local_130 = 1;
                local_1b0 = (undefined8 *)((ulong)local_1b0 & 0xffffffffffffff00);
                local_1c0 = &local_1b0;
                FUN_031e3480(&local_250,&local_1c0,0,0);
                if (local_1c0 != (undefined8 **)0x0) {
                  FUN_031c6fd4(param_2,(int)param_2[1] + -1,local_1c0,0xffffffff);
                }
                puVar11 = local_1b8;
                local_1b8 = (undefined *)((ulong)local_1b8 & 0xffffffff00000000);
                if ((-1 < (long)puVar11) && (local_1c0 != (undefined8 **)0x0)) {
                  (**(code **)(*(long *)(puVar7 + 0x20) + 0x20))();
                }
                (**(code **)(*(long *)(local_258 & 0xfffffffffffffffe) + 0x40))
                          ((long *)(local_258 & 0xfffffffffffffffe),&local_268);
                pcVar27 = ", ";
              } while (local_238 != -1);
            }
            if ((local_240 & 1) != 0) {
              plVar18 = (long *)(local_240 & 0xfffffffffffffffe);
              plVar37 = plVar18 + 1;
              do {
                lVar20 = *plVar37;
                cVar29 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar5) {
                  *(int *)plVar37 = (int)lVar20 + -1;
                  cVar29 = ExclusiveMonitorsStatus();
                }
              } while (cVar29 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            if ((local_258 & 1) != 0) {
              plVar18 = (long *)(local_258 & 0xfffffffffffffffe);
              plVar37 = plVar18 + 1;
              do {
                lVar20 = *plVar37;
                cVar29 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar5) {
                  *(int *)plVar37 = (int)lVar20 + -1;
                  cVar29 = ExclusiveMonitorsStatus();
                }
              } while (cVar29 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            iVar43 = (int)param_2[1];
            uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
            iVar30 = uVar25 - 1;
            if (iVar43 + 1 < iVar30) {
              iVar30 = iVar43 + 1;
            }
            if ((int)param_2[0x12] != 0) {
              iVar30 = iVar43 + 1;
            }
            iVar3 = iVar30 + 1;
            iVar12 = iVar43;
            if ((int)uVar25 <= iVar30) {
              FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar3);
              iVar12 = (int)param_2[1];
            }
            if (iVar12 <= iVar30 || iVar3 < iVar12) {
              *(int *)(param_2 + 1) = iVar3;
            }
            *(undefined1 *)(*param_2 + (long)iVar30) = 0;
            memcpy((void *)(*param_2 + (long)iVar43 + -1),&DAT_03c470f5,
                   (long)((int)param_2[1] - iVar43));
          }
          else {
            uVar15 = 0;
LAB_031e3c40:
            if (puVar33 != (ulong *)0x0) {
              puVar24 = puVar33;
              if ((*puVar33 & 1) == 0) {
                do {
                  puVar24 = (ulong *)puVar24[1];
                } while ((*puVar24 & 1) == 0);
              }
              if ((puVar24[2] & 0x1f) == 6) {
                lVar20 = *param_1;
                uVar26 = param_1[2];
                if ((uVar26 & 1) != 0) {
                  piVar1 = (int *)((uVar26 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar29 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar29 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar29 != '\0');
                  uVar26 = param_1[2];
                }
                if (lVar20 == 0) {
                  puVar33 = (ulong *)param_1[1];
                  goto LAB_031e464c;
                }
                local_1b8 = (undefined *)0x0;
                local_1b0 = (undefined8 *)0x0;
                local_1c0 = (undefined8 **)0x0;
                (**(code **)(*(long *)(uVar26 & 0xfffffffffffffffe) + 0x50))
                          ((long *)(uVar26 & 0xfffffffffffffffe),lVar20,puVar33,&local_1c0);
                if ((((local_1c0 == (undefined8 **)0x0) || (local_1b8 == (undefined *)0x0)) ||
                    (uVar16 = FUN_031dd260(local_1b8,PTR_DAT_047e5c40), (uVar16 & 1) == 0)) ||
                   (local_1c0 == (undefined8 **)0x0)) {
                  if ((local_1d0 == pbStack_1c8) || (*local_1d0 != 0x2a)) {
                    FUN_031c6c18(param_2,&DAT_03c5a85c,local_1c0);
                  }
                  else {
                    FUN_031e3480(&local_1c0,param_2,local_1d0 + 1);
                  }
                }
                else {
                  FUN_031e12d8(local_1c0,param_2,0,0);
                }
                if (((ulong)local_1b0 & 1) != 0) {
                  plVar18 = (long *)((ulong)local_1b0 & 0xfffffffffffffffe);
                  plVar37 = plVar18 + 1;
                  do {
                    lVar20 = *plVar37;
                    cVar29 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                    if (bVar5) {
                      *(int *)plVar37 = (int)lVar20 + -1;
                      cVar29 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar29 != '\0');
                  if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
                    (**(code **)(*plVar18 + 8))();
                  }
                }
              }
              else {
                uVar26 = 0;
LAB_031e464c:
                if (puVar33 != (ulong *)0x0) {
                  puVar24 = puVar33;
                  if ((*puVar33 & 1) == 0) {
                    do {
                      puVar24 = (ulong *)puVar24[1];
                    } while ((*puVar24 & 1) == 0);
                  }
                  if ((puVar24[2] & 0x1f) == 2) {
                    lVar20 = *param_1;
                    uVar16 = param_1[2];
                    if ((uVar16 & 1) != 0) {
                      piVar1 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar29 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar5) {
                          *piVar1 = *piVar1 + 1;
                          cVar29 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar29 != '\0');
                      uVar16 = param_1[2];
                    }
                    if (lVar20 == 0) {
                      puVar33 = (ulong *)param_1[1];
                      goto LAB_031e4a8c;
                    }
                    local_1c0 = (undefined8 **)((ulong)local_1c0 & 0xffffffffffffff00);
                    (**(code **)(*(long *)(uVar16 & 0xfffffffffffffffe) + 0x38))
                              ((long *)(uVar16 & 0xfffffffffffffffe),lVar20,puVar33,&local_1c0);
                    pcVar27 = "false";
                    if ((char)local_1c0 != '\0') {
                      pcVar27 = "true";
                    }
                    FUN_031c6afc(param_2,pcVar27,0xffffffff);
                  }
                  else {
                    uVar16 = 0;
LAB_031e4a8c:
                    if (puVar33 != (ulong *)0x0) {
                      puVar24 = puVar33;
                      if ((*puVar33 & 1) == 0) {
                        do {
                          puVar24 = (ulong *)puVar24[1];
                        } while ((*puVar24 & 1) == 0);
                      }
                      if ((puVar24[2] & 0x1f) == 0) {
                        lVar20 = *param_1;
                        uVar40 = param_1[2];
                        if ((uVar40 & 1) != 0) {
                          piVar1 = (int *)((uVar40 & 0xfffffffffffffffe) + 8);
                          do {
                            cVar29 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar5) {
                              *piVar1 = *piVar1 + 1;
                              cVar29 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar29 != '\0');
                          uVar40 = param_1[2];
                        }
                        if (lVar20 == 0) {
                          puVar33 = (ulong *)param_1[1];
                          goto LAB_031e4ac0;
                        }
                        uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
                        iVar30 = 4;
                        if (uVar25 < 5) {
                          iVar30 = uVar25 - 1;
                        }
                        if ((int)param_2[0x12] != 0) {
                          iVar30 = 4;
                        }
                        iVar43 = iVar30 + 1;
                        if ((int)uVar25 <= iVar30) {
                          FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,iVar43);
                        }
                        if (((int)param_2[1] <= iVar30) || (iVar43 < (int)param_2[1])) {
                          *(int *)(param_2 + 1) = iVar43;
                        }
                        *(undefined1 *)(*param_2 + (long)iVar30) = 0;
                        memcpy((void *)*param_2,&DAT_03c8e10f,(long)(int)param_2[1] - 1);
                      }
                      else {
                        uVar40 = 0;
LAB_031e4ac0:
                        if (puVar33 != (ulong *)0x0) {
                          for (; (*puVar33 & 1) == 0; puVar33 = (ulong *)puVar33[1]) {
                          }
                          if ((puVar33[2] & 0x1f) == 1) {
                            lVar20 = *param_1;
                            uVar34 = param_1[2];
                            if ((uVar34 & 1) != 0) {
                              piVar1 = (int *)((uVar34 & 0xfffffffffffffffe) + 8);
                              do {
                                cVar29 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                if (bVar5) {
                                  *piVar1 = *piVar1 + 1;
                                  cVar29 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar29 != '\0');
                              uVar34 = param_1[2];
                            }
                            if (lVar20 != 0) {
                              uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
                              iVar30 = 10;
                              if (uVar25 < 0xb) {
                                iVar30 = uVar25 - 1;
                              }
                              if ((int)param_2[0x12] != 0) {
                                iVar30 = 10;
                              }
                              iVar43 = iVar30 + 1;
                              if ((int)uVar25 <= iVar30) {
                                FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,iVar43);
                              }
                              if (((int)param_2[1] <= iVar30) || (iVar43 < (int)param_2[1])) {
                                *(int *)(param_2 + 1) = iVar43;
                              }
                              *(undefined1 *)(*param_2 + (long)iVar30) = 0;
                              memcpy((void *)*param_2,"incomplete",(long)(int)param_2[1] - 1);
                            }
                            if ((uVar34 & 1) != 0) {
                              plVar18 = (long *)(uVar34 & 0xfffffffffffffffe);
                              plVar37 = plVar18 + 1;
                              do {
                                lVar20 = *plVar37;
                                cVar29 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                                if (bVar5) {
                                  *(int *)plVar37 = (int)lVar20 + -1;
                                  cVar29 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar29 != '\0');
                              if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
                                (**(code **)(*plVar18 + 8))();
                              }
                            }
                          }
                        }
                      }
                      if ((uVar40 & 1) != 0) {
                        plVar18 = (long *)(uVar40 & 0xfffffffffffffffe);
                        plVar37 = plVar18 + 1;
                        do {
                          lVar20 = *plVar37;
                          cVar29 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                          if (bVar5) {
                            *(int *)plVar37 = (int)lVar20 + -1;
                            cVar29 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar29 != '\0');
                        if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
                          (**(code **)(*plVar18 + 8))();
                        }
                      }
                    }
                  }
                  if ((uVar16 & 1) != 0) {
                    plVar18 = (long *)(uVar16 & 0xfffffffffffffffe);
                    plVar37 = plVar18 + 1;
                    do {
                      lVar20 = *plVar37;
                      cVar29 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                      if (bVar5) {
                        *(int *)plVar37 = (int)lVar20 + -1;
                        cVar29 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar29 != '\0');
                    if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
                      (**(code **)(*plVar18 + 8))();
                    }
                  }
                }
              }
              if ((uVar26 & 1) != 0) {
                plVar18 = (long *)(uVar26 & 0xfffffffffffffffe);
                plVar37 = plVar18 + 1;
                do {
                  lVar20 = *plVar37;
                  cVar29 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                  if (bVar5) {
                    *(int *)plVar37 = (int)lVar20 + -1;
                    cVar29 = ExclusiveMonitorsStatus();
                  }
                } while (cVar29 != '\0');
                if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
                  (**(code **)(*plVar18 + 8))();
                }
              }
            }
          }
          if ((uVar15 & 1) != 0) {
            plVar18 = (long *)(uVar15 & 0xfffffffffffffffe);
            plVar37 = plVar18 + 1;
            do {
              lVar20 = *plVar37;
              cVar29 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar5) {
                *(int *)plVar37 = (int)lVar20 + -1;
                cVar29 = ExclusiveMonitorsStatus();
              }
            } while (cVar29 != '\0');
            if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
              (**(code **)(*plVar18 + 8))();
            }
          }
        }
      }
      if ((uVar35 & 1) != 0) {
        plVar18 = (long *)(uVar35 & 0xfffffffffffffffe);
        plVar37 = plVar18 + 1;
        do {
          lVar20 = *plVar37;
          cVar29 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar5) {
            *(int *)plVar37 = (int)lVar20 + -1;
            cVar29 = ExclusiveMonitorsStatus();
          }
        } while (cVar29 != '\0');
        if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
          (**(code **)(*plVar18 + 8))();
        }
      }
      goto LAB_031e4db4;
    }
  }
  goto LAB_031e4de8;
code_r0x031e34f0:
  if (((ulong)local_1b0 & 1) != 0) {
    plVar18 = (long *)((ulong)local_1b0 & 0xfffffffffffffffe);
    plVar37 = plVar18 + 1;
    do {
      lVar6 = *plVar37;
      cVar29 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar5) {
        *(int *)plVar37 = (int)lVar6 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if ((plVar18 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar18 + 8))();
    }
  }
  lVar20 = *(long *)(lVar20 + 8);
  if (lVar20 == 0) goto LAB_031e3580;
  goto LAB_031e34d8;
  while (pcVar32 = pcVar32 + 1, pcVar32 < pcVar27) {
LAB_031e49dc:
    if (*pcVar32 != '0') break;
  }
LAB_031e49f4:
  uVar25 = (int)pcVar32 - (int)pcVar28;
  if (0 < (int)uVar25) {
    if (pcVar32 <= pcVar27) {
      do {
        pcVar31 = pcVar32 + 1;
        *pcVar28 = *pcVar32;
        pcVar28 = pcVar28 + 1;
        pcVar32 = pcVar31;
      } while (pcVar31 <= pcVar27);
      iVar30 = (int)param_2[1];
    }
    iVar43 = iVar30 + ~uVar25;
    uVar25 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    iVar12 = uVar25 - 1;
    iVar3 = iVar43;
    if (iVar12 <= iVar43) {
      iVar3 = iVar12;
    }
    if ((int)param_2[0x12] != 0) {
      iVar3 = iVar43;
    }
    iVar43 = iVar3 + 1;
    if ((int)uVar25 <= iVar3) {
      FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar43);
      iVar30 = (int)param_2[1];
    }
    if (iVar30 <= iVar3 || iVar43 < iVar30) {
      *(int *)(param_2 + 1) = iVar43;
    }
    *(undefined1 *)(*param_2 + (long)iVar3) = 0;
  }
LAB_031e497c:
  uVar35 = local_260;
  local_260 = local_260 & 0xffffffff00000000;
  if ((-1 < (long)uVar35) && (local_268 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
LAB_031e4db4:
  if ((uVar39 & 1) != 0) {
    plVar18 = (long *)(uVar39 & 0xfffffffffffffffe);
    plVar37 = plVar18 + 1;
    do {
      lVar20 = *plVar37;
      cVar29 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar5) {
        *(int *)plVar37 = (int)lVar20 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
      (**(code **)(*plVar18 + 8))();
    }
  }
LAB_031e4de8:
  if ((uVar44 & 1) != 0) {
    plVar18 = (long *)(uVar44 & 0xfffffffffffffffe);
    plVar37 = plVar18 + 1;
    do {
      lVar20 = *plVar37;
      cVar29 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar5) {
        *(int *)plVar37 = (int)lVar20 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
      (**(code **)(*plVar18 + 8))();
    }
  }
LAB_031e4e1c:
  if ((uVar41 & 1) != 0) {
    plVar18 = (long *)(uVar41 & 0xfffffffffffffffe);
    plVar37 = plVar18 + 1;
    do {
      lVar20 = *plVar37;
      cVar29 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar5) {
        *(int *)plVar37 = (int)lVar20 + -1;
        cVar29 = ExclusiveMonitorsStatus();
      }
    } while (cVar29 != '\0');
    if ((plVar18 != (long *)0x0) && ((int)lVar20 == 1)) {
      (**(code **)(*plVar18 + 8))();
    }
  }
  return;
}


