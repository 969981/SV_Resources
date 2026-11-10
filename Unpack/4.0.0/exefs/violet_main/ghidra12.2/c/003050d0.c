/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003050d0; name: FUN_003050d0
 */


undefined8 FUN_003050d0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  void *local_58;
  long *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 uStack_38;
  
  uVar5 = 2;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar7 = *(long *)(param_2 + 0x20);
    lVar8 = *(long *)(param_1 + 0x140);
    lVar6 = FUN_00303aa0(*(undefined8 *)(param_1 + 8));
    FUN_003670f0(&local_50,lVar8 + lVar7 + lVar6);
    local_58 = (void *)0x0;
    uVar1 = uStack_48 & 0xff;
    lVar6 = (long)&uStack_48 + 1;
    if (local_50 != (long *)0x0) {
      uVar1 = uStack_48;
      lVar6 = local_40;
    }
    FUN_00303630(param_1,param_2);
    iVar4 = FUN_00304280(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x150),
                         *(undefined8 *)(param_2 + 0x10),lVar6,uVar1,&local_58);
    if (iVar4 == 0) {
      uStack_78 = uStack_48;
      local_80 = local_50;
      uStack_68 = uStack_38;
      lStack_70 = local_40;
      FUN_003686e0(param_3,&local_80);
      FUN_00368510(param_2);
      uVar5 = 0;
    }
    else {
      free(local_58);
      if ((local_50 != (long *)0x0) && (plVar9 = (long *)*local_50, plVar9 != (long *)0x0)) {
        do {
          lVar6 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 1) {
          (*(code *)local_50[3])(local_50[4]);
        }
      }
      uVar5 = 7;
    }
  }
  return uVar5;
}


