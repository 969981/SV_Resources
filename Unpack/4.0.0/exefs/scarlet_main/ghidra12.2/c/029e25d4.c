/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e25d4; name: FUN_029e25d4
 */


undefined8 FUN_029e25d4(int *param_1,long *param_2)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_019367c0(param_2,param_1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar2 != 0)) {
    if ((ulong)param_2[1] < 9) {
      return 0;
    }
    if (param_2[1] - 8U < (long)param_1 + (uVar2 - *param_2)) {
      return 0;
    }
  }
  uVar2 = FUN_019c3824(param_1,param_2,6);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = (long)*param_1;
  if (6 < *(ushort *)((long)param_1 - lVar3)) {
    uVar2 = (ulong)((ushort *)((long)param_1 - lVar3))[3];
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
      uVar2 = FUN_028ffd54(param_2,(long)puVar1 + (ulong)*puVar1,4,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = (long)*param_1;
      if (*(ushort *)((long)param_1 - lVar3) < 7) goto LAB_029e26c0;
    }
    uVar2 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3));
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
      lVar3 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_029e26c4;
    }
  }
LAB_029e26c0:
  lVar3 = 0;
LAB_029e26c4:
  uVar2 = FUN_029e2c08(param_2,lVar3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  return 1;
}


