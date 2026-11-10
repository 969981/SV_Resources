/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bbdd4; name: FUN_034bbdd4
 */


long FUN_034bbdd4(long param_1,int *param_2)

{
  long lVar1;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if ((((*param_2 != 0) || ((char)param_2[2] != -1)) || ((char)param_2[4] != -1)) ||
     (*(long *)(param_2 + 6) != 0)) {
    param_1 = FUN_034bc56c(param_1 + 0x10,*param_2,auStack_24);
    if (param_1 == 0) {
      return 0;
    }
    if ((((char)param_2[2] != -1) || ((char)param_2[4] != -1)) || (*(long *)(param_2 + 6) != 0)) {
      param_1 = FUN_034bcc24(param_1 + 0x10,(char)param_2[2],auStack_28);
      if (param_1 == 0) {
        return 0;
      }
      if (((char)param_2[4] != -1) || (*(long *)(param_2 + 6) != 0)) {
        param_1 = FUN_034bd2dc(param_1 + 0x10,(char)param_2[4],auStack_4);
        if (param_1 == 0) {
          return 0;
        }
        if (*(long *)(param_2 + 6) != 0) {
          lVar1 = FUN_034bd8d4(param_1 + 0x10,*(long *)(param_2 + 6),auStack_8);
          return lVar1;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return param_1 + 8;
}


