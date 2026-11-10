/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f5640; name: FUN_002f5640
 */


long FUN_002f5640(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  long *plVar7;
  char *local_f8;
  undefined8 uStack_f0;
  char *local_c8;
  size_t local_c0;
  char *local_98;
  undefined8 uStack_90;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  
  lVar5 = FUN_002f5890(param_2);
  if (lVar5 == 0) {
    if (param_1 != (char *)0x0) {
      sVar6 = strlen(param_1);
      iVar4 = FUN_002f5920(param_2,param_1,sVar6);
      if (iVar4 == 0) {
        local_98 = "Peer name ";
        uStack_90 = 10;
        local_c8 = param_1;
        local_c0 = strlen(param_1);
        local_f8 = " is not in peer certificate";
        uStack_f0 = 0x1b;
        FUN_00395a70(local_68,&local_98,&local_c8,&local_f8);
        uVar1 = (ulong)local_68 | 1;
        if ((local_68[0] & 1) != 0) {
          uVar1 = local_58;
        }
                    /* try { // try from 002f573c to 002f575f has its CatchHandler @ 002f579c */
        FUN_00367770(auStack_50,uVar1);
        lVar5 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                             ,0x3b,auStack_50,0,0);
        if ((local_68[0] & 1) == 0) {
          return lVar5;
        }
        FUN_0049e790(PTR_LAB_047cba48,local_58);
        return lVar5;
      }
    }
    FUN_002f5d20(&local_98,param_2,&DAT_03c24d26);
    plVar7 = (long *)*param_3;
    if (plVar7 != (long *)0x0) {
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        FUN_00270ba4(plVar7);
        FUN_0049e790(PTR_LAB_047cba48,plVar7);
      }
    }
    lVar5 = 0;
    *param_3 = local_98;
  }
  return lVar5;
}


