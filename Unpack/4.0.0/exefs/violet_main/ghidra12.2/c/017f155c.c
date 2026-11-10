/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f155c; name: FUN_017f155c
 */


undefined8 FUN_017f155c(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x50))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar1 < 2000) && ((uVar1 < 1000 || (*(short *)(param_1 + 0xb6) != 0x86)))) &&
     ((uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
      (uVar3 & 1) == 0 || (*(short *)(param_1 + 0x9e) == 0x97)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff6;
  }
  return uVar2;
}


