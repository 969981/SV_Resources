/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e2488; name: FUN_011e2488
 */


void FUN_011e2488(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  int iVar15;
  long *local_108;
  long *local_100;
  long *local_f8;
  undefined *local_f0;
  long lStack_e8;
  long local_e0;
  undefined2 local_d8;
  char local_d6;
  undefined8 local_d0;
  long local_c8;
  long local_c0 [11];
  int local_68;
  
  plVar13 = (long *)(param_1 + 0x70);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_011e24cc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_011e24cc;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_011e24cc:
  lVar7 = *(long *)(param_1 + 0x68);
  plVar13 = *(long **)(lVar7 + 0x30);
  plVar9 = *(long **)(lVar7 + 0x38);
  while (plVar9 != plVar13) {
    plVar9 = plVar9 + -1;
    plVar8 = (long *)*plVar9;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar12 = *plVar1;
        iVar15 = (int)lVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar15;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar12 == 0) {
LAB_011e2d78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  *(long **)(lVar7 + 0x38) = plVar13;
  local_d0 = (long *)((ulong)local_d0 & 0xffffff0000000000);
  memset(local_c0,0,0x58);
  local_c8 = *param_2;
  local_68 = 0;
  local_f0 = PTR_DAT_047e2580 + 0x10;
  lVar7 = *(long *)(param_1 + 0x88);
  lVar12 = *(long *)(param_1 + 0x90);
  local_d8 = 0;
  local_d6 = '\x01';
  lStack_e8 = lVar7;
  local_e0 = lVar12;
  FUN_01247774(&local_f0);
  FUN_01247774(&local_f0);
  if (((*(byte *)(*(long *)(lVar7 + 0x38) + 0x499) >> 2 & 1) == 0) ||
     (*(char *)(param_1 + 0x98) != '\x01')) {
    if (local_d6 == '\0') {
      uVar11 = (ulong)(byte)local_d8;
      lVar7 = 0;
      if ((byte)local_d8 < 5) {
        lVar7 = *(long *)(local_e0 + 0x30) + uVar11 * 0x38 + 0x28;
      }
      if (local_d8._1_1_ < *(byte *)(lVar7 + 0x30)) {
        lVar7 = *(long *)(lVar7 + (ulong)local_d8._1_1_ * 8);
      }
      else {
        lVar7 = 0;
      }
      local_d8 = CONCAT11(local_d8._1_1_ + 1,(byte)local_d8);
      if ((byte)local_d8 < 5) {
        do {
          lVar12 = *(long *)(*(long *)(local_e0 + 0x290) + 8);
          bVar4 = FUN_010f9128(*(undefined4 *)(lVar12 + 0x36c),*(undefined1 *)(lVar12 + 0x370),
                               (uint)uVar11 & 0xff);
          bVar10 = local_d8._1_1_;
          while (bVar10 < bVar4) {
            lVar12 = 0;
            if ((byte)local_d8 < 5) {
              lVar12 = *(long *)(local_e0 + 0x30) + (ulong)(byte)local_d8 * 0x38 + 0x28;
            }
            if ((bVar10 < *(byte *)(lVar12 + 0x30)) &&
               (plVar13 = *(long **)(lVar12 + (ulong)bVar10 * 8), plVar13 != (long *)0x0)) {
              uVar11 = (**(code **)(*plVar13 + 0x200))();
              if ((uVar11 & 1) == 0) goto LAB_011e27bc;
              bVar10 = local_d8._1_1_;
            }
            bVar10 = bVar10 + 1;
            local_d8 = CONCAT11(bVar10,(byte)local_d8);
          }
          uVar6 = (byte)local_d8 + 1;
          uVar11 = (ulong)uVar6;
          local_d8 = (ushort)(byte)uVar6;
        } while ((uVar6 & 0xff) < 5);
      }
      local_d6 = '\x01';
LAB_011e27bc:
      local_68 = 0;
      do {
        lVar12 = (long)local_68;
        local_68 = local_68 + 1;
        local_c0[lVar12] = lVar7;
        if (local_d6 != '\0') break;
        uVar11 = (ulong)(byte)local_d8;
        lVar7 = 0;
        if ((byte)local_d8 < 5) {
          lVar7 = *(long *)(local_e0 + 0x30) + uVar11 * 0x38 + 0x28;
        }
        if (local_d8._1_1_ < *(byte *)(lVar7 + 0x30)) {
          lVar7 = *(long *)(lVar7 + (ulong)local_d8._1_1_ * 8);
        }
        else {
          lVar7 = 0;
        }
        local_d8 = CONCAT11(local_d8._1_1_ + 1,(byte)local_d8);
        if ((byte)local_d8 < 5) {
          do {
            lVar12 = *(long *)(*(long *)(local_e0 + 0x290) + 8);
            bVar4 = FUN_010f9128(*(undefined4 *)(lVar12 + 0x36c),*(undefined1 *)(lVar12 + 0x370),
                                 (uint)uVar11 & 0xff);
            bVar10 = local_d8._1_1_;
            while (bVar10 < bVar4) {
              lVar12 = 0;
              if ((byte)local_d8 < 5) {
                lVar12 = *(long *)(local_e0 + 0x30) + (ulong)(byte)local_d8 * 0x38 + 0x28;
              }
              if ((bVar10 < *(byte *)(lVar12 + 0x30)) &&
                 (plVar13 = *(long **)(lVar12 + (ulong)bVar10 * 8), plVar13 != (long *)0x0)) {
                uVar11 = (**(code **)(*plVar13 + 0x200))();
                if ((uVar11 & 1) == 0) goto LAB_011e28d0;
                bVar10 = local_d8._1_1_;
              }
              bVar10 = bVar10 + 1;
              local_d8 = CONCAT11(bVar10,(byte)local_d8);
            }
            uVar6 = (byte)local_d8 + 1;
            uVar11 = (ulong)uVar6;
            local_d8 = (ushort)(byte)uVar6;
          } while ((uVar6 & 0xff) < 5);
        }
        local_d6 = '\x01';
LAB_011e28d0:
      } while (local_68 < 0xb);
    }
  }
  else if (local_d6 == '\0') {
    uVar11 = (ulong)(byte)local_d8;
    lVar7 = 0;
    if ((byte)local_d8 < 5) {
      lVar7 = *(long *)(local_e0 + 0x30) + uVar11 * 0x38 + 0x28;
    }
    uVar14 = *(undefined8 *)(lVar12 + 0x290);
    if (local_d8._1_1_ < *(byte *)(lVar7 + 0x30)) {
      plVar13 = *(long **)(lVar7 + (ulong)local_d8._1_1_ * 8);
    }
    else {
      plVar13 = (long *)0x0;
    }
    local_d8 = CONCAT11(local_d8._1_1_ + 1,(byte)local_d8);
    if ((byte)local_d8 < 5) {
      do {
        lVar7 = *(long *)(*(long *)(local_e0 + 0x290) + 8);
        bVar4 = FUN_010f9128(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),
                             (uint)uVar11 & 0xff);
        bVar10 = local_d8._1_1_;
        while (bVar10 < bVar4) {
          lVar7 = 0;
          if ((byte)local_d8 < 5) {
            lVar7 = *(long *)(local_e0 + 0x30) + (ulong)(byte)local_d8 * 0x38 + 0x28;
          }
          if ((bVar10 < *(byte *)(lVar7 + 0x30)) &&
             (plVar9 = *(long **)(lVar7 + (ulong)bVar10 * 8), plVar9 != (long *)0x0)) {
            uVar11 = (**(code **)(*plVar9 + 0x200))();
            if ((uVar11 & 1) == 0) goto LAB_011e28e8;
            bVar10 = local_d8._1_1_;
          }
          bVar10 = bVar10 + 1;
          local_d8 = CONCAT11(bVar10,(byte)local_d8);
        }
        uVar6 = (byte)local_d8 + 1;
        uVar11 = (ulong)uVar6;
        local_d8 = (ushort)(byte)uVar6;
      } while ((uVar6 & 0xff) < 5);
    }
    local_d6 = '\x01';
LAB_011e28e8:
    iVar15 = 0;
    do {
      uVar5 = (**(code **)(*plVar13 + 0x98))(plVar13);
      uVar6 = FUN_011e2da8(uVar14,uVar5);
      if ((uVar6 == *(byte *)(param_2 + 5)) || (uVar6 == *(byte *)(param_1 + 0x98))) {
        local_68 = iVar15 + 1;
        local_c0[iVar15] = (long)plVar13;
        iVar15 = local_68;
      }
      if (local_d6 != '\0') break;
      uVar11 = (ulong)(byte)local_d8;
      lVar7 = 0;
      if ((byte)local_d8 < 5) {
        lVar7 = *(long *)(local_e0 + 0x30) + uVar11 * 0x38 + 0x28;
      }
      if (local_d8._1_1_ < *(byte *)(lVar7 + 0x30)) {
        plVar13 = *(long **)(lVar7 + (ulong)local_d8._1_1_ * 8);
      }
      else {
        plVar13 = (long *)0x0;
      }
      local_d8 = CONCAT11(local_d8._1_1_ + 1,(byte)local_d8);
      if ((byte)local_d8 < 5) {
        do {
          lVar7 = *(long *)(*(long *)(local_e0 + 0x290) + 8);
          bVar4 = FUN_010f9128(*(undefined4 *)(lVar7 + 0x36c),*(undefined1 *)(lVar7 + 0x370),
                               (uint)uVar11 & 0xff);
          bVar10 = local_d8._1_1_;
          while (bVar10 < bVar4) {
            lVar7 = 0;
            if ((byte)local_d8 < 5) {
              lVar7 = *(long *)(local_e0 + 0x30) + (ulong)(byte)local_d8 * 0x38 + 0x28;
            }
            if ((bVar10 < *(byte *)(lVar7 + 0x30)) &&
               (plVar9 = *(long **)(lVar7 + (ulong)bVar10 * 8), plVar9 != (long *)0x0)) {
              uVar11 = (**(code **)(*plVar9 + 0x200))();
              if ((uVar11 & 1) == 0) goto LAB_011e2a34;
              bVar10 = local_d8._1_1_;
            }
            bVar10 = bVar10 + 1;
            local_d8 = CONCAT11(bVar10,(byte)local_d8);
          }
          uVar6 = (byte)local_d8 + 1;
          uVar11 = (ulong)uVar6;
          local_d8 = (ushort)(byte)uVar6;
        } while ((uVar6 & 0xff) < 5);
      }
      local_d6 = '\x01';
LAB_011e2a34:
    } while (iVar15 < 0xb);
  }
  uVar6 = *(ushort *)(*param_2 + 0x3fc) & 0xff;
  local_d0 = (long *)(CONCAT71(local_d0._1_7_,(char)(uVar6 >> 1)) & 0xffffffffffffff01);
  local_d0 = (long *)(CONCAT62(local_d0._2_6_,CONCAT11((char)(uVar6 >> 4),(undefined1)local_d0)) &
                     0xffffffffffff01ff);
  local_d0 = (long *)(CONCAT44(local_d0._4_4_,
                               CONCAT13((char)*(ushort *)(*param_2 + 0x3fc),(undefined3)local_d0)) &
                     0xffffffff01ffffff);
  local_d0 = (long *)(CONCAT35(local_d0._5_3_,CONCAT14((char)(uVar6 >> 2),(undefined4)local_d0)) &
                     0xffffff01ffffffff);
  local_d0 = (long *)(CONCAT53(local_d0._3_5_,CONCAT12((char)(uVar6 >> 3),(undefined2)local_d0)) &
                     0xffffffffff01ffff);
  memcpy((void *)(*(long *)(param_1 + 0x50) + 0xa0),&local_d0,0x70);
  lVar7 = *(long *)(param_1 + 0x68);
  plVar13 = *(long **)(param_1 + 0x50);
  local_f8 = plVar13;
  if (plVar13 == (long *)0x0) {
    FUN_011e2fb8(lVar7 + 0x30,&local_f8);
  }
  else {
    plVar9 = plVar13 + 5;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_011e2fb8(lVar7 + 0x30,&local_f8);
    if (plVar13 != (long *)0x0) {
      plVar9 = plVar13 + 5;
      do {
        lVar7 = *plVar9;
        iVar15 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar15;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else if ((int)lVar7 == 0) goto LAB_011e2d78;
    }
  }
  if ((*(byte *)(*param_2 + 0x3fc) >> 6 & 1) != 0) {
    *(long *)(*(long *)(param_1 + 0x60) + 0x60) = *param_2;
    lVar7 = *(long *)(param_1 + 0x68);
    FUN_011e3710(&local_100);
    FUN_011e2fb8(lVar7 + 0x30,&local_100);
    if (local_100 != (long *)0x0) {
      plVar13 = local_100 + 5;
      do {
        lVar7 = *plVar13;
        iVar15 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar15;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*local_100 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_011e2d78;
    }
  }
  if ((*(byte *)(*param_2 + 0x3fc) >> 5 & 1) != 0) {
    local_d0 = (long *)param_2[1];
    local_c8 = param_2[2];
    local_c0[0] = param_2[3];
    local_c0[1] = param_2[4];
    lVar7 = *(long *)(param_1 + 0x58);
    *(long *)(lVar7 + 0x68) = *param_2;
    *(long *)(lVar7 + 0x80) = local_c0[0];
    *(long *)(lVar7 + 0x88) = local_c0[1];
    *(long **)(lVar7 + 0x70) = local_d0;
    *(long *)(lVar7 + 0x78) = local_c8;
    lVar7 = *(long *)(param_1 + 0x68);
    FUN_011e3770(&local_108);
    FUN_011e2fb8(lVar7 + 0x30,&local_108);
    if (local_108 != (long *)0x0) {
      plVar13 = local_108 + 5;
      do {
        lVar7 = *plVar13;
        iVar15 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar15;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*local_108 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_011e2d78;
    }
  }
  lVar7 = *(long *)(param_1 + 0x68);
  plVar13 = *(long **)(lVar7 + 0x30);
  plVar9 = *(long **)(lVar7 + 0x38);
  if (plVar13 != plVar9) {
    *(undefined8 *)(*plVar13 + 0x2c) = 0;
    (**(code **)(*(long *)*plVar13 + 0x28))();
    if (plVar13 + 1 != plVar9) {
      *(undefined8 *)(plVar13[1] + 0x2c) = 0;
      (**(code **)(*(long *)plVar13[1] + 0x28))();
      for (plVar13 = plVar13 + 2; plVar13 != plVar9; plVar13 = plVar13 + 1) {
        *(undefined8 *)(*plVar13 + 0x2c) = 0;
        (**(code **)(*(long *)*plVar13 + 0x28))();
      }
    }
    lVar7 = *(long *)(param_1 + 0x68);
  }
  FUN_011e3418(&local_d0,lVar7,*(undefined8 *)(param_1 + 0x30));
  plVar13 = local_d0;
  if (local_d0 == (long *)0x0) {
    FUN_011e2fb0(param_1 + 0xe0);
  }
  else {
    plVar9 = local_d0 + 5;
    (**(code **)(*local_d0 + 0x30))(local_d0,param_1 + 0xe0);
    do {
      lVar7 = *plVar9;
      iVar15 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar15;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar7 == 0) goto LAB_011e2d78;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x78));
  return;
}


