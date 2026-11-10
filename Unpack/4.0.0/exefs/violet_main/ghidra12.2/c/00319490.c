/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319490; name: FUN_00319490
 */


void FUN_00319490(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (**(code **)(*(long *)(param_1 + 0x1050) + 0x10))(param_1 + 0x1050);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_2 + 0x9a) != '\0') {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  plVar1 = (long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x68);
  }
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(long *)(param_2 + 0x70) = lVar3;
  *plVar1 = param_2;
  *(long *)(param_1 + 0x78) = param_2;
  *(undefined1 *)(param_2 + 0x9a) = 1;
  return;
}


