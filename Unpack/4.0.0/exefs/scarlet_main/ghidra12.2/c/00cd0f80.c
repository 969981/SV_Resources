/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd0f80; name: FUN_00cd0f80
 */


void FUN_00cd0f80(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 3)) {
    FUN_00cdfe08(param_1,param_2);
    return;
  }
  plVar1 = param_1 + 3;
  lVar4 = FUN_00cd1084(param_1,param_2 + (param_1[1] - *param_1 >> 3));
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 3,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lStack_60 = local_68 + (lVar3 - lVar2 >> 3) * 8;
  local_50 = local_68 + lVar4 * 8;
  local_58 = lStack_60;
  FUN_00cd12c8(&local_68,param_2);
  FUN_00cd10d4(param_1,&local_68);
  FUN_00cd117c(&local_68);
  return;
}


