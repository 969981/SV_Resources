/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012afb74; name: FUN_012afb74
 */


void FUN_012afb74(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  undefined8 *puStack_38;
  
  FUN_012b0ee0();
  *param_1 = &PTR_FUN_045a8a60;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = &PTR_LAB_045a8a90;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  plVar3 = param_1 + 5;
  *plVar3 = 0;
  FUN_012b1eec(param_1 + 8);
  lVar1 = *plVar3;
  if ((ulong)(param_1[7] - lVar1 >> 3) >> 5 < 0x271) {
    lVar2 = param_1[6];
    local_40 = 0;
    puStack_38 = param_1 + 8;
    local_58 = (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],160000,8);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[8] + 0xe8))();
    }
    lStack_50 = local_58 + (lVar2 - lVar1 >> 3) * 8;
    local_40 = local_58 + 160000;
    local_48 = lStack_50;
    FUN_012afc8c(plVar3,&local_58);
    FUN_012afcf4(&local_58);
  }
  return;
}


