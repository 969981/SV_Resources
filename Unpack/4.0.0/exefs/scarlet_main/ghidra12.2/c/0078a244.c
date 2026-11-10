/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078a244; name: FUN_0078a244
 */


void FUN_0078a244(undefined8 param_1,long param_2,undefined4 *param_3)

{
  void *__s1;
  int iVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    local_40[0] = 0x10407;
  }
  else {
    __s1 = (void *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
    if (iVar1 == 0) {
      *param_3 = 0;
    }
    else {
      iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
      if ((iVar1 != 0) && (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_03d0abac,0xc), iVar1 != 0)) {
        local_40[0] = 0x10408;
        goto LAB_0078a2f0;
      }
      memcpy(param_3,__s1,4);
    }
    local_40[0] = 0;
  }
LAB_0078a2f0:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


