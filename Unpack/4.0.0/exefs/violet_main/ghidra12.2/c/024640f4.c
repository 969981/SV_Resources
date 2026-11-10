/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024640f4; name: FUN_024640f4
 */


void FUN_024640f4(undefined8 *param_1,int *param_2,short param_3,undefined8 param_4,int *param_5)

{
  ushort uVar1;
  ulong uVar2;
  
  if ((param_5 != (int *)0x0) && (*param_5 == 1)) {
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar2 != 0)) {
      FUN_028b3f88((long)param_2 + uVar2,param_5);
      return;
    }
  }
  *param_1 = 0;
  return;
}


