/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346a820; name: FUN_0346a820
 */


void FUN_0346a820(long param_1,undefined4 param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar2 = *(uint *)(param_1 + 0x108);
    if (uVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0x100);
      plVar4 = plVar3;
      do {
        plVar1 = (long *)*plVar4;
        if ((plVar1[0x12] != 0) && (0 < *(short *)(plVar1[0x12] + 0x90))) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
          plVar3 = *(long **)(param_1 + 0x100);
          uVar2 = *(uint *)(param_1 + 0x108);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3 + uVar2);
    }
  }
  return;
}


