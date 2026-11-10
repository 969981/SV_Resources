/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0142a358; name: FUN_0142a358
 */


void FUN_0142a358(float param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
                 int param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  short sVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  uVar10 = *(ulong *)(param_4 + 0x160);
  if (uVar10 == 0) {
    bVar5 = false;
    uVar9 = 0;
    goto LAB_0142a540;
  }
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar16 = uVar10 - 1 & 0xed4839939eb65cf3;
  }
  else if (uVar10 < 0xed4839939eb65cf4) {
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar16 = 0xed4839939eb65cf3 / uVar10;
    }
    uVar16 = 0xed4839939eb65cf3 - uVar16 * uVar10;
  }
  else {
    uVar16 = 0xed4839939eb65cf3;
  }
  plVar13 = *(long **)(*(long *)(param_4 + 0x158) + uVar16 * 8);
  bVar5 = false;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) {
LAB_0142a5d8:
      bVar5 = false;
    }
    else if (uVar12 < 2) {
      do {
        if (plVar13[1] == 0xed4839939eb65cf3) {
          if (plVar13[2] == -0x12b7c66c6149a30d) goto LAB_0142a470;
        }
        else if ((plVar13[1] & uVar10 - 1) != uVar16) goto LAB_0142a5d8;
        plVar13 = (long *)*plVar13;
        bVar5 = false;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar14 = plVar13[1];
        if (uVar14 == 0xed4839939eb65cf3) {
          if (plVar13[2] == -0x12b7c66c6149a30d) goto LAB_0142a470;
        }
        else {
          if (uVar10 <= uVar14) {
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar14 / uVar10;
            }
            uVar14 = uVar14 - uVar4 * uVar10;
          }
          if (uVar14 != uVar16) goto LAB_0142a5d8;
        }
        plVar13 = (long *)*plVar13;
        bVar5 = false;
      } while (plVar13 != (long *)0x0);
    }
  }
  goto LAB_0142a47c;
LAB_0142a53c:
  uVar9 = *(uint *)(plVar13 + 6);
  goto LAB_0142a540;
LAB_0142a618:
  if (*plVar13 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0142a628;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0142a628:
    bVar5 = false;
LAB_0142a62c:
    lVar6 = FUN_0210f99c(lVar11 + 0x100);
    if (lVar6 == 0) {
      lVar6 = FUN_0210f99c(lVar11 + 0x138);
    }
    if (!bVar5) {
      *(undefined8 *)(lVar11 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
    }
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)FUN_01a6a8cc(lVar6);
      plVar13 = (long *)*puVar7;
      if (plVar13 != (long *)0x0) {
        lVar6 = plVar13[6];
        if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar15 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
          *(undefined8 *)(lVar6 + 8) = uVar8;
          *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
        }
        else if (sVar15 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      if (param_6 == 10) {
        local_68 = 0xa54af86f3a0b011d;
        pcStack_60 = "loop_attack_bool";
        local_58 = 0x10;
        local_50 = (long *)0x0;
        local_48 = FUN_01ea60f0(plVar13,plVar13 + 0x1e,&local_68);
        FUN_01ea6510(plVar13,&local_48,1);
      }
      else {
        local_68 = 0x45f25028e429d0da;
        pcStack_60 = "one_attack_int";
        local_58 = 0xe;
        local_50 = (long *)0x0;
        local_48 = FUN_01ea60f0(plVar13,plVar13 + 0x10,&local_68);
        FUN_01a6a8d4(plVar13,&local_48,param_6);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        local_68 = 0xe92d3c2df35e21af;
        pcStack_60 = "one_attack_trigger";
        local_58 = 0x12;
        local_50 = (long *)0x0;
        local_48 = FUN_01ea60f0(plVar13,plVar13 + 0x25,&local_68);
        FUN_01ea6208(plVar13,&local_48,1);
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      local_68 = 0xed4839939eb65cf3;
      puVar7 = (undefined8 *)FUN_01235878(param_4 + 0x158,&local_68);
      *(undefined1 *)(puVar7 + 2) = 1;
      *puVar7 = PTR_LAB_047dcd90;
      if (plVar13 != (long *)0x0) {
        lVar6 = plVar13[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
    return;
  }
  cVar3 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar5) {
    *plVar13 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0142a628;
  goto LAB_0142a618;
LAB_0142a470:
  bVar5 = (char)plVar13[6] != '\0';
LAB_0142a47c:
  if (uVar12 < 2) {
    uVar16 = uVar10 - 1 & 0xfa10a8cc472de71c;
  }
  else if (uVar10 < 0xfa10a8cc472de71d) {
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar16 = 0xfa10a8cc472de71c / uVar10;
    }
    uVar16 = 0xfa10a8cc472de71c - uVar16 * uVar10;
  }
  else {
    uVar16 = 0xfa10a8cc472de71c;
  }
  plVar13 = *(long **)(*(long *)(param_4 + 0x158) + uVar16 * 8);
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    if (uVar12 < 2) {
      do {
        if (plVar13[1] == 0xfa10a8cc472de71c) {
          if (plVar13[2] == -0x5ef5733b8d218e4) goto LAB_0142a53c;
        }
        else if ((plVar13[1] & uVar10 - 1) != uVar16) break;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar12 = plVar13[1];
        if (uVar12 == 0xfa10a8cc472de71c) {
          if (plVar13[2] == -0x5ef5733b8d218e4) goto LAB_0142a53c;
        }
        else {
          if (uVar10 <= uVar12) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar12 / uVar10;
            }
            uVar12 = uVar12 - uVar14 * uVar10;
          }
          if (uVar12 != uVar16) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  uVar9 = 0;
LAB_0142a540:
  if ((((float)uVar9 < param_1 && !bVar5) && (lVar11 = *param_5, lVar11 != 0)) &&
     (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar15 = *(short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar15) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0142a5ac;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0142a5ac:
        bVar5 = false;
      }
      if (bVar5) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        plVar13 = (long *)(lVar11 + 0xe8);
        lVar17 = *plVar13;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar17) {
          lVar6 = nn::os::GetCurrentThread();
          goto LAB_0142a618;
        }
        bVar5 = true;
        goto LAB_0142a62c;
      }
      sVar15 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


