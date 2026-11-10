/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079756c; name: FUN_0079756c
 */


void FUN_0079756c(undefined8 param_1,long param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_608 [4];
  int local_5f8 [4];
  int local_5e8 [362];
  undefined4 local_38 [2];
  
  if ((*(int *)(param_2 + 8) == 0x32ab9864) && ((*(byte *)(param_2 + 0xc) & 0x7f) == 0xb)) {
    uVar1 = *(uint *)(param_2 + 0x5f8) - 0x1c;
    if (0x5a4 < uVar1) goto LAB_0079760c;
    if ((char)*(byte *)(param_2 + 0xc) < '\0') {
      if (*param_3 == 1) {
        if ((*(uint *)(param_2 + 0x5f8) < *(byte *)(param_2 + 0x14) + 0x1c) ||
           (uVar1 = uVar1 - *(byte *)(param_2 + 0x14), uVar1 == 0)) {
          *(undefined1 *)(param_2 + 0xc) = 0xb;
          goto LAB_007975c0;
        }
        uVar3 = FUN_0078db64(1);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar1 / uVar3;
        }
        if ((uVar1 == uVar2 * uVar3) && (uVar1 < 0x5a5)) {
          FUN_0078d96c(local_5f8,local_5e8,(void *)(param_2 + 0x4c),uVar1,param_2 + 0x1d,8,param_3);
          if (local_5f8[0] == 0) {
            memcpy((void *)(param_2 + 0x4c),local_5e8,(ulong)uVar1);
            *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0x7f;
            local_608[0] = 0;
            local_38[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_608 | 4),(Result *)local_38);
            piVar4 = local_608;
          }
          else {
            piVar4 = local_5f8;
          }
          goto LAB_0079762c;
        }
      }
      goto LAB_0079760c;
    }
LAB_007975c0:
    local_5e8[0] = 0;
  }
  else {
LAB_0079760c:
    local_5e8[0] = 0x2c03;
  }
  local_5f8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_5e8 | 4),(Result *)local_5f8);
  piVar4 = local_5e8;
LAB_0079762c:
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


