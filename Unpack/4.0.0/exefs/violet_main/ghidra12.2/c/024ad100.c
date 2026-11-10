/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ad100; name: FUN_024ad100
 */


void FUN_024ad100(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 0xf0);
  *(ulong *)(param_1 + 0xf0) = uVar1;
  if (10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_024ad570(param_1,param_2,*(undefined8 *)(param_2 + 0xf0),param_1);
  return;
}


