/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01acd3d0; name: FUN_01acd3d0
 */


/* WARNING: Control flow encountered bad instruction data */

uint FUN_01acd3d0(long param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *local_88 [4];
  long *local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  
  if (*(char *)(param_1 + 0x4d) != '\0') {
    if ((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      if ((param_2 >> 5 & 1) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x138);
        for (puVar16 = *(undefined8 **)(param_1 + 0x130); puVar16 != puVar3; puVar16 = puVar16 + 1)
        {
          plVar15 = (long *)*puVar16;
          if (plVar15 == (long *)0x0) {
            halt_baddata();
          }
          plVar9 = plVar15 + 5;
          do {
            lVar19 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = (int)lVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar19 == -1) goto LAB_01ace79c;
          (**(code **)(*plVar15 + 0x38))(plVar15);
          do {
            lVar19 = *plVar9;
            iVar6 = (int)lVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
          else if ((int)lVar19 == 0) goto LAB_01ace774;
        }
      }
      if ((param_2 & 3) != 0) {
        puVar16 = *(undefined8 **)(param_1 + 0x130);
        puVar3 = *(undefined8 **)(param_1 + 0x138);
        *(undefined4 *)(param_1 + 0x48) = 7;
        for (; puVar16 != puVar3; puVar16 = puVar16 + 1) {
          plVar15 = (long *)*puVar16;
          if (plVar15 == (long *)0x0) {
            halt_baddata();
          }
          plVar9 = plVar15 + 5;
          do {
            lVar19 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = (int)lVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar19 == -1) goto LAB_01ace79c;
          (**(code **)(*plVar15 + 0x88))(plVar15,*(undefined4 *)(param_1 + 0x48));
          do {
            lVar19 = *plVar9;
            iVar6 = (int)lVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
          else if ((int)lVar19 == 0) goto LAB_01ace774;
        }
      }
      puVar3 = *(undefined8 **)(param_1 + 0x138);
      for (puVar16 = *(undefined8 **)(param_1 + 0x130); puVar16 != puVar3; puVar16 = puVar16 + 1) {
        plVar15 = (long *)*puVar16;
        if (plVar15 == (long *)0x0) {
          halt_baddata();
        }
        plVar9 = plVar15 + 5;
        do {
          lVar19 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = (int)lVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar19 == -1) goto LAB_01ace79c;
        (**(code **)(*plVar15 + 0x40))(plVar15);
        do {
          lVar19 = *plVar9;
          iVar6 = (int)lVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
        else if ((int)lVar19 == 0) goto LAB_01ace774;
      }
      if (((param_2 & 3) != 0) || ((*(byte *)(param_1 + 0x48) & 5) != 0)) {
        plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
        (**(code **)(*plVar15 + 0x30))(plVar15,param_1 + 0x98,3);
        if ((*(uint *)(param_1 + 0x48) & 1) != 0) {
          lVar19 = param_1 + 0xa8;
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffe;
          FUN_00ca7394(lVar19,0);
          plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
          (**(code **)(*plVar15 + 0x50))(plVar15,lVar19,1);
          if ((*(int *)(param_1 + 0x50) == 0) && ((*(byte *)(param_1 + 0x48) >> 1 & 1) != 0)) {
            lVar11 = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8);
            if (lVar11 != 0) {
              uVar7 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x44);
              uVar18 = (lVar11 >> 3) * 0x38e38e39;
              FUN_00ca7394(lVar19,(int)uVar18 + 1);
              uVar17 = uVar18 & 0xffffffff;
              local_58[0] = 0x15;
              lVar19 = uVar17 * 8 + (uVar18 & 0xffffffff);
              lVar11 = *(long *)(param_1 + 0xa8) + lVar19 * 8;
              local_88[0]._0_4_ = 0x2e;
              FUN_00c85118(lVar11,local_58,local_88);
              *(int *)(lVar11 + 0x40) = *(int *)(lVar11 + 0x40) + 0x10;
              local_88[0]._0_4_ = 0x2e;
              lVar11 = *(long *)(param_1 + 0xa8) + lVar19 * 8;
              local_58[0] = 0x16;
              FUN_00c85118(lVar11,local_58,local_88);
              *(int *)(lVar11 + 0x40) = *(int *)(lVar11 + 0x40) + 0x10;
              local_88[0] = (long *)CONCAT44(local_88[0]._4_4_,0x2e);
              lVar19 = *(long *)(param_1 + 0xa8) + lVar19 * 8;
              local_58[0] = 0x17;
              FUN_00c85118(lVar19,local_58,local_88);
              *(int *)(lVar19 + 0x40) = *(int *)(lVar19 + 0x40) + 0x10;
              lVar19 = *(long *)(param_1 + 0xa8);
              plVar15 = *(long **)(param_1 + 0x90);
              if (plVar15 != (long *)0x0) {
                plVar9 = plVar15 + 5;
                do {
                  lVar11 = *plVar9;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar5) {
                    *(int *)plVar9 = (int)lVar11 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((int)lVar11 == -1) goto LAB_01ace79c;
                do {
                  lVar11 = *plVar9;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar5) {
                    *(int *)plVar9 = (int)lVar11 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((int)lVar11 == -1) goto LAB_01ace79c;
              }
              lVar11 = lVar19 + uVar17 * 0x48;
              plVar9 = *(long **)(lVar11 + 0x38);
              *(long **)(lVar11 + 0x38) = plVar15;
              if (plVar9 != (long *)0x0) {
                plVar13 = plVar9 + 5;
                do {
                  lVar11 = *plVar13;
                  iVar6 = (int)lVar11 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar5) {
                    *(int *)plVar13 = iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar6 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
                else if ((int)lVar11 == 0) goto LAB_01ace774;
              }
              *(undefined4 *)(lVar19 + uVar17 * 0x48 + 0x44) = uVar7;
              if (plVar15 != (long *)0x0) {
                plVar9 = plVar15 + 5;
                do {
                  lVar19 = *plVar9;
                  iVar6 = (int)lVar19 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar5) {
                    *(int *)plVar9 = iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar6 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
                else if ((int)lVar19 == 0) goto LAB_01ace774;
              }
            }
          }
        }
        lVar19 = *(long *)(param_1 + 0xa8);
        uVar17 = (*(long *)(param_1 + 0xb0) - lVar19 >> 3) * 0x38e38e39;
        lVar11 = *(long *)(param_1 + 0x98);
        if ((int)uVar17 != 0) {
          uVar18 = uVar17 & 0xffffffff;
          FUN_00c75684(*(undefined8 *)(lVar11 + 200),0,lVar19 + 0x38);
          if ((((uVar18 != 1) &&
               (FUN_00c75684(*(undefined8 *)(lVar11 + 200),1,lVar19 + 0x80), uVar18 != 2)) &&
              (FUN_00c75684(*(undefined8 *)(lVar11 + 200),2,lVar19 + 200), uVar18 != 3)) &&
             ((FUN_00c75684(*(undefined8 *)(lVar11 + 200),3,lVar19 + 0x110), uVar18 != 4 &&
              (FUN_00c75684(*(undefined8 *)(lVar11 + 200),4,lVar19 + 0x158), uVar18 != 5)))) {
            lVar20 = lVar19 + 0x1a0;
            uVar21 = 5;
            do {
              FUN_00c75684(*(undefined8 *)(lVar11 + 200),uVar21 & 0xffffffff,lVar20);
              uVar21 = uVar21 + 1;
              lVar20 = lVar20 + 0x48;
            } while (uVar18 != uVar21);
          }
        }
        FUN_00c752dc(lVar11,lVar19,uVar17 & 0xffffffff);
        uVar8 = *(uint *)(param_1 + 0x48);
        if ((uVar8 >> 1 & 1) != 0) {
          local_88[0] = DAT_0485a0a0;
          if (DAT_0485a0a0 != (long *)0x0) {
            plVar15 = DAT_0485a0a0 + 5;
            do {
              lVar19 = *plVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *(int *)plVar15 = (int)lVar19 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((int)lVar19 == -1) {
LAB_01ace79c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x40))();
          lVar19 = param_1 + 0xe8;
          FUN_00ca7394(lVar19,0);
          plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
          uVar17 = (**(code **)(*plVar15 + 0x48))(plVar15,2);
          if ((uVar17 & 1) == 0) {
            FUN_01ace7d8(param_1,local_88,uVar7);
          }
          else {
            plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
            uVar17 = (**(code **)(*plVar15 + 0x48))(plVar15,3);
            if ((uVar17 & 1) == 0) {
              plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
              uVar17 = (**(code **)(*plVar15 + 0x48))(plVar15,4);
              if ((uVar17 & 1) == 0) {
                FUN_00ca7394(lVar19,2);
                lVar19 = *(long *)(param_1 + 0xe8);
                local_5c = 1;
                local_58[0] = 0x22;
                FUN_00c85118(lVar19,&local_5c,local_58);
                *(int *)(lVar19 + 0x40) = *(int *)(lVar19 + 0x40) + 0xc;
                FUN_00ebd51c(lVar19,local_88,uVar7,1);
                lVar11 = *(long *)(param_1 + 0xe8);
                local_5c = 2;
                local_58[0] = 0x22;
                lVar19 = lVar11 + 0x48;
                FUN_00c85118(lVar19,&local_5c,local_58);
                *(int *)(lVar11 + 0x88) = *(int *)(lVar11 + 0x88) + 0xc;
              }
              else {
                FUN_00ca7394(lVar19,3);
                lVar19 = *(long *)(param_1 + 0xe8);
                local_5c = 1;
                local_58[0] = 0x22;
                FUN_00c85118(lVar19,&local_5c,local_58);
                *(int *)(lVar19 + 0x40) = *(int *)(lVar19 + 0x40) + 0xc;
                FUN_00ebd51c(lVar19,local_88,uVar7,1);
                lVar19 = *(long *)(param_1 + 0xe8);
                local_5c = 2;
                local_58[0] = 0x22;
                FUN_00c85118(lVar19 + 0x48,&local_5c,local_58);
                *(int *)(lVar19 + 0x88) = *(int *)(lVar19 + 0x88) + 0xc;
                FUN_00ebd51c(lVar19 + 0x48,local_88,uVar7,1);
                lVar11 = *(long *)(param_1 + 0xe8);
                local_5c = 4;
                local_58[0] = 0x22;
                lVar19 = lVar11 + 0x90;
                FUN_00c85118(lVar19,&local_5c,local_58);
                *(int *)(lVar11 + 0xd0) = *(int *)(lVar11 + 0xd0) + 0xc;
              }
              FUN_00ebd51c(lVar19,local_88,uVar7,1);
            }
            else {
              FUN_01ace854(param_1,local_88,uVar7);
            }
          }
          if (local_88[0] != (long *)0x0) {
            plVar15 = local_88[0] + 5;
            do {
              lVar19 = *plVar15;
              iVar6 = (int)lVar19 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *(int *)plVar15 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*local_88[0] + 0x10))();
            }
            else if ((int)lVar19 == 0) {
LAB_01ace774:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          uVar8 = *(uint *)(param_1 + 0x48);
        }
        if ((uVar8 >> 2 & 1) != 0) {
          *(uint *)(param_1 + 0x48) = uVar8 & 0xfffffffb;
          lVar19 = *(long *)(param_1 + 0x128);
          plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
          uVar8 = (**(code **)(*plVar15 + 0x48))(plVar15,2);
          plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
          plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != -0x58074e8447efbca3)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01acda3c;
              }
            } while (*plVar13 != -0x58074e8447efbca3);
          }
LAB_01acda3c:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if (lVar11 != lVar20) {
              lVar12 = lVar11;
              if (*(uint *)(lVar11 + 0x20) != (uVar8 & 1)) {
                do {
                  lVar14 = lVar12 + 0x28;
                  if (lVar20 == lVar14) {
                    lVar14 = lVar20;
                    goto LAB_01acda80;
                  }
                  puVar2 = (uint *)(lVar12 + 0x48);
                  lVar12 = lVar14;
                } while (*puVar2 != (uVar8 & 1));
              }
            }
LAB_01acda80:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) goto LAB_01ace7d0;
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
            }
          }
          lVar19 = *(long *)(param_1 + 0x128);
          plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
          uVar8 = (**(code **)(*plVar15 + 0x48))(plVar15,4);
          plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
          plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != -0x71d3529ee2b24559)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01acdb48;
              }
            } while (*plVar13 != -0x71d3529ee2b24559);
          }
