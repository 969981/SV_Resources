/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


