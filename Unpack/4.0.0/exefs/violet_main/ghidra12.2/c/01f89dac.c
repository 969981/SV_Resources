/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f89dac; name: FUN_01f89dac
 */


void FUN_01f89dac(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x1b8) + 0x10))
                             (*(long **)(param_1 + 0x1b8),0x40,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0xe8))();
  }
  *plVar1 = 0;
  FUN_011450f8((undefined8 *)(param_1 + 0x1b8),plVar1 + 2,param_2);
  plVar1[1] = param_1 + 0x1a0;
  lVar2 = *(long *)(param_1 + 0x1a0);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(param_1 + 0x1a0) = plVar1;
  *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + 1;
  return;
}


