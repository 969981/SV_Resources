/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b7674; name: FUN_034b7674
 */


long FUN_034b7674(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (((((*param_2 != 0) || ((int)param_2[1] != 0)) || ((int)param_2[2] != 0)) ||
      (((char)param_2[3] != -1 || ((char)param_2[4] != -1)))) || (param_2[5] != 0)) {
    param_1 = FUN_034bb71c(param_1 + 0x10,*param_2,auStack_4);
    if (param_1 == 0) {
      return 0;
    }
    if ((((int)param_2[1] != 0) || ((int)param_2[2] != 0)) ||
       (((char)param_2[3] != -1 || (((char)param_2[4] != -1 || (param_2[5] != 0)))))) {
      lVar1 = FUN_034bbeb4(param_1 + 0x10,(int)param_2[1],auStack_8);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = FUN_034bbdd4(lVar1,param_2 + 2);
      return lVar1;
    }
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return param_1 + 8;
}


