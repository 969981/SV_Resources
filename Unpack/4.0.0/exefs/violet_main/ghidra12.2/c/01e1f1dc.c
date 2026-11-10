/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1f1dc; name: FUN_01e1f1dc
 */


void FUN_01e1f1dc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    lVar2 = *(long *)(param_1 + 0x78);
    FUN_00d66fec(lVar2 + 0x170);
    plVar1 = *(long **)(lVar2 + 0x488);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar2 + 0x30);
    }
  }
  *(undefined2 *)(param_1 + 0x40) = 0x100;
  return;
}


