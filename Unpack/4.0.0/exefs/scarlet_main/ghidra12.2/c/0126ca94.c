/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126ca94; name: FUN_0126ca94
 */


void FUN_0126ca94(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
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
        if (cVar4 != '\0') goto LAB_0126cafc;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0126cafc:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        lVar5 = FUN_00e6d56c(lVar6 + 0xe0,&local_80);
        if (lVar5 != 0) {
          local_68 = (long *)0x0;
          local_60 = &DAT_cbf29ce484222645;
          pcStack_58 = "";
          local_50 = 0;
          local_48 = (long *)0x0;
          local_80 = *param_3;
          uStack_78 = param_3[1];
          local_70 = param_3[2];
          plVar2 = (long *)param_3[3];
          if (plVar2 == (long *)0x0) {
          }
          else {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            if (local_68 != (long *)0x0) {
              lVar7 = *local_68;
              local_68 = plVar2;
              (**(code **)(lVar7 + 0x20))();
              plVar2 = local_68;
            }
          }
          local_68 = plVar2;
          plVar2 = local_48;
          local_60 = (undefined1 *)0x860d0e803a5f60a2;
          pcStack_58 = "SkyMoonColor";
          local_50 = 0xc;
          local_48 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
          }
          local_38 = param_2[1];
          uStack_40 = *param_2;
          local_48 = (long *)0x0;
          FUN_01074968(lVar5,&local_80);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
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


