/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4310; name: FUN_001f4310
 */


undefined8 FUN_001f4310(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    do {
      while( true ) {
        lVar3 = *(long *)(param_1 + 8);
        uVar2 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20);
        if (param_3 <= uVar2) {
          uVar2 = param_3;
        }
        if (uVar2 != 0) break;
        uVar1 = FUN_001f4394(param_1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = FUN_001ed9b4(*(long *)(lVar3 + 0x20),param_2,uVar2);
      param_2 = param_2 + uVar2;
      param_3 = param_3 - uVar2;
      *(undefined8 *)(lVar3 + 0x20) = uVar1;
    } while (param_3 != 0);
  }
  return 0;
}


