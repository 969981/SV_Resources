/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a92e0; name: FUN_007a92e0
 */


void FUN_007a92e0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong local_40 [2];
  undefined4 local_28 [2];
  
  bVar5 = FUN_007967e8(param_2[0x1f] + 0x98,param_4);
  *(byte *)((long)param_2 + 0xa4) = bVar5 & 1;
  uVar6 = FUN_0079cc04(param_2[0x1f]);
  if ((uVar6 & 1) != 0) {
    local_40[0] = CONCAT44(local_40[0]._4_4_,0x10408);
    goto LAB_007a93fc;
  }
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[0xb] = param_3;
  FUN_0078cac8(param_3);
  FUN_0078cb14(param_2[0xb]);
  local_40[0] = 0;
  FUN_007935cc(local_40);
  param_2[0x1e] = local_40[0];
  FUN_00796828(param_2 + 0x15,param_4);
  plVar7 = (long *)param_2[0x1f];
  if (*(char *)((long)param_2 + 0xa4) == '\0') {
    if ((int)plVar7[0x38] != 3) {
      uVar8 = 3;
      goto LAB_007a93a8;
    }
  }
  else if ((int)plVar7[0x38] != 2) {
    uVar8 = 2;
LAB_007a93a8:
    *(undefined4 *)(plVar7 + 0x38) = uVar8;
  }
  if (*(char *)((long)plVar7 + 0x24a) != '\0') {
    *(undefined1 *)((long)plVar7 + 0x24a) = 0;
  }
  uVar6 = (**(code **)(*plVar7 + 0x188))();
  puVar3 = PTR_FUN_047d0be8;
  bVar4 = (uVar6 & 1) == 0;
  pcVar1 = "NetHostMigrationJob::DisconnectNetwork";
  if (bVar4) {
    pcVar1 = "NetHostMigrationJob::EmulateDisconnection";
  }
  param_2[8] = (long)pcVar1;
  puVar2 = PTR_FUN_047d0bf0;
  if (bVar4) {
    puVar2 = puVar3;
  }
  param_2[6] = (long)puVar2;
  param_2[7] = 0;
  local_40[0] = local_40[0] & 0xffffffff00000000;
LAB_007a93fc:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


