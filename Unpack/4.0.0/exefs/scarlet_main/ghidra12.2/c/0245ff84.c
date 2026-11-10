/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245ff84; name: FUN_0245ff84
 */


void FUN_0245ff84(undefined8 *param_1,long param_2,long param_3,undefined4 param_4,int *param_5)

{
  ulong uVar1;
  
  if ((param_5 == (int *)0x0) || (*param_5 != 3)) {
    *param_1 = 0;
    return;
  }
  switch(param_4) {
  case 2:
    uVar1 = (ulong)*(char *)(param_2 + param_3);
    break;
  case 3:
    uVar1 = (ulong)*(byte *)(param_2 + param_3);
    break;
  case 4:
    uVar1 = (ulong)*(short *)(param_2 + param_3);
    break;
  case 5:
    uVar1 = (ulong)*(ushort *)(param_2 + param_3);
    break;
  case 6:
    uVar1 = (ulong)*(int *)(param_2 + param_3);
    break;
  case 7:
    uVar1 = (ulong)*(uint *)(param_2 + param_3);
    break;
  case 8:
  case 9:
    uVar1 = *(ulong *)(param_2 + param_3);
    break;
  default:
    uVar1 = 0;
  }
  FUN_028b4530(uVar1,param_5);
  return;
}


