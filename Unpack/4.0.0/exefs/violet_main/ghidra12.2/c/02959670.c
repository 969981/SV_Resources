/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02959670; name: FUN_02959670
 */


undefined8 FUN_02959670(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(param_1 + 0x30));
  if ((plVar1 == (long *)0x0) || (uVar2 = (**(code **)(*plVar1 + 0x78))(), (uVar2 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


