/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034da7d8; name: FUN_034da7d8
 */


undefined8 FUN_034da7d8(long *param_1,short param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  short *psVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))();
  if ((puVar1 != (undefined8 *)0x0) &&
     (uVar2 = (ulong)*(uint *)(puVar1 + 1), *(uint *)(puVar1 + 1) != 0)) {
    psVar3 = (short *)*puVar1;
    do {
      if (*psVar3 == param_2) {
        return 1;
      }
      uVar2 = uVar2 - 1;
      psVar3 = psVar3 + 2;
    } while (uVar2 != 0);
  }
  return 0;
}


