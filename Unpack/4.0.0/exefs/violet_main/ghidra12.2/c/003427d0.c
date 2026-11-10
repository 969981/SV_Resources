/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003427d0; name: FUN_003427d0
 */


undefined8 FUN_003427d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    do {
      lVar2 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_2 + 8),param_3,param_4);
      if (lVar2 == 0) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      lVar1 = 0x18;
      if (lVar2 < 1) {
        lVar1 = 0x20;
      }
      param_2 = *(long *)(param_2 + lVar1);
    } while (param_2 != 0);
  }
  return 0;
}


