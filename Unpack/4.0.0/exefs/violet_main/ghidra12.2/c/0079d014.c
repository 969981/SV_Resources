/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079d014; name: FUN_0079d014
 */


void FUN_0079d014(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_047d0a08;
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x1150) != '\0')) {
    if (param_2 == 2) {
      FUN_007cdbcc(lVar1);
      return;
    }
    if (param_2 == 1) {
      FUN_007cdbbc(lVar1,param_3);
      FUN_007cd7e4(lVar1,param_3,0xffffffff);
      return;
    }
  }
  return;
}


