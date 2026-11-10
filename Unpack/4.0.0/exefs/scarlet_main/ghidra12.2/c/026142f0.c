/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026142f0; name: FUN_026142f0
 */


long FUN_026142f0(int *param_1,int *param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    uVar3 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (ulong)*(ushort *)((long)param_2 + uVar2);
    }
  }
  if (((uint)uVar3 < (uint)*(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar3 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + uVar3), uVar3 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar3);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}


