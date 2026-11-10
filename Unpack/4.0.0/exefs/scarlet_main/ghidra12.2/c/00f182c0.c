/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f182c0; name: FUN_00f182c0
 */


/* WARNING: Removing unreachable block (ram,0x00f1864c) */
/* WARNING: Removing unreachable block (ram,0x00f18650) */
/* WARNING: Removing unreachable block (ram,0x00f18658) */
/* WARNING: Removing unreachable block (ram,0x00f18660) */
/* WARNING: Removing unreachable block (ram,0x00f18b38) */
/* WARNING: Removing unreachable block (ram,0x00f18664) */

void FUN_00f182c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long ******pppppplVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long *******ppppppplVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *pcVar17;
  undefined1 (*pauVar18) [16];
  long lVar19;
  long lVar20;
  bool bVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long *******ppppppplVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  double dVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long local_108;
  long *******local_100;
  long *******local_f8;
  long local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined4 local_9c [3];
  undefined4 local_88;
  undefined4 local_84;
  
  lVar4 = DAT_0485a0e8;
  plVar1 = (long *)(DAT_0485a0e8 + 0xd70);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar19 = *plVar1;
    lVar20 = *(long *)(lVar4 + 0xd78);
    cVar7 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar21) {
      *plVar1 = lVar19;
      *(long *)(lVar4 + 0xd78) = lVar20;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00f18314:
  while ((lVar19 != 0 && (lVar12 != lVar19))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0xd80));
    do {
      lVar19 = *plVar1;
      lVar20 = *(long *)(lVar4 + 0xd78);
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *plVar1 = lVar19;
        *(long *)(lVar4 + 0xd78) = lVar20;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  do {
    lVar5 = *plVar1;
    lVar6 = *(long *)(lVar4 + 0xd78);
    if (lVar5 != lVar19 || lVar6 != lVar20) {
      bVar21 = false;
      ClearExclusiveLocal();
      goto LAB_00f18344;
    }
    cVar7 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar21) {
      *plVar1 = lVar19;
      *(long *)(lVar4 + 0xd74) = lVar20 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar21 = true;
LAB_00f18344:
  if (!bVar21) {
    lVar19 = lVar5;
    lVar20 = lVar6;
    goto LAB_00f18314;
  }
  lVar12 = *(long *)(lVar4 + 0x38);
  if (*(long *)(lVar4 + 0x40) != lVar12) {
    uVar24 = 0;
LAB_00f183d0:
    if ((*(long *)(lVar12 + (long)(int)uVar24 * 0x1d0 + 0x1c8) == 0) &&
       (*(long *)(lVar12 + uVar24 * 0x1d0 + 0x28) == -0xd608cfa277277e5)) {
      pcVar17 = (char *)(lVar12 + uVar24 * 0x1d0);
      local_108 = *(long *)(param_1 + 0x90);
      lVar19 = param_1 + 0x88;
      if (lVar19 != local_108) {
        if (*pcVar17 == '\0') {
          do {
            if (*(char *)(local_108 + 0x10) == '\0') goto LAB_00f18ba8;
            local_108 = *(long *)(local_108 + 8);
          } while (lVar19 != local_108);
        }
        else {
          do {
            if ((*(char *)(local_108 + 0x10) != '\0') &&
               (*(int *)(local_108 + 0x14) == *(int *)(lVar12 + uVar24 * 0x1d0 + 4)))
            goto LAB_00f18ba8;
            local_108 = *(long *)(local_108 + 8);
          } while (lVar19 != local_108);
        }
      }
      if (*(char *)(lVar12 + uVar24 * 0x1d0 + 0x1b8) != '\0') {
        lVar12 = FUN_0274071c(lVar19,lVar19);
        plVar13 = (long *)FUN_0145966c();
        uVar11 = (**(code **)(*plVar13 + 0x88))();
        plVar13 = (long *)(lVar12 + 0x18);
        lVar19 = *(long *)(lVar12 + 0x20) - *plVar13;
        uVar22 = lVar19 >> 3;
        if (uVar22 < 4) {
          FUN_00ede218(plVar13,4 - uVar22);
        }
        else if (lVar19 != 0x20) {
          FUN_027407d0(plVar13,*plVar13 + 0x20);
        }
        FUN_0274086c();
        lVar19 = *(long *)(lVar12 + 0x88);
        lVar20 = *(long *)(lVar12 + 0x90) - lVar19;
        uVar22 = lVar20 >> 6;
        if (uVar22 < 4) {
          FUN_00edaf4c((long *)(lVar12 + 0x88),4 - uVar22);
        }
        else if (lVar20 != 0x100) {
          *(long *)(lVar12 + 0x90) = lVar19 + 0x100;
        }
        puVar14 = (undefined8 *)FUN_00e31554();
        local_100 = (long *******)*puVar14;
        FUN_027408e8(&local_c8,local_100,&local_100);
        puVar14 = (undefined8 *)(lVar12 + 0xc0);
        local_100 = (long *******)*puVar14;
        *puVar14 = 0;
        FUN_02740948(&local_100);
        uVar23 = local_c8;
        local_c8 = 0;
        *puVar14 = uVar23;
        FUN_02740948(&local_c8);
        lVar19 = 0;
        do {
          puVar15 = (undefined8 *)FUN_00e31554();
          local_100 = (long *******)*puVar15;
          FUN_00f19de0(&local_c8,local_100,&local_100);
          lVar20 = *(long *)(lVar12 + 0x50);
          local_100 = *(long ********)(lVar20 + lVar19 * 8);
          *(undefined8 *)(lVar20 + lVar19 * 8) = 0;
          FUN_00f1900c(&local_100);
          uVar23 = local_c8;
          local_c8 = 0;
          *(undefined8 *)(lVar20 + lVar19 * 8) = uVar23;
          FUN_00f1900c(&local_c8);
          puVar15 = (undefined8 *)FUN_0166cefc();
          local_100 = (long *******)&DAT_ea8325e5dbb45b47;
          local_f8 = (long *******)PTR_DAT_047e16a0;
          local_f0 = 0x1f;
          local_c8 = 0x894a29ef768ad19d;
          local_c0 = "[PointWind]";
          uStack_b8 = 0xb;
          local_e8 = (long *)0x0;
          local_b0 = (long *)0x0;
          FUN_00dfeda8(&local_a8,*puVar15,&local_100,&local_c8,0);
          lVar20 = *plVar13;
          plVar16 = *(long **)(lVar20 + lVar19 * 8);
          *(undefined8 *)(lVar20 + lVar19 * 8) = 0;
          if (plVar16 != (long *)0x0) {
            plVar2 = plVar16 + 5;
            do {
              lVar5 = *plVar2;
              iVar8 = (int)lVar5 + -1;
              cVar7 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar21) {
                *(int *)plVar2 = iVar8;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*plVar16 + 0x10))();
            }
            else if ((int)lVar5 == 0) goto LAB_00f18b5c;
          }
          *(undefined8 *)(lVar20 + lVar19 * 8) = local_a8;
          local_a8 = 0;
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
          FUN_00c751c8(*(undefined8 *)(*plVar13 + lVar19 * 8),param_1 + 0x30,1,1);
          FUN_00c97970(*(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200),param_1 + 0x78,0x10);
          FUN_00c7504c(*(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200),
                       *(undefined4 *)(param_1 + 0x80),0,0);
          uVar23 = *(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200);
          FUN_00f19e40(&local_100,*(long *)(lVar12 + 0x50) + lVar19 * 8);
          FUN_00c4b998(uVar23,1,uVar11,&local_100);
          if (local_100 != (long *******)0x0) {
            pppppplVar3 = (long ******)(local_100 + 5);
            do {
              iVar8 = *(int *)pppppplVar3;
              iVar9 = iVar8 + -1;
              cVar7 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(pppppplVar3,0x10);
              if (bVar21) {
                *(int *)pppppplVar3 = iVar9;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 == 0) {
              (*(code *)(*local_100)[2])();
            }
            else if (iVar8 == 0) goto LAB_00f18b5c;
          }
          uVar23 = *(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200);
          FUN_00f19ea0(&local_100,puVar14);
          FUN_00c4b998(uVar23,2,uVar11,&local_100);
          if (local_100 != (long *******)0x0) {
            pppppplVar3 = (long ******)(local_100 + 5);
            do {
              iVar8 = *(int *)pppppplVar3;
              iVar9 = iVar8 + -1;
              cVar7 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(pppppplVar3,0x10);
              if (bVar21) {
                *(int *)pppppplVar3 = iVar9;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 == 0) {
              (*(code *)(*local_100)[2])();
            }
            else if (iVar8 == 0) {
LAB_00f18b5c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          FUN_00eb2d18(*(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200),2,1);
          FUN_00eb3bec(*(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200),1);
          FUN_00eb6a8c(*(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200),7);
          FUN_00eb2008(*(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200),4);
          FUN_00eb4900(*(undefined8 *)(*(long *)(*plVar13 + lVar19 * 8) + 200),0);
          FUN_00eacd1c(*(undefined8 *)(*plVar13 + lVar19 * 8),0,4,0);
          FUN_00f19078(*(undefined8 *)(*plVar13 + lVar19 * 8),0);
          lVar20 = *(long *)(*plVar13 + lVar19 * 8);
          uVar23 = FUN_015f804c(*(undefined8 *)(param_1 + 0xc0));
          FUN_00d10690(*(undefined8 *)(lVar20 + 200),0,uVar23);
          lVar19 = lVar19 + 1;
        } while (lVar19 != 4);
        *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)pcVar17;
      }
    }
    goto LAB_00f183b4;
  }
LAB_00f18898:
  do {
    lVar12 = *plVar1;
    lVar19 = *(long *)(lVar4 + 0xd78);
    cVar7 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar21) {
      *plVar1 = lVar12;
      *(long *)(lVar4 + 0xd78) = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar20 = *plVar1;
    lVar5 = *(long *)(lVar4 + 0xd78);
    if (lVar20 != lVar12 || lVar5 != lVar19) {
      bVar21 = false;
      ClearExclusiveLocal();
      goto joined_r0x00f188c8;
    }
    cVar7 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar21) {
      *plVar1 = lVar12;
      *(long *)(lVar4 + 0xd74) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar21 = true;
joined_r0x00f188c8:
  do {
    if (bVar21) {
      nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0xd80));
      local_e8 = *(long **)(param_1 + 0xa0);
      local_e0 = *(undefined8 *)(param_1 + 0xa8);
      local_100 = (long *******)&local_100;
      lVar4 = param_1 + 0x88;
      local_f0 = 0;
      local_d0 = 0;
      uStack_d8 = 0;
      local_f8 = local_100;
      if (lVar4 != *(long *)(param_1 + 0x90)) {
        lVar12 = *(long *)(param_1 + 0x90);
        do {
          uVar24 = FUN_00d8a5bc(DAT_0485a0e8,lVar12 + 0x10);
          lVar19 = *(long *)(lVar12 + 8);
          if ((uVar24 & 1) == 0) {
            for (; lVar4 != lVar19; lVar19 = *(long *)(lVar19 + 8)) {
              uVar24 = FUN_00d8a5bc(DAT_0485a0e8,lVar19 + 0x10);
              if ((uVar24 & 1) != 0) {
                FUN_027409b4(&local_100,&local_100,lVar4,lVar12,lVar19);
                lVar19 = *(long *)(lVar19 + 8);
                goto LAB_00f18994;
              }
            }
            FUN_027409b4(&local_100,&local_100,lVar4,lVar12,lVar19);
          }
LAB_00f18994:
          lVar12 = lVar19;
        } while (lVar4 != lVar19);
        if (local_f0 != 0) {
          (*local_f8)[1] = (long *****)local_100[1];
          *local_100[1] = (long *****)*local_f8;
          local_f0 = 0;
          ppppppplVar10 = local_f8;
          while ((long ********)ppppppplVar10 != &local_100) {
            ppppppplVar25 = (long *******)ppppppplVar10[1];
            FUN_00f19f00(ppppppplVar10 + 2);
            plVar1 = local_e8;
            uVar24 = (**(code **)(*local_e8 + 0xf8))(local_e8);
            if (((uVar24 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar1 + 0x18))(plVar1,ppppppplVar10,0xd8,8);
              ppppppplVar10 = ppppppplVar25;
            }
            else {
              FUN_00c48fe8(plVar1,ppppppplVar10,0xd8,8);
              ppppppplVar10 = ppppppplVar25;
            }
          }
        }
      }
      for (lVar12 = *(long *)(param_1 + 0x90); lVar12 != lVar4; lVar12 = *(long *)(lVar12 + 8)) {
        puVar15 = *(undefined8 **)(lVar12 + 0x20);
        for (puVar14 = *(undefined8 **)(lVar12 + 0x18); puVar14 != puVar15; puVar14 = puVar14 + 1) {
          FUN_00c4cf3c(*puVar14);
        }
      }
      return;
    }
    do {
      lVar12 = *plVar1;
      lVar19 = *(long *)(lVar4 + 0xd78);
      if (lVar12 != lVar20 || lVar19 != lVar5) {
        bVar21 = false;
        ClearExclusiveLocal();
        lVar20 = lVar12;
        lVar5 = lVar19;
        goto joined_r0x00f188c8;
      }
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *plVar1 = lVar20;
        *(long *)(lVar4 + 0xd74) = lVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar21 = true;
    lVar20 = lVar12;
    lVar5 = lVar19;
  } while( true );
LAB_00f18ba8:
  if (*(char *)(lVar12 + uVar24 * 0x1d0 + 0x1b8) == '\0') {
    FUN_0274067c(lVar19,local_108);
  }
  else {
    local_c8 = CONCAT44(local_c8._4_4_,0x3f800000);
    local_100 = (long *******)0x5925fa3a92333d80;
    local_e8 = (long *)0x0;
    local_f8 = (long *******)PTR_s_Speed_047d8880;
    local_f0 = 0x1f;
    FUN_00e9d078(pcVar17,&local_100,&local_c8);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    local_a8 = CONCAT44(local_a8._4_4_,0x3f800000);
    plVar13 = (long *)FUN_017dcd80();
    plVar13 = (long *)(**(code **)(*(long *)(*plVar13 + 0x30) + 0x30))();
    local_100 = (long *******)0xaf5ca8bdf0f684d2;
    local_e8 = (long *)0x0;
    local_f8 = (long *******)PTR_s_GlobalTimeSpeed_047e0ef0;
    local_f0 = 0x1f;
    (**(code **)(*plVar13 + 0x38))(plVar13,&local_100,&local_a8);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    puVar14 = (undefined8 *)FUN_00e31554();
    plVar13 = (long *)FUN_01fafa90(*puVar14);
    lVar19 = *plVar13;
    uVar40 = 0x3d851eb8;
    uVar41 = 0;
    dVar38 = *(double *)(local_108 + 200);
    uVar39 = 0;
    dVar26 = dVar38 + ((double)lVar19 / 1000000000.0 - *(double *)(local_108 + 0xd0)) *
                      (double)((float)local_c8 * (float)local_a8 * 0.065);
    *(double *)(local_108 + 200) = dVar26;
    *(double *)(local_108 + 0xd0) = (double)lVar19 / 1000000000.0;
    dVar26 = fmod(dVar26,10.0);
    dVar27 = fmod(*(double *)(local_108 + 200) + 5.0,10.0);
    fVar35 = (float)dVar26 + -5.0;
    uVar22 = (ulong)(uint)fVar35;
    uVar23 = 0;
    auVar31 = FUN_00dfcd7c(lVar12 + uVar24 * 0x1d0 + 0x50);
    local_84 = 0;
    local_100 = (long *******)0xc15508fa830cbd90;
    local_e8 = (long *)0x0;
    local_f8 = (long *******)PTR_s_Strength_047d8898;
    local_f0 = 0x1f;
    FUN_00e9d078(pcVar17,&local_100,&local_84);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    local_88 = 0x3f800000;
    local_100 = (long *******)0x9331808c8765e725;
    local_f8 = (long *******)PTR_s_NoiseScale_047d8890;
    local_f0 = 0x1f;
    local_e8 = (long *)0x0;
    FUN_00e9d078(pcVar17,&local_100,&local_88);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    local_9c[0] = 0x40000000;
    local_100 = (long *******)0x10c3e168171871e4;
    local_f8 = (long *******)PTR_s_FadePower_047d88c8;
    local_f0 = 0x1f;
    local_e8 = (long *)0x0;
    FUN_00e9d078(pcVar17,&local_100,local_9c);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    memcpy((void *)(*(long *)(local_108 + 0x88) + 0xc0),(void *)(*(long *)(local_108 + 0x88) + 0x80)
           ,0x40);
    lVar12 = *(long *)(local_108 + 0x88);
    uVar37 = *(undefined8 *)(lVar12 + 200);
    uVar36 = *(undefined8 *)(lVar12 + 0xc0);
    uVar32 = *(undefined8 *)(lVar12 + 0xd8);
    uVar28 = *(undefined8 *)(lVar12 + 0xd0);
    uVar33 = *(undefined8 *)(lVar12 + 0xe8);
    uVar29 = *(undefined8 *)(lVar12 + 0xe0);
    uVar34 = *(undefined8 *)(lVar12 + 0xf8);
    uVar30 = *(undefined8 *)(lVar12 + 0xf0);
    lVar12 = *(long *)(*(long *)(local_108 + 0x50) + 0x18);
    FUN_00c41540();
    *(undefined8 *)(lVar12 + 0x84) = uVar37;
    *(undefined8 *)(lVar12 + 0x7c) = uVar36;
    *(undefined8 *)(lVar12 + 0x94) = uVar32;
    *(undefined8 *)(lVar12 + 0x8c) = uVar28;
    *(undefined8 *)(lVar12 + 0xa4) = uVar33;
    *(undefined8 *)(lVar12 + 0x9c) = uVar29;
    *(undefined8 *)(lVar12 + 0xb4) = uVar34;
    *(undefined8 *)(lVar12 + 0xac) = uVar30;
    memcpy((void *)(*(long *)(local_108 + 0x88) + 0x80),(void *)(*(long *)(local_108 + 0x88) + 0x40)
           ,0x40);
    lVar12 = *(long *)(local_108 + 0x88);
    uVar37 = *(undefined8 *)(lVar12 + 0x88);
    uVar36 = *(undefined8 *)(lVar12 + 0x80);
    uVar32 = *(undefined8 *)(lVar12 + 0x98);
    uVar28 = *(undefined8 *)(lVar12 + 0x90);
    uVar33 = *(undefined8 *)(lVar12 + 0xa8);
    uVar29 = *(undefined8 *)(lVar12 + 0xa0);
    uVar34 = *(undefined8 *)(lVar12 + 0xb8);
    uVar30 = *(undefined8 *)(lVar12 + 0xb0);
    lVar12 = *(long *)(*(long *)(local_108 + 0x50) + 0x10);
    FUN_00c41540();
    *(undefined8 *)(lVar12 + 0x84) = uVar37;
    *(undefined8 *)(lVar12 + 0x7c) = uVar36;
    *(undefined8 *)(lVar12 + 0x94) = uVar32;
    *(undefined8 *)(lVar12 + 0x8c) = uVar28;
    *(undefined8 *)(lVar12 + 0xa4) = uVar33;
    *(undefined8 *)(lVar12 + 0x9c) = uVar29;
    *(undefined8 *)(lVar12 + 0xb4) = uVar34;
    *(undefined8 *)(lVar12 + 0xac) = uVar30;
    memcpy((void *)((long)*(void **)(local_108 + 0x88) + 0x40),*(void **)(local_108 + 0x88),0x40);
    lVar12 = *(long *)(local_108 + 0x88);
    uVar37 = *(undefined8 *)(lVar12 + 0x48);
    uVar36 = *(undefined8 *)(lVar12 + 0x40);
    uVar32 = *(undefined8 *)(lVar12 + 0x58);
    uVar28 = *(undefined8 *)(lVar12 + 0x50);
    uVar33 = *(undefined8 *)(lVar12 + 0x68);
    uVar29 = *(undefined8 *)(lVar12 + 0x60);
    uVar34 = *(undefined8 *)(lVar12 + 0x78);
    uVar30 = *(undefined8 *)(lVar12 + 0x70);
    lVar12 = *(long *)(*(long *)(local_108 + 0x50) + 8);
    FUN_00c41540();
    *(undefined8 *)(lVar12 + 0x84) = uVar37;
    *(undefined8 *)(lVar12 + 0x7c) = uVar36;
    *(undefined8 *)(lVar12 + 0x94) = uVar32;
    *(undefined8 *)(lVar12 + 0x8c) = uVar28;
    *(undefined8 *)(lVar12 + 0xa4) = uVar33;
    *(undefined8 *)(lVar12 + 0x9c) = uVar29;
    *(undefined8 *)(lVar12 + 0xb4) = uVar34;
    *(undefined8 *)(lVar12 + 0xac) = uVar30;
    lVar12 = **(long **)(local_108 + 0x50);
    FUN_00c41540();
    *(undefined1 (*) [16])(lVar12 + 0x7c) = auVar31;
    *(undefined8 *)(lVar12 + 0xa4) = uVar39;
    *(double *)(lVar12 + 0x9c) = dVar38;
    *(undefined8 *)(lVar12 + 0x94) = uVar23;
    *(ulong *)(lVar12 + 0x8c) = uVar22;
    *(undefined8 *)(lVar12 + 0xb4) = uVar41;
    *(undefined8 *)(lVar12 + 0xac) = uVar40;
    pauVar18 = *(undefined1 (**) [16])(local_108 + 0x88);
    *pauVar18 = auVar31;
    *(undefined8 *)(pauVar18[1] + 8) = uVar23;
    *(ulong *)pauVar18[1] = uVar22;
    *(undefined8 *)(pauVar18[2] + 8) = uVar39;
    *(double *)pauVar18[2] = dVar38;
    *(undefined8 *)(pauVar18[3] + 8) = uVar41;
    *(undefined8 *)pauVar18[3] = uVar40;
    lVar12 = *(long *)(local_108 + 0xc0);
    FUN_00c41540(lVar12);
    *(undefined4 *)(lVar12 + 0x7c) = local_84;
    *(undefined4 *)(lVar12 + 0x80) = local_88;
    *(undefined4 *)(lVar12 + 0x84) = local_9c[0];
    *(undefined4 *)(lVar12 + 0x88) = 0x3e800000;
    *(float *)(lVar12 + 0x8c) = (float)dVar26;
    *(float *)(lVar12 + 0x90) = ABS(fVar35) / -5.0 + 1.0;
    *(float *)(lVar12 + 0x94) = (float)dVar27;
    *(float *)(lVar12 + 0x98) = ABS((float)dVar27 + -5.0) / -5.0 + 1.0;
    FUN_02739548(DAT_0485a0e8,pcVar17,0);
  }
LAB_00f183b4:
  lVar12 = *(long *)(lVar4 + 0x38);
  uVar24 = uVar24 + 1;
  if ((ulong)((*(long *)(lVar4 + 0x40) - lVar12 >> 4) * 0x34f72c234f72c235) <= uVar24)
  goto LAB_00f18898;
  goto LAB_00f183d0;
}


