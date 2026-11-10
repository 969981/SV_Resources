/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078c80c; name: FUN_0078c80c
 */


undefined8 FUN_0078c80c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_38 [4];
  undefined1 auStack_28 [16];
  undefined4 local_18 [2];
  
  iVar2 = FUN_0078bd04(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),0);
  if (iVar2 == 1) {
    iVar2 = FUN_0078bd04(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),1);
  }
  puVar1 = PTR_LAB_047d08f0;
  if (iVar2 == 0) {
    *(char **)(param_1 + 0x40) = "MonitoringDataSendJob::StepSendReport";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 6;
  }
  local_38[0] = 0x2c18;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_18);
  FUN_00cbd7c0(auStack_28,local_38);
  FUN_0078cb94(param_1 + 0x58,auStack_28);
  return 1;
}


