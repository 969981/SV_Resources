/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016bf3f8; name: FUN_016bf3f8
 */


void FUN_016bf3f8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *local_68;
  long *local_60;
  undefined1 local_58 [16];
  ulong local_48;
  long *local_28;
  
  plVar14 = (long *)(param_1 + 0x30);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_016bf434;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_016bf434;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_016bf434:
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) goto LAB_016bf43c;
  lVar8 = *(long *)(param_1 + 0x50);
  lVar13 = *param_2;
  if (*(int *)(lVar8 + 0x1e4) != -0xf423a) {
    *(undefined4 *)(lVar8 + 0x1e4) = 0xfff0bdc6;
    *(undefined1 *)(*(long *)(*(long *)(lVar8 + 0x30) + 0x50) + 200) = 1;
    lVar8 = *(long *)(param_1 + 0x50);
  }
  *(undefined1 *)(lVar8 + 0x288) = 1;
  (*DAT_04859f60)(&local_60,&DAT_04859f80);
  local_28 = local_60;
  local_68 = (long *)FUN_00cf3764(local_58,local_60[1],&local_28);
  auVar6._8_8_ = local_58._8_8_;
  auVar6._0_8_ = local_58._0_8_;
  if (local_68 != (long *)0x0) {
    plVar14 = local_68 + 5;
    do {
      lVar8 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 != -1) {
      plVar14 = local_68;
      goto LAB_016bf548;
    }
LAB_016bf950:
    pcVar9 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
    ;
LAB_016bf970:
    local_58 = auVar6;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",pcVar9,0x53,"Reference counter overflows.")
    ;
  }
  plVar14 = (long *)0x0;
LAB_016bf548:
  lVar8 = *(long *)(plVar14[0xe] + 0x30);
  local_58._0_8_ = *(undefined8 *)(lVar8 + 8);
  local_58._8_8_ = *(undefined8 *)(lVar8 + 0x6098);
  local_48 = lVar8 + 0x10;
  local_58 = FUN_0117e498(*(undefined8 *)(lVar8 + 0x6140),local_58,lVar13 + 0x68,1,0);
  local_48 = local_48 & 0xffffffffffffff00;
  FUN_00d56380(plVar14 + 6,local_58);
  uVar7 = FUN_00d56320(plVar14 + 6);
  *(undefined4 *)(plVar14 + 0xf) = uVar7;
  plVar14 = *(long **)(*(long *)(param_1 + 0x50) + 0x58);
  if (plVar14 == (long *)0x0) {
    local_58._0_8_ = (ulong)(uint7)local_58._1_7_ << 8;
    FUN_00d8219c(0,0,&local_68,0xffffffff,local_58);
  }
  else {
    plVar1 = plVar14 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    auVar6 = local_58;
    if ((int)lVar8 == -1) goto LAB_016bf950;
    local_58._0_8_ = (ulong)(uint7)local_58._1_7_ << 8;
    FUN_00d8219c(plVar14,0,&local_68,0xffffffff,local_58);
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar8 == 0) goto LAB_016bf928;
  }
  auVar6._8_8_ = local_58._8_8_;
  auVar6._0_8_ = local_58._0_8_;
  lVar8 = *(long *)(*(long *)(DAT_0485a0d8 + 0x38) + 0x40);
  uVar10 = *(ulong *)(lVar8 + 0x110);
  if (uVar10 == 0) {
LAB_016bf6c4:
    local_28 = (long *)0x0;
  }
  else {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x5e1771f463b934e6;
    }
    else if (uVar10 < 0x5e1771f463b934e7) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x5e1771f463b934e6 / uVar10;
      }
      uVar12 = 0x5e1771f463b934e6 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x5e1771f463b934e6;
    }
    plVar14 = *(long **)(*(long *)(lVar8 + 0x108) + uVar12 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_016bf6c4;
    if (uVar11 < 2) {
      do {
        if (plVar14[1] == 0x5e1771f463b934e6) {
          if (plVar14[2] == 0x5e1771f463b934e6) goto LAB_016bf710;
        }
        else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto LAB_016bf6c4;
    }
    while( true ) {
      uVar11 = plVar14[1];
      if (uVar11 != 0x5e1771f463b934e6) {
        if (uVar10 <= uVar11) {
          uVar5 = 0;
          if (uVar10 != 0) {
            uVar5 = uVar11 / uVar10;
          }
          uVar11 = uVar11 - uVar5 * uVar10;
        }
        if (uVar11 == uVar12) goto LAB_016bf6bc;
        goto LAB_016bf6c4;
      }
      if (plVar14[2] == 0x5e1771f463b934e6) break;
LAB_016bf6bc:
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_016bf6c4;
    }
LAB_016bf710:
    local_28 = (long *)plVar14[6];
    if (local_28 != (long *)0x0) {
      plVar14 = local_28 + 5;
      do {
        lVar8 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = (int)lVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar8 == -1) {
        pcVar9 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_016bf970;
      }
    }
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x50) + 0x58);
  if (plVar14 == (long *)0x0) {
    local_58._0_8_ = (ulong)(uint7)local_58._1_7_ << 8;
    FUN_00d829fc(0,&local_28,local_58);
  }
  else {
    plVar1 = plVar14 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) goto LAB_016bf950;
    local_58._0_8_ = (ulong)(uint7)local_58._1_7_ << 8;
    FUN_00d829fc(plVar14,&local_28,local_58);
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar8 == 0) goto LAB_016bf928;
  }
  auVar6._8_8_ = local_58._8_8_;
  auVar6._0_8_ = local_58._0_8_;
  plVar14 = *(long **)(*(long *)(param_1 + 0x50) + 0x58);
  if (plVar14 == (long *)0x0) {
    FUN_00d81b84(0,0,0,0,0,0);
  }
  else {
    plVar1 = plVar14 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) goto LAB_016bf950;
    FUN_00d81b84(0,0,0,0,plVar14,0);
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar8 == 0) goto LAB_016bf928;
  }
  if (local_28 != (long *)0x0) {
    plVar14 = local_28 + 5;
    do {
      lVar8 = *plVar14;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_016bf928;
  }
  if (local_68 != (long *)0x0) {
    plVar14 = local_68 + 5;
    do {
      lVar8 = *plVar14;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_016bf928;
  }
  if (local_60 != (long *)0x0) {
    plVar14 = local_60 + 5;
    do {
      lVar8 = *plVar14;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_016bf928:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar8 = *(long *)(param_1 + 0x48);
LAB_016bf43c:
  *(long *)(param_1 + 0x48) = lVar8 + 1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return;
}


