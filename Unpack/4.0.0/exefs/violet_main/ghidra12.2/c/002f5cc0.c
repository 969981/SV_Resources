/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f5cc0; name: FUN_002f5cc0
 */


long FUN_002f5cc0(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = FUN_0038be60();
  *param_1 = uVar1;
  lVar2 = FUN_0038c780(uVar1 << 3);
  if (*param_1 != 0) {
    uVar1 = 0;
    do {
      uVar3 = FUN_0038be70(uVar1);
      *(undefined8 *)(lVar2 + uVar1 * 8) = uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_1);
  }
  return lVar2;
}


