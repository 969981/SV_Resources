/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032be1c; name: FUN_0032be1c
 */


void FUN_0032be1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar1 = param_1 + 0x20;
  while( true ) {
    FUN_0038db40(lVar1);
    auVar6 = FUN_00342da0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
    lVar3 = auVar6._8_8_;
    uVar2 = auVar6._0_8_;
    FUN_0038db60(lVar1);
    auVar6 = FUN_00342da0(uVar2,lVar3,0);
    auVar6 = FUN_00342b00(auVar6._0_8_,auVar6._8_8_,param_2,0);
    FUN_0038db40(lVar1);
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == lVar3) break;
    FUN_0038db60(lVar1);
    thunk_FUN_00342a80(auVar6._0_8_,auVar6._8_8_,0);
    thunk_FUN_00342a80(uVar2,lVar3,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar6;
  FUN_0038db60(lVar1);
  thunk_FUN_00342a80(uVar4,lVar5,0);
  thunk_FUN_00342a80(uVar2,lVar3,0);
  return;
}


