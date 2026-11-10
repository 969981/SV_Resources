/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0178d7e8; name: FUN_0178d7e8
 */


long FUN_0178d7e8(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 * 0xc,4);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*param_1 + 0xe8))();
  }
  return lVar1;
}


