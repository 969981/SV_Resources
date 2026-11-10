/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0152c100; name: FUN_0152c100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0152c100(undefined8 param_1,uint param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  bool bVar15;
  uint local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  char local_88 [8];
  undefined8 local_80;
  undefined *puStack_78;
  size_t local_70;
  long *local_68;
  
  lVar12 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x20) + 0x10))();
  }
  puVar5 = PTR_s_default_jewel_047e0e68;
  local_88[0] = '\0';
  if (*param_3 == '\0') {
    local_70 = strlen(PTR_s_default_jewel_047e0e68);
    local_80 = 0x3055114db1fec06e;
    puStack_78 = puVar5;
    local_68 = (long *)0x0;
  }
  else {
    local_80 = *(undefined8 *)(param_3 + 8);
    puStack_78 = *(undefined **)(param_3 + 0x10);
    local_70 = *(size_t *)(param_3 + 0x18);
    local_68 = *(long **)(param_3 + 0x20);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  local_88[0] = '\x01';
  FUN_00c5ecb4(&local_90,lVar12,local_88);
  if (local_90 != (long *)0x0) {
    FUN_00c5ecb4(&local_98,lVar12,param_1);
    puVar5 = PTR_s_EnableJewel_047e0e70;
    if ((int)((ulong)(local_98[0x27] - local_98[0x26]) >> 5) != 0) {
      uVar14 = 0;
      bVar15 = false;
      do {
        plVar10 = (long *)(local_98[0x26] + uVar14 * 0x20);
        local_b8 = *plVar10;
        local_b0 = (undefined *)plVar10[1];
        local_a8 = plVar10[2];
        local_a0 = (long *)plVar10[3];
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x18))();
        }
        plVar10 = local_98;
        if (local_98 == (long *)0x0) {
          local_d8 = CONCAT44(local_d8._4_4_,1);
          if ((*(long *)(_DAT_000000a8 + 0xf8) == 0) ||
             (plVar10 = (long *)(*(long *)(_DAT_000000a8 + 0xf8) + 0x30),
             uVar9 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_d8,puVar5), (uVar9 & 1) == 0)) {
            if (local_b8 < 0xbad51c2e071c243) {
              if (local_b8 < -0x3ac787cc1be1861d) {
                if (local_b8 != -0x731be2a73c015b78) {
                  lVar11 = -0x69251bd9901e9766;
                  goto LAB_0152c8ec;
                }
              }
              else if (local_b8 != -0x3ac787cc1be1861d) {
                lVar11 = -0x2b8f3946dfbe22df;
                goto LAB_0152c8ec;
              }
            }
            else if (local_b8 < 0x53292426d9e57330) {
              if (local_b8 != 0xbad51c2e071c243) {
                lVar11 = 0x4263eaecff2f1858;
                goto LAB_0152c8ec;
              }
            }
            else if ((local_b8 != 0x53292426d9e57330) && (local_b8 != 0x695355b30d47091c)) {
              lVar11 = 0x7f2c45d58c0fc993;
LAB_0152c8ec:
              if (local_b8 != lVar11) goto LAB_0152c30c;
            }
LAB_0152c288:
            FUN_010f7f40(local_98,(uint)(local_b8 == -0x69251bd9901e9766) | (param_2 ^ 1) & 1,
                         &local_b8);
            local_d8 = 0x41aa1ff744bbb42a;
            local_c0 = (long *)0x0;
            local_d0 = "EnableJewelMode";
            uStack_c8 = 0xf;
            local_dc = param_2 & 1;
            (**(code **)(*(long *)(local_98[7] + 0x30) + 0x40))
                      ((long *)(local_98[7] + 0x30),&local_d8,&local_dc);
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            bVar15 = true;
          }
          else if ((int)local_d8 == 1) goto LAB_0152c288;
        }
        else {
          plVar1 = local_98 + 5;
          do {
            lVar11 = *plVar1;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = (int)lVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar11 == -1) goto LAB_0152c94c;
          local_d8 = CONCAT44(local_d8._4_4_,1);
          if ((*(long *)(local_98[0x15] + 0xf8) == 0) ||
             (plVar8 = (long *)(*(long *)(local_98[0x15] + 0xf8) + 0x30),
             uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_d8,puVar5), (uVar9 & 1) == 0)) {
            bVar6 = local_b8 == -0x2b8f3946dfbe22df ||
                    (local_b8 == -0x69251bd9901e9766 ||
                    (local_b8 == 0x4263eaecff2f1858 ||
                    (local_b8 == 0x7f2c45d58c0fc993 ||
                    (local_b8 == -0x3ac787cc1be1861d ||
                    (local_b8 == 0xbad51c2e071c243 ||
                    (local_b8 == 0x695355b30d47091c ||
                    (local_b8 == -0x731be2a73c015b78 || local_b8 == 0x53292426d9e57330)))))));
          }
          else {
            bVar6 = (int)local_d8 == 1;
          }
          do {
            lVar11 = *plVar1;
            iVar7 = (int)lVar11 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          else if ((int)lVar11 == 0) goto LAB_0152c924;
          if (bVar6) goto LAB_0152c288;
        }
