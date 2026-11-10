/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a8c4c; name: FUN_007a8c4c
 */


void FUN_007a8c4c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  int *piVar2;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar2 = local_50;
  (**(code **)(**(long **)(param_2[0xb] + 0x180) + 0x40))
            (local_40,*(long **)(param_2[0xb] + 0x180),param_2[0xf]);
  puVar1 = PTR_DAT_047d0868;
  if (local_40[0] == 0) {
    *(undefined8 *)(PTR_DAT_047d0868 + 0x1c0) = *(undefined8 *)(param_4 + 8);
    *(undefined2 *)(puVar1 + 0x1a0) = *(undefined2 *)(param_4 + 0x10);
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[0xe] = param_3;
    FUN_0078cac8(param_3);
    FUN_0078cb14(param_2[0xe]);
    FUN_0078cd58(*(undefined8 *)(param_2[0xb] + 0x180),1);
    FUN_0079cbe8(param_2[0xb]);
    if (*(char *)(param_2[0xb] + 0x1168) != '\x01') {
      *(char *)(param_2[0xb] + 0x1168) = '\x01';
    }
    param_2[8] = (long)"NetCreateNetworkJob::WaitCreateNetwork";
    param_2[6] = (long)PTR_FUN_047d0bc8;
    param_2[7] = 0;
    local_50[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    piVar2 = local_40;
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


