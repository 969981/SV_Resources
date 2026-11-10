/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7c4f8; name: FUN_01f7c4f8
 */


void FUN_01f7c4f8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_047d0860;
  piVar4 = local_50;
  if (*(char *)(param_2 + 8) == '\0') {
LAB_01f7c5d0:
    local_40[0] = 0x10408;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  else {
    lVar3 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
    if (lVar3 == 0) goto LAB_01f7c5d0;
    local_40[0] = 0;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    FUN_007f99bc(local_50,param_2);
    FUN_018ff39c(local_40,local_50);
    if (local_40[0] == 0) {
      FUN_007f9da0(local_50,param_2);
      FUN_018ff39c(local_40,local_50);
      if (local_40[0] == 0) {
        lVar3 = *(long *)puVar1;
        *(undefined4 *)(param_2 + 0x68d4) = *(undefined4 *)(lVar3 + 0xb4);
        *(undefined4 *)(lVar3 + 0xb4) = 0;
        uVar2 = FUN_007f7334();
        *(undefined4 *)(param_2 + 0x68d8) = uVar2;
        uVar2 = FUN_007f7360(*(undefined8 *)puVar1);
        *(undefined4 *)(param_2 + 0x68dc) = uVar2;
        local_50[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
        goto LAB_01f7c5f4;
      }
    }
  }
  piVar4 = local_40;
LAB_01f7c5f4:
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


