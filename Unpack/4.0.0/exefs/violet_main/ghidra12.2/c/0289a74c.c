/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289a74c; name: FUN_0289a74c
 */


bool FUN_0289a74c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((char)param_2[3] == '\0') {
    lVar1 = 0;
    if (*param_2 != 0) {
      if (*(short *)(*param_2 + 0x1a) != 0) goto LAB_0289a76c;
      lVar1 = 0;
    }
  }
  else {
LAB_0289a76c:
    lVar1 = param_2[2];
  }
  if ((char)param_1[3] == '\0') {
    lVar2 = 0;
    if (*param_1 == 0) goto LAB_0289a794;
    if (*(short *)(*param_1 + 0x1a) == 0) {
      lVar2 = 0;
      goto LAB_0289a794;
    }
  }
  lVar2 = param_1[2];
LAB_0289a794:
  return lVar1 == lVar2;
}


