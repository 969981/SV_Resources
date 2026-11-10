/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00373ce0; name: FUN_00373ce0
 */


void FUN_00373ce0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_50 [32];
  
  if (((*(byte *)(param_1 + 0xb8) & 1) != 0) && (*(char *)(param_1 + 0xb9) == '\0')) {
    FUN_0038db40(param_1 + 0x68);
                    /* try { // try from 00373d14 to 00373d4b has its CatchHandler @ 00373e34 */
    FUN_003673f0(auStack_50,"Server Shutdown");
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/server.cc",0x3eb,
                         auStack_50,0,0);
    FUN_00373bd0(param_1,uVar6);
                    /* try { // try from 00373d4c to 00373d53 has its CatchHandler @ 00373e30 */
    FUN_0038db60(param_1 + 0x68);
    if ((*(long *)(param_1 + 0xe8) == 0) &&
       (*(ulong *)(param_1 + 0x100) <= *(ulong *)(param_1 + 0x108))) {
      *(undefined1 *)(param_1 + 0xb9) = 1;
      lVar7 = *(long *)(param_1 + 0xc0);
      if (*(long *)(param_1 + 200) != lVar7) {
        uVar8 = 0;
        plVar1 = (long *)(param_1 + 0x110);
        do {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar2 = (undefined8 *)(lVar7 + uVar8 * 0x80);
          FUN_00371820(puVar2[1],*puVar2,0,&LAB_00374110,param_1,puVar2 + 2,0);
          lVar7 = *(long *)(param_1 + 0xc0);
          uVar8 = uVar8 + 1;
        } while (uVar8 < (ulong)(*(long *)(param_1 + 200) - lVar7 >> 7));
      }
    }
    else {
      auVar9 = FUN_0038e500(1);
      auVar9 = FUN_0038dfd0(auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(param_1 + 0x118),
                            *(undefined8 *)(param_1 + 0x120));
      auVar10 = FUN_0038ded0(1,3);
      iVar5 = FUN_0038dcf0(auVar9._0_8_,auVar9._8_8_,auVar10._0_8_,auVar10._8_8_);
      if (-1 < iVar5) {
        auVar9 = FUN_0038e500(1);
        *(undefined1 (*) [16])(param_1 + 0x118) = auVar9;
      }
    }
  }
  return;
}


