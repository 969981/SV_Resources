/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fa5b0; name: FUN_003fa5b0
 */


void FUN_003fa5b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  
  if (param_3 == 0) {
    FUN_0049e4c0(&local_a0);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    local_30 = 0;
    uStack_38 = 0;
    local_40 = 0;
    lVar2 = FUN_0045b0f0(&local_a0,&local_60);
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_003f9c90(&local_60,param_3);
    if (iVar1 == 0) {
      return;
    }
  }
  if (param_4 == 0) {
    FUN_0049e4c0(auStack_28);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    local_70 = 0;
    uStack_78 = 0;
    local_80 = 0;
    lVar2 = FUN_0045b0f0(auStack_28,&local_a0);
    if (lVar2 != 0) goto LAB_003fa664;
  }
  else {
    iVar1 = FUN_003f9c90(&local_a0,param_4);
    if (iVar1 != 0) {
LAB_003fa664:
      FUN_0045b3e0(param_1,param_2,&local_60,&local_a0);
      return;
    }
  }
  return;
}


