/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023c08d0; name: FUN_023c08d0
 */


void FUN_023c08d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_023c0a48(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x80;
  }
  else {
    FUN_023c0b48(param_1,param_2);
  }
  return;
}


