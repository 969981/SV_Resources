/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b47a0; name: FUN_003b47a0
 */


void FUN_003b47a0(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x7c0);
  *param_2 = lVar2;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7c8);
  }
  *param_3 = uVar1;
  return;
}


