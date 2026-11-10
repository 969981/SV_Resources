/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159a808; name: FUN_0159a808
 */


void FUN_0159a808(int param_1,int param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long *plVar15;
  long *local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((*(long **)(param_3 + 8) == (long *)0x0) ||
     (lVar8 = (**(code **)(**(long **)(param_3 + 8) + 0x70))(), lVar8 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d9210 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  lVar8 = *(long *)PTR_DAT_047d9218;
  *(long *)PTR_DAT_047d9220 = lVar8;
  lVar8 = *(long *)(lVar8 + 0x28);
  if (lVar8 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(lVar8 + 0x718));
  lVar9 = (**(code **)(**(long **)(param_3 + 8) + 0x70))();
  FUN_0159ad64(lVar8 + 0x6a8,CONCAT44(param_2,param_1),lVar9);
  plVar15 = *(long **)(lVar8 + (long)param_1 * 0x50 + (long)param_2 * 8 + 0x30);
  if ((plVar15 != (long *)0x0) && (plVar15[0xc] == lVar9)) {
    lVar1 = lVar8 + 0x6e0;
    lVar9 = FUN_0159abc0(*(undefined8 *)(lVar8 + 0x6e8),lVar1,CONCAT44(param_2,param_1),lVar9);
    if (lVar1 != lVar9) goto LAB_0159aa44;
    plVar2 = plVar15 + 5;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_98 = plVar15;
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_90 = PTR_DAT_047d9c80 + 0x10;
    local_80 = 0;
    local_78 = (long *)0x0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    uStack_88 = 0;
    FUN_00fba0b8(&uStack_88,param_3 + 8);
    plVar15 = *(long **)(param_3 + 0x18);
    if (plVar15 != (long *)0x0) {
      lVar9 = plVar15[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar3 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar10;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
        pcVar11 = "count != 0";
        pcVar12 = "AddReference";
        pcVar13 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
        ;
        pcVar14 = "Reference counter overflows.";
        goto LAB_0159ab98;
      }
    }
    if (local_78 != (long *)0x0) {
      lVar9 = local_78[6];
      psVar3 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        lVar9 = *local_78;
        local_78 = plVar15;
        (**(code **)(lVar9 + 0x50))();
        plVar15 = local_78;
      }
      else if (sVar4 == 0) {
        local_78 = plVar15;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    local_78 = plVar15;
    FUN_00cef9d0(&local_70,param_3 + 0x20);
    FUN_00ceffd4(&local_60,param_3 + 0x30);
    local_90 = PTR_DAT_047d8e88 + 0x10;
    FUN_0159ac0c(lVar1,&local_98);
    FUN_00db239c(&local_90);
    if (local_98 != (long *)0x0) {
      plVar15 = local_98 + 5;
      do {
        lVar9 = *plVar15;
        iVar7 = (int)lVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
        pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar12 = "DecrementReferenceInternal";
        pcVar13 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        pcVar14 = "Reference counter underflows.";
LAB_0159ab98:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
      }
    }
  }
LAB_0159aa44:
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x718));
  return;
}


