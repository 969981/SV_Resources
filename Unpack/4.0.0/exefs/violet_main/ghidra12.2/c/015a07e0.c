/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a07e0; name: FUN_015a07e0
 */


void FUN_015a07e0(long param_1,long *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((param_2 != (long *)0x0) && ((long *)*param_2 != (long *)0x0)) {
    uVar2 = (**(code **)(*(long *)*param_2 + 0x98))();
    bVar1 = (**(code **)(*(long *)*param_2 + 0x700))((long *)*param_2,(short)param_2[1]);
    if (bVar1 < 4) {
      lVar3 = *(long *)(param_1 + 0x20);
      FUN_015a08a4(*(undefined8 *)(lVar3 + 0x20),uVar2);
      FUN_0129aff0(*(undefined8 *)(lVar3 + 0x18),9,uVar2,bVar1);
      return;
    }
  }
  return;
}


