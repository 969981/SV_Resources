/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ac71c; name: FUN_007ac71c
 */


void FUN_007ac71c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_0078cc8c(param_1 + 0x60);
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_00cbd7c0(local_38,*(long *)(param_1 + 0xb0) + 0x198);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      if (local_38[0] == 0) {
        local_28[0] = 0;
        local_38[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
        FUN_00cbd7c0(auStack_58,local_38);
        puVar1 = auStack_58;
      }
      else {
        FUN_00cbd7c0(auStack_48,*(long *)(param_1 + 0xb0) + 0x198);
        puVar1 = auStack_48;
      }
      FUN_0078cb94(uVar3,puVar1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if ((*(char *)(param_1 + 0xa8) != '\0') && (lVar2 = *(long *)(param_1 + 0xb0), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x1c0) != 0) {
      *(undefined4 *)(lVar2 + 0x1c0) = 0;
    }
    if (*(char *)(lVar2 + 0x249) != '\0') {
      *(undefined1 *)(lVar2 + 0x249) = 0;
    }
  }
  return;
}


