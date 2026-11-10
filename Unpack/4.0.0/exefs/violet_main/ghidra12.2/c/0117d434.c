/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117d434; name: FUN_0117d434
 */


void FUN_0117d434(long param_1,byte *param_2,undefined4 *param_3,undefined8 *param_4)

{
  short *psVar1;
  long *plVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined1 *local_68;
  byte *local_60;
  undefined8 local_58;
  long *local_50;
  undefined4 local_48;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 0x1a) != 0)) {
    psVar1 = (short *)(param_1 + 0x1a);
    sVar11 = *(short *)(param_1 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0117d4a8;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0117d4a8:
        bVar10 = false;
      }
      if (bVar10) {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        lVar6 = FUN_00e6d56c(lVar7 + 0xe0,&local_88);
        if (lVar6 != 0) {
          local_50 = (long *)0x0;
          local_70 = (long *)0x0;
          local_68 = &DAT_cbf29ce484222645;
          local_60 = &DAT_03c886bc;
          local_58 = 0;
          local_88 = *param_4;
          uStack_80 = param_4[1];
          local_78 = param_4[2];
          plVar2 = (long *)param_4[3];
          if (plVar2 == (long *)0x0) {
          }
          else {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            if (local_70 != (long *)0x0) {
              lVar9 = *local_70;
              local_70 = plVar2;
              (**(code **)(lVar9 + 0x20))();
              plVar2 = local_70;
            }
          }
          local_70 = plVar2;
          plVar2 = local_50;
          bVar3 = *param_2;
          local_68 = &DAT_cbf29ce484222645;
          pbVar8 = param_2;
          while (bVar3 != 0) {
            pbVar8 = pbVar8 + 1;
            local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar8;
          }
          local_58 = 0xc;
          local_50 = (long *)0x0;
          local_60 = param_2;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
          }
          local_50 = (long *)0x0;
          local_48 = *param_3;
          FUN_00df47dc(lVar6,&local_88);
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x20))();
          }
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
        }
        (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))((long *)(lVar7 + -0x28));
        return;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


