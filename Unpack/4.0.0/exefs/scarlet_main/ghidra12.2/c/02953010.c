/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02953010; name: FUN_02953010
 */


uint FUN_02953010(undefined8 param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint local_80;
  undefined4 local_7c;
  undefined2 local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_5b;
  undefined8 local_53;
  undefined8 local_4b;
  undefined7 local_43;
  undefined1 uStack_3c;
  undefined7 uStack_3b;
  
  uVar2 = (**(code **)(*param_3 + 0x220))(param_3,0x14);
  if ((uVar2 & 1) == 0) {
    local_5c = 1;
    local_5b = 0;
    local_53 = 0;
    local_4b = 0;
    local_43 = 0;
    uStack_3c = 0;
    uStack_3b = 0;
    local_60 = 3;
    local_80 = param_2;
    local_7c = (**(code **)(*param_3 + 0x98))(param_3);
    local_70 = (ulong)param_2;
    local_78 = 0x14;
    uStack_68 = 0x22;
    uVar1 = FUN_01a042b0(param_1,&local_80);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


