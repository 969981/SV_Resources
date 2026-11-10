/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038d930; name: FUN_0038d930
 */


uint FUN_0038d930(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  size_t __maxlen;
  uint uVar1;
  uint uVar2;
  void *__dest;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  char acStack_a0 [64];
  
  puStack_b0 = &local_110;
  ppuStack_b8 = &local_e0;
  uStack_a8 = 0xffffff80ffffffd0;
  local_110 = param_3;
  uStack_108 = param_4;
  local_100 = param_5;
  uStack_f8 = param_6;
  local_f0 = param_7;
  uStack_e8 = param_8;
  local_c0 = (undefined1 *)register0x00000008;
  uVar1 = vsnprintf(acStack_a0,0x40,param_2,&local_c0);
  if (-1 < (int)uVar1) {
    __maxlen = (ulong)uVar1 + 1;
    __dest = (void *)FUN_0038c780(__maxlen);
    *param_1 = __dest;
    if (__dest == (void *)0x0) {
      return 0xffffffff;
    }
    if (uVar1 < 0x40) {
      memcpy(__dest,acStack_a0,__maxlen);
      return uVar1;
    }
    puStack_d0 = &local_110;
    ppuStack_d8 = &local_e0;
    uStack_c8 = 0xffffff80ffffffd0;
    local_e0 = (undefined1 *)register0x00000008;
    uVar2 = vsnprintf((char *)*param_1,__maxlen,param_2,&local_e0);
    if (uVar2 == uVar1) {
      return uVar1;
    }
    free((void *)*param_1);
  }
  *param_1 = 0;
  return 0xffffffff;
}