LAB_01acdb48:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if (lVar11 != lVar20) {
              lVar12 = lVar11;
              if (*(uint *)(lVar11 + 0x20) != (uVar8 & 1)) {
                do {
                  lVar14 = lVar12 + 0x28;
                  if (lVar20 == lVar14) {
                    lVar14 = lVar20;
                    goto LAB_01acdb8c;
                  }
                  puVar2 = (uint *)(lVar12 + 0x48);
                  lVar12 = lVar14;
                } while (*puVar2 != (uVar8 & 1));
              }
            }
LAB_01acdb8c:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) goto LAB_01ace7d0;
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
            }
          }
          lVar19 = *(long *)(param_1 + 0x128);
          plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
          uVar8 = (**(code **)(*plVar15 + 0x48))(plVar15,3);
          plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
          plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != -0x1060da8d018c3120)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01acdc54;
              }
            } while (*plVar13 != -0x1060da8d018c3120);
          }
LAB_01acdc54:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if (lVar11 != lVar20) {
              lVar12 = lVar11;
              if (*(uint *)(lVar11 + 0x20) != (uVar8 & 1)) {
                do {
                  lVar14 = lVar12 + 0x28;
                  if (lVar20 == lVar14) {
                    lVar14 = lVar20;
                    goto LAB_01acdc98;
                  }
                  puVar2 = (uint *)(lVar12 + 0x48);
                  lVar12 = lVar14;
                } while (*puVar2 != (uVar8 & 1));
              }
            }
