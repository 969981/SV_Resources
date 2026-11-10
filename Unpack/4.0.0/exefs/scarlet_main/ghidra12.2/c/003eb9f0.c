/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003eb9f0; name: FUN_003eb9f0
 */


undefined8 FUN_003eb9f0(undefined8 *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((0 < *(int *)((long)param_1 + 0xc)) ||
     (lVar1 = FUN_003eb670(param_1,1), uVar2 = 0, lVar1 != 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)*param_1 = param_2;
    uVar2 = 1;
    *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  }
  return uVar2;
}


