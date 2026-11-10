/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353480c; name: FUN_0353480c
 */


undefined8 FUN_0353480c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  piVar5 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar7 = piVar5;
  if ((uVar3 != 0) && (*piVar5 != param_2)) {
    lVar6 = (ulong)uVar3 * 0x38;
    piVar8 = piVar5;
    do {
      lVar6 = lVar6 + -0x38;
      if (lVar6 == 0) goto LAB_0353489c;
      piVar7 = piVar8 + 0xe;
      piVar1 = piVar8 + 0xe;
      piVar8 = piVar7;
    } while (*piVar1 != param_2);
  }
  if (piVar7 == piVar5 + (ulong)uVar3 * 0xe) {
LAB_0353489c:
    uVar10 = *(uint *)((long)param_1 + 0xc);
    if (uVar3 < uVar10) {
LAB_035348e4:
      if (uVar3 < uVar10) {
        uVar3 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = uVar3 + 1;
        if (piVar5 != (int *)0x0) {
          piVar7 = piVar5 + (ulong)uVar3 * 0xe;
          *piVar7 = param_2;
          goto LAB_03534908;
        }
      }
    }
    else {
      iVar2 = uVar10 + (uVar10 >> 1);
      if (uVar10 == 0) {
        iVar2 = 1;
      }
      uVar10 = iVar2 + uVar10;
      piVar5 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar5,(ulong)uVar10 * 0x38);
      if (piVar5 != (int *)0x0) {
        *param_1 = piVar5;
        *(uint *)((long)param_1 + 0xc) = uVar10;
        goto LAB_035348e4;
      }
    }
    uVar9 = 2;
  }
  else {
LAB_03534908:
    piVar7[10] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    uVar4 = nn::os::GetSystemTick();
    uVar9 = 1;
    *(undefined8 *)(piVar7 + 0xc) = uVar4;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return uVar9;
}


