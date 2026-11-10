/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01524e1c; name: FUN_01524e1c
 */


void FUN_01524e1c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar7 = *(long *)(param_1 + 0x68);
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
        if (cVar3 != '\0') goto LAB_01524e80;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01524e80:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        local_50 = 0x70bd59fe1abdbeb0;
        puStack_48 = &DAT_03c50115;
        local_40 = 4;
        uStack_38 = 0;
        plVar6 = (long *)FUN_00c8c7b4(*(undefined8 *)(lVar7 + 0x148),&local_50);
        uVar5 = local_50;
        local_50._4_4_ = SUB84(uVar5,4);
        local_50._0_4_ =
             CONCAT13(0xff,CONCAT12((char)(int)*(float *)(param_1 + 0x90),
                                    CONCAT11((char)(int)*(float *)(param_1 + 0x8c),
                                             (char)(int)*(float *)(param_1 + 0x88))));
        (**(code **)(*plVar6 + 0x28))(plVar6,0,&local_50);
        (**(code **)(*plVar6 + 0x28))(plVar6,1,&local_50);
        (**(code **)(*plVar6 + 0x28))(plVar6,2,&local_50);
        (**(code **)(*plVar6 + 0x28))(plVar6,3,&local_50);
        (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))(lVar7 + -0x28);
        return;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


