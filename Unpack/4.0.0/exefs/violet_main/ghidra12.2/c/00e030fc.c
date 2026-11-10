/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e030fc; name: FUN_00e030fc
 */


void FUN_00e030fc(float param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  FUN_00c9e664(&local_50,param_2 + 0xe8);
  if (local_50 != (long *)0x0) {
    if (local_48 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = local_48[9];
    }
    plVar4 = (long *)(lVar8 + 0x110);
    lVar5 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar5) {
      lVar3 = nn::os::GetCurrentThread();
LAB_00e03154:
      if (*plVar4 == 0) goto code_r0x00e0315c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
            while (*plVar4 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar7) {
                *plVar4 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00e03164;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *plVar4 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00e03164:
      bVar7 = false;
      goto LAB_00e03168;
    }
    bVar7 = true;
LAB_00e03168:
    plVar4 = (long *)FUN_00e03310(*(undefined8 *)(lVar8 + 0x128),*(undefined8 *)(lVar8 + 0x130));
    if ((*(long **)(lVar8 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_00e03310(*(undefined8 *)(lVar8 + 0x160),*(undefined8 *)(lVar8 + 0x168));
      if (*(long **)(lVar8 + 0x168) == plVar4) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)0x0;
        if (*plVar4 != 0) {
          plVar6 = (long *)(*plVar4 + -0x20);
        }
      }
    }
    else {
      plVar6 = (long *)(*plVar4 + -0x20);
    }
    if (!bVar7) {
      *(undefined8 *)(lVar8 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
    }
    if (plVar6 != (long *)0x0) {
      local_70 = 0xd2e74cfe0f15a0c5;
      pcStack_68 = "CHARA_SCALE";
      local_60 = 0xb;
      local_58 = (long *)0x0;
      (**(code **)(*plVar6 + 0x138))(param_1 * 100.0,plVar6,&local_70,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  if (local_48 != (long *)0x0) {
    plVar4 = local_48 + 5;
    do {
      lVar8 = *plVar4;
      iVar2 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(int *)plVar4 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
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
code_r0x00e0315c:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar7) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e03164;
  goto LAB_00e03154;
}


