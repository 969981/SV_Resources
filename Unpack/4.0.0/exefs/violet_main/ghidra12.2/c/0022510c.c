/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0022510c; name: FUN_0022510c
 */


void FUN_0022510c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  int local_68 [2];
  byte local_60;
  undefined8 local_50;
  byte local_48;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    if (param_1[2] == 0) {
      return;
    }
    if ((char)param_1[1] != '\0') goto LAB_00225178;
  }
  else {
    if ((char)param_1[1] != '\0') {
LAB_00225178:
      plVar6 = (long *)param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      if (plVar6 == (long *)0x0) {
        return;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
        return;
      }
      return;
    }
    (*(code *)**(undefined8 **)param_1[4])(local_68);
    if ((local_48 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_38);
    }
    if ((local_60 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_50);
    }
    if (local_68[0] != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  plVar6 = (long *)param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar5 = *param_3;
  *param_3 = lVar5 + 1;
  puVar4 = (undefined4 *)(param_2 + lVar5 * 0x50);
  *puVar4 = 1;
  puVar4[1] = (int)param_1[3];
  *(undefined8 *)(puVar4 + 2) = 0;
  *(long *)(puVar4 + 4) = param_1[2];
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


