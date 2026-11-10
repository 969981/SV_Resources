/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278e6ac; name: FUN_0278e6ac
 */


void FUN_0278e6ac(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long local_98 [2];
  char *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70 [2];
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  undefined8 local_30;
  long local_28;
  
  if (*(long *)(param_2 + 0x1c0) == 0) {
    local_28 = 0;
  }
  else {
    FUN_0278e618(&local_28);
    if (local_28 != 0) {
      FUN_0278f0d0(&local_48,param_2);
      local_70[1] = 0x1fdca745af17f9f;
      pcStack_60 = "BeaconUpdateAndWaitAndScanSeq";
      local_58 = 0x1d;
      local_50 = (long *)0x0;
      local_70[0] = param_2;
      FUN_0278f49c(&local_40,local_48,local_70 + 1,local_98 + 5);
      FUN_0278fb84(&local_38,local_40);
      local_98[1] = 0xce136118cbf0c9be;
      pcStack_88 = "EndBeacon";
      local_80 = 9;
      uStack_78 = 0;
      local_98[0] = param_2;
      FUN_0278ff70(&local_30,local_38,local_98 + 1,local_98);
      uVar5 = local_30;
      local_30 = 0;
      *param_1 = uVar5;
      if (local_38 != (long *)0x0) {
        lVar6 = local_38[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0278e800;
      }
      if (local_40 != (long *)0x0) {
        lVar6 = local_40[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_40 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0278e800;
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (local_48 != (long *)0x0) {
        lVar6 = local_48[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_48 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_0278e800:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      goto LAB_0278e820;
    }
  }
  *param_1 = 0;
LAB_0278e820:
  FUN_0278e884(&local_28);
  return;
}


