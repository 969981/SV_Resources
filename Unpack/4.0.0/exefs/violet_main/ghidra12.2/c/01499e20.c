/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01499e20; name: FUN_01499e20
 */


bool FUN_01499e20(long param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_0124e528(param_1,0);
  bVar1 = FUN_01499e68(*(undefined8 *)(param_1 + 8));
  return bVar1 != 0 && (uint)bVar1 <= iVar2 + 1U;
}


