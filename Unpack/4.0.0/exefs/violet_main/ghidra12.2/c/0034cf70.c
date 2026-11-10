/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034cf70; name: FUN_0034cf70
 */


undefined8 FUN_0034cf70(int param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 1) {
    iVar4 = FUN_0034d240(param_2,param_3,0);
  }
  else {
    if (param_1 != 2) goto LAB_0034cfd0;
    iVar4 = FUN_0034d240(param_2,param_3,1);
  }
  if (iVar4 != 0) {
    return 1;
  }
LAB_0034cfd0:
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + uVar6 * 0x20);
      if (((undefined8 *)*puVar1 != (undefined8 *)0x0) &&
         (plVar5 = *(long **)*puVar1, plVar5 != (long *)0x0)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_38 = puVar1[1];
      local_40 = *puVar1;
      uStack_28 = puVar1[3];
      uStack_30 = puVar1[2];
      FUN_003686e0(param_3,&local_40);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulong *)(param_2 + 0x10));
  }
  return 0;
}


