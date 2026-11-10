/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002999b0; name: FUN_002999b0
 */


void FUN_002999b0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_180 [176];
  undefined8 local_d0 [19];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((*(char *)(param_1 + 0x1a8) != '\0') && (*(char *)(param_1 + 0x1a9) == '\0')) {
    if (*(char *)(param_1 + 0x1aa) != '\0') {
      plVar6 = *(long **)(param_1 + 0x20);
      FUN_003673f0(local_d0,"Resolver transient failure");
      uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/fake/fake_resolver.cc"
                           ,0x90,local_d0,0,0);
      uVar4 = FUN_00351770(uVar4,3,0xe);
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar4);
      *(undefined1 *)(param_1 + 0x1aa) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      local_d0[0] = 0;
      local_28 = 0;
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
                    /* try { // try from 00299a64 to 00299aa7 has its CatchHandler @ 00299b30 */
      FUN_002814ac(local_d0,param_1 + 0x40);
      puVar3 = local_38;
      uVar4 = *(undefined8 *)(param_1 + 0xd8);
      if (local_38 != (undefined8 *)0x0) {
        plVar6 = local_38 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)*local_38)(local_38);
          FUN_0049e790(PTR_LAB_047cba48,puVar3);
        }
      }
      local_30 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      local_38 = (undefined8 *)uVar4;
      local_28 = FUN_00343910(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x28));
      plVar6 = *(long **)(param_1 + 0x20);
      FUN_00330290(auStack_180,local_d0);
                    /* try { // try from 00299ac4 to 00299acf has its CatchHandler @ 00299b20 */
      (**(code **)(*plVar6 + 0x10))(plVar6,auStack_180);
      FUN_00330188(auStack_180);
      *(undefined1 *)(param_1 + 0x38) = 0;
      FUN_00330188(local_d0);
      return;
    }
  }
  return;
}


