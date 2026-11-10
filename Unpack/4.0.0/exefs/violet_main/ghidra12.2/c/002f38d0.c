/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f38d0; name: FUN_002f38d0
 */


void FUN_002f38d0(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_40;
  undefined8 *local_38;
  
  if ((param_4 == 0) || (*param_2 == 0)) {
    *param_1 = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (puVar6 != (undefined8 *)0x0) {
      local_38 = (undefined8 *)*param_2;
      *param_2 = 0;
      local_40 = (undefined8 *)*param_3;
      *param_3 = 0;
                    /* try { // try from 002f3928 to 002f393f has its CatchHandler @ 002f3a18 */
      FUN_002f48d0(puVar6,&DAT_03bdfd99,&local_38,&local_40);
      puVar5 = local_40;
      puVar4 = local_38;
      if (local_40 != (undefined8 *)0x0) {
        plVar1 = local_40 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)*local_40)(local_40);
          FUN_0049e790(PTR_LAB_047cba48,puVar5);
          puVar4 = local_38;
        }
      }
      local_38 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        plVar1 = puVar4 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)*puVar4)(puVar4);
          FUN_0049e790(PTR_LAB_047cba48,puVar4);
        }
      }
      *puVar6 = &PTR_LAB_04493eb0;
                    /* try { // try from 002f398c to 002f3993 has its CatchHandler @ 002f3a08 */
      uVar7 = FUN_0038ccb0(param_4);
      puVar6[6] = uVar7;
    }
    *param_1 = puVar6;
  }
  return;
}


