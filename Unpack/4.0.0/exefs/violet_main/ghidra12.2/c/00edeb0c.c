/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00edeb0c; name: FUN_00edeb0c
 */


bool FUN_00edeb0c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [12];
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58 [2];
  long *local_48;
  
  puVar5 = PTR_DAT_047d8c40;
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar7 = PTR_DAT_047d8c50;
  puVar6 = PTR_DAT_047d8c48;
  uVar10 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar10;
  FUN_00ee2cf4(&local_48,uVar10,param_3,param_4);
  plVar1 = (long *)(param_1 + 8);
  FUN_00edf0c8(plVar1,&local_48);
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00eded00;
  }
  if (*plVar1 == 0) {
    bVar8 = false;
  }
  else {
    FUN_00edeeb4(local_58,plVar1);
    uVar10 = local_58[0];
    FUN_00cfe35c(local_58[0],param_1 + 0x18,1);
    if ((param_2 & 1) == 0) {
      auVar12 = FUN_00d1f59c(uVar10);
      if ((auVar12._0_8_ >> 0x20 & 0xff) == 0) {
        bVar8 = false;
      }
      else {
        bVar8 = auVar12._8_4_ == 0;
      }
    }
    else {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      uVar10 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar10;
      FUN_00cfc3c0(&local_68,uVar10,local_58[0]);
      local_70 = local_68;
      local_68 = (long *)0x0;
      FUN_00cfbe68(param_1 + 0x20,&local_70);
      if (local_70 != (long *)0x0) {
        lVar11 = local_70[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_70 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00eded00;
      }
      local_78 = local_60;
      local_60 = (long *)0x0;
      FUN_00cfc114(param_1 + 0x30,&local_78);
      if (local_78 != (long *)0x0) {
        lVar11 = local_78[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_78 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00eded00;
      }
      if (local_60 != (long *)0x0) {
        lVar11 = local_60[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_60 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00eded00;
      }
      if (local_68 != (long *)0x0) {
        lVar11 = local_68[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_68 + 0x50))();
        }
        else if (sVar3 == 0) {
LAB_00eded00:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      bVar8 = true;
    }
    FUN_00edee3c(local_58);
  }
  return bVar8;
}


