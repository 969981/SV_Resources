/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f90d0; name: FUN_001f90d0
 */


undefined8 FUN_001f90d0(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = param_2 ^ param_2 >> 0xc ^ param_2 >> 0x14;
  plVar1 = (long *)(*param_1 + (ulong)((int)param_1[3] - 1U & (uVar2 ^ uVar2 >> 4 ^ uVar2 >> 7)) * 8
                   );
  plVar4 = (long *)*plVar1;
  if (plVar4 == (long *)0x0) {
    uVar3 = 0xfffffe0b;
  }
  else {
    uVar2 = *(uint *)(plVar4 + 1);
    while (uVar2 != param_2) {
      plVar5 = (long *)*plVar4;
      if (plVar5 == (long *)0x0) {
        return 0xfffffe0b;
      }
      plVar1 = plVar4;
      plVar4 = plVar5;
      uVar2 = *(uint *)(plVar5 + 1);
    }
    *plVar1 = *plVar4;
    uVar3 = 0;
    param_1[2] = param_1[2] + -1;
  }
  return uVar3;
}


