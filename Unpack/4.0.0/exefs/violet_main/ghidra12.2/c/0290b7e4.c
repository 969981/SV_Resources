/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290b7e4; name: FUN_0290b7e4
 */


undefined4 FUN_0290b7e4(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if ((byte)(cVar1 - 2U) < 3) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar3 = 0xfffffffe;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  else {
    FUN_0290889c(param_1);
    uVar3 = 0;
  }
  return uVar3;
}


