/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02463f84; name: FUN_02463f84
 */


void FUN_02463f84(undefined8 *param_1,int *param_2,short param_3,undefined8 param_4,int *param_5)

{
  ushort uVar1;
  uint *puVar2;
  ulong uVar3;
  
  if ((param_5 != (int *)0x0) && (*param_5 == 0)) {
    uVar1 = param_3 * 2 + 4;
    if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar3 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar3 != 0)) {
      puVar2 = (uint *)((long)param_2 + uVar3);
      FUN_028b3cc0((long)puVar2 + (ulong)*puVar2,param_5);
      return;
    }
  }
  *param_1 = 0;
  return;
}


