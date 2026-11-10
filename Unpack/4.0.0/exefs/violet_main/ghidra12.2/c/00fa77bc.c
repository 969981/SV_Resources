/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa77bc; name: FUN_00fa77bc
 */


bool FUN_00fa77bc(long param_1,uint param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [12];
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58 [2];
  long *local_48;
  
  puVar6 = PTR_DAT_047d8c40;
  if ((*PTR_DAT_047d8c40 & 1) == 0) {
    param_4 = param_4 & 0xffffffff;
    iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40);
    if (iVar10 != 0) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000,param_4);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
  }
  puVar8 = PTR_DAT_047d8c50;
  puVar7 = PTR_DAT_047d8c48;
  uVar11 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar11;
  FUN_00fa81ac(&local_48,uVar11,param_2 & 1,param_3,param_4,param_5);
  plVar1 = (long *)(param_1 + 8);
  FUN_00fa7b30(plVar1,&local_48);
  if (local_48 != (long *)0x0) {
    lVar12 = local_48[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00fa79d4;
  }
  if (*plVar1 == 0) {
    bVar9 = false;
  }
  else {
    FUN_00fa6de0(local_58,plVar1);
    FUN_00cfe35c(local_58[0],param_1 + 0x18,1);
    if ((param_2 & 1) == 0) {
      auVar13 = FUN_00d1f59c(local_58[0]);
      if ((auVar13._0_8_ >> 0x20 & 0xff) == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = auVar13._8_4_ == 0;
      }
    }
    else {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      uVar11 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar11;
      FUN_00cfc3c0(&local_68,uVar11,local_58[0]);
      local_70 = local_68;
      local_68 = (long *)0x0;
      FUN_00cfbe68(param_1 + 0x20,&local_70);
      if (local_70 != (long *)0x0) {
        lVar12 = local_70[6];
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*local_70 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00fa79d4;
      }
      local_78 = local_60;
      local_60 = (long *)0x0;
      FUN_00cfc114(param_1 + 0x30,&local_78);
      if (local_78 != (long *)0x0) {
        lVar12 = local_78[6];
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*local_78 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00fa79d4;
      }
      if (local_60 != (long *)0x0) {
        lVar12 = local_60[6];
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*local_60 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00fa79d4;
      }
      if (local_68 != (long *)0x0) {
        lVar12 = local_68[6];
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*local_68 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00fa79d4;
      }
      bVar9 = true;
    }
    if (local_58[0] != (long *)0x0) {
      lVar12 = local_58[0][6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_58[0] + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_00fa79d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return bVar9;
}


