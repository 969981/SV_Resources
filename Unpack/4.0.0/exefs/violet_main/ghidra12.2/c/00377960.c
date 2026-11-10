/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00377960; name: FUN_00377960
 */


long FUN_00377960(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_80 [32];
  
  if ((ulong *)param_1[2] == (ulong *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar10 = (ulong *)param_1[2];
    do {
      puVar11 = (ulong *)puVar10[1];
      auVar12 = (*param_2)(param_3,*puVar10);
      uVar8 = auVar12._8_8_;
      if (auVar12._0_8_ != 0) {
        if (lVar9 == 0) {
          FUN_00367770(auStack_80,param_4);
          lVar9 = FUN_00351340("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc"
                               ,0x158,auStack_80,0,0);
        }
        lVar9 = FUN_00352130(lVar9,auVar12._0_8_);
      }
      if (uVar8 < 4) {
        plVar6 = (long *)(*puVar10 & 0xfffffffffffffffc);
        lVar7 = *plVar6;
        if (((lVar7 != 0) && (*(int *)(lVar7 + 8) == 0)) &&
           (uVar3 = *(uint *)(*plVar6 + 0x28), uVar3 < 0x18)) {
          param_1[1] = param_1[1] + -1;
          param_1[(ulong)uVar3 + 4] = 0;
        }
        uVar8 = puVar10[1];
        uVar2 = puVar10[2];
        if (uVar2 == 0) {
          param_1[2] = uVar8;
        }
        else {
          *(ulong *)(uVar2 + 8) = uVar8;
          uVar8 = puVar10[1];
        }
        puVar1 = (ulong *)(param_1 + 3);
        if (uVar8 != 0) {
          puVar1 = (ulong *)(uVar8 + 0x10);
        }
        *puVar1 = uVar2;
        *param_1 = *param_1 + -1;
        uVar3 = (uint)*puVar10 & 3;
        if (1 < uVar3) {
          uVar8 = *puVar10 & 0xfffffffffffffffc;
          plVar6 = (long *)(uVar8 + 0x40);
          do {
            lVar7 = *plVar6;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar5) {
              *plVar6 = lVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar7 + -1 == 0) {
            FUN_00376de0(uVar3,uVar8,*(undefined4 *)(uVar8 + 0x48));
          }
        }
      }
      else if (uVar8 != *puVar10) {
        FUN_00377680(param_1,puVar10,uVar8);
      }
      puVar10 = puVar11;
    } while (puVar11 != (ulong *)0x0);
  }
  return lVar9;
}


