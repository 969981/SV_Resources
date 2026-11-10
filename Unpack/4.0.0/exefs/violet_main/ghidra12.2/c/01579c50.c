/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01579c50; name: FUN_01579c50
 */


void FUN_01579c50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 < *(ulong *)(param_1 + 0x50)) {
    FUN_01579ca4(param_1 + 0x58,uVar1);
    *(ulong *)(param_1 + 0x48) = uVar1 + 8;
    return;
  }
  FUN_0157a0d4(param_1 + 0x40,param_2);
  return;
}


