/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024e884; name: FUN_0024e884
 */


undefined1  [16] FUN_0024e884(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  char local_28;
  
  FUN_0024ea44(&local_38);
                    /* try { // try from 0024e8a4 to 0024e8af has its CatchHandler @ 0024e9a8 */
  puVar4 = (undefined8 *)FUN_0024eb90(param_1,&local_40,local_38 + 4);
  puVar6 = local_38;
  puVar8 = (undefined8 *)*puVar4;
  if (puVar8 == (undefined8 *)0x0) {
    local_38[2] = local_40;
    *local_38 = 0;
    local_38[1] = 0;
    *puVar4 = local_38;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar6 = (undefined8 *)*puVar4;
    }
    FUN_010108e0(param_1[1],puVar6);
    param_1[3] = param_1[3] + 1;
    uVar5 = 1;
  }
  else {
    local_38 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      if (local_28 != '\0') {
        plVar9 = (long *)puVar6[9];
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((*(byte *)(puVar6 + 4) & 1) != 0) {
          (**(code **)(*(long *)puVar6[7] + 0x18))
                    ((long *)puVar6[7],puVar6[6],puVar6[4] & 0xfffffffffffffffe,1);
        }
      }
      (**(code **)(*(long *)*local_30 + 0x18))((long *)*local_30,puVar6,0x50,8);
    }
    uVar5 = 0;
    local_38 = puVar8;
  }
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = local_38;
  return auVar10;
}