LAB_01acdc98:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) {
LAB_01ace7d0:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
            }
          }
          lVar19 = *(long *)(param_1 + 0x128);
          plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
          plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != 0x7dd9cac5a6fdf22a)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01acdd4c;
              }
            } while (*plVar13 != 0x7dd9cac5a6fdf22a);
          }
LAB_01acdd4c:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if ((lVar11 != lVar20) && (lVar12 = lVar11, *(int *)(lVar11 + 0x20) != 0)) {
              do {
                lVar14 = lVar12 + 0x28;
                if (lVar20 == lVar14) {
                  lVar14 = lVar20;
                  goto LAB_01acdd88;
                }
                piVar1 = (int *)(lVar12 + 0x48);
                lVar12 = lVar14;
              } while (*piVar1 != 0);
            }
LAB_01acdd88:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) goto LAB_01ace7c8;
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
              lVar19 = *(long *)(param_1 + 0x128);
              plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
              plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
            }
          }
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != 0x105d7f844484169b)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01acde44;
              }
            } while (*plVar13 != 0x105d7f844484169b);
          }
LAB_01acde44:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if ((lVar11 != lVar20) && (lVar12 = lVar11, *(int *)(lVar11 + 0x20) != 1)) {
              do {
                lVar14 = lVar12 + 0x28;
                if (lVar20 == lVar14) {
                  lVar14 = lVar20;
                  goto LAB_01acde84;
                }
                piVar1 = (int *)(lVar12 + 0x48);
                lVar12 = lVar14;
              } while (*piVar1 != 1);
            }
