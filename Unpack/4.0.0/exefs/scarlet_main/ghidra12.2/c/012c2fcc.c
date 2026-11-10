/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c2fcc; name: FUN_012c2fcc
 */


void FUN_012c2fcc(long param_1,undefined8 *param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  ushort *puVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *local_60 [4];
  long *local_40;
  
  *(undefined8 *)(param_1 + 0x120) = *param_2;
  *(undefined8 *)(param_1 + 0x128) = param_2[1];
  *(undefined8 *)(param_1 + 0x130) = param_2[2];
  plVar9 = (long *)param_2[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar2 = *(long **)(param_1 + 0x138);
  *(long **)(param_1 + 0x138) = plVar9;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  FUN_00cbf4c0(local_60,param_1 + 0x120);
  uVar3 = FUN_00dc5c18(param_1 + 0xe0,0,local_60,0,0);
  if ((uVar3 & 1) != 0) {
    plVar9 = (long *)(param_1 + 0x28);
    lVar8 = *plVar9;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar8) {
      lVar4 = nn::os::GetCurrentThread();
LAB_012c3058:
      if (*plVar9 == 0) goto code_r0x012c3060;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
            while (*plVar9 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar4;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_012c3068;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_012c3068:
      bVar7 = false;
      goto LAB_012c306c;
    }
    bVar7 = true;
LAB_012c306c:
    if ((((*(long *)(param_1 + 0xe8) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0xe8) + 0x1e8) & 1) != 0)) &&
        (puVar5 = (uint *)(**(code **)(**(long **)(param_1 + 0xe8) + 0x70))(), puVar5 != (uint *)0x0
        )) && ((puVar6 = (ushort *)
                         ((long)((long)puVar5 + (ulong)*puVar5) -
                         (long)*(int *)((long)puVar5 + (ulong)*puVar5)), 6 < *puVar6 &&
               (puVar6[3] != 0)))) {
      FUN_012d57cc(param_1);
    }
    if (!bVar7) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return;
code_r0x012c3060:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar7) {
    *plVar9 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_012c3068;
  goto LAB_012c3058;
}


