/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9090; name: FUN_001f9090
 */


void FUN_001f9090(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = param_2 ^ param_2 >> 0xc ^ param_2 >> 0x14;
  for (plVar2 = *(long **)(*param_1 +
                          (ulong)((int)param_1[3] - 1U & (uVar1 ^ uVar1 >> 4 ^ uVar1 >> 7)) * 8);
      (plVar2 != (long *)0x0 && (*(uint *)(plVar2 + 1) != param_2)); plVar2 = (long *)*plVar2) {
  }
  return;
}


