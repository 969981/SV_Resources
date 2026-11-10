/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0e904; name: FUN_00e0e904
 */


/* WARNING: Removing unreachable block (ram,0x00e0e9c8) */

long FUN_00e0e904(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  undefined4 *puVar9;
  long *local_28;
  
  puVar4 = PTR_DAT_047d1a08;
  plVar1 = param_1 + 1;
  puVar5 = (undefined4 *)*plVar1;
  if ((undefined4 *)*plVar1 == (undefined4 *)0x0) {
    local_28 = (long *)&DAT_00000038;
    puVar5 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    pcVar8 = *(code **)(puVar4 + 0x10);
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(puVar5,"hkAsyncThreadPoolMutex");
    }
    *puVar5 = 0;
    FUN_029fc318(puVar5 + 2);
    *(undefined8 *)(puVar5 + 10) = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    do {
      puVar9 = (undefined4 *)*plVar1;
      if (puVar9 != (undefined4 *)0x0) {
        ClearExclusiveLocal();
        FUN_029fc324(puVar5);
        (**(code **)(puVar4 + 8))(0,puVar5,0);
        puVar5 = puVar9;
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = (long)puVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_029fc32c(puVar5);
  if ((char)param_1[2] == '\0') {
    lVar6 = FUN_029fc55c(*param_1);
    if (lVar6 != 1) {
      FUN_029fc570(0x21dbd06c);
      FUN_029fc5e8(&local_28,*param_1);
      FUN_029fc570(0x25659f08);
      plVar1 = local_28;
      DataMemoryBarrier(2,3);
      local_28 = (long *)0x0;
      plVar7 = (long *)*param_1;
      *param_1 = (long)plVar1;
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar1 = plVar7 + 2;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        if ((local_28 != (long *)0x0) && (local_28[1] != 0)) {
          plVar1 = local_28 + 2;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*local_28 + 0x18))();
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_029fc668(puVar5);
  return *param_1;
}


