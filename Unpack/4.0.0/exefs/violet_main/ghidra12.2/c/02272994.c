/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02272994; name: FUN_02272994
 */


bool FUN_02272994(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    plVar1 = (long *)(*(code *)**(undefined8 **)(lVar4 + 8))((undefined8 *)(lVar4 + 8));
    lVar2 = FUN_02272a38();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar3 & 1) != 0) {
          return false;
        }
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (*(long *)*param_2 != 0) {
          plVar1 = (long *)(*(long *)*param_2 + 0x30);
        }
        return *(long *)(lVar4 + 0xd0) == *plVar1;
      }
    }
  }
  return false;
}


