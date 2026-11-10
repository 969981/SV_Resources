/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007adddc; name: FUN_007adddc
 */


void FUN_007adddc(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_0078cc8c(*(undefined8 *)(param_1 + 0x78));
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    if (**(int **)(param_1 + 0x70) == 1) {
      FUN_00cbd7c0(local_38,*(long *)(param_1 + 0x58) + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      if (local_38[0] == 0) {
        local_28[0] = 0;
        local_38[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
        FUN_00cbd7c0(auStack_58,local_38);
        puVar1 = auStack_58;
      }
      else {
        FUN_00cbd7c0(auStack_48,*(long *)(param_1 + 0x58) + 0x198);
        puVar1 = auStack_48;
      }
      FUN_0078cb94(uVar2,puVar1);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_0079cbf8(*(undefined8 *)(param_1 + 0x58));
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_018ff39c(param_1 + 0x60,local_38);
  return;
}


