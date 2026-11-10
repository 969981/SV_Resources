/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c2944; name: FUN_008c2944
 */


void FUN_008c2944(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (0 < (int)param_1[10]) {
    plVar2 = param_1 + 8;
    lVar1 = *plVar2;
    uVar3 = *(undefined8 *)(param_2 + 0xf8);
    FUN_008f0d9c(0,0,0,0,param_4,lVar1 + 0x40,0);
    *(long *)(param_2 + 0xf8) = lVar1 + 0x40;
    FUN_00892e3c(param_2,param_4);
    FUN_008c214c(plVar2,param_2,param_3,param_4,2);
    FUN_00d8d070(param_4,0x80);
    FUN_008f110c(param_4,0x20);
    *(undefined8 *)(param_2 + 0xf8) = uVar3;
    FUN_00892e3c(param_2,param_4);
    *(long *)(param_3 + (long)*(int *)(param_3 + 0xd0) * 8 + 0xb8) = *plVar2 + 8;
    *(int *)(param_3 + 0xd0) = *(int *)(param_3 + 0xd0) + 1;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
  for (plVar2 = (long *)param_1[0x13]; plVar2 != param_1 + 0x12; plVar2 = (long *)plVar2[1]) {
    (**(code **)(plVar2[-1] + 0x28))(plVar2 + -1,param_2,param_3,param_4);
  }
  if ((0 < (int)param_1[10]) && (0 < *(int *)(param_3 + 0xd0))) {
    *(int *)(param_3 + 0xd0) = *(int *)(param_3 + 0xd0) + -1;
  }
  return;
}


