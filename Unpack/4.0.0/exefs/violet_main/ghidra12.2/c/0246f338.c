/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0246f338; name: FUN_0246f338
 */


void FUN_0246f338(long *param_1,undefined1 param_2 [16],long param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_3 + 0x2d0);
  *(long *)(param_3 + 0x278) = param_2._8_8_;
  *(long *)(param_3 + 0x270) = param_2._0_8_;
  *(ulong *)(param_3 + 0x2d0) = uVar1 & 0xffffffffffffffec | 1;
  if (((uint)uVar1 >> 2 & 1) == 0) {
    *(ulong *)(param_3 + 0x2d0) = uVar1 & 0xffffffffffffffe0 | 9;
  }
  else {
    FUN_01a2eba0(param_3,1);
  }
  *param_1 = param_3 + 0x138;
                    /* WARNING: Could not recover jumptable at 0x0246f38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x138) + 0x10))();
  return;
}


