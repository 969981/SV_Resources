/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


