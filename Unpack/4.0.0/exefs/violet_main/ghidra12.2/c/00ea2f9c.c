/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea2f9c; name: FUN_00ea2f9c
 */


void FUN_00ea2f9c(char *param_1,code *param_2,ulong param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar3 == 0) {
      return;
    }
    plVar2 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
  }
  else {
    if (cVar1 == '\x03') {
      FUN_00ea33e4(0,param_1 + 8);
      return;
    }
    if ((cVar1 != '\x01') && (cVar1 != '\0')) {
      return;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar2 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar2);
  }
  (*param_2)();
  return;
}


