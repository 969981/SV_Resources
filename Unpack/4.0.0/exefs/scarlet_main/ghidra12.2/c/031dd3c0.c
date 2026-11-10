/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031dd3c0; name: FUN_031dd3c0
 */


bool FUN_031dd3c0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  while( true ) {
    DataMemoryBarrier(2,1);
    uVar1 = *(ulong *)*param_1 ^ *(ulong *)*param_2;
    if (((DAT_04884450 & 1) == 0) || ((uVar1 & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  return (int)(*(ulong *)*param_1 >> 0x11) == (int)(*(ulong *)*param_2 >> 0x11) &&
         (uVar1 & 0x1fffc) == 0;
}


