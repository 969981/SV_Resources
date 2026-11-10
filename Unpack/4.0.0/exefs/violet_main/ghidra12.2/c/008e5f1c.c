/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e5f1c; name: FUN_008e5f1c
 */


void FUN_008e5f1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x12a8);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    do {
      if (lVar2 == param_2) {
        return;
      }
      lVar2 = *(long *)(lVar2 + 0x90);
    } while (lVar2 != 0);
    if (lVar1 != 0) {
      *(long *)(*(long *)(param_1 + 0x12b0) + 0x90) = param_2;
      goto LAB_008e5f5c;
    }
  }
  *(long *)(param_1 + 0x12a8) = param_2;
LAB_008e5f5c:
  *(long *)(param_1 + 0x12b0) = param_2;
  *(undefined8 *)(param_2 + 0x90) = 0;
  return;
}


