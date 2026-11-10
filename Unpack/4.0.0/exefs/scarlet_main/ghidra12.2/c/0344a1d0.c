/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344a1d0; name: FUN_0344a1d0
 */


void FUN_0344a1d0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_4;
  uVar1 = param_3 >> 0xc;
  if (((param_3 >> 0x10 ^ param_3 >> 0x15) & 1) != 0) {
    uVar1 = param_3 >> 0xc & 0xff9cf | 0x600;
  }
  if ((param_3 & 0xf00) == 0x100) {
    param_3 = param_3 & 0xfff | uVar1 << 0xc;
  }
  uVar1 = uVar2 >> 0xc;
  if ((((uint)((ulong)param_4 >> 0x10) & 0xffff ^ uVar2 >> 0x15) & 1) != 0) {
    uVar1 = uVar2 >> 0xc & 0xff9cf | 0x600;
  }
  if ((uVar2 & 0xf00) == 0x100) {
    uVar2 = uVar2 & 0xfff | uVar1 << 0xc;
  }
  FUN_034d2278(0,0,0,param_1,0,param_3,uVar2,param_5,0);
  return;
}


