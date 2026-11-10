/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eadab8; name: FUN_01eadab8
 */


void FUN_01eadab8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x58);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar6 != plVar3) {
    do {
      plVar1 = plVar6 + 0x31;
      while (*plVar6 == param_2) {
        plVar3 = (long *)FUN_011dbea0(plVar1,plVar3,plVar6);
        plVar2 = *(long **)(param_1 + 0x60);
        while (plVar2 != plVar3) {
          if ((char)plVar2[-0x2c] != '\0') {
            *(char *)(plVar2 + -0x2c) = '\0';
          }
          plVar5 = plVar2 + -0x31;
          plVar4 = plVar2 + -0x2f;
          plVar2 = plVar5;
          if ((char)*plVar4 != '\0') {
            *(char *)plVar4 = '\0';
          }
        }
        *(long **)(param_1 + 0x60) = plVar3;
        if (plVar6 == plVar3) {
          return;
        }
      }
      plVar6 = plVar1;
    } while (plVar1 != plVar3);
  }
  return;
}


