/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7c730; name: FUN_00c7c730
 */


void FUN_00c7c730(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  plVar7 = (long *)(param_1 + 0x128);
  lVar4 = nn::os::GetCurrentThread();
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00c7c760;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00c7c760:
  if (*(long *)(param_1 + 0x188) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x180);
    do {
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x148) + (uVar5 >> 5 & 0x7fffffffffffff8)) +
               (uVar5 & 0xff) * 0x10);
      FUN_010c2da8(param_1,*puVar1,*(undefined4 *)(puVar1 + 1),*(undefined1 *)((long)puVar1 + 0xc));
      uVar5 = *(long *)(param_1 + 0x180) + 1;
      lVar4 = *(long *)(param_1 + 0x188) + -1;
      *(ulong *)(param_1 + 0x180) = uVar5;
      *(long *)(param_1 + 0x188) = lVar4;
      if (0x1ff < uVar5) {
        plVar7 = *(long **)(param_1 + 400);
        uVar6 = **(undefined8 **)(param_1 + 0x148);
        uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0x1000,8);
        }
        else {
          FUN_00c48fe8(plVar7,uVar6,0x1000,8);
        }
        *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 8;
        lVar4 = *(long *)(param_1 + 0x188);
        uVar5 = *(long *)(param_1 + 0x180) - 0x100;
        *(ulong *)(param_1 + 0x180) = uVar5;
      }
    } while (lVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  return;
}


