/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e819b0; name: FUN_00e819b0
 */


void FUN_00e819b0(undefined1 (*param_1) [16],long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_30;
  ulong uStack_28;
  long *local_8;
  
  local_30 = *(undefined8 *)*param_1;
  auVar7 = NEON_ext(*param_1,*param_1,8,1);
  uStack_28 = (ulong)auVar7._0_4_;
  fVar6 = *(float *)param_1[1];
  if (*(float *)param_1[1] <= 0.001) {
    fVar6 = 0.001;
  }
  FUN_00e81a84(&local_8,fVar6,&local_30);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar4 = (long *)*param_2;
  *param_2 = (long)plVar1;
  if (plVar4 != (long *)0x0) {
    if (plVar4[1] != 0) {
      plVar1 = plVar4 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    if ((local_8 != (long *)0x0) && (local_8[1] != 0)) {
      plVar1 = local_8 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_8 + 0x18))();
      }
    }
  }
  return;
}


