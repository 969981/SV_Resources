/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb73cc; name: FUN_01eb73cc
 */


uint FUN_01eb73cc(long param_1,undefined8 param_2,byte param_3,undefined1 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *local_60 [4];
  byte local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  plVar4 = *(long **)(param_1 + 0xd0);
  uVar2 = 0;
  if (plVar4 != (long *)0x0) {
    local_40 = param_3 & 1;
    local_3f = param_4;
    local_38 = param_2;
    FUN_016947d8(local_60);
    local_14 = 6;
    if (local_60[0] == (undefined8 *)0x0) {
      uVar3 = 0;
      uVar1 = 0;
    }
    else {
      FUN_00e5f2bc(auStack_18,&local_14,local_60[0] + 1);
      FUN_01eb7480(auStack_18,&local_40,local_60[0] + 1);
      uVar3 = *local_60[0];
      uVar1 = *(undefined4 *)(local_60[0] + 3);
    }
    uVar2 = (**(code **)(*plVar4 + 0x68))(plVar4,uVar3,uVar1,&local_38);
    FUN_01694aa8(local_60);
  }
  return uVar2 & 1;
}


