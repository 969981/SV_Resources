/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049b550; name: FUN_0049b550
 */


undefined8
FUN_0049b550(undefined8 param_1,char *param_2,size_t param_3,undefined4 param_4,undefined8 param_5)

{
  size_t __n;
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 == (char *)0x0) {
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
  }
  else {
    __n = param_3 - 1;
    if (__n == 0) {
      __n = 1;
    }
    pvVar1 = memchr(param_2,0,__n);
    if (pvVar1 != (void *)0x0) {
      return 0xfffffffe;
    }
  }
  uVar3 = param_3;
  if ((1 < param_3) && (uVar3 = param_3 - 1, param_2[param_3 - 1] != '\0')) {
    uVar3 = param_3;
  }
  uVar2 = FUN_0049b5f0(param_1,param_2,uVar3,param_4,2,param_5);
  return uVar2;
}


