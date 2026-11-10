/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078ae9c; name: FUN_0078ae9c
 */


void FUN_0078ae9c(undefined8 param_1,long param_2,uint *param_3,int *param_4,uint param_5)

{
  uint *__s1;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if ((param_3 != (uint *)0x0) && (param_4 != (int *)0x0)) {
    __s1 = (uint *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
    if (iVar1 == 0) {
      if (1 < param_5) goto LAB_0078af7c;
    }
    else {
      iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
      uVar2 = 6;
      if (iVar1 != 0) {
        iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_03d0abac,0xc);
        uVar2 = 6;
        if (iVar1 != 0) {
          uVar2 = 0x12;
        }
      }
      if (uVar2 <= param_5) {
LAB_0078af7c:
        iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
        puVar3 = param_3;
        if (iVar1 != 0) {
          iVar1 = memcmp(__s1,&DAT_03d0abac,0x10);
          if ((iVar1 == 0) ||
             (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_03d0abac,0xc), iVar1 == 0)) {
            uVar2 = (*__s1 & 0xff00ff00) >> 8 | (*__s1 & 0xff00ff) << 8;
            puVar3 = param_3 + 1;
            *param_3 = uVar2 >> 0x10 | uVar2 << 0x10;
          }
          else {
            memcpy(param_3,__s1,0x10);
            puVar3 = param_3 + 4;
          }
        }
        *(ushort *)puVar3 = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8;
        *param_4 = ((int)puVar3 - (int)param_3) + 2;
        local_58[0] = 0;
        goto LAB_0078af38;
      }
    }
  }
  local_58[0] = 0x10407;
LAB_0078af38:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


