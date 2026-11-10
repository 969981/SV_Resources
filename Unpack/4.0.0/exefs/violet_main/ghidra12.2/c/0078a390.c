/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078a390; name: FUN_0078a390
 */


void FUN_0078a390(undefined8 param_1,long param_2,void *param_3)

{
  void *__s1;
  int iVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == (void *)0x0) {
    local_40[0] = 0x10407;
  }
  else {
    __s1 = (void *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
    if (iVar1 == 0) {
      memset(param_3,0,0x10);
    }
    else {
      iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
      if ((iVar1 == 0) || (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_03d0abac,0xc), iVar1 == 0)) {
        local_40[0] = 0x10408;
        goto LAB_0078a444;
      }
      memcpy(param_3,__s1,0x10);
    }
    local_40[0] = 0;
  }
LAB_0078a444:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


