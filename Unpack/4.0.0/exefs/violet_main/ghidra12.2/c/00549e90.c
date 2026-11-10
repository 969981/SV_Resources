/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00549e90; name: FUN_00549e90
 */


void FUN_00549e90(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x50) == '\0') {
    *(undefined1 *)(lVar2 + 0x50) = 1;
    plVar1 = *(long **)(*(long *)(lVar2 + 0x30) + 0x20);
                    /* try { // try from 00549eb8 to 00549ebf has its CatchHandler @ 00549ec8 */
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
  }
  return;
}


