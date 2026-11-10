/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089344c; name: FUN_0089344c
 */


void FUN_0089344c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_047ff198 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_047ff198);
    if (iVar1 != 0) {
      DAT_047ff1a8 = 0x401;
      DAT_047ff1aa = 5;
      DAT_047ff1ab = 0;
      DAT_047ff1af = 0;
      DAT_047ff1b0 = 0x1040300010401;
      DAT_047ff1b8 = 0x5040100080001;
      __cxa_guard_release(&DAT_047ff198);
    }
  }
  if ((DAT_047ff1a0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_047ff1a0);
    if (iVar1 != 0) {
      DAT_047ff1c0 = 0x401;
      DAT_047ff1c2 = 5;
      DAT_047ff1c3 = 0;
      DAT_047ff1c7 = 0;
      DAT_047ff1c8 = 0x1040300010401;
      DAT_047ff1d0 = 0x1010500080001;
      __cxa_guard_release(&DAT_047ff1a0);
    }
  }
  *param_1 = &DAT_047ff1a8;
  *param_2 = &DAT_047ff1c0;
  return;
}


