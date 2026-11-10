/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00800a70; name: FUN_00800a70
 */


undefined8 FUN_00800a70(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long local_48;
  undefined1 auStack_40 [16];
  ulong local_30 [2];
  
  local_30[0] = 0;
  FUN_007935cc(local_30);
  if (*(ulong *)(param_1 + 0x68) < local_30[0]) {
    PTR_DAT_047d0868[0x3fa] = 0;
    FUN_007ff6a0(*(undefined8 *)(param_1 + 0x58));
LAB_00800ab0:
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1640;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NatTraversalJob::ProcessSuccess";
    return 0;
  }
  FUN_00cbd7c0(local_30,*(long *)(param_1 + 0x58) + 0x1a8);
  lVar5 = *(long *)(param_1 + 0x60);
  if ((int)local_30[0] == 0) {
    if (*(char *)(lVar5 + 0x28) == '\0') {
      if (*(char *)(*(long *)(param_1 + 0x58) + 0x1370) == '\0') {
        return 5;
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar3 = FUN_007ff61c();
        puVar2 = PTR_DAT_047d0868;
        if ((uVar3 & 1) != 0) {
          local_48 = 0;
          FUN_007935cc(&local_48);
          lVar5 = local_48 - *(long *)(param_1 + 0x70);
          plVar4 = (long *)FUN_0079365c();
          uVar1 = 0;
          if (*plVar4 != 0) {
            uVar1 = (undefined4)(lVar5 / *plVar4);
          }
          *(undefined4 *)(puVar2 + 0x1f0) = uVar1;
        }
        puVar2[0x3fa] = 1;
      }
      goto LAB_00800ab0;
    }
    FUN_0078cc00(lVar5);
  }
  else {
    FUN_00cbd7c0(auStack_40,local_30);
    FUN_0078cb94(lVar5,auStack_40);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


