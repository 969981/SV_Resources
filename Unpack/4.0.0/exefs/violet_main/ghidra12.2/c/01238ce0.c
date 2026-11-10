/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01238ce0; name: FUN_01238ce0
 */


ulong FUN_01238ce0(int *param_1,int param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  ulong __n;
  undefined7 local_30;
  undefined4 uStack_29;
  byte local_25;
  
  cVar1 = (char)param_1[1];
  if (*param_1 == 0) {
    *param_4 = cVar1;
    __n = (ulong)(cVar1 != '\n');
  }
  else if (cVar1 == '\n') {
    __n = 0;
    *param_4 = '\n';
  }
  else {
    local_25 = 0;
    local_30 = 0xa0a0a0a0a0a0a;
    uStack_29 = 0xa0a0a0a;
    if (param_2 == 2) {
      FUN_012393fc(param_1,&local_30);
    }
    else if (param_2 == 1) {
      FUN_01238f20(param_1,&local_30);
    }
    else {
      FUN_01238d9c(param_1,&local_30);
    }
    __n = (ulong)local_25;
    if (__n != 0) {
      memcpy(param_4,&local_30,__n);
    }
  }
  return __n;
}


