/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03105c04; name: FUN_03105c04
 */


void FUN_03105c04(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  plVar1 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar1 != (long *)0x0) {
    *param_1 = (ulong)plVar1 | 1;
    puVar3 = param_1;
    do {
      puVar4 = (ulong *)(plVar1 + 1);
      plVar2 = (long *)(*puVar4 & 0xfffffffffffffffc);
      if ((*puVar4 & 3) == 0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        *puVar3 = *puVar3 & 3 | (ulong)plVar2;
        puVar4 = puVar3;
      }
      plVar1 = plVar2;
      puVar3 = puVar4;
    } while (plVar2 != (long *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}


