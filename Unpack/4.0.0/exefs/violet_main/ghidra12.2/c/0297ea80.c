/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297ea80; name: FUN_0297ea80
 */


bool FUN_0297ea80(long param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0298c710(*(undefined8 *)(param_1 + 0x20));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_0298d8c0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  }
  return bVar1;
}


