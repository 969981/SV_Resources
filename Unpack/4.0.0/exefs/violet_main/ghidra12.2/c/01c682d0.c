/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c682d0; name: FUN_01c682d0
 */


void FUN_01c682d0(byte param_1)

{
  long lVar1;
  
  if ((param_1 < 2) && (lVar1 = FUN_01ea1620(), lVar1 != 0)) {
    FUN_01ea16d8((int)lVar1,param_1);
    return;
  }
  return;
}


