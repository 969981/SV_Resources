/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01609880; name: FUN_01609880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01609880(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  undefined8 local_18;
  
  local_18 = param_2;
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar8 = FUN_01233940(&local_58);
    if (lVar8 != 0) {
      lVar13 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01609cd4;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar10;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01609b98;
    }
    plVar9 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar9 != (long *)0x0) {
      lVar13 = plVar9[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01609cac;
    }
    *(long *)(param_1 + 0x48) = lVar8;
    if (lVar8 == 0) {
      uVar10 = 0xffffffffffffffff;
    }
    else {
      uVar10 = FUN_00cf8198(lVar8);
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
    iVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar10,"SourceGlobal");
    if (iVar7 == 1) goto LAB_0160991c;
LAB_01609bc0:
    uVar10 = 0;
  }
  else {
LAB_0160991c:
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar8 = FUN_01233940(&local_58,local_18);
      if (lVar8 != 0) {
        lVar13 = *(long *)(lVar8 + 0x30);
        if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01609cd4;
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar10;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_01609b98;
      }
      plVar9 = *(long **)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (plVar9 != (long *)0x0) {
        lVar13 = plVar9[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01609cac;
      }
      uVar10 = *(undefined8 *)(param_1 + 0x200);
      *(long *)(param_1 + 0x40) = lVar8;
      if (lVar8 == 0) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar11 = FUN_00cf8198(lVar8);
      }
      local_58 = 0xffa497865e79aca2;
      pcStack_50 = "DefaultListener";
      local_48 = 0xf;
      local_40 = (long *)0x0;
      uVar12 = FUN_01609cf4(uVar10,uVar11,&local_58);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      if ((uVar12 & 1) == 0) goto LAB_01609bc0;
      nn::os::LockMutex((MutexType *)(param_1 + 0x150));
      uVar6 = _UNK_03cabe68;
      uVar5 = _DAT_03cabe60;
      uVar11 = _UNK_03caa5b8;
      uVar10 = _DAT_03caa5b0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x138) = uVar11;
      *(undefined8 *)(param_1 + 0x130) = uVar10;
      *(undefined8 *)(param_1 + 0x148) = uVar6;
      *(undefined8 *)(param_1 + 0x140) = uVar5;
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar10 = 0xffffffffffffffff;
      }
      else {
        uVar10 = FUN_00cf8198();
      }
      local_38 = 0x80000000;
      local_58 = 0;
      pcStack_50 = (char *)0xbf800000;
      local_48 = 0x800000003f800000;
      local_40 = (long *)0x0;
      plVar9 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
      (**(code **)(*plVar9 + 0x70))(plVar9,uVar10,&local_58);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x150));
    }
    if (*(long *)(param_1 + 0x50) == 0) {
      lVar8 = FUN_01233940(&local_58,local_18);
      if (lVar8 != 0) {
        lVar13 = *(long *)(lVar8 + 0x30);
        if (*(long *)(lVar13 + 0x10) == 0) {
LAB_01609cd4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar10;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_01609b98:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      plVar9 = *(long **)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (plVar9 != (long *)0x0) {
        lVar13 = plVar9[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01609cac;
      }
      *(long *)(param_1 + 0x50) = lVar8;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      local_60 = 0;
      local_68 = 0;
      FUN_01609d74(&local_58,local_18,&local_18,(long)&local_60 + 4,&local_60,(long)&local_68 + 4,
                   &local_68);
      plVar9 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar9 != (long *)0x0) {
        lVar8 = plVar9[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_01609cac:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *(undefined8 *)(param_1 + 0x58) = local_58;
    }
    uVar10 = 1;
  }
  return uVar10;
}


