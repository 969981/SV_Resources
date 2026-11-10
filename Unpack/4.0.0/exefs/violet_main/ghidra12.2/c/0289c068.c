/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289c068; name: FUN_0289c068
 */


void FUN_0289c068(long param_1,byte *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x40);
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar3 != plVar1) {
    do {
      if ((*plVar3 != 0) && (uVar2 = FUN_013fcabc(), uVar2 == *param_2)) goto LAB_0289c0b4;
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    plVar3 = plVar1;
LAB_0289c0b4:
    if (plVar3 != *(long **)(param_1 + 0x48)) {
      FUN_0289a2e4(*plVar3,param_2 + 8);
      return;
    }
  }
  return;
}


