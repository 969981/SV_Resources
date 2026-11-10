/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f6a08; name: FUN_021f6a08
 */


void FUN_021f6a08(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0131c054(*(undefined8 *)(param_1 + 0x70));
  uVar2 = iVar1 + param_2;
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  FUN_00ef7530(*(undefined8 *)(param_1 + 0x70),uVar2);
  FUN_00f13b9c(param_1,1);
  return;
}


