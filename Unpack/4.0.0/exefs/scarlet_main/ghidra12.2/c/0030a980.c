/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030a980; name: FUN_0030a980
 */


ulong FUN_0030a980(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_50 [32];
  
  uVar3 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar3 = param_2[1];
  }
  if (*(uint *)(param_1 + 0x28) < uVar3) {
    FUN_003673f0(auStack_50,"Too many bytes in stream");
    auVar11 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xc38,auStack_50,0,0);
    uVar7 = auVar11._0_8_;
    lVar6 = *(long *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    uVar3 = uVar7;
    if (4 < uVar7) {
      uVar3 = FUN_00350fb0(uVar7,auVar11._8_8_,uVar7);
    }
    FUN_00350c0c(uVar8,lVar6 + 0x8c0,uVar3);
    puVar4 = (undefined8 *)*param_2;
    if ((puVar4 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (*(code *)puVar4[3])(puVar4[4]);
      }
    }
  }
  else {
    uVar7 = 0;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) - (int)uVar3;
    if (param_3 != (long *)0x0) {
      lVar6 = *param_2;
      lVar10 = param_2[3];
      lVar9 = param_2[2];
      param_3[1] = param_2[1];
      *param_3 = lVar6;
      param_3[3] = lVar10;
      param_3[2] = lVar9;
    }
  }
  return uVar7;
}


