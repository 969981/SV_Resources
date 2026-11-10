/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ebbe0; name: FUN_021ebbe0
 */


bool FUN_021ebbe0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)(lVar2 + 8))((undefined8 *)(lVar2 + 8));
    uVar1 = FUN_01750138();
    if (((uVar1 & 1) != 0) && (uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar1 & 1) == 0))
    {
      return *(long *)(lVar2 + 0xd0) == *(long *)*param_2;
    }
  }
  return false;
}


