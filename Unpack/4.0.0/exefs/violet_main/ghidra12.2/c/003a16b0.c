/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a16b0; name: FUN_003a16b0
 */


void FUN_003a16b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb0);
  *(undefined4 *)(lVar2 + 0x1f0) = 0;
  *(undefined8 *)(lVar2 + 0x1e8) = 0;
  lVar2 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(lVar2 + 0x1f8) = 0;
  *(undefined8 *)(lVar2 + 0x200) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x208) = 1000000;
  uVar1 = FUN_003b35d0();
  FUN_003e9560(uVar1,0x2d,0,*(long *)(param_1 + 0xb0) + 0x1f8);
  lVar2 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
  if (lVar2 != 0) {
    do {
      FUN_003c9930(*(undefined8 *)(lVar2 + 8));
      FUN_003a2cd0(lVar2);
      lVar2 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
    } while (lVar2 != 0);
  }
  return;
}