LAB_0152c30c:
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < ((ulong)(local_98[0x27] - local_98[0x26]) >> 5 & 0xffffffff));
      if (bVar15) {
        local_b8 = -0x61896429c8371ead;
        local_b0 = PTR_s_PokemonEffect_047e0e90;
        local_a8 = 0x1f;
        local_a0 = (long *)0x0;
        FUN_010f7f40(local_98,param_2 & 1,&local_b8);
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        iVar7 = (**(code **)(*(long *)(*(long *)(local_90[0x15] + 0xf8) + 0x30) + 0x48))();
        if (iVar7 != 0) {
          if ((param_2 & 1) == 0) {
            iVar13 = 0;
            do {
              plVar10 = (long *)(*(long *)(local_90[0x15] + 0xf8) + 0x30);
              plVar10 = (long *)(**(code **)(*plVar10 + 0x70))(plVar10,iVar13);
              local_b8 = *plVar10;
              local_b0 = (undefined *)plVar10[1];
              local_a8 = plVar10[2];
              local_a0 = (long *)plVar10[3];
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x18))();
              }
              plVar10 = local_98;
              local_d8 = 0;
              local_d0 = (char *)0x0;
              if (local_98 != (long *)0x0) {
                plVar1 = local_98 + 5;
                do {
                  lVar11 = *plVar1;
                  cVar2 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar15) {
                    *(int *)plVar1 = (int)lVar11 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((int)lVar11 == -1) goto LAB_0152c94c;
              }
              uVar14 = (**(code **)(*(long *)(local_98[7] + 0x30) + 0xa8))
                                 ((long *)(local_98[7] + 0x30),&local_d8,&local_b8,local_98 + 0x15);
              if ((uVar14 & 1) != 0) {
                (**(code **)(*(long *)(local_98[7] + 0x30) + 0x30))
                          ((long *)(local_98[7] + 0x30),&local_b8,&local_d8);
              }
              plVar1 = plVar10 + 5;
              do {
                lVar11 = *plVar1;
                iVar4 = (int)lVar11 + -1;
                cVar2 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar15) {
                  *(int *)plVar1 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
              else if ((int)lVar11 == 0) goto LAB_0152c924;
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 != iVar7);
          }
          else {
            iVar13 = 0;
            do {
              plVar10 = (long *)(*(long *)(local_90[0x15] + 0xf8) + 0x30);
              plVar10 = (long *)(**(code **)(*plVar10 + 0x70))(plVar10,iVar13);
              local_b8 = *plVar10;
              local_b0 = (undefined *)plVar10[1];
              local_a8 = plVar10[2];
              local_a0 = (long *)plVar10[3];
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x18))();
              }
              plVar10 = local_90;
              local_d8 = 0;
              local_d0 = (char *)0x0;
              if (local_90 != (long *)0x0) {
                plVar1 = local_90 + 5;
                do {
                  lVar11 = *plVar1;
                  cVar2 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar15) {
                    *(int *)plVar1 = (int)lVar11 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((int)lVar11 == -1) {
LAB_0152c94c:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != 0","IncrementReferenceInternal",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                             ,0x53,"Reference counter overflows.");
                }
              }
              uVar14 = (**(code **)(*(long *)(local_90[7] + 0x30) + 0xa8))
                                 ((long *)(local_90[7] + 0x30),&local_d8,&local_b8,local_90 + 0x15);
              if ((uVar14 & 1) != 0) {
                (**(code **)(*(long *)(local_98[7] + 0x30) + 0x30))
                          ((long *)(local_98[7] + 0x30),&local_b8,&local_d8);
              }
              plVar1 = plVar10 + 5;
              do {
                lVar11 = *plVar1;
                iVar4 = (int)lVar11 + -1;
                cVar2 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar15) {
                  *(int *)plVar1 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
              else if ((int)lVar11 == 0) goto LAB_0152c924;
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 != iVar7);
          }
        }
      }
    }
    if (local_98 != (long *)0x0) {
      plVar10 = local_98 + 5;
      do {
        lVar11 = *plVar10;
        iVar7 = (int)lVar11 + -1;
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar15) {
          *(int *)plVar10 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_0152c924;
    }
    if (local_90 != (long *)0x0) {
      plVar10 = local_90 + 5;
      do {
        lVar11 = *plVar10;
        iVar7 = (int)lVar11 + -1;
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar15) {
          *(int *)plVar10 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
LAB_0152c924:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (local_88[0] != '\0') {
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_88[0] = '\0';
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x20) + 0x18))((long *)(lVar12 + 0x20));
  }
  return;
}


