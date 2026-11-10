/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003051e0; name: FUN_003051e0
 */


undefined8 FUN_003051e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long *local_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  void *local_48;
  
  uVar6 = 2;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*(ulong *)(param_2 + 0x20) <
        (ulong)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x140))) {
      uVar6 = 2;
    }
    else {
      FUN_003670f0(&local_70,
                   (*(ulong *)(param_2 + 0x20) - *(long *)(param_1 + 0x140)) -
                   *(long *)(param_1 + 0x148));
      lVar8 = param_1 + 0x10;
      lVar1 = (long)&uStack_68 + 1;
      if (local_70 != (long *)0x0) {
        lVar1 = local_60;
      }
      uVar2 = uStack_68 & 0xff;
      if (local_70 != (long *)0x0) {
        uVar2 = uStack_68;
      }
      FUN_00368510(lVar8);
      FUN_00368bc0(param_2,*(undefined8 *)(param_1 + 0x140),lVar8);
      auVar9 = FUN_00303780(param_1);
      local_48 = (void *)0x0;
      FUN_00303630(param_1,param_2);
      iVar5 = FUN_003045e0(*(undefined8 *)(param_1 + 8),auVar9._0_8_,auVar9._8_8_,
                           *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_2 + 0x10),lVar1,
                           uVar2,&local_48);
      if (iVar5 == 0) {
        FUN_00368510(lVar8);
        FUN_00368510(param_2);
        uStack_88 = uStack_68;
        local_90 = local_70;
        uStack_78 = uStack_58;
        lStack_80 = local_60;
        FUN_003686e0(param_3,&local_90);
        uVar6 = 0;
      }
      else {
        free(local_48);
        if ((local_70 != (long *)0x0) && (plVar7 = (long *)*local_70, plVar7 != (long *)0x0)) {
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 1) {
            (*(code *)local_70[3])(local_70[4]);
          }
        }
        uVar6 = 7;
      }
    }
  }
  return uVar6;
}


