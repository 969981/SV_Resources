/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196e8a4; name: FUN_0196e8a4
 */


void FUN_0196e8a4(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_01195854();
  uVar2 = FUN_0196e900();
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_01dc0660(uVar1,0);
  FUN_014e5120(param_1,0,0);
  FUN_01dd06cc(param_1,0);
  return;
}


