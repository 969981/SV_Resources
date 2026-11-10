/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ec2a4; name: FUN_028ec2a4
 */


void FUN_028ec2a4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    if (*(long **)(lVar2 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + -8) + 0x20))();
    }
    plVar1 = (long *)(lVar2 + -0x20);
    lVar2 = lVar2 + -0x38;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x20))();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


