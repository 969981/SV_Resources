/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e94e0; name: FUN_003e94e0
 */


undefined8 FUN_003e94e0(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if ((int)param_2 <= (int)param_3) {
    param_3 = param_2;
  }
  iVar2 = param_3 + 1;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_003e9110(param_1,&DAT_03bf391f);
  } while (iVar1 == 1);
  return 0;
}


