/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f321ec; name: FUN_00f321ec
 */


void FUN_00f321ec(long *param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_28 [8];
  
  if ((param_2 & 1) != 0) {
    plVar7 = param_1 + 0x78;
    lVar5 = *plVar7;
    lVar2 = nn::os::GetCurrentThread();
    if (lVar2 != lVar5) {
      lVar2 = nn::os::GetCurrentThread();
LAB_00f32224:
      if (*plVar7 == 0) goto code_r0x00f3222c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x79));
      do {
        if (*plVar7 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x79));
            while (*plVar7 == 0) {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar2;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00f32234;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00f32234:
      bVar4 = false;
      goto LAB_00f32238;
    }
    plVar7 = (long *)0x0;
    bVar4 = true;
LAB_00f32238:
    puVar6 = (undefined8 *)param_1[0x7b];
    puVar8 = (undefined8 *)param_1[0x7c];
    if (puVar6 != puVar8) {
      FUN_00f32348(*puVar6);
      while (puVar6 = puVar6 + 2, puVar6 != puVar8) {
        FUN_00f32348(*puVar6);
      }
    }
    if (!bVar4) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
  }
  uVar3 = param_1[0x87];
  lVar2 = param_1[0x86];
  param_1[0x87] = uVar3 & 0xfffffffffffffffd;
  uVar3 = uVar3 & 0xfffffffd;
  *(bool *)(param_1 + 0x86) = uVar3 != 0;
  if (((char)lVar2 != '\0') && (uVar3 == 0)) {
    FUN_00d37964(param_1,2,0);
    FUN_00d37964(param_1,0,0);
    (**(code **)(*param_1 + 0x110))(param_1);
    FUN_00d38190(param_1 + 0x21,auStack_28);
  }
  return;
code_r0x00f3222c:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar4) {
    *plVar7 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00f32234;
  goto LAB_00f32224;
}


