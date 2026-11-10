/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1b964; name: FUN_00c1b964
 */


long FUN_00c1b964(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  if (param_2 != param_1) {
    uVar1 = FUN_00c1b964();
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    lVar2 = param_2;
  }
  return lVar2;
}


