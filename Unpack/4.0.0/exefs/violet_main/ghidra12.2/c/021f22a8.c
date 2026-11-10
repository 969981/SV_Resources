/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f22a8; name: FUN_021f22a8
 */


void FUN_021f22a8(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_00d75438(*(undefined8 *)(param_1 + 0x70));
  iVar1 = uVar2 - param_2;
  if (uVar2 < param_2 || iVar1 == 0) {
    iVar1 = 0;
  }
  FUN_00f14810(*(undefined8 *)(param_1 + 0x70),iVar1);
  return;
}


