/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173f398; name: FUN_0173f398
 */


bool FUN_0173f398(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x36c);
  uVar2 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x370);
  cVar3 = FUN_00d9c750(uVar1,uVar2,param_2);
  cVar4 = FUN_00d9c750(uVar1,uVar2,param_3);
  return cVar3 == cVar4;
}


