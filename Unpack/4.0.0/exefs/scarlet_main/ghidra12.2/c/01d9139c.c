/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9139c; name: FUN_01d9139c
 */


void FUN_01d9139c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_0457f348;
  param_1[4] = &PTR_LAB_0457f390;
  param_1[5] = &PTR_LAB_0457f3b0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3a));
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 0x20))();
  }
  lVar5 = param_1[0x31];
  if (lVar5 != 0) {
    lVar1 = param_1[0x33];
    plVar2 = (long *)param_1[0x34];
    param_1[0x32] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,4);
        goto LAB_01d9141c;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
  }
LAB_01d9141c:
  FUN_020d9098(param_1 + 0x24);
  FUN_00db239c(param_1 + 0x1c);
  FUN_020d90d8(param_1 + 0xf);
  FUN_00db239c(param_1 + 7);
  return;
}


