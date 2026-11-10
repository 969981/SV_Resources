/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d51024; name: FUN_00d51024
 */


void FUN_00d51024(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  char *__s;
  short sVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  short sVar8;
  long local_38;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00d510a8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d510a8:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_38 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_38 + ((long)param_4 >> 1)));
          }
          pvVar5 = (void *)(*param_3)();
          memcpy(param_1,pvVar5,0x34);
          param_1[7] = 0;
          __s = (char *)(*(ulong *)((long)pvVar5 + 0x38) & 0xfffffffffffffffe);
          if (__s != (char *)0x0) {
            sVar6 = strlen(__s);
            sVar6 = (size_t)((int)sVar6 + 1);
            pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar6)
            ;
            memcpy(pvVar5,__s,sVar6);
            param_1[7] = (ulong)pvVar5 | 1;
          }
          FUN_01b8ea78(&local_38);
          return;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  local_38 = 0;
  FUN_01b8ea78(&local_38);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


