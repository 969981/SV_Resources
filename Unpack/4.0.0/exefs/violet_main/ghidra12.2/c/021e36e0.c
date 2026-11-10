/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e36e0; name: FUN_021e36e0
 */


void FUN_021e36e0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_045a7900;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10));
  lVar3 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar3 != 0) {
    FUN_021e3944(param_1 + 0xd);
  }
  lVar3 = param_1[8];
  param_1[8] = 0;
  if (lVar3 != 0) {
    FUN_021e3d08(param_1 + 9);
  }
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    return;
  }
  lVar4 = param_1[2];
  if (param_1[2] == lVar3) {
    lVar4 = lVar3;
  }
  else {
    do {
      lVar5 = lVar4 + -0x30;
      if (*(char *)(lVar4 + -0x10) != '\0') {
        *(undefined1 *)(lVar4 + -0x10) = 0;
      }
      lVar4 = lVar5;
    } while (lVar3 != lVar5);
    lVar4 = param_1[1];
  }
  param_1[2] = lVar3;
  lVar3 = param_1[3];
  plVar1 = (long *)param_1[4];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar4,lVar3 - lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x021e37b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar3 - lVar4,8);
  return;
}


