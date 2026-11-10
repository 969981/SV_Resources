/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e61d8; name: FUN_022e61d8
 */


uint FUN_022e61d8(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    FUN_022e5af0();
    for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (puVar2 == &DAT_04844958) {
        uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar1 & 1;
      }
    }
  }
  return 0;
}


