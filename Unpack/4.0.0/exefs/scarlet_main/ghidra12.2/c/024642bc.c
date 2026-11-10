/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024642bc; name: FUN_024642bc
 */


void FUN_024642bc(undefined8 *param_1,int *param_2,short param_3,undefined4 param_4,
                 undefined8 param_5)

{
  ushort uVar1;
  uint *puVar2;
  ulong uVar3;
  
  uVar1 = param_3 * 2 + 4;
  if ((uVar1 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar3 = (ulong)*(ushort *)(((long)param_2 - (long)*param_2) + (ulong)uVar1), uVar3 != 0)) {
    puVar2 = (uint *)((long)param_2 + uVar3);
    FUN_028b4250((long)puVar2 + (ulong)*puVar2,param_4,param_5);
    return;
  }
  *param_1 = 0;
  return;
}


