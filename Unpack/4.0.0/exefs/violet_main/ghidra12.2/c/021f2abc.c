/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f2abc; name: FUN_021f2abc
 */


void FUN_021f2abc(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70));
  iVar2 = 3;
  if ((iVar1 + 1U & 0xff) < 3) {
    iVar2 = iVar1 + 1;
  }
  FUN_00eee290(*(undefined8 *)(param_1 + 0x70),param_2,iVar2);
  return;
}


