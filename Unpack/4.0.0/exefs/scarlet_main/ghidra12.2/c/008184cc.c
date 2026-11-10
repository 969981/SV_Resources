/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008184cc; name: FUN_008184cc
 */


undefined8 FUN_008184cc(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_6c8 [16];
  int local_6b8 [4];
  undefined *local_6a8;
  undefined1 *puStack_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined *local_688;
  undefined1 auStack_680 [520];
  undefined *local_478;
  undefined1 *local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined *local_458;
  undefined1 auStack_450 [1032];
  int local_48 [4];
  undefined4 local_38 [2];
  
  local_690 = 0;
  local_688 = PTR_DAT_047d15f8 + 0x68;
  puStack_6a0 = auStack_680;
  local_6a8 = PTR_DAT_047d15f8 + 0x10;
  local_698 = 0x200;
  uVar2 = FUN_00793194(&local_6a8,&DAT_03c886bc,1);
  FUN_008103cc(local_48,&local_6a8,&DAT_03c886bc,uVar2,1);
  local_460 = 0;
  local_478 = PTR_DAT_047d0910 + 0x10;
  local_458 = PTR_DAT_047d0910 + 0x68;
  local_470 = auStack_450;
  local_468 = 0x400;
  uVar2 = FUN_00793194(&local_478,&DAT_03c886bc,1);
  FUN_0078d430(local_48,&local_478,&DAT_03c886bc,uVar2,1);
  (**(code **)(**(long **)(param_1 + 0x4b8) + 0x28))
            (local_48,*(long **)(param_1 + 0x4b8),&local_6a8);
  local_6b8[0] = 0x10408;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_6b8 | 4),(Result *)local_38);
  if (local_48[0] == local_6b8[0]) {
    uVar3 = 5;
  }
  else if (local_48[0] == 0) {
    (**(code **)(**(long **)(param_1 + 0x4b8) + 0x10))
              (local_6b8,*(long **)(param_1 + 0x4b8),param_1 + 0x60,param_1 + 0x490);
    FUN_018ff39c(local_48,local_6b8);
    puVar1 = PTR_FUN_047d1900;
    uVar3 = 7;
    *(char **)(param_1 + 0x40) = "TurnJob::StepResolveServerAddress";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    FUN_00cbd7c0(auStack_6c8,local_48);
    FUN_0078cb94(uVar3,auStack_6c8);
    uVar3 = 1;
  }
  return uVar3;
}


