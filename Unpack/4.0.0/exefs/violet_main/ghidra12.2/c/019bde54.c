/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bde54; name: FUN_019bde54
 */


void FUN_019bde54(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *local_28;
  
  plVar2 = *(long **)(param_1 + 0x28);
  plVar1 = plVar2;
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = plVar2 + *(long *)(param_1 + 0x30) * 4;
  }
  if (plVar1 != plVar2) {
    do {
      if ((((char)plVar2[3] == '\0') && ((*plVar2 == 0 || (*(short *)(*plVar2 + 0x1a) == 0)))) ||
         (plVar2[2] == 0)) {
        FUN_0289a248(&local_28,param_1 + 8);
        plVar2 = local_28;
      }
      else {
        plVar2 = plVar2 + 4;
      }
      plVar1 = *(long **)(param_1 + 0x28);
      if (*(long *)(param_1 + 0x30) != 0) {
        plVar1 = *(long **)(param_1 + 0x28) + *(long *)(param_1 + 0x30) * 4;
      }
    } while (plVar1 != plVar2);
  }
  return;
}


