/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030aa74; name: FUN_0030aa74
 */


ulong FUN_0030aa74(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [32];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_2;
  if (param_2 == 0) {
    if ((int)param_1[5] == 0) {
      uVar6 = 0;
      goto LAB_0030ab14;
    }
    FUN_003673f0(auStack_50,"Truncated message");
    auVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0xc4a,auStack_50,0,0);
    param_2 = auVar8._0_8_;
  }
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = auVar8._0_8_;
    if ((param_3 & 1) != 0) {
      lVar5 = param_1[3];
      uVar7 = *(undefined8 *)(param_1[2] + 0x28);
      uVar4 = uVar6;
      if (4 < uVar6) {
        uVar4 = FUN_00350fb0(uVar6,auVar8._8_8_,uVar6);
      }
      FUN_00350c0c(uVar7,lVar5 + 0x8c0,uVar4);
    }
  }
LAB_0030ab14:
  plVar1 = param_1 + 4;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (long *)0x0) && (lVar5 == 1)) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  return uVar6;
}


