/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02950200; name: FUN_02950200
 */


uint FUN_02950200(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar3 = (**(code **)(*plVar2 + 0x88))(plVar2,0x1a5);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x5b0))(plVar2);
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}


