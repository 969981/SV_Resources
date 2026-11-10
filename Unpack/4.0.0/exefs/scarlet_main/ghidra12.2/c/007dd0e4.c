/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dd0e4; name: FUN_007dd0e4
 */


undefined8 FUN_007dd0e4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [16];
  int local_58 [4];
  int local_48 [4];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  uVar2 = FUN_007dcca4();
  if (((uVar2 & 1) == 0) ||
     (uVar2 = FUN_007dce9c(param_1), puVar1 = PTR_DAT_047d0a08, (uVar2 & 1) == 0)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar2 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0xf0))();
    if ((uVar2 & 1) != 0) {
      FUN_007cddb4(*(undefined8 *)puVar1,1);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      local_48[0] = 0;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
      FUN_00cbd7c0(auStack_38,local_48);
      FUN_0078cb28(uVar3,auStack_38);
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0x88))
              (local_48,*(long **)(param_1 + 0x90),param_1 + 0x60);
    puVar1 = PTR_LAB_047d13d0;
    if (local_48[0] == 0) {
      *(char **)(param_1 + 0x40) = "OpenCloseParticipationJob::WaitOpenParticipation";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      local_58[0] = 0x4c11;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
      if (local_48[0] != local_58[0]) {
        uVar3 = *(undefined8 *)(param_1 + 0x58);
        FUN_00cbd7c0(auStack_68,local_48);
        FUN_0078cb94(uVar3,auStack_68);
        goto LAB_007dd20c;
      }
    }
    uVar3 = 5;
  }
  else {
    FUN_0078cc00();
LAB_007dd20c:
    *(undefined8 *)(param_1 + 0x58) = 0;
    uVar3 = 1;
  }
  return uVar3;
}


