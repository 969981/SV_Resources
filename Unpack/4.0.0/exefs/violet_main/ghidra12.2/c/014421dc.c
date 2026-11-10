/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014421dc; name: FUN_014421dc
 */


void FUN_014421dc(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined1 *local_58;
  char *local_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 0x1a) != 0)) {
    psVar1 = (short *)(param_1 + 0x1a);
    sVar9 = *(short *)(param_1 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01442244;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01442244:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        lVar5 = FUN_00e6d56c(lVar6 + 0xe0,&local_78);
        if (lVar5 != 0) {
          local_40 = (long *)0x0;
          local_60 = (long *)0x0;
          local_58 = &DAT_cbf29ce484222645;
          local_50 = "";
          local_48 = 0;
          local_78 = *param_3;
          uStack_70 = param_3[1];
          local_68 = param_3[2];
          plVar2 = (long *)param_3[3];
          if (plVar2 == (long *)0x0) {
          }
          else {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            if (local_60 != (long *)0x0) {
              lVar7 = *local_60;
              local_60 = plVar2;
              (**(code **)(lVar7 + 0x20))();
              plVar2 = local_60;
            }
          }
          local_60 = plVar2;
          plVar2 = local_40;
          local_58 = (undefined1 *)0x713acbba0cef5037;
          local_50 = "PfxChromaticAberrationIntensity";
          local_48 = 0x1f;
          local_40 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
          }
          local_40 = (long *)0x0;
          local_38 = *param_2;
          FUN_00df47dc(lVar5,&local_78);
          if (local_40 != (long *)0x0) {
            (**(code **)(*local_40 + 0x20))();
          }
          if (local_60 != (long *)0x0) {
            (**(code **)(*local_60 + 0x20))();
          }
        }
        (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))((long *)(lVar6 + -0x28));
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


