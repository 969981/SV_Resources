/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d0c20; name: FUN_031d0c20
 */


ulong FUN_031d0c20(ulong param_1,long param_2,int param_3)

{
  ulong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined2 uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  uint uVar13;
  ulong uVar14;
  ThreadType *pTVar15;
  size_t sVar16;
  long lVar17;
  FILE *__stream;
  long lVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong *puVar29;
  byte *local_268;
  byte *local_260;
  undefined8 local_258;
  long local_250;
  undefined8 *local_248;
  long local_240;
  undefined8 local_238;
  char *local_230;
  undefined8 local_228;
  char *local_220;
  undefined8 local_218;
  undefined8 local_210;
  char local_208 [256];
  byte *local_108;
  byte *local_100;
  ulong local_f8;
  byte local_f0 [128];
  undefined4 local_70;
  
  lVar17 = *(long *)(param_2 + 0x10);
  puVar29 = (ulong *)(*(ulong *)(lVar17 + -0x10) & 0xfffffffffffffffe);
  if (-1 < (short)puVar29[3]) {
    puVar25 = (ulong *)puVar29[1];
    if (puVar25 != (ulong *)0x0) {
      lVar10 = tpidr_el0;
      uVar26 = 0;
      __stream = *(FILE **)PTR_stdout_047cb860;
      do {
        bVar5 = *(byte *)((long)puVar25 + 0x19);
        if ((bVar5 >> 1 & 1) != 0) {
          piVar2 = (int *)((long)puVar25 + (ulong)*(ushort *)((long)puVar25 + 0xc));
          if ((*(byte *)((long)puVar25 + 0x16) >> 5 & 1) != 0) {
            puVar3 = (undefined8 *)((long)puVar25 + (ulong)*(ushort *)((long)puVar25 + 10));
            lVar19 = puVar3[1] + (ulong)*(ushort *)((long)puVar3 + 0x14);
            lVar18 = ((ulong)*(uint *)(lVar17 + -8) * 0x10 -
                     (((ulong)*(ushort *)(lVar17 + -4) & 0xfff0) + uVar26)) + -0x10;
            if (lVar19 != lVar18) {
              lVar24 = *(long *)(param_2 + 0x10);
              pbVar4 = (byte *)(lVar19 + lVar24);
              uVar13 = piVar2[1];
              uVar27 = (ulong)(pbVar4 + 3) & 0xfffffffffffffffc;
              pbVar21 = (byte *)(uVar27 - 1);
              if (pbVar4 <= pbVar21) {
                uVar28 = 0xff000000;
                uVar23 = 0x18;
                do {
                  if ((uint)*pbVar21 != ((uVar28 & uVar13) >> (ulong)(uVar23 & 0x1f) & 0xff)) {
                    local_108 = pbVar21 + -lVar24;
                    goto LAB_031d10ec;
                  }
                  pbVar21 = pbVar21 + -1;
                  uVar28 = uVar28 >> 8;
                  uVar23 = uVar23 - 8;
                } while (pbVar4 <= pbVar21);
              }
              uVar14 = FUN_031d0440(uVar27,uVar13,(lVar24 + lVar18) - uVar27 >> 2,&local_108);
              if ((uVar14 & 1) == 0) {
                local_108 = local_108 + (uVar27 - lVar24);
LAB_031d10ec:
                local_f8 = 0x8000008000000001;
                local_70 = 1;
                local_f0[0] = 0;
                local_100 = local_f0;
                if (DAT_04883ed0 == '\0') {
                  if (DAT_046aaf68 != '\0') goto LAB_031d1258;
                }
                else {
                  if (DAT_046aaf68 == '\0') {
                    local_258 = (char *)0x0;
                    local_248 = &DAT_04883e80;
                    local_240 = 1;
                    pTVar15 = (ThreadType *)nn::os::GetCurrentThread();
                    local_238 = nn::os::GetThreadId(pTVar15);
                    local_210 = 0;
                    local_230 = (char *)0x0;
                    local_228 = 0;
                    local_220 = (char *)0x0;
                    local_218 = 0;
                    FUN_031c6e40(&local_100,"[%lli] ",*puVar3);
                    local_260 = local_100;
                    FUN_0322c554(&local_258,"{0}Modified Outside Bounds at offset of {1}",
                                 PTR_DAT_047e5b08,&local_260,&local_108);
                    local_220 = 
                    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkMemoryDebug.cpp"
                    ;
                    local_218 = 0x55f;
                    FUN_0322c8e0(&local_258);
                  }
                  else {
LAB_031d1258:
                    local_258 = (char *)0x0;
                    local_248 = &DAT_04883e80;
                    local_240 = 1;
                    pTVar15 = (ThreadType *)nn::os::GetCurrentThread();
                    local_238 = nn::os::GetThreadId(pTVar15);
                    local_228 = 0;
                    local_220 = (char *)0x0;
                    local_218 = 0;
                    local_210 = 0;
                    local_250 = 0x10000000000;
                    local_208[0] = '\0';
                    local_258 = local_208;
                    local_230 = local_208;
                    FUN_031c6e40(&local_100,"[%lli] ",*puVar3);
                    local_268 = local_100;
                    FUN_0322c554(&local_258,"{0}Modified Outside Bounds at offset of {1}",
                                 PTR_DAT_047e5b08,&local_268,&local_108);
                    local_220 = 
                    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkMemoryDebug.cpp"
                    ;
                    local_218 = 0x55f;
                    if (local_208[0] != '\0') {
                      sVar16 = strlen(local_208);
                      (local_208 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[0] = '\n';
                      (local_208 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[1] = '\0';
                      printf("%s",local_208);
                      fflush(__stream);
                    }
                  }
                  if (((ulong)local_230 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_230 + -1,0);
                  }
                }
                uVar27 = local_f8;
                local_f8 = local_f8 & 0xffffffff00000000;
                if ((-1 < (long)uVar27) && (local_100 != (byte *)0x0)) {
                  (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                }
              }
            }
          }
          uVar26 = (ulong)(uint)(*piVar2 + (int)uVar26);
          bVar5 = *(byte *)((long)puVar25 + 0x19);
        }
        if ((bVar5 >> 3 & 1) != 0) {
          lVar19 = (long)puVar25 + (ulong)(ushort)puVar25[2];
          *(ulong *)(lVar19 + 0x10) = *(ulong *)(lVar19 + 0x10) | 1;
          if ((*(byte *)(lVar19 + 0x18) & 1) == 0) {
            bVar5 = (byte)puVar25[3];
            uVar6 = *(undefined2 *)((long)puVar25 + 0x16);
            lVar18 = *(long *)(lVar10 + 0x1000b8);
            if (lVar18 == 0) {
              lVar18 = FUN_00e5d3b4();
              *(long *)(lVar10 + 0x1000b8) = lVar18;
            }
            pcVar12 = local_258;
            local_258 = (char *)CONCAT71(local_258._1_7_,bVar5);
            uVar11 = local_258;
            local_258._4_4_ = SUB84(pcVar12,4);
            local_258._0_4_ = CONCAT22(uVar6,(short)uVar11);
            local_250 = *(long *)(lVar18 + 0x3d8);
            local_248 = (undefined8 *)(local_250 + (ulong)bVar5 * 0xe8 + 0x28);
            local_240 = DAT_04883ee8 + (ulong)bVar5 * 0x210 + 0x18;
            FUN_031d1a2c(lVar19,&local_258,*(undefined1 *)(param_2 + 8));
          }
        }
        if ((*(ushort *)((long)puVar25 + 0x16) & 0x1c1) != 0) {
          bVar5 = (byte)puVar25[3];
          uVar14 = (ulong)bVar5;
          uVar27 = param_1;
          if (*puVar29 != 0) {
            uVar27 = *puVar29;
          }
          lVar19 = *(long *)(lVar10 + 0x1000b8);
          if (lVar19 == 0) {
            lVar19 = FUN_00e5d3b4();
            *(long *)(lVar10 + 0x1000b8) = lVar19;
          }
          lVar18 = DAT_04883ee8;
          lVar19 = *(long *)(lVar19 + 0x3d8) + 0x28;
          uVar13 = (uint)bVar5;
          if (-1 < (short)puVar25[1]) {
            uVar20 = (ulong)(ushort)puVar29[3] & 0x3fff;
            if ((int)uVar20 != 0) {
              puVar1 = (ulong *)(DAT_04883ee8 + uVar14 * 0x210 + 0xa8);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                  *puVar1 = *puVar1 - uVar20;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              plVar22 = (long *)(lVar18 + uVar14 * 0x210 + 0xa0);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar9) {
                  *plVar22 = *plVar22 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              lVar24 = lVar19 + uVar14 * 0xe8;
              *(ulong *)(lVar24 + 0x50) = *(long *)(lVar24 + 0x50) - uVar20;
              *(long *)(lVar24 + 0x48) = *(long *)(lVar24 + 0x48) + -1;
              if (*puVar1 <= *(ulong *)(lVar18 + uVar14 * 0x210 + 0x30)) {
                pbVar4 = (byte *)(lVar18 + uVar14 * 0x210 + 0x21f);
                do {
                  bVar7 = *pbVar4;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
                  if (bVar9) {
                    *pbVar4 = 0;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((bVar7 & 1) != 0) {
                  uVar28 = (uint)bVar5;
                  uVar20 = DAT_04883ef8;
                  if (uVar28 == 0x1f) {
                    uVar28 = 0xffffffff;
                  }
                  while (plVar22 = (long *)(uVar20 & 0xfffffffffffffffc), plVar22 != (long *)0x0) {
                    uVar20 = plVar22[1];
                    if ((uVar20 & 3) == 0) {
                      (**(code **)(*plVar22 + 0x20))(plVar22,uVar28,uVar27,3);
                    }
                  }
                }
              }
            }
            uVar20 = (ulong)(ushort)puVar25[1] & 0x7fff;
            if ((int)uVar20 != 0) {
              puVar1 = (ulong *)(lVar18 + uVar14 * 0x210 + 0xa8);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar9) {
                  *puVar1 = *puVar1 - uVar20;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              plVar22 = (long *)(lVar18 + uVar14 * 0x210 + 0xa0);
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar9) {
                  *plVar22 = *plVar22 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              lVar24 = lVar19 + uVar14 * 0xe8;
              *(ulong *)(lVar24 + 0x50) = *(long *)(lVar24 + 0x50) - uVar20;
              *(long *)(lVar24 + 0x48) = *(long *)(lVar24 + 0x48) + -1;
              if (*puVar1 <= *(ulong *)(lVar18 + uVar14 * 0x210 + 0x30)) {
                pbVar4 = (byte *)(lVar18 + uVar14 * 0x210 + 0x21f);
                do {
                  bVar5 = *pbVar4;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
                  if (bVar9) {
                    *pbVar4 = 0;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((bVar5 & 1) != 0) {
                  uVar20 = DAT_04883ef8;
                  uVar28 = uVar13;
                  if (uVar13 == 0x1f) {
                    uVar28 = 0xffffffff;
                  }
                  while (plVar22 = (long *)(uVar20 & 0xfffffffffffffffc), plVar22 != (long *)0x0) {
                    uVar20 = plVar22[1];
                    if ((uVar20 & 3) == 0) {
                      (**(code **)(*plVar22 + 0x20))(plVar22,uVar28,uVar27,3);
                    }
                  }
                }
              }
            }
          }
          uVar28 = *(uint *)(lVar17 + -8);
          if (uVar28 != 0) {
            uVar20 = (ulong)*(byte *)(param_2 + 8);
            puVar1 = (ulong *)(lVar18 + uVar14 * 0x210 + uVar20 * 0x18 + 0x60);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = *puVar1 + (ulong)uVar28 * -0x10;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            plVar22 = (long *)(lVar18 + uVar14 * 0x210 + uVar20 * 0x18 + 0x58);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar9) {
                *plVar22 = *plVar22 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            plVar22 = (long *)(lVar19 + uVar14 * 0xe8 + uVar20 * 0x18);
            plVar22[1] = plVar22[1] + (ulong)uVar28 * -0x10;
            *plVar22 = *plVar22 + -1;
            if (*puVar1 <= *(ulong *)(lVar18 + uVar14 * 0x210 + uVar20 * 8 + 0x18)) {
              pbVar4 = (byte *)(lVar18 + uVar14 * 0x210 + uVar20 + 0x21c);
              do {
                bVar5 = *pbVar4;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
                if (bVar9) {
                  *pbVar4 = 0;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((bVar5 & 1) != 0) {
                uVar14 = DAT_04883ef8;
                if (uVar13 == 0x1f) {
                  uVar13 = 0xffffffff;
                }
                while (plVar22 = (long *)(uVar14 & 0xfffffffffffffffc), plVar22 != (long *)0x0) {
                  uVar14 = plVar22[1];
                  if ((uVar14 & 3) == 0) {
                    (**(code **)(*plVar22 + 0x20))(plVar22,uVar13,uVar27,uVar20);
                  }
                }
              }
            }
          }
        }
        puVar25 = (ulong *)*puVar25;
      } while (puVar25 != (ulong *)0x0);
    }
    goto LAB_031d169c;
  }
  if (((uint)(int)(short)puVar29[3] >> 0xe & 1) != 0) {
    uVar26 = puVar29[2];
    if (((*(byte *)(uVar26 + 0x16) >> 4 & 1) == 0) ||
       (uVar26 = FUN_031d0440(lVar17,*(undefined4 *)(uVar26 + *(ushort *)(uVar26 + 0xe)),
                              ((ulong)*(uint *)(lVar17 + -8) * 0x10 -
                              ((ulong)*(ushort *)(lVar17 + -4) & 0xfff0)) - 0x10 >> 2,&local_108),
       (uVar26 & 1) != 0)) goto LAB_031d169c;
    local_f0[0] = 0;
    local_100 = local_f0;
    local_f8 = 0x8000008000000001;
    local_70 = 1;
    if (DAT_04883ed0 == '\0') {
      if (DAT_046aaf68 != '\0') goto LAB_031d1590;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_258 = (char *)0x0;
        local_248 = &DAT_04883e80;
        local_240 = 1;
        pTVar15 = (ThreadType *)nn::os::GetCurrentThread();
        local_238 = nn::os::GetThreadId(pTVar15);
        local_230 = (char *)0x0;
        local_228 = 0;
        local_220 = (char *)0x0;
        local_218 = 0;
        local_210 = 0;
        puVar29 = (ulong *)puVar29[1];
        if (puVar29 == (ulong *)0x0) {
          local_260 = &DAT_03c886bc;
        }
        else {
          local_260 = &DAT_03c886bc;
          do {
            if ((*(byte *)((long)puVar29 + 0x19) & 1) != 0) {
              FUN_031c6e40(&local_100,"[%lli] ",
                           *(undefined8 *)((long)puVar29 + (ulong)*(ushort *)((long)puVar29 + 10)));
              local_260 = local_100;
              break;
            }
            puVar29 = (ulong *)*puVar29;
          } while (puVar29 != (ulong *)0x0);
        }
        FUN_0322c554(&local_258,"{0}Modified After Free at offset of {1}",PTR_DAT_047e5b08,
                     &local_260,&local_108);
        local_220 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkMemoryDebug.cpp"
        ;
        local_218 = 0x534;
        FUN_0322c8e0(&local_258);
      }
      else {
LAB_031d1590:
        local_248 = &DAT_04883e80;
        local_240 = 1;
        pTVar15 = (ThreadType *)nn::os::GetCurrentThread();
        local_238 = nn::os::GetThreadId(pTVar15);
        local_228 = 0;
        local_220 = (char *)0x0;
        local_208[0] = '\0';
        local_218 = 0;
        local_210 = 0;
        local_250 = 0x10000000000;
        puVar29 = (ulong *)puVar29[1];
        local_258 = local_208;
        local_230 = local_208;
        if (puVar29 == (ulong *)0x0) {
          local_268 = &DAT_03c886bc;
        }
        else {
          local_268 = &DAT_03c886bc;
          do {
            if ((*(byte *)((long)puVar29 + 0x19) & 1) != 0) {
              FUN_031c6e40(&local_100,"[%lli] ",
                           *(undefined8 *)((long)puVar29 + (ulong)*(ushort *)((long)puVar29 + 10)));
              local_268 = local_100;
              break;
            }
            puVar29 = (ulong *)*puVar29;
          } while (puVar29 != (ulong *)0x0);
        }
        FUN_0322c554(&local_258,"{0}Modified After Free at offset of {1}",PTR_DAT_047e5b08,
                     &local_268,&local_108);
        local_220 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkMemoryDebug.cpp"
        ;
        local_218 = 0x534;
        if (local_208[0] != '\0') {
          sVar16 = strlen(local_208);
          (local_208 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[0] = '\n';
          (local_208 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[1] = '\0';
          printf("%s",local_208);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)local_230 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_230 + -1,0);
      }
    }
    uVar26 = local_f8;
    local_f8 = local_f8 & 0xffffffff00000000;
    if ((-1 < (long)uVar26) && (local_100 != (byte *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
LAB_031d169c:
    uVar26 = (**(code **)(param_2 + 0x18))(param_1,param_2,param_3 + 1);
    return uVar26;
  }
  local_f0[0] = 0;
  local_100 = local_f0;
  local_f8 = 0x8000008000000001;
  local_70 = 1;
  if (DAT_04883ed0 == '\0') {
    if (DAT_046aaf68 == '\0') goto LAB_031d1560;
LAB_031d1480:
    local_248 = &DAT_04883e80;
    local_240 = 1;
    pTVar15 = (ThreadType *)nn::os::GetCurrentThread();
    local_238 = nn::os::GetThreadId(pTVar15);
    local_228 = 0;
    local_220 = (char *)0x0;
    local_208[0] = '\0';
    local_218 = 0;
    local_210 = 0;
    local_250 = 0x10000000000;
    puVar29 = (ulong *)puVar29[1];
    local_258 = local_208;
    local_230 = local_208;
    if (puVar29 == (ulong *)0x0) {
      local_260 = &DAT_03c886bc;
    }
    else {
      local_260 = &DAT_03c886bc;
      do {
        if ((*(byte *)((long)puVar29 + 0x19) & 1) != 0) {
          FUN_031c6e40(&local_100,"[%lli] ",
                       *(undefined8 *)((long)puVar29 + (ulong)*(ushort *)((long)puVar29 + 10)));
          local_260 = local_100;
          break;
        }
        puVar29 = (ulong *)*puVar29;
      } while (puVar29 != (ulong *)0x0);
    }
    param_1 = FUN_0322c554(&local_258,"{0}Double Freed",&DAT_044e9758,&local_260);
    local_220 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkMemoryDebug.cpp"
    ;
    local_218 = 0x51e;
    if (local_208[0] != '\0') {
      sVar16 = strlen(local_208);
      (local_208 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[0] = '\n';
      (local_208 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[1] = '\0';
      printf("%s",local_208);
      uVar13 = fflush(*(FILE **)PTR_stdout_047cb860);
      param_1 = (ulong)uVar13;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_031d1480;
    local_258 = (char *)0x0;
    local_248 = &DAT_04883e80;
    local_240 = 1;
    pTVar15 = (ThreadType *)nn::os::GetCurrentThread();
    local_238 = nn::os::GetThreadId(pTVar15);
    local_230 = (char *)0x0;
    local_228 = 0;
    local_220 = (char *)0x0;
    local_218 = 0;
    local_210 = 0;
    puVar29 = (ulong *)puVar29[1];
    if (puVar29 == (ulong *)0x0) {
      local_108 = &DAT_03c886bc;
    }
    else {
      local_108 = &DAT_03c886bc;
      do {
        if ((*(byte *)((long)puVar29 + 0x19) & 1) != 0) {
          FUN_031c6e40(&local_100,"[%lli] ",
                       *(undefined8 *)((long)puVar29 + (ulong)*(ushort *)((long)puVar29 + 10)));
          local_108 = local_100;
          break;
        }
        puVar29 = (ulong *)*puVar29;
      } while (puVar29 != (ulong *)0x0);
    }
    FUN_0322c554(&local_258,"{0}Double Freed",&DAT_044e9758,&local_108);
    local_220 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Memory/hkMemoryDebug.cpp"
    ;
    local_218 = 0x51e;
    param_1 = FUN_0322c8e0(&local_258);
  }
  if (((ulong)local_230 & 1) != 0) {
    param_1 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_230 + -1,0);
  }
LAB_031d1560:
  uVar26 = local_f8;
  local_f8 = local_f8 & 0xffffffff00000000;
  if ((long)uVar26 < 0) {
    return param_1;
  }
  if (local_100 == (byte *)0x0) {
    return param_1;
  }
  uVar26 = (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  return uVar26;
}


