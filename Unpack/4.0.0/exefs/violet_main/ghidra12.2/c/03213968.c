/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03213968; name: FUN_03213968
 */


/* WARNING: Removing unreachable block (ram,0x03213d7c) */

long * FUN_03213968(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ThreadType *pTVar10;
  size_t sVar11;
  long *plVar12;
  FILE *__stream;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  ulong *puVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong *puVar27;
  undefined8 local_228;
  undefined8 *local_220;
  ulong *local_218;
  ulong *local_210;
  undefined8 *local_208;
  ulong *local_200;
  long local_1f8;
  long local_1f0;
  ulong local_1e8;
  ulong *local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  ulong *local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulong local_190 [32];
  int local_8c;
  ulong *local_88;
  ulong *local_80;
  ulong local_78;
  ulong *local_70 [2];
  
  plVar8 = param_1;
  if (0 < (int)param_3) {
    plVar12 = param_1 + 2;
    __stream = *(FILE **)PTR_stdout_047cb860;
    uVar26 = 0;
    do {
      local_8c = 0;
      puVar25 = (undefined8 *)(param_2 + uVar26 * 0x30);
      puVar14 = puVar25 + 3;
      plVar8 = (long *)(**(code **)(*(long *)*param_1 + 0x20))
                                 ((long *)*param_1,puVar25,puVar14,&local_8c);
      if ((int)plVar8 < 0) {
        if (DAT_04884f08 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_032143ac;
LAB_032147ac:
          local_1d0 = &DAT_04884eb8;
          uStack_1c8 = 2;
          pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
          local_1c0 = nn::os::GetThreadId(pTVar10);
          local_1b0 = 0;
          local_1a8 = (char *)0x0;
          local_1d8 = 0x10000000000;
          local_1a0 = 0;
          local_198 = 0;
          local_190[0]._0_1_ = '\0';
          local_1f8 = *(long *)(param_2 + (uVar26 & 0xffffffff) * 0x30 + 8);
          local_1e0 = local_190;
          local_1b8 = local_190;
          plVar8 = (long *)FUN_0322c554(&local_1e0,"Cloner callback failed on {}",PTR_DAT_047e5ef8,
                                        &local_1f8);
          local_1a8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_1a0 = 0x21f;
          if ((char)local_190[0] != '\0') {
            sVar11 = strlen((char *)local_190);
            *(undefined2 *)
             ((long)local_190 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10;
            printf("%s",local_190);
            uVar7 = fflush(__stream);
            plVar8 = (long *)(ulong)uVar7;
          }
        }
        else {
          if (DAT_046aaf68 != '\0') goto LAB_032147ac;
          local_1e0 = (ulong *)0x0;
          local_1d0 = &DAT_04884eb8;
          uStack_1c8 = 2;
          pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
          local_1c0 = nn::os::GetThreadId(pTVar10);
          local_1b8 = (ulong *)0x0;
          local_1b0 = 0;
          local_1a8 = (char *)0x0;
          local_1a0 = 0;
          local_198 = 0;
          local_88 = *(ulong **)(param_2 + (uVar26 & 0xffffffff) * 0x30 + 8);
          FUN_0322c554(&local_1e0,"Cloner callback failed on {}",PTR_DAT_047e5ef8,&local_88);
          local_1a8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_1a0 = 0x21f;
          plVar8 = (long *)FUN_0322c8e0(&local_1e0);
        }
        if (((ulong)local_1b8 & 1) != 0) {
          plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1b8 + -1),0);
        }
LAB_032143ac:
        *(undefined4 *)(param_1 + 1) = 0x80040200;
        return plVar8;
      }
      if (local_8c == 1) {
        puVar21 = (ulong *)(param_2 + uVar26 * 0x30 + 8);
        puVar27 = (ulong *)*puVar21;
        if (((puVar27 < (ulong *)0x2) || (uVar7 = (uint)*puVar27, (uVar7 >> 0x11 & 1) == 0)) ||
           (uVar19 = CONCAT44(uVar7,uVar7) & 0x1ffff0001ffff,
           (puVar27[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                 POPCOUNT((char)(uVar19 >> 0x10))) + 2] & 0x300000) == 0 ||
           (puVar27[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                 POPCOUNT((char)(uVar19 >> 0x10))) + 2] & 0x400000) == 0)) {
          local_228 = *puVar25;
          uVar19 = *(ulong *)(param_2 + uVar26 * 0x30 + 0x10);
          if ((uVar19 & 1) != 0) {
            piVar1 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar20) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        else {
          puVar27 = (ulong *)puVar27[1];
          puVar23 = puVar27;
          if ((*puVar27 & 1) == 0) {
            do {
              puVar23 = (ulong *)puVar23[1];
            } while ((*puVar23 & 1) == 0);
          }
          if ((puVar23[2] & 0x1f) != 6) {
            puVar27 = (ulong *)0x0;
          }
          local_228 = *puVar25;
          if (puVar27 != (ulong *)0x0) {
            puVar23 = puVar27;
            do {
              uVar19 = *puVar23;
              if (((uint)uVar19 >> 2 & 1) != 0) {
                uVar19 = puVar23[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
                if ((uVar19 & 1) != 0) {
                  piVar1 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar20) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                goto LAB_03213a8c;
              }
              puVar23 = (ulong *)puVar23[1];
            } while (puVar23 != (ulong *)0x0);
          }
          uVar19 = 0;
        }
LAB_03213a8c:
        lVar22 = param_2 + uVar26 * 0x30;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1f8 = 0;
        puVar23 = (ulong *)(lVar22 + 0x20);
        puVar24 = (ulong *)(lVar22 + 0x28);
        plVar8 = (long *)(**(code **)(*(long *)(*puVar24 & 0xfffffffffffffffe) + 0x50))
                                   ((long *)(*puVar24 & 0xfffffffffffffffe),*puVar14,*puVar23,
                                    &local_1f8);
        if ((int)plVar8 < 0) {
          if (DAT_04884f08 < 2) {
            if (DAT_046aaf68 == '\0') goto LAB_03214714;
LAB_032144f0:
            local_1d0 = &DAT_04884eb8;
            uStack_1c8 = 2;
            pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
            local_1c0 = nn::os::GetThreadId(pTVar10);
            local_1e0 = local_190;
            local_1b0 = 0;
            local_1a8 = (char *)0x0;
            local_1d8 = 0x10000000000;
            local_190[0]._0_1_ = '\0';
            local_1a0 = 0;
            local_198 = 0;
            local_208 = (undefined8 *)*puVar23;
            local_88 = (ulong *)0x0;
            local_80 = (ulong *)0x0;
            local_78 = 0;
            local_1b8 = local_1e0;
            (**(code **)(*(long *)(*puVar24 & 0xfffffffffffffffe) + 0x50))
                      ((long *)(*puVar24 & 0xfffffffffffffffe),*puVar14,local_208,&local_88);
            puVar27 = local_80;
            if ((local_78 & 1) != 0) {
              plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
              plVar8 = plVar12 + 1;
              do {
                lVar22 = *plVar8;
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar20) {
                  *(int *)plVar8 = (int)lVar22 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar22 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
            local_210 = puVar27;
            plVar8 = (long *)FUN_0322c554(&local_1e0,"Can\'t get var from {} pointing to {}",
                                          &DAT_046a9f20,&local_208,&local_210);
            local_1a0 = 0x224;
LAB_032148b8:
            local_1a8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            if ((char)local_190[0] != '\0') {
              sVar11 = strlen((char *)local_190);
              *(undefined2 *)
               ((long)local_190 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10;
              printf("%s",local_190);
              uVar7 = fflush(__stream);
              plVar8 = (long *)(ulong)uVar7;
            }
          }
          else {
            if (DAT_046aaf68 != '\0') goto LAB_032144f0;
            local_1e0 = (ulong *)0x0;
            local_1d0 = &DAT_04884eb8;
            uStack_1c8 = 2;
            pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
            local_1c0 = nn::os::GetThreadId(pTVar10);
            local_1b8 = (ulong *)0x0;
            local_1b0 = 0;
            local_1a8 = (char *)0x0;
            local_1a0 = 0;
            local_198 = 0;
            local_70[0] = (ulong *)*puVar23;
            local_78 = 0;
            local_88 = (ulong *)0x0;
            local_80 = (ulong *)0x0;
            (**(code **)(*(long *)(*puVar24 & 0xfffffffffffffffe) + 0x50))
                      ((long *)(*puVar24 & 0xfffffffffffffffe),*puVar14,local_70[0],&local_88);
            puVar27 = local_80;
            if ((local_78 & 1) != 0) {
              plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
              plVar8 = plVar12 + 1;
              do {
                lVar22 = *plVar8;
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar20) {
                  *(int *)plVar8 = (int)lVar22 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar22 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
            local_200 = puVar27;
            FUN_0322c554(&local_1e0,"Can\'t get var from {} pointing to {}",&DAT_046a9f20,local_70,
                         &local_200);
            local_1a0 = 0x224;
LAB_032146dc:
            local_1a8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            plVar8 = (long *)FUN_0322c8e0(&local_1e0);
          }
          if (((ulong)local_1b8 & 1) != 0) {
            plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1b8 + -1),0)
            ;
          }
LAB_03214714:
          *(undefined4 *)(param_1 + 1) = 0x80040200;
          if ((local_1e8 & 1) != 0) {
            plVar8 = (long *)(local_1e8 & 0xfffffffffffffffe);
            plVar12 = plVar8 + 1;
            do {
              lVar22 = *plVar12;
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar20) {
                *(int *)plVar12 = (int)lVar22 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar22 == 1)) {
              plVar8 = (long *)(**(code **)(*plVar8 + 8))();
            }
          }
          if ((uVar19 & 1) == 0) {
            return plVar8;
          }
          piVar1 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar20) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_03214774:
          plVar8 = (long *)(uVar19 & 0xfffffffffffffffe);
          if (plVar8 == (long *)0x0) {
            return (long *)0x0;
          }
          if (iVar6 == 1) {
            plVar8 = (long *)(**(code **)(*plVar8 + 8))();
            return plVar8;
          }
          return plVar8;
        }
        if (local_1f8 == 0) {
          local_1d8 = 0;
          local_1d0 = (undefined8 *)0x0;
          local_1e0 = (ulong *)0x0;
          plVar9 = (long *)(**(code **)(*(long *)(uVar19 & 0xfffffffffffffffe) + 0x48))
                                     ((long *)(uVar19 & 0xfffffffffffffffe),local_228,puVar27,
                                      &local_1e0);
          plVar8 = plVar9;
          if (((ulong)local_1d0 & 1) != 0) {
            plVar8 = (long *)((ulong)local_1d0 & 0xfffffffffffffffe);
            plVar2 = plVar8 + 1;
            do {
              lVar22 = *plVar2;
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar20) {
                *(int *)plVar2 = (int)lVar22 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar22 == 1)) {
              plVar8 = (long *)(**(code **)(*plVar8 + 8))();
            }
          }
          if ((int)plVar9 < 0) {
            if (DAT_04884f08 < 2) {
              if (DAT_046aaf68 == '\0') goto LAB_03214714;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1e0 = (ulong *)0x0;
              local_1d0 = &DAT_04884eb8;
              uStack_1c8 = 2;
              pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
              local_1c0 = nn::os::GetThreadId(pTVar10);
              local_1b8 = (ulong *)0x0;
              local_70[0] = (ulong *)0x0;
              local_1b0 = 0;
              local_1a8 = (char *)0x0;
              local_1a0 = 0;
              local_198 = 0;
              puVar21 = (ulong *)*puVar21;
              if ((ulong *)0x1 < puVar21) {
                uVar7 = (uint)*puVar21;
                if ((uVar7 >> 0x11 & 1) == 0) {
                  local_70[0] = (ulong *)0x0;
                }
                else {
                  uVar26 = CONCAT44(uVar7,uVar7) & 0x1ffff0001ffff;
                  local_70[0] = (ulong *)0x0;
                  if ((puVar21[(ulong)(byte)(POPCOUNT((char)uVar26) + POPCOUNT((char)(uVar26 >> 8))
                                            + POPCOUNT((char)(uVar26 >> 0x10))) + 2] & 0x300000) !=
                      0) {
                    local_70[0] = puVar21;
                  }
                }
              }
              local_88 = puVar27;
              FUN_0322c554(&local_1e0,"Cannot assign null to pointer of type \'{}\' at {}",
                           &DAT_046a9f58,&local_88,local_70);
              local_1a0 = 0x25b;
              goto LAB_032146dc;
            }
            local_1d0 = &DAT_04884eb8;
            uStack_1c8 = 2;
            pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
            local_1c0 = nn::os::GetThreadId(pTVar10);
            local_1e0 = local_190;
            local_1b0 = 0;
            local_1a8 = (char *)0x0;
            local_208 = (undefined8 *)0x0;
            local_1d8 = 0x10000000000;
            local_190[0]._0_1_ = '\0';
            local_1a0 = 0;
            local_198 = 0;
            puVar14 = (undefined8 *)*puVar21;
            if ((undefined8 *)0x1 < puVar14) {
              uVar7 = (uint)*puVar14;
              if ((uVar7 >> 0x11 & 1) == 0) {
                local_208 = (undefined8 *)0x0;
              }
              else {
                uVar26 = CONCAT44(uVar7,uVar7) & 0x1ffff0001ffff;
                local_208 = (undefined8 *)0x0;
                if ((puVar14[(ulong)(byte)(POPCOUNT((char)uVar26) + POPCOUNT((char)(uVar26 >> 8)) +
                                          POPCOUNT((char)(uVar26 >> 0x10))) + 2] & 0x300000) != 0) {
                  local_208 = puVar14;
                }
              }
            }
            local_200 = puVar27;
            local_1b8 = local_1e0;
            plVar8 = (long *)FUN_0322c554(&local_1e0,
                                          "Cannot assign null to pointer of type \'{}\' at {}",
                                          &DAT_046a9f58,&local_200,&local_208);
            local_1a0 = 0x25b;
            goto LAB_032148b8;
          }
        }
        else {
          local_88 = (ulong *)0x0;
          local_80 = (ulong *)0x0;
          local_78 = 0;
          iVar6 = FUN_03213500(plVar12,&local_1f8);
          if ((int)param_1[3] == iVar6) {
            iVar16 = iVar6;
            if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) <= iVar6) {
              FUN_03213674(plVar12,(long)(iVar6 + 1));
              iVar16 = (int)param_1[3];
            }
            lVar22 = *plVar12;
            plVar8 = (long *)(lVar22 + (long)iVar16 * 0x30);
            *plVar8 = local_1f8;
            plVar8[1] = local_1f0;
            plVar8[2] = local_1e8;
            if ((local_1e8 & 1) != 0) {
              piVar1 = (int *)((local_1e8 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar20) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            lVar22 = lVar22 + (long)iVar16 * 0x30;
            *(undefined8 *)(lVar22 + 0x18) = 0;
            *(undefined8 *)(lVar22 + 0x20) = 0;
            *(undefined8 *)(lVar22 + 0x28) = 0;
            *(int *)(param_1 + 3) = iVar6 + 1;
            puVar24 = (ulong *)*puVar21;
            lVar22 = param_1[2];
            if (puVar24 != (ulong *)*puVar23) {
LAB_03213bcc:
              bVar20 = true;
              goto LAB_03213c4c;
            }
            uVar17 = 0;
            do {
              uVar7 = (uint)*puVar24;
              if ((uVar7 >> 0x15 & 1) == 0) {
                uVar18 = 0;
              }
              else {
                uVar18 = CONCAT44(uVar7,uVar7) & 0x1fffff001fffff;
                uVar18 = puVar24[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                               POPCOUNT((char)(uVar18 >> 8)) +
                                              POPCOUNT((char)(uVar18 >> 0x10))) + 2];
              }
              uVar17 = uVar18 | uVar17;
            } while (((*puVar24 & 1) == 0) &&
                    (puVar24 = (ulong *)puVar24[1], puVar24 != (ulong *)0x0));
            if (((uint)uVar17 >> 2 & 1) == 0) goto LAB_03213bcc;
            lVar22 = lVar22 + (long)iVar6 * 0x30;
            *(long *)(lVar22 + 0x18) = local_1f8;
            *(long *)(lVar22 + 0x20) = local_1f0;
            puVar23 = (ulong *)(lVar22 + 0x28);
            if ((local_1e8 & 1) != 0) {
              piVar1 = (int *)((local_1e8 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar20) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if ((*puVar23 & 1) != 0) {
              plVar9 = (long *)(*puVar23 & 0xfffffffffffffffe);
              plVar8 = plVar9 + 1;
              do {
                lVar5 = *plVar8;
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar20) {
                  *(int *)plVar8 = (int)lVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            *puVar23 = local_1e8;
            local_88 = *(ulong **)(lVar22 + 0x18);
            local_80 = *(ulong **)(lVar22 + 0x20);
            if ((local_1e8 & 1) != 0) {
              piVar1 = (int *)((local_1e8 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar20) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if ((local_78 & 1) != 0) {
              plVar9 = (long *)(local_78 & 0xfffffffffffffffe);
              plVar8 = plVar9 + 1;
              do {
                lVar22 = *plVar8;
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar20) {
                  *(int *)plVar8 = (int)lVar22 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar22 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            local_78 = *puVar23;
LAB_03213fe0:
            plVar8 = (long *)(**(code **)(*(long *)(uVar19 & 0xfffffffffffffffe) + 0x48))
                                       ((long *)(uVar19 & 0xfffffffffffffffe),local_228,puVar27,
                                        &local_88);
            if ((int)plVar8 < 0) {
              if (DAT_04884f08 < 2) {
                if (DAT_046aaf68 != '\0') goto LAB_0321408c;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_1e0 = (ulong *)0x0;
                  local_1d0 = &DAT_04884eb8;
                  uStack_1c8 = 2;
                  pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1c0 = nn::os::GetThreadId(pTVar10);
                  local_198 = 0;
                  local_1b8 = (ulong *)0x0;
                  local_1b0 = 0;
                  local_208 = (undefined8 *)0x0;
                  local_1a8 = (char *)0x0;
                  local_1a0 = 0;
                  local_70[0] = local_80;
                  puVar14 = (undefined8 *)*puVar21;
                  if ((undefined8 *)0x1 < puVar14) {
                    uVar7 = (uint)*puVar14;
                    if ((uVar7 >> 0x11 & 1) == 0) {
                      local_208 = (undefined8 *)0x0;
                    }
                    else {
                      uVar17 = CONCAT44(uVar7,uVar7) & 0x1ffff0001ffff;
                      local_208 = (undefined8 *)0x0;
                      if ((puVar14[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                 POPCOUNT((char)(uVar17 >> 8)) +
                                                POPCOUNT((char)(uVar17 >> 0x10))) + 2] & 0x300000)
                          != 0) {
                        local_208 = puVar14;
                      }
                    }
                  }
                  local_200 = puVar27;
                  FUN_0322c554(&local_1e0,
                               "Cannot assign instance of type \'{}\' to pointer of type \'{}\' at {}"
                               ,&DAT_046a9f38,local_70,&local_200,&local_208);
                  local_1a8 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                  ;
                  local_1a0 = 0x255;
                  plVar8 = (long *)FUN_0322c8e0(&local_1e0);
                }
                else {
LAB_0321408c:
                  local_1e0 = (ulong *)0x0;
                  local_1d0 = &DAT_04884eb8;
                  uStack_1c8 = 2;
                  pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1c0 = nn::os::GetThreadId(pTVar10);
                  local_210 = local_80;
                  local_1b0 = 0;
                  local_1a8 = (char *)0x0;
                  local_1a0 = 0;
                  local_198 = 0;
                  local_1d8 = 0x10000000000;
                  local_190[0]._0_1_ = '\0';
                  puVar14 = (undefined8 *)*puVar21;
                  local_220 = (undefined8 *)0x0;
                  if ((undefined8 *)0x1 < puVar14) {
                    uVar7 = (uint)*puVar14;
                    if ((uVar7 >> 0x11 & 1) == 0) {
                      local_220 = (undefined8 *)0x0;
                    }
                    else {
                      uVar17 = CONCAT44(uVar7,uVar7) & 0x1ffff0001ffff;
                      local_220 = (undefined8 *)0x0;
                      if ((puVar14[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                 POPCOUNT((char)(uVar17 >> 8)) +
                                                POPCOUNT((char)(uVar17 >> 0x10))) + 2] & 0x300000)
                          != 0) {
                        local_220 = puVar14;
                      }
                    }
                  }
                  local_218 = puVar27;
                  local_1e0 = local_190;
                  local_1b8 = local_190;
                  plVar8 = (long *)FUN_0322c554(&local_1e0,
                                                "Cannot assign instance of type \'{}\' to pointer of type \'{}\' at {}"
                                                ,&DAT_046a9f38,&local_210,&local_218,&local_220);
                  local_1a8 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                  ;
                  local_1a0 = 0x255;
                  if ((char)local_190[0] != '\0') {
                    sVar11 = strlen((char *)local_190);
                    *(undefined2 *)
                     ((long)local_190 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10
                    ;
                    printf("%s",local_190);
                    uVar7 = fflush(__stream);
                    plVar8 = (long *)(ulong)uVar7;
                  }
                }
                if (((ulong)local_1b8 & 1) != 0) {
                  plVar8 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))
                                             (0,(byte *)((long)local_1b8 + -1),0);
                }
              }
              bVar20 = false;
              *(undefined4 *)(param_1 + 1) = 0x80040200;
            }
            else {
              bVar20 = true;
            }
          }
          else {
            lVar22 = *plVar12;
            bVar20 = false;
LAB_03213c4c:
            lVar22 = lVar22 + (long)iVar6 * 0x30;
            local_88 = *(ulong **)(lVar22 + 0x18);
            local_80 = *(ulong **)(lVar22 + 0x20);
            uVar17 = *(ulong *)(lVar22 + 0x28);
            if ((uVar17 & 1) != 0) {
              piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if ((local_78 & 1) != 0) {
              plVar9 = (long *)(local_78 & 0xfffffffffffffffe);
              plVar8 = plVar9 + 1;
              do {
                lVar5 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *(int *)plVar8 = (int)lVar5 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            local_78 = *(ulong *)(lVar22 + 0x28);
            if (!bVar20) goto LAB_03213fe0;
            plVar8 = (long *)FUN_0320f220(param_1,&local_88,&local_1f8,1);
            puVar24 = local_80;
            puVar23 = local_88;
            if (-1 < (int)param_1[1]) {
              if (local_80 != (ulong *)0x0) {
                if (local_80 == (ulong *)PTR_DAT_047ddc28) {
LAB_03213f24:
                  uVar17 = 0;
                  do {
                    uVar7 = (uint)*puVar24;
                    if ((uVar7 >> 0x15 & 1) == 0) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = CONCAT44(uVar7,uVar7) & 0x1fffff001fffff;
                      uVar18 = puVar24[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                     POPCOUNT((char)(uVar18 >> 8)) +
                                                    POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                    }
                    uVar17 = uVar18 | uVar17;
                  } while (((*puVar24 & 1) == 0) &&
                          (puVar24 = (ulong *)puVar24[1], puVar24 != (ulong *)0x0));
                  if ((((uint)uVar17 >> 3 & 1) == 0) && (puVar23 != (ulong *)0x0)) {
                    iVar6 = (int)param_1[10];
                    lVar22 = (long)iVar6;
                    if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) <= iVar6) {
                      FUN_03055ccc(param_1 + 9,PTR_PTR_047d1a50,lVar22 + 1);
                      iVar6 = (int)param_1[10];
                    }
                    *(ulong **)(param_1[9] + (long)iVar6 * 8) = puVar23;
                    *(int *)(param_1 + 10) = (int)(lVar22 + 1);
                  }
                }
                else {
                  local_1e0 = local_80;
                  while( true ) {
                    uVar7 = (uint)*local_1e0;
                    if ((uVar7 >> 0xd & 1) != 0) break;
                    if (((*local_1e0 & 1) != 0) ||
                       (local_1e0 = (ulong *)local_1e0[1], local_1e0 == (ulong *)0x0))
                    goto LAB_03213ec0;
                  }
                  if (local_1e0 != (ulong *)0x0) {
                    uVar17 = CONCAT44(uVar7,uVar7) & 0x1fff00001fff;
                    local_1e0 = local_1e0 +
                                (ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8))
                                             ) + 2;
                    goto LAB_03213ec8;
                  }
LAB_03213ec0:
                  local_1e0 = (ulong *)0x0;
LAB_03213ec8:
                  local_70[0] = (ulong *)PTR_DAT_047ddc28;
                  while( true ) {
                    uVar7 = (uint)*local_70[0];
                    if ((uVar7 >> 0xd & 1) != 0) break;
                    if (((*local_70[0] & 1) != 0) ||
                       (local_70[0] = (ulong *)local_70[0][1], local_70[0] == (ulong *)0x0))
                    goto LAB_03213fb0;
                  }
                  if (local_70[0] != (ulong *)0x0) {
                    uVar17 = CONCAT44(uVar7,uVar7) & 0x1fff00001fff;
                    local_70[0] = local_70[0] +
                                  (ulong)(byte)(POPCOUNT((char)uVar17) +
                                               POPCOUNT((char)(uVar17 >> 8))) + 2;
                    if (local_1e0 == (ulong *)0x0) goto LAB_03213fb4;
                    uVar17 = FUN_031dd354(&local_1e0,local_70);
                    if ((uVar17 & 1) != 0) goto LAB_03213f24;
                    goto LAB_03213fe0;
                  }
LAB_03213fb0:
                  local_70[0] = (ulong *)0x0;
LAB_03213fb4:
                  puVar13 = (ulong *)PTR_DAT_047ddc28;
                  do {
                    if ((*puVar13 & 1) != 0) break;
                    puVar13 = (ulong *)puVar13[1];
                  } while (puVar13 != (ulong *)0x0);
                  puVar15 = local_80;
                  do {
                    if (puVar15 == puVar13) goto LAB_03213f24;
                    puVar15 = (ulong *)puVar15[1];
                  } while (puVar15 != (ulong *)0x0);
                }
              }
              goto LAB_03213fe0;
            }
            bVar20 = false;
          }
          if ((local_78 & 1) != 0) {
            plVar8 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar8 + 1;
            do {
              lVar22 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *(int *)plVar9 = (int)lVar22 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar22 == 1)) {
              plVar8 = (long *)(**(code **)(*plVar8 + 8))();
            }
          }
          if (!bVar20) {
            if ((local_1e8 & 1) != 0) {
              plVar8 = (long *)(local_1e8 & 0xfffffffffffffffe);
              plVar12 = plVar8 + 1;
              do {
                lVar22 = *plVar12;
                cVar3 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar20) {
                  *(int *)plVar12 = (int)lVar22 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar8 != (long *)0x0) && ((int)lVar22 == 1)) {
                plVar8 = (long *)(**(code **)(*plVar8 + 8))();
              }
            }
            if ((uVar19 & 1) == 0) {
              return plVar8;
            }
            piVar1 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar20) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_03214774;
          }
        }
        if ((local_1e8 & 1) != 0) {
          plVar8 = (long *)(local_1e8 & 0xfffffffffffffffe);
          plVar9 = plVar8 + 1;
          do {
            lVar22 = *plVar9;
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar20) {
              *(int *)plVar9 = (int)lVar22 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar22 == 1)) {
            plVar8 = (long *)(**(code **)(*plVar8 + 8))();
          }
        }
        if ((uVar19 & 1) != 0) {
          plVar8 = (long *)(uVar19 & 0xfffffffffffffffe);
          plVar9 = plVar8 + 1;
          do {
            lVar22 = *plVar9;
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar20) {
              *(int *)plVar9 = (int)lVar22 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar22 == 1)) {
            plVar8 = (long *)(**(code **)(*plVar8 + 8))();
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != param_3);
  }
  return plVar8;
}


