/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03469b20; name: FUN_03469b20
 */


void FUN_03469b20(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  
  nn::os::LockMutex((MutexType *)&DAT_048afc70);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar1 = (int)param_2 + (int)param_3;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    for (piVar4 = *(int **)(*param_1 + (ulong)(uVar1 - uVar2 * uVar3) * 8); piVar4 != (int *)0x0;
        piVar4 = *(int **)(piVar4 + 4)) {
      if ((*piVar4 == (int)param_2) && (*(long *)(piVar4 + 2) == param_3)) goto LAB_03469bfc;
    }
  }
  *param_4 = param_2;
  param_4[1] = param_3;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (fVar5 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar5 / (float)uVar3)) {
    FUN_03469cd0(param_1);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 == 0) goto LAB_03469bfc;
    param_2 = *param_4;
    param_3 = param_4[1];
  }
  uVar1 = (int)param_2 + (int)param_3;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  uVar1 = uVar1 - uVar2 * uVar3;
  param_4[2] = *(undefined8 *)(*param_1 + (ulong)uVar1 * 8);
  *(undefined8 **)(*param_1 + (ulong)uVar1 * 8) = param_4;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
LAB_03469bfc:
  nn::os::UnlockMutex((MutexType *)&DAT_048afc70);
  return;
}


