/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001296b0; name: FUN_001296b0
 */


void FUN_001296b0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(char *)(param_2 + 10) != '\0') {
    uVar2 = 0;
    do {
      lVar1 = FUN_00129fd0(param_1,9,0x28);
      *(long *)(lVar1 + 0x10) = lVar1 + 0x18;
      *(undefined1 *)(lVar1 + 0x20) = 0;
      *(long *)(param_2 + 0x20 + uVar2 * 8) = lVar1;
      if (((*(byte *)(param_2 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar1 + 9) & 0x18) != 0)) {
        FUN_00129d70(param_1,param_2,lVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_2 + 10));
  }
  return;
}


