/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dd354; name: FUN_031dd354
 */


bool FUN_031dd354(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    DataMemoryBarrier(2,1);
    uVar2 = (uint)*(ulong *)*param_2;
    if (((DAT_04884450 & 1) == 0) || ((((uint)*(ulong *)*param_1 ^ uVar2) & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  iVar1 = (int)(*(ulong *)*param_1 >> 0x11);
  return (int)(*(ulong *)*param_2 >> 0x11) <= iVar1 && iVar1 <= (int)(uVar2 >> 2 & 0x7fff);
}


