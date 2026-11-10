/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b48d0; name: FUN_003b48d0
 */


void FUN_003b48d0(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_2 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x3e0);
    *param_2 = lVar2;
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 1000);
    }
  }
  *param_3 = uVar1;
  return;
}


