/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1ba8c; name: FUN_01e1ba8c
 */


void FUN_01e1ba8c(undefined1 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 0xf8);
  plVar3 = (long *)*plVar1;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar1;
    do {
      if ((ulong)plVar3[4] >= param_3) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(ulong)plVar3[4] < param_3];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar1) && ((ulong)plVar2[4] <= param_3)) {
      *param_1 = 0;
      if ((char)plVar2[6] == '\0') {
        return;
      }
      *(long *)(param_1 + 0x18) = plVar2[9];
      *(long *)(param_1 + 0x10) = plVar2[8];
      goto LAB_01e1bac8;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
LAB_01e1bac8:
  *param_1 = 1;
  return;
}


