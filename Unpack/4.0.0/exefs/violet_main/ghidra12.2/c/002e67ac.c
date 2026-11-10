/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e67ac; name: FUN_002e67ac
 */


bool FUN_002e67ac(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar3 = (long *)*plVar1;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar1;
    do {
      if (param_2 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar1) && (*(int *)((long)plVar2 + 0x1c) <= param_2)) goto LAB_002e67e8;
  }
  plVar2 = plVar1;
LAB_002e67e8:
  return plVar2 != plVar1;
}


