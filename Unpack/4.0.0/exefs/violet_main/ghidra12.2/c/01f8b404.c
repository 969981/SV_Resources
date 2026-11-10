/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8b404; name: FUN_01f8b404
 */


undefined8 FUN_01f8b404(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  undefined8 uVar8;
  long *plVar9;
  long local_28;
  
  if (*(long *)(param_1 + 0x178) == 0) {
    uVar8 = 0;
    local_28 = 0;
  }
  else {
    FUN_01f8d884(&local_28);
    if ((local_28 == 0) || (uVar5 = FUN_01f8e784(local_28,param_2), (uVar5 & 1) == 0)) {
      uVar8 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x188);
      if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_01f8b448:
        uVar8 = 1;
      }
      else {
        psVar1 = (short *)(lVar6 + 0x1a);
        uVar8 = 1;
        sVar7 = *(short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01f8b4b4;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01f8b4b4:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar6 + 0x10) != 0) {
              plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
              if (*(uint *)(param_2 + 0x150) < 3) {
                FUN_01f8c02c(plVar9,*(undefined4 *)
                                     (&DAT_03d5efc0 + (long)(int)*(uint *)(param_2 + 0x150) * 4));
              }
              (**(code **)(*plVar9 + 0x60))(plVar9);
            }
            goto LAB_01f8b448;
          }
          sVar7 = sVar2;
        } while (sVar2 != 0);
      }
    }
  }
  FUN_01018c54(&local_28);
  return uVar8;
}


