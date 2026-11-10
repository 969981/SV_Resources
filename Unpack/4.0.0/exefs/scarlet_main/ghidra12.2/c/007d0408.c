/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d0408; name: FUN_007d0408
 */


undefined8 FUN_007d0408(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48 [4];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  undefined4 local_18 [2];
  
  puVar1 = PTR_DAT_047d0a08;
  local_28 = 0;
  uVar2 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x38))
                    (*(long **)(*(long *)PTR_DAT_047d0a08 + 0x18),&local_28);
  if ((uVar2 & 1) == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x60) == 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    FUN_00cbd7c0(auStack_38,param_1 + 100);
    FUN_0078cb94(uVar5,auStack_38);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  FUN_007cdea8(*(undefined8 *)puVar1,local_28);
  if (*(char *)(param_1 + 0x90) == '\0') {
    uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xe0))();
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xf0))();
      uVar4 = 1;
      if ((uVar2 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_007cddb4(*(undefined8 *)puVar1,uVar4);
      *(undefined **)(param_1 + 0x30) = PTR_FUN_047d12a0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar3 = "CreateSessionJob::MeshStartup";
      goto LAB_007d054c;
    }
    local_48[0] = 0xc406;
  }
  else {
    local_48[0] = 0x6c57;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 0x94,local_48);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d12a8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar3 = "CreateSessionJob::DestroyNetwork";
LAB_007d054c:
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}


