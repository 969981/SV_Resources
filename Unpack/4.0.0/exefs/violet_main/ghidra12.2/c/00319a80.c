/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319a80; name: FUN_00319a80
 */


undefined4 FUN_00319a80(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar3 = 6;
  }
  uVar2 = (uint)param_1;
  uVar1 = 4;
  if (0x1fffff < uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 3;
  if (0x3fff < uVar2) {
    uVar3 = uVar1;
  }
  uVar1 = 2;
  if (0x7f < uVar2) {
    uVar1 = uVar3;
  }
  return uVar1;
}


