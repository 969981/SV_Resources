/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078c060; name: FUN_0078c060
 */


void FUN_0078c060(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 uVar4;
  ulong local_48;
  undefined4 local_40;
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  local_48 = local_48 & 0xffffffff00000000;
  local_38[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(local_38,&local_48);
  if (*PTR_DAT_047d08d8 == '\0') {
LAB_0078c150:
    puVar3 = local_38;
    goto LAB_0078c154;
  }
  if (param_2[0xb6] == 0) {
    uVar4 = 0x10408;
  }
  else {
    uVar2 = FUN_0078cdf4(param_2 + 0x17);
    if ((uVar2 & 1) == 0) {
      puVar1 = param_2 + 0xb1;
      uVar2 = FUN_0078a324(puVar1);
      if ((uVar2 & 1) == 0) {
        uVar4 = 0x6485;
        goto LAB_0078c0ec;
      }
      if (*(char *)(param_2 + 0xb5) == '\0') {
        (*(code *)param_2[0xb6])(&local_48,puVar1,*param_2,*(undefined4 *)(param_2 + 3));
        FUN_018ff39c(local_38,&local_48);
        if ((int)local_38[0] == 0) {
          local_48 = 0x2000000000000000;
          local_40 = 0;
          FUN_0078b2cc(puVar1,&local_48);
        }
        goto LAB_0078c150;
      }
    }
    uVar4 = 0x4c11;
  }
LAB_0078c0ec:
  local_48 = CONCAT44(local_48._4_4_,uVar4);
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_28);
  puVar3 = &local_48;
LAB_0078c154:
  FUN_00cbd7c0(param_1,puVar3);
  return;
}


