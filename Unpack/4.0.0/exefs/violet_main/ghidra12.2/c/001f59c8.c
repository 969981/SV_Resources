/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f59c8; name: FUN_001f59c8
 */


undefined8 FUN_001f59c8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0xe4) < 2) {
    if (param_2 < *(ulong *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(ulong *)(param_1 + 0xd0) = param_2;
    }
    *(ulong *)(param_1 + 200) = param_2;
    *(ulong *)(param_1 + 0x30) = param_2;
    FUN_001f58e4(param_1,0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffdf9;
  }
  return uVar1;
}


