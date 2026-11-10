/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011098f0; name: FUN_011098f0
 */


void FUN_011098f0(long param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
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
        if (cVar5 != '\0') goto LAB_01109964;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01109964:
        bVar10 = false;
      }
      if (bVar10) {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        lVar6 = FUN_00e6d56c(lVar7 + 0xe0,&local_90);
        if (lVar6 != 0) {
          local_78 = (long *)0x0;
          local_70 = &DAT_cbf29ce484222645;
          pbStack_68 = &DAT_03c886bc;
          local_60 = 0;
          local_58 = (long *)0x0;
          local_90 = *param_4;
          uStack_88 = param_4[1];
          local_80 = param_4[2];
          plVar2 = (long *)param_4[3];
          if (plVar2 == (long *)0x0) {
          }
          else {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            if (local_78 != (long *)0x0) {
              lVar9 = *local_78;
              local_78 = plVar2;
              (**(code **)(lVar9 + 0x20))();
              plVar2 = local_78;
            }
          }
          local_78 = plVar2;
          plVar2 = local_58;
          bVar3 = *param_2;
          local_70 = &DAT_cbf29ce484222645;
          pbVar8 = param_2;
          while (bVar3 != 0) {
            pbVar8 = pbVar8 + 1;
            local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar8;
          }
          local_60 = 6;
          local_58 = (long *)0x0;
          pbStack_68 = param_2;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
          }
          local_48 = param_3[1];
          uStack_50 = *param_3;
          local_58 = (long *)0x0;
          FUN_01074968(lVar6,&local_90);
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
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


