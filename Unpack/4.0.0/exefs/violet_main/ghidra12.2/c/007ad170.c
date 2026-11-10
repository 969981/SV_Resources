/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad170; name: FUN_007ad170
 */


void FUN_007ad170(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined *puVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((uint)*(byte *)(param_2 + 0x61) != (param_3 & 0xff)) {
    *(char *)(param_2 + 0x61) = (char)param_3;
    uVar1 = FUN_0078cdf4();
    if ((uVar1 & 1) == 0) {
      FUN_007ad46c(local_38,*(undefined8 *)(param_2 + 0x68),param_3);
      if (local_38[0] == 0) {
        *(char *)(param_2 + 0x60) = (char)param_3;
        FUN_0078cd58(*(undefined8 *)(param_2 + 0x68),1);
        *(char **)(param_2 + 0x40) = "NetUpdatePlayerNumJob::WaitUpdatePlayerNum";
        puVar3 = PTR_FUN_047d0d30;
      }
      else {
        *(char **)(param_2 + 0x40) = "NetUpdatePlayerNumJob::RetryUpdatePlayerNum";
        puVar3 = PTR_FUN_047d0d28;
      }
      *(undefined **)(param_2 + 0x30) = puVar3;
      *(undefined8 *)(param_2 + 0x38) = 0;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar2 = local_48;
      goto LAB_007ad234;
    }
  }
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  piVar2 = local_38;
LAB_007ad234:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


