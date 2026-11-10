/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0135d950; name: FUN_0135d950
 */


void FUN_0135d950(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_18;
  
  uVar3 = FUN_01db82a8();
  if ((uVar3 & 1) == 0) {
    FUN_01db836c(&local_18,param_2,param_3);
  }
  else {
    FUN_01db82ec(param_2,param_3);
  }
  plVar2 = local_18;
  local_18 = (long *)0x0;
  *param_1 = plVar2;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2 + 6;
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 7;
  }
  lVar5 = *plVar1;
  if (plVar2 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar2[8];
  }
  param_1[1] = *plVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  param_1[4] = 0;
  plVar4 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar4 = plVar2;
  }
  param_1[4] = plVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00d0c0a4(param_1);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


