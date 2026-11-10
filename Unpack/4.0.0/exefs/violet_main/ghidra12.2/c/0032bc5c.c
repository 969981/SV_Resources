/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032bc5c; name: FUN_0032bc5c
 */


long FUN_0032bc5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar2 = PTR_FUN_047cba38;
  uVar7 = 0;
  lVar1 = param_1 + 0x20;
  do {
    FUN_0038db40(lVar1);
    auVar8 = FUN_00342da0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
    lVar6 = auVar8._8_8_;
    uVar3 = auVar8._0_8_;
    FUN_0038db60(lVar1);
    lVar4 = FUN_003427d0(uVar3,lVar6,param_2,0);
    if (lVar4 == 0) {
      auVar8 = FUN_00342da0(uVar3,lVar6,0);
      lVar4 = FUN_0049e770(puVar2,8);
      if (lVar4 != 0) {
        FUN_00341404(lVar4,param_2);
      }
      uVar5 = FUN_0033bc30(param_3);
      auVar8 = FUN_00342850(auVar8._0_8_,auVar8._8_8_,lVar4,uVar5,0);
      FUN_0038db40(lVar1);
      if (*(long *)(param_1 + 0x18) == lVar6) {
        auVar9._8_8_ = *(long *)(param_1 + 0x18);
        auVar9._0_8_ = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
        lVar4 = param_3;
      }
      else {
        lVar4 = 0;
        auVar9 = auVar8;
      }
      FUN_0038db60(lVar1);
      thunk_FUN_00342a80(auVar9._0_8_,auVar9._8_8_,0);
    }
    else {
      lVar4 = FUN_0033bc88();
      if (lVar4 != 0) {
        FUN_0033ba0c(param_3);
        thunk_FUN_00342a80(uVar3,lVar6,0);
        return lVar4;
      }
      if (99 < uVar7) {
        auVar8 = FUN_0038e500(1);
        auVar9 = FUN_0038dd80(10,3);
        FUN_0038dee0(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_);
        FUN_0038e540();
      }
      lVar4 = 0;
    }
    thunk_FUN_00342a80(uVar3,lVar6,0);
    uVar7 = uVar7 + 1;
  } while (lVar4 == 0);
  return lVar4;
}


