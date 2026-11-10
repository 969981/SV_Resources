/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016910cc; name: FUN_016910cc
 */


void FUN_016910cc(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_021f6a9c(*(undefined8 *)(param_1 + 0x70));
  iVar1 = 0;
  if (param_2 <= (uVar2 & 0xff)) {
    iVar1 = (uVar2 & 0xff) - param_2;
  }
  FUN_020e66a0(param_1,iVar1);
  return;
}


