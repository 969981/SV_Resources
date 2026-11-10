/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001da118; name: FUN_001da118
 */


bool FUN_001da118(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    bVar5 = false;
  }
  else {
    lVar2 = FUN_001d14b8(*(undefined8 *)(param_1 + 0xd8));
    lVar3 = FUN_001d14c4(*(undefined8 *)(param_1 + 0xd8));
    if (*(long **)(param_2 + 0x4c8) == (long *)0x0) {
      lVar4 = -2;
      bVar5 = false;
    }
    else {
      lVar4 = *(long *)(**(long **)(param_2 + 0x4c8) + 0xf0);
      bVar5 = 0 < lVar2 && lVar2 < lVar4;
    }
    if (0 < lVar3) {
      bVar5 = (bool)(bVar5 | lVar3 < *(long *)(param_2 + 0x40));
    }
    pcVar1 = "TRUE";
    if (bVar5 == false) {
      pcVar1 = "FALSE";
    }
    FUN_001db818(param_1,"Conn: %ld (%p) Receive pipe weight: (%ld/%ld), penalized: %s\n",
                 *(undefined8 *)(param_2 + 0x60),param_2,lVar4,*(long *)(param_2 + 0x40),pcVar1);
  }
  return bVar5;
}


