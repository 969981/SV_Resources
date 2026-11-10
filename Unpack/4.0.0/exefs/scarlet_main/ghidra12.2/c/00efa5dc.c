/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00efa5dc; name: FUN_00efa5dc
 */


bool FUN_00efa5dc(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  long *plVar12;
  
  if (param_2 == 0) {
    return false;
  }
  plVar10 = (long *)(param_1 + 0x210);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00efa618;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
        while (*plVar10 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00efa618;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00efa618:
  plVar10 = *(long **)(param_2 + 8);
  if (plVar10 == (long *)0x0) {
    puVar11 = &DAT_cbf29ce484222645;
  }
  else {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puVar11 = (undefined1 *)plVar10[6];
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  puVar7 = *(undefined1 **)(param_1 + 0x250);
  if (puVar7 != (undefined1 *)0x0) {
    uVar5 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      puVar6 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)puVar11);
    }
    else {
      puVar6 = puVar11;
      if (puVar7 <= puVar11) {
        uVar3 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar11 / (ulong)puVar7;
        }
        puVar6 = puVar11 + -(uVar3 * (long)puVar7);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x248) + (long)puVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if ((undefined1 *)plVar8[1] == puVar11) {
            if ((undefined1 *)plVar8[2] == puVar11) goto LAB_00efa798;
          }
          else if ((undefined1 *)((ulong)plVar8[1] & (ulong)(puVar7 + -1)) != puVar6)
          goto LAB_00efa7f4;
          plVar8 = (long *)*plVar8;
          plVar12 = (long *)0x0;
        } while (plVar8 != (long *)0x0);
        goto LAB_00efa79c;
      }
      do {
        puVar9 = (undefined1 *)plVar8[1];
        if (puVar9 == puVar11) {
          if ((undefined1 *)plVar8[2] == puVar11) {
LAB_00efa798:
            plVar12 = plVar8;
            break;
          }
        }
        else {
          if (puVar7 <= puVar9) {
            uVar5 = 0;
            if (puVar7 != (undefined1 *)0x0) {
              uVar5 = (ulong)puVar9 / (ulong)puVar7;
            }
            puVar9 = puVar9 + -(uVar5 * (long)puVar7);
          }
          if (puVar9 != puVar6) goto LAB_00efa7f4;
        }
        plVar8 = (long *)*plVar8;
        plVar12 = (long *)0x0;
      } while (plVar8 != (long *)0x0);
      goto LAB_00efa79c;
    }
  }
LAB_00efa7f4:
  plVar12 = (long *)0x0;
LAB_00efa79c:
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x218));
  return plVar12 != (long *)0x0;
}


