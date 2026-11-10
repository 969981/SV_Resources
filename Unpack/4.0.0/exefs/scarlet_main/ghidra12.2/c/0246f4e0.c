/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0246f4e0; name: FUN_0246f4e0
 */


void FUN_0246f4e0(long *param_1,long param_2)

{
  ulong uVar1;
  
  FUN_01465440(param_2 + 0x2c0);
  uVar1 = *(ulong *)(param_2 + 0x2d0);
  *(ulong *)(param_2 + 0x2d0) = uVar1 & 0xffffffffffffffec | 1;
  if (((uint)uVar1 >> 2 & 1) == 0) {
    *(ulong *)(param_2 + 0x2d0) = uVar1 & 0xffffffffffffffe0 | 9;
  }
  else {
    FUN_01a2eba0(param_2,1);
  }
  *param_1 = param_2 + 0x138;
                    /* WARNING: Could not recover jumptable at 0x0246f538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x138) + 0x10))();
  return;
}