LAB_01acde84:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) goto LAB_01ace7c8;
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
              lVar19 = *(long *)(param_1 + 0x128);
              plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
              plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
            }
          }
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != 0x7679b13314492731)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01acdf40;
              }
            } while (*plVar13 != 0x7679b13314492731);
          }
LAB_01acdf40:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if ((lVar11 != lVar20) && (lVar12 = lVar11, *(int *)(lVar11 + 0x20) != 1)) {
              do {
                lVar14 = lVar12 + 0x28;
                if (lVar20 == lVar14) {
                  lVar14 = lVar20;
                  goto LAB_01acdf80;
                }
                piVar1 = (int *)(lVar12 + 0x48);
                lVar12 = lVar14;
              } while (*piVar1 != 1);
            }
LAB_01acdf80:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) goto LAB_01ace7c8;
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
              lVar19 = *(long *)(param_1 + 0x128);
              plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
              plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
            }
          }
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != -0x169e4b4138e7face)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01ace03c;
              }
            } while (*plVar13 != -0x169e4b4138e7face);
          }
LAB_01ace03c:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if ((lVar11 != lVar20) && (lVar12 = lVar11, *(int *)(lVar11 + 0x20) != 1)) {
              do {
                lVar14 = lVar12 + 0x28;
                if (lVar20 == lVar14) {
                  lVar14 = lVar20;
                  goto LAB_01ace07c;
                }
                piVar1 = (int *)(lVar12 + 0x48);
                lVar12 = lVar14;
              } while (*piVar1 != 1);
            }
