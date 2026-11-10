/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fe918; name: FUN_007fe918
 */


void FUN_007fe918(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_48 [4];
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_35;
  int local_30 [4];
  
  plVar1 = (long *)FUN_007ec544();
  uVar4 = *(undefined4 *)((long)param_2 + 0xc);
  lVar3 = *param_2;
  FUN_007ebe58(local_30,plVar1,lVar3,uVar4);
  local_36 = local_30[0] == 0;
  if ((bool)local_36) {
    uVar4 = (undefined4)plVar1[6];
    lVar3 = plVar1[5];
  }
  local_38 = 0x100;
  local_35 = 0;
  local_48[0] = 0x2c000000;
  lVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,local_48,uVar4,&local_38);
  if (lVar2 != 0) {
    FUN_007eba90(local_48,plVar1,lVar3);
    FUN_018ff39c(local_30,local_48);
  }
  return;
}


