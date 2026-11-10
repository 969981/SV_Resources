/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02464608; name: FUN_02464608
 */


void FUN_02464608(undefined8 *param_1,int *param_2,short param_3,undefined4 param_4,int *param_5)

{
  ushort uVar1;
  ulong uVar2;
  
  if ((param_5 == (int *)0x0) || (*param_5 != 3)) {
    *param_1 = 0;
    return;
  }
  switch(param_4) {
  case 2:
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      uVar2 = (ulong)*(char *)((long)param_2 + uVar2);
      goto LAB_02464778;
    }
    break;
  case 3:
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + uVar2);
      goto LAB_02464778;
    }
    break;
  case 4:
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      uVar2 = (ulong)*(short *)((long)param_2 + uVar2);
      goto LAB_02464778;
    }
    break;
  case 5:
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      uVar2 = (ulong)*(ushort *)((long)param_2 + uVar2);
      goto LAB_02464778;
    }
    break;
  case 6:
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      uVar2 = (ulong)*(int *)((long)param_2 + uVar2);
      goto LAB_02464778;
    }
    break;
  case 7:
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      uVar2 = (ulong)*(uint *)((long)param_2 + uVar2);
      goto LAB_02464778;
    }
    break;
  case 8:
  case 9:
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      uVar2 = *(ulong *)((long)param_2 + uVar2);
      goto LAB_02464778;
    }
  }
  uVar2 = 0;
LAB_02464778:
  FUN_028b4530(uVar2,param_5);
  return;
}


