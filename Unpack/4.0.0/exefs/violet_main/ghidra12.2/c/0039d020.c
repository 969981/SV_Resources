/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039d020; name: FUN_0039d020
 */


uint FUN_0039d020(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *local_48;
  long *local_40;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  uVar6 = FUN_00399020(param_2,&local_28);
  if ((uVar6 & 1) == 0) {
    pcVar8 = *(code **)PTR_PTR_047cd068;
    local_40 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    *local_40 = (long)&PTR_LAB_04497460;
    local_40[1] = 0;
    local_40[2] = 0;
    local_48 = local_40 + 3;
    *local_48 = (long)&PTR_LAB_04497498;
                    /* try { // try from 0039d09c to 0039d0ab has its CatchHandler @ 0039d184 */
    (*pcVar8)(&local_30,param_2,&local_48);
    if (local_40 != (long *)0x0) {
      plVar1 = local_40 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_30 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
                    /* try { // try from 0039d0d4 to 0039d0df has its CatchHandler @ 0039d150 */
      uVar5 = FUN_0039c428(param_1,param_2);
      puVar4 = local_30;
      local_30 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        FUN_0049e790(PTR_LAB_047cba48,puVar4);
      }
    }
  }
  else {
    FUN_0039af88(param_1,&local_28);
    uVar5 = 1;
  }
  return uVar5 & 1;
}


