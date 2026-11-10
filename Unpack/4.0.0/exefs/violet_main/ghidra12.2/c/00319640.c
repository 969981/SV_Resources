/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319640; name: FUN_00319640
 */


bool FUN_00319640(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x80);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x9b) == '\0') {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(lVar2 + 0x78);
    if (lVar3 == 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      *plVar1 = lVar3;
      *(undefined8 *)(lVar3 + 0x80) = 0;
    }
    *(undefined1 *)(lVar2 + 0x9b) = 0;
  }
  *param_2 = lVar2;
  return lVar2 != 0;
}


