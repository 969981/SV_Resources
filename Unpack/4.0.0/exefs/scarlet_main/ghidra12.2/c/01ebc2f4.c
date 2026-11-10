/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebc2f4; name: FUN_01ebc2f4
 */


uint FUN_01ebc2f4(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  bool bVar10;
  uint local_3c;
  long *local_38;
  
  lVar7 = *param_1;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
LAB_01ebc310:
    local_3c = 0;
  }
  else {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01ebc360;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ebc360:
        bVar10 = false;
      }
      if (bVar10) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) goto LAB_01ebc310;
        plVar6 = (long *)(lVar7 + 0xe8);
        lVar9 = *plVar6;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 != lVar9) {
          lVar5 = nn::os::GetCurrentThread();
          goto LAB_01ebc39c;
        }
        bVar10 = true;
        goto LAB_01ebc3b0;
      }
      local_3c = 0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
LAB_01ebc314:
  return local_3c & 1;
LAB_01ebc39c:
  if (*plVar6 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar10) {
              *plVar6 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01ebc3ac;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01ebc3ac:
    bVar10 = false;
LAB_01ebc3b0:
    plVar6 = (long *)FUN_018348f0(*(undefined8 *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0x108));
    if ((*(long **)(lVar7 + 0x108) == plVar6) || (*plVar6 == 0)) {
      plVar6 = (long *)FUN_018348f0(*(undefined8 *)(lVar7 + 0x138),*(undefined8 *)(lVar7 + 0x140));
      if (*(long **)(lVar7 + 0x140) == plVar6) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*plVar6 != 0) {
          lVar5 = *plVar6 + -0x20;
        }
      }
    }
    else {
      lVar5 = *plVar6 + -0x20;
    }
    if (!bVar10) {
      *(undefined8 *)(lVar7 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xf0));
    }
    if ((lVar5 == 0) || (FUN_00dbfec0(&local_38,lVar5), local_38 == (long *)0x0)) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_00dbf7ec();
      if (local_38 != (long *)0x0) {
        plVar6 = local_38 + 5;
        do {
          lVar5 = *plVar6;
          iVar4 = (int)lVar5 + -1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar10) {
            *(int *)plVar6 = iVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    lVar5 = *(long *)(lVar7 + 8);
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    goto LAB_01ebc314;
  }
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar10) {
    *plVar6 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01ebc3ac;
  goto LAB_01ebc39c;
}


