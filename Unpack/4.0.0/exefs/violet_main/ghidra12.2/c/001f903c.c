/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f903c; name: FUN_001f903c
 */


undefined8 FUN_001f903c(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = *(uint *)(param_3 + 1);
  uVar1 = uVar2 ^ uVar2 >> 0xc ^ uVar2 >> 0x14;
  uVar3 = (ulong)((uVar1 ^ uVar1 >> 4 ^ uVar1 >> 7) & param_2 - 1U);
  plVar4 = *(long **)(param_1 + uVar3 * 8);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4;
    do {
      if (*(uint *)(plVar5 + 1) == uVar2) {
        return 0xfffffe0b;
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    *param_3 = (long)plVar4;
  }
  *(long **)(param_1 + uVar3 * 8) = param_3;
  return 0;
}


