/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e5c38; name: FUN_030e5c38
 */


void FUN_030e5c38(long param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int local_50 [2];
  int local_48 [2];
  undefined4 local_40 [2];
  int local_38 [2];
  
  local_50[0] = *param_2;
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)local_50[0] * 0x10;
  if ((int)*(short *)(lVar2 + 10) + (int)*(short *)(lVar2 + 8) < 0x17) {
    uVar1 = *param_3;
    local_48[0] = local_50[0];
    lVar2 = FUN_030e7a5c(param_1 + 0x10,local_48);
    if (lVar2 == 0) {
      uVar4 = 0xffffffff00000000;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulong)*(uint *)(lVar2 + 4);
      uVar4 = (lVar2 - *(long *)(param_1 + 0x20)) * 0x20000000;
    }
    local_38[0] = local_48[0];
    local_40[0] = uVar1;
    FUN_030e80bc(param_1,param_1 + 0x10,uVar3 | uVar4,local_38,local_40,param_4);
  }
  else {
    uVar1 = *param_3;
    lVar2 = FUN_030e7e50(param_1 + 0x30,local_50);
    if (lVar2 == 0) {
      uVar4 = 0xffffffff00000000;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulong)*(uint *)(lVar2 + 4);
      uVar4 = (lVar2 - *(long *)(param_1 + 0x40)) * 0x20000000;
    }
    local_38[0] = local_50[0];
    local_40[0] = uVar1;
    FUN_030e81fc(param_1,param_1 + 0x30,uVar3 | uVar4,local_38,local_40,param_4);
  }
  return;
}


