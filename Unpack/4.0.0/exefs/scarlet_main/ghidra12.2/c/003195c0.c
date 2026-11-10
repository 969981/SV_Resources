/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003195c0; name: FUN_003195c0
 */


void FUN_003195c0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (**(code **)(*(long *)(param_1 + 0x1050) + 0x10))(param_1 + 0x1050);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_2 + 0x9b) != '\0') {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  plVar1 = (long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x78);
  }
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(long *)(param_2 + 0x80) = lVar3;
  *plVar1 = param_2;
  *(long *)(param_1 + 0x88) = param_2;
  *(undefined1 *)(param_2 + 0x9b) = 1;
  return;
}


