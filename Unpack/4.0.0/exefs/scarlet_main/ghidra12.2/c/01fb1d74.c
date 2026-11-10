/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb1d74; name: FUN_01fb1d74
 */


void FUN_01fb1d74(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_0456a0a0;
  param_1[4] = &PTR_LAB_0456a0d0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x25));
  if (*(char *)(param_1 + 0x11) != '\0') {
    FUN_00db239c(param_1 + 0x1d);
    FUN_00db239c(param_1 + 0x15);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  lVar5 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (long *)param_1[0xe];
  uVar2 = param_1[0xf];
  uVar6 = param_1[0x10];
  uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar5,uVar2,uVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01fb1e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar6);
  return;
}