LAB_01ace07c:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) goto LAB_01ace7c8;
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
              lVar19 = *(long *)(param_1 + 0x128);
              plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 0x110);
              plVar9 = *(long **)(*(long *)(lVar19 + 0x30) + 0x118);
            }
          }
          plVar13 = plVar15;
          if ((plVar15 != plVar9) && (*plVar15 != 0x4592e1dc539dd1af)) {
            do {
              plVar13 = plVar13 + 0xc;
              if (plVar9 == plVar13) {
                plVar13 = plVar9;
                goto LAB_01ace144;
              }
            } while (*plVar13 != 0x4592e1dc539dd1af);
          }
LAB_01ace144:
          if (plVar9 != plVar13) {
            iVar6 = (int)((ulong)((long)plVar13 - (long)plVar15) >> 5) * -0x55555555;
            lVar11 = plVar15[(long)iVar6 * 0xc + 4];
            lVar20 = plVar15[(long)iVar6 * 0xc + 5];
            lVar14 = lVar11;
            if (lVar11 != lVar20) {
              uVar8 = (uint)(*(int *)(param_1 + 0x50) == 1);
              lVar12 = lVar11;
              if (*(uint *)(lVar11 + 0x20) != uVar8) {
                do {
                  lVar14 = lVar12 + 0x28;
                  if (lVar20 == lVar14) {
                    lVar14 = lVar20;
                    goto LAB_01ace184;
                  }
                  puVar2 = (uint *)(lVar12 + 0x48);
                  lVar12 = lVar14;
                } while (*puVar2 != uVar8);
              }
            }
LAB_01ace184:
            if (lVar20 != lVar14) {
              lVar12 = (long)iVar6;
              uVar17 = (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5a) -
                       (ulong)*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x59);
              lVar20 = *(long *)(lVar19 + 0x80);
              if ((ulong)(*(long *)(lVar19 + 0x88) - lVar20 >> 2) <= uVar17) {
LAB_01ace7c8:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              *(uint *)(lVar20 + uVar17 * 4) =
                   (int)((ulong)(lVar14 - lVar11) >> 3) * -0x33333333 <<
                   (ulong)(*(byte *)((long)plVar15 + lVar12 * 0x60 + 0x5b) & 0x1f) |
                   *(uint *)(lVar20 + uVar17 * 4) &
                   (*(uint *)((long)plVar15 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
              lVar19 = *(long *)(param_1 + 0x128);
            }
          }
          uVar17 = FUN_00d100a8(lVar19);
          if ((uVar17 & 1) != 0) {
            FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x98) + 200),1,
                         *(long *)(param_1 + 0x128) + 0xf0);
            local_88[0] = (long *)((ulong)local_88[0] & 0xffffffffffffff00);
            FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x98) + 200),2,local_88);
            if ((char)local_88[0] != '\0') {
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              local_88[0] = (long *)((ulong)local_88[0] & 0xffffffffffffff00);
            }
          }
        }
        plVar15 = (long *)(param_1 + 0xe8);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 200);
        if ((int)((ulong)(*(long *)(param_1 + 0xf0) - *plVar15) >> 3) * 0x38e38e39 != 0) {
          FUN_00dd7d48(uVar10,0,*plVar15 + 0x38);
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 200);
          if (((int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 3) *
               0x38e38e39 & 0xfffffffeU) != 0) {
            FUN_00dd7d48(uVar10,1,*(long *)(param_1 + 0xe8) + 0x80);
            uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 200);
            if (2 < (uint)((int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 3
                                ) * 0x38e38e39)) {
              FUN_00dd7d48(uVar10,2,*(long *)(param_1 + 0xe8) + 200);
              uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 200);
              if (((int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 3) *
                   0x38e38e39 & 0xfffffffcU) != 0) {
                FUN_00dd7d48(uVar10,3,*(long *)(param_1 + 0xe8) + 0x110);
                lVar19 = *(long *)(param_1 + 0xe8);
                uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 200);
                if (4 < (uint)((int)((ulong)(*(long *)(param_1 + 0xf0) - lVar19) >> 3) * 0x38e38e39)
                   ) {
                  uVar17 = 4;
                  lVar11 = 0x158;
                  do {
                    FUN_00dd7d48(uVar10,uVar17 & 0xffffffff,lVar19 + lVar11);
                    lVar19 = *(long *)(param_1 + 0xe8);
                    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 200);
                    uVar17 = uVar17 + 1;
                    lVar11 = lVar11 + 0x48;
                  } while (uVar17 < (uint)((int)((ulong)(*(long *)(param_1 + 0xf0) - lVar19) >> 3) *
                                          0x38e38e39));
                }
              }
            }
          }
        }
        FUN_00dd8920(uVar10,param_1 + 0xa0,1);
        uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x40))();
        FUN_00c4db90(*(undefined8 *)(*(long *)(param_1 + 0x98) + 200),uVar7,0,0,0,0);
        if ((*(uint *)(param_1 + 0x48) >> 1 & 1) != 0) {
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffd;
          plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
          (**(code **)(*plVar9 + 0x50))(plVar9,plVar15,2);
          plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
          (**(code **)(*plVar9 + 0x50))(plVar9,plVar15,4);
        }
      }
      puVar3 = *(undefined8 **)(param_1 + 0x138);
      for (puVar16 = *(undefined8 **)(param_1 + 0x130); puVar16 != puVar3; puVar16 = puVar16 + 1) {
        plVar15 = (long *)*puVar16;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar9 = plVar15 + 5;
        do {
          lVar19 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = (int)lVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar19 == -1) goto LAB_01ace79c;
        (**(code **)(*plVar15 + 0x30))(plVar15);
        do {
          lVar19 = *plVar9;
          iVar6 = (int)lVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
        else if ((int)lVar19 == 0) goto LAB_01ace774;
      }
      FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x98));
    }
    if (*(char *)(param_1 + 0x4c) != '\0') {
      param_2 = param_2 | 3;
      *(undefined1 *)(param_1 + 0x4c) = 0;
    }
  }
  return param_2;
}


