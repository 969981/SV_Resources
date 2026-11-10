/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f3e40; name: FUN_002f3e40
 */


void FUN_002f3e40(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_48;
  undefined8 *local_38;
  
  puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x50);
  if (puVar6 != (undefined8 *)0x0) {
    local_38 = (undefined8 *)*param_2;
    *param_2 = 0;
    local_48 = (undefined8 *)*param_3;
    *param_3 = 0;
                    /* try { // try from 002f3e98 to 002f3eaf has its CatchHandler @ 002f3fdc */
    FUN_002f48d0(puVar6,"http+fake_security",&local_38,&local_48);
    puVar4 = local_48;
    puVar3 = local_38;
    if (local_48 != (undefined8 *)0x0) {
      plVar1 = local_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)*local_48)(local_48);
        FUN_0049e790(PTR_LAB_047cba48,puVar4);
        puVar3 = local_38;
      }
    }
    local_38 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = puVar3 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)*puVar3)(puVar3);
        FUN_0049e790(PTR_LAB_047cba48,puVar3);
      }
    }
    *puVar6 = &PTR_LAB_04493ef8;
                    /* try { // try from 002f3efc to 002f3f43 has its CatchHandler @ 002f406c */
    uVar7 = FUN_0038ccb0(param_4);
    puVar6[6] = uVar7;
    FUN_002edb90(param_5);
    uVar7 = FUN_0038ccb0();
    puVar6[7] = uVar7;
    lVar8 = FUN_00343a90(param_5,"grpc.address_is_xds_server");
    if (lVar8 == 0) {
      lVar8 = FUN_00343a90(param_5,"grpc.address_is_grpclb_load_balancer");
      bVar5 = lVar8 != 0;
    }
    else {
      bVar5 = true;
    }
    *(bool *)(puVar6 + 8) = bVar5;
                    /* try { // try from 002f3f50 to 002f3f6b has its CatchHandler @ 002f4068 */
    lVar8 = FUN_00343a90(param_5,"grpc.ssl_target_name_override");
    uVar7 = 0;
    if (lVar8 != 0) {
      FUN_00344040();
      uVar7 = FUN_0038ccb0();
    }
    puVar6[9] = uVar7;
  }
  *param_1 = puVar6;
  return;
}


