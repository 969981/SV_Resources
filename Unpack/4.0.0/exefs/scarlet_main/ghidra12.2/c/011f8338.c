/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f8338; name: FUN_011f8338
 */


void FUN_011f8338(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  byte local_28 [8];
  
  FUN_00c9e664(&local_50,param_1 + 0xe8);
  if (local_50 != (long *)0x0) {
    if (local_48 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = local_48[9];
    }
    plVar4 = (long *)(lVar10 + 0x110);
    lVar6 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      lVar3 = nn::os::GetCurrentThread();
LAB_011f8390:
      if (*plVar4 == 0) goto code_r0x011f8398;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
            while (*plVar4 == 0) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar8) {
                *plVar4 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_011f83a0;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *plVar4 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_011f83a0:
      bVar8 = false;
      goto LAB_011f83a4;
    }
    bVar8 = true;
LAB_011f83a4:
    plVar4 = (long *)FUN_00e03310(*(undefined8 *)(lVar10 + 0x128),*(undefined8 *)(lVar10 + 0x130));
    if ((*(long **)(lVar10 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_00e03310(*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x168))
      ;
      if (*(long **)(lVar10 + 0x168) == plVar4) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)0x0;
        if (*plVar4 != 0) {
          plVar7 = (long *)(*plVar4 + -0x20);
        }
      }
    }
    else {
      plVar7 = (long *)(*plVar4 + -0x20);
    }
    if (!bVar8) {
      *(undefined8 *)(lVar10 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x118));
    }
    if (plVar7 != (long *)0x0) {
      puVar9 = &DAT_cbf29ce484222645;
      snprintf((char *)local_28,7,"Form%02d",param_2 & 0xffff);
      local_70 = 0x24e626689565bb27;
      puStack_68 = &DAT_03c7deeb;
      local_60 = 4;
      local_58 = (long *)0x0;
      local_80 = strlen((char *)local_28);
      if (local_28[0] != 0) {
        pbVar5 = (byte *)((ulong)local_28 | 1);
        do {
          puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)local_28[0]) * 0x100000001b3);
          local_28[0] = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (local_28[0] != 0);
      }
      local_78 = (long *)0x0;
      local_90 = puVar9;
      pbStack_88 = local_28;
      (**(code **)(*plVar7 + 0x130))(plVar7,&local_70,&local_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  if (local_48 != (long *)0x0) {
    plVar4 = local_48 + 5;
    do {
      lVar10 = *plVar4;
      iVar2 = (int)lVar10 + -1;
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *(int *)plVar4 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  return;
code_r0x011f8398:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar8) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_011f83a0;
  goto LAB_011f8390;
}


