/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145b3f8; name: FUN_0145b3f8
 */


bool FUN_0145b3f8(long *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_3;
  lVar2 = *(long *)(param_3 + 8);
  if (cVar1 != '\0' && lVar2 != 0) {
    FUN_00f1d9f4(*(long *)(*(long *)(*param_1 + 0x30) + 0x6160) + 0x110,param_2,
                 *(undefined4 *)(lVar2 + 0x68));
  }
  return cVar1 != '\0' && lVar2 != 0;
}


