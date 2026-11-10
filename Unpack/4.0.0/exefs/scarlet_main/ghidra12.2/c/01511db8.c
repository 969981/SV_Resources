/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01511db8; name: FUN_01511db8
 */


undefined8 FUN_01511db8(long param_1,int param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 local_58;
  int local_34;
  
  if (param_2 != 1) {
    return 1;
  }
  lVar19 = *(long *)(param_1 + 0x4a8);
  puVar1 = (undefined8 *)(param_1 + 0x444);
  iVar4 = *(int *)(lVar19 + 8);
  uVar14 = FUN_015122a0(lVar19,puVar1,&local_58);
  lVar18 = 0xc;
  iVar13 = (int)((ulong)uVar14 >> 0x20);
  iVar12 = (int)uVar14;
  if (*(int *)(lVar19 + 0x1c) != 0) {
    lVar18 = 0x10;
    iVar12 = iVar13;
    iVar13 = (int)uVar14;
  }
  iVar5 = *(int *)(lVar19 + lVar18);
  if (*(long *)(param_1 + 0x108) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_02152218(&local_58);
    plVar15 = local_58;
    if (local_58 != (long *)0x0) {
      lVar18 = local_58[6];
      if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar3 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar14;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar19 = *(long *)(param_1 + 0x4a8);
      uVar14 = FUN_015122a0(lVar19,puVar1,&local_34);
      bVar10 = *(int *)(lVar19 + 0x1c) != 0;
      lVar18 = 0xc;
      if (bVar10) {
        lVar18 = 0x10;
      }
      iVar17 = (int)((ulong)uVar14 >> 0x20);
      iVar6 = (int)uVar14;
      if (bVar10) {
        iVar6 = iVar17;
        iVar17 = (int)uVar14;
      }
      bVar11 = FUN_02152368(lVar19,iVar6 + *(int *)(lVar19 + lVar18) * iVar17);
      *(byte *)((long)plVar15 + 0x271) = bVar11 & 1;
      lVar18 = plVar15[6];
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0151215c;
      if (local_58 != (long *)0x0) {
        lVar18 = local_58[6];
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar10) {
            *psVar2 = sVar3 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*local_58 + 0x50))();
        }
        else if (sVar3 == 0) {
LAB_0151215c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  FUN_015122a0(*(undefined8 *)(param_1 + 0x4a8),puVar1,&local_58);
  if ((int)local_58 == 1) {
    *(undefined1 *)(param_1 + 0x5b1) = 1;
    *(undefined8 *)(param_1 + 0x5bc) = *puVar1;
    if (*(code **)(param_1 + 0x3c0) != (code *)0x0) {
      lVar18 = *(long *)(param_1 + 0x4a8);
      if (*(int *)(lVar18 + 0x1c) == 0) {
        iVar17 = *(int *)(lVar18 + 0xc);
        iVar6 = 0;
        if (iVar17 != 0) {
          iVar6 = iVar4 / iVar17;
        }
        iVar17 = iVar4 - iVar6 * iVar17;
      }
      else {
        iVar6 = *(int *)(lVar18 + 0x10);
        iVar17 = 0;
        if (iVar6 != 0) {
          iVar17 = iVar4 / iVar6;
        }
        iVar6 = iVar4 - iVar17 * iVar6;
      }
      local_58 = (long *)CONCAT44(iVar6,iVar17);
      uVar16 = (**(code **)(param_1 + 0x3c0))(param_1 + 0x3e0,&local_58,puVar1);
      if ((uVar16 & 1) == 0) {
        return 1;
      }
    }
  }
  FUN_015122a0(*(undefined8 *)(param_1 + 0x4a8),puVar1,&local_58);
  if ((int)local_58 == 2) {
    *(undefined1 *)(param_1 + 0x5b1) = 1;
    *(undefined8 *)(param_1 + 0x5bc) = *puVar1;
    if (*(code **)(param_1 + 0x3c0) != (code *)0x0) {
      lVar18 = *(long *)(param_1 + 0x4a8);
      if (*(int *)(lVar18 + 0x1c) == 0) {
        iVar17 = *(int *)(lVar18 + 0xc);
        iVar6 = 0;
        if (iVar17 != 0) {
          iVar6 = iVar4 / iVar17;
        }
        iVar17 = iVar4 - iVar6 * iVar17;
      }
      else {
        iVar6 = *(int *)(lVar18 + 0x10);
        iVar17 = 0;
        if (iVar6 != 0) {
          iVar17 = iVar4 / iVar6;
        }
        iVar6 = iVar4 - iVar17 * iVar6;
      }
      local_58 = (long *)CONCAT44(iVar6,iVar17);
      uVar16 = (**(code **)(param_1 + 0x3c0))(param_1 + 0x3e0,&local_58,puVar1);
      if ((uVar16 & 1) == 0) {
        return 1;
      }
    }
  }
  puVar9 = PTR_DAT_047dd148;
  puVar8 = PTR_DAT_047dd140;
  lVar18 = *(long *)(param_1 + 0x4a8);
  iVar12 = iVar12 + iVar5 * iVar13;
  if (iVar12 == *(int *)(lVar18 + 8)) {
    if (*(code **)(param_1 + 0x340) != (code *)0x0) {
      if (*(int *)(lVar18 + 0x1c) == 0) {
        iVar13 = *(int *)(lVar18 + 0xc);
        iVar12 = 0;
        if (iVar13 != 0) {
          iVar12 = iVar4 / iVar13;
        }
        iVar13 = iVar4 - iVar12 * iVar13;
      }
      else {
        iVar12 = *(int *)(lVar18 + 0x10);
        iVar13 = 0;
        if (iVar12 != 0) {
          iVar13 = iVar4 / iVar12;
        }
        iVar12 = iVar4 - iVar13 * iVar12;
      }
      local_58 = (long *)CONCAT44(iVar12,iVar13);
      (**(code **)(param_1 + 0x340))(param_1 + 0x360,&local_58,puVar1);
    }
    if ((*(char *)(param_1 + 0x82) == '\0') || (*(char *)(param_1 + 0x5b1) == '\0'))
    goto LAB_01511eec;
    local_58 = (long *)CONCAT44(-*(int *)(param_1 + 0x448),-*(int *)(param_1 + 0x444));
    FUN_015122a0(*(undefined8 *)(param_1 + 0x4a8),&local_58,&local_34);
    if (local_34 == 2) goto LAB_01511eec;
    lVar18 = param_1 + 0x528;
  }
  else {
    *(int *)(lVar18 + 8) = iVar12;
    if (**(long **)(param_1 + 0x4c8) != 0) {
      plVar15 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x4c8) + 0x28))();
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd140), iVar13 != 0)) {
        uVar14 = FUN_02152568();
        *(undefined8 *)puVar9 = uVar14;
        __cxa_guard_release(PTR_DAT_047dd140);
      }
      for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        if (plVar15 == (long *)puVar9) {
          uVar14 = 1;
          goto LAB_01511ec8;
        }
      }
    }
    uVar14 = 0;
LAB_01511ec8:
    FUN_014e99dc(param_1,iVar12,iVar4,uVar14,1);
    if (*(char *)(param_1 + 0x5b1) != '\0') {
      FUN_01282188(param_1 + 0x508);
    }
    lVar18 = param_1 + 0x4e8;
  }
  FUN_01282188(lVar18);
LAB_01511eec:
  if (**(long **)(param_1 + 0x4c8) != 0) {
    plVar15 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x4c8) + 0x28))();
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047dd140), iVar12 != 0)) {
      uVar14 = FUN_02152568();
      *(undefined8 *)puVar9 = uVar14;
      __cxa_guard_release(PTR_DAT_047dd140);
    }
    for (; (plVar15 != (long *)0x0 && (plVar15 != (long *)puVar9)); plVar15 = (long *)*plVar15) {
    }
  }
  return 1;
}


