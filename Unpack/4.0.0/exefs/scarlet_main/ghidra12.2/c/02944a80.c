/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02944a80; name: FUN_02944a80
 */


void FUN_02944a80(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [40];
  
  uVar1 = FUN_02944360(param_1,4);
  plVar2 = (long *)FUN_0293d610(param_1,uVar1);
  uVar3 = (**(code **)(*plVar2 + 0x4d0))(plVar2,param_2);
  if ((uVar3 & 1) != 0) {
    local_60 = uVar1;
    local_5c = param_2;
    FUN_0293ee00(param_1,&local_60);
    local_60 = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_01246154(auStack_58);
    FUN_02943244(auStack_58,2,param_3);
    FUN_0294325c(auStack_58,uVar1);
    FUN_01907920(param_1,&local_60);
  }
  return;
}


