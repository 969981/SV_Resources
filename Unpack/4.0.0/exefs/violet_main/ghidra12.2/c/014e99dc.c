/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e99dc; name: FUN_014e99dc
 */


void FUN_014e99dc(long param_1,int param_2,int param_3,undefined1 param_4,ulong param_5)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  bool bVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  int iVar13;
  long ****pppplVar14;
  long ***ppplVar15;
  long ****local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  long *****local_70;
  long ****pppplStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *****local_48;
  
  lVar10 = *(long *)(param_1 + 0x4a8);
  if (*(int *)(lVar10 + 0x1c) == 0) {
    iVar3 = *(int *)(lVar10 + 0xc);
    iStack_74 = 0;
    if (iVar3 != 0) {
      iStack_74 = param_3 / iVar3;
    }
    local_78 = param_3 - iStack_74 * iVar3;
  }
  else {
    iVar3 = *(int *)(lVar10 + 0x10);
    local_78 = 0;
    if (iVar3 != 0) {
      local_78 = param_3 / iVar3;
    }
    iStack_74 = param_3 - local_78 * iVar3;
  }
  if (*(int *)(lVar10 + 0x1c) == 0) {
    iVar13 = *(int *)(lVar10 + 0xc);
    iVar3 = 0;
    if (iVar13 != 0) {
      iVar3 = param_2 / iVar13;
    }
    iVar13 = param_2 - iVar3 * iVar13;
  }
  else {
    iVar3 = *(int *)(lVar10 + 0x10);
    iVar13 = 0;
    if (iVar3 != 0) {
      iVar13 = param_2 / iVar3;
    }
    iVar3 = param_2 - iVar13 * iVar3;
  }
  local_80 = CONCAT44(iVar3,iVar13);
  *(undefined1 *)(param_1 + 0x5b0) = 1;
  if (((param_5 & 1) != 0) && (*(code **)(param_1 + 0x140) != (code *)0x0)) {
    local_70 = (long *****)(CONCAT71(local_70._1_7_,param_4) & 0xffffffffffffff01);
    local_80 = (**(code **)(param_1 + 0x140))(param_1 + 0x160,&local_80,&local_78,&local_70);
    lVar12 = *(long *)(param_1 + 0x4a8);
    bVar9 = *(int *)(lVar12 + 0x1c) != 0;
    lVar10 = 0xc;
    if (bVar9) {
      lVar10 = 0x10;
    }
    iVar13 = (int)((ulong)local_80 >> 0x20);
    iVar3 = (int)local_80;
    if (bVar9) {
      iVar3 = iVar13;
      iVar13 = (int)local_80;
    }
    *(int *)(lVar12 + 8) = iVar3 + *(int *)(lVar12 + lVar10) * iVar13;
    lVar10 = *(long *)(param_1 + 0x4a8);
  }
  if (*(int *)(lVar10 + 0x1c) == 0) {
    iVar3 = local_78 + *(int *)(lVar10 + 0xc) * iStack_74;
  }
  else {
    iVar3 = iStack_74 + *(int *)(lVar10 + 0x10) * local_78;
  }
  FUN_0111e884(&local_a0,lVar10,iVar3);
  plVar5 = plStack_88;
  uStack_58 = local_90;
  local_60 = uStack_98;
  pppplStack_68 = local_a0;
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88);
  }
  local_70 = (long *****)&local_48;
  local_48 = (long *****)0x0;
  local_50 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_0116c820(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  ppppplVar6 = local_48;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  lVar10 = *(long *)(param_1 + 0x4a8);
  if (*(int *)(lVar10 + 0x1c) == 0) {
    iVar3 = (int)local_80 + *(int *)(lVar10 + 0xc) * local_80._4_4_;
  }
  else {
    iVar3 = local_80._4_4_ + *(int *)(lVar10 + 0x10) * (int)local_80;
  }
  FUN_0111e884(&local_a0,lVar10,iVar3);
  pppplVar14 = local_a0;
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88);
  }
  local_70 = (long *****)&local_48;
  local_48 = (long *****)0x0;
  local_50 = plStack_88;
  pppplStack_68 = pppplVar14;
  local_60 = uStack_98;
  uStack_58 = local_90;
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88);
  }
  FUN_0116c820(param_1,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  ppppplVar7 = local_48;
  if (plStack_88 != (long *)0x0) {
    (**(code **)(*plStack_88 + 0x20))(plStack_88);
    (**(code **)(*plStack_88 + 0x20))(plStack_88);
  }
  if (ppppplVar6 != (long *****)0x0) {
    (*(code *)(*ppppplVar6)[0x26])(ppppplVar6);
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    local_48 = (long *****)0x0;
  }
  else {
    FUN_02152218(&local_48);
    ppppplVar8 = local_48;
    if (local_48 == (long *****)0x0) goto LAB_014e9b6c;
    ppplVar15 = (long ***)local_48[6];
    if (ppplVar15[2] == (long **)0x0) {
LAB_014e9efc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)((long)ppplVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      pplVar11 = (long **)(*(code *)**ppplVar15[2])();
      ppplVar15[1] = pplVar11;
      *(undefined4 *)((long)ppplVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_014e9f1c;
    local_70 = ppppplVar6;
    if (ppppplVar6 != (long *****)0x0) {
      pppplVar14 = ppppplVar6[6];
      if (pppplVar14[2] == (long ***)0x0) goto LAB_014e9efc;
      psVar1 = (short *)((long)pppplVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        ppplVar15 = (long ***)(*(code *)**pppplVar14[2])();
        pppplVar14[1] = ppplVar15;
        *(undefined4 *)((long)pppplVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_014e9f1c;
    }
    local_a0 = (long ****)ppppplVar7;
    if (ppppplVar7 != (long *****)0x0) {
      ppplVar15 = (long ***)ppppplVar7[6];
      if (ppplVar15[2] == (long **)0x0) goto LAB_014e9efc;
      psVar1 = (short *)((long)ppplVar15 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        pplVar11 = (long **)(*(code *)**ppplVar15[2])();
        ppplVar15[1] = pplVar11;
        *(undefined4 *)((long)ppplVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_014e9f1c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    (*(code *)(*ppppplVar8)[0x2a])(ppppplVar8,&local_70,&local_a0);
    if (local_a0 != (long ****)0x0) {
      ppplVar15 = local_a0[6];
      psVar1 = (short *)((long)ppplVar15 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        ppplVar15[2] = (long **)0x0;
        (*(code *)(*local_a0)[10])();
      }
      else if (sVar2 == 0) goto LAB_014e9dd4;
    }
    if (local_70 != (long *****)0x0) {
      pppplVar14 = local_70[6];
      psVar1 = (short *)((long)pppplVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        pppplVar14[2] = (long ***)0x0;
        (*(code *)(*local_70)[10])();
      }
      else if (sVar2 == 0) goto LAB_014e9dd4;
    }
    ppplVar15 = (long ***)ppppplVar8[6];
    psVar1 = (short *)((long)ppplVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      ppplVar15[2] = (long **)0x0;
      (*(code *)(*ppppplVar8)[10])(ppppplVar8);
    }
    else if (sVar2 == 0) goto LAB_014e9dd4;
    if (local_48 != (long *****)0x0) {
      ppplVar15 = (long ***)local_48[6];
      psVar1 = (short *)((long)ppplVar15 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        ppplVar15[2] = (long **)0x0;
        (*(code *)(*local_48)[10])();
      }
      else if (sVar2 == 0) {
LAB_014e9dd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
LAB_014e9b6c:
  if (ppppplVar7 != (long *****)0x0) {
    (*(code *)(*ppppplVar7)[0x25])(ppppplVar7);
  }
  return;
}


