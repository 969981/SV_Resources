/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00367f00; name: FUN_00367f00
 */


void FUN_00367f00(undefined8 *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  
  lVar9 = *param_2;
  if (lVar9 == 0) {
    bVar1 = *(byte *)(param_2 + 1);
    if (param_3 <= bVar1) {
      pvVar8 = (void *)((long)param_2 + 9);
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)param_3;
      memcpy((void *)((long)param_1 + 9),pvVar8,param_3);
      uVar4 = (uint)bVar1 - (int)param_3;
      *(byte *)(param_2 + 1) = (byte)uVar4;
      memmove(pvVar8,(void *)((long)pvVar8 + param_3),(ulong)uVar4 & 0xff);
      return;
    }
  }
  else {
    uVar5 = param_2[1];
    if (param_3 < 0x17) {
      if (param_3 <= uVar5) {
        *param_1 = 0;
        *(char *)(param_1 + 1) = (char)param_3;
        pvVar8 = (void *)param_2[2];
        memcpy((void *)((long)param_1 + 9),pvVar8,param_3);
        *param_2 = *(long *)(lVar9 + 0x10);
        param_2[1] = uVar5 - param_3;
        param_2[2] = (long)pvVar8 + param_3;
        return;
      }
    }
    else if (param_3 <= uVar5) {
      puVar6 = *(undefined8 **)(lVar9 + 0x10);
      *param_1 = puVar6;
      plVar7 = (long *)*puVar6;
      if (plVar7 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = param_2[1];
        puVar6 = *(undefined8 **)(*param_2 + 0x10);
      }
      lVar9 = param_2[2];
      param_1[1] = param_3;
      param_1[2] = lVar9;
      param_2[2] = lVar9 + param_3;
      *param_2 = (long)puVar6;
      param_2[1] = uVar5 - param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


