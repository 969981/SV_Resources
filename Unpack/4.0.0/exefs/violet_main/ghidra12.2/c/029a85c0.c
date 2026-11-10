/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a85c0; name: FUN_029a85c0
 */


uint FUN_029a85c0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    lVar3 = FUN_029a862c();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar1 & 1;
      }
    }
  }
  return 0;
}


