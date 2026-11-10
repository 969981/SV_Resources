/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02005504; name: FUN_02005504
 */


void FUN_02005504(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_0456f9b8;
  param_1[4] = &PTR_LAB_0456f9e8;
  FUN_0200562c(param_1 + 0x1d);
  FUN_0200566c(param_1 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xc));
  lVar4 = param_1[5];
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[6];
  lVar3 = lVar4;
  if (lVar5 != lVar4) {
    FUN_00db239c(lVar5 + -0x40);
    if ((lVar5 + -0x40 != lVar4) && (FUN_00db239c(lVar5 + -0x80), lVar5 + -0x80 != lVar4)) {
      do {
        FUN_00db239c(lVar5 + -0xc0);
        lVar5 = lVar5 + -0x40;
      } while (lVar4 + 0x80 != lVar5);
    }
    lVar3 = param_1[5];
  }
  param_1[6] = lVar4;
  lVar4 = param_1[7];
  plVar1 = (long *)param_1[8];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x020055cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


