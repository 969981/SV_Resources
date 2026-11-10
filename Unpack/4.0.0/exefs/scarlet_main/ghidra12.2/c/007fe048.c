/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fe048; name: FUN_007fe048
 */


undefined8 FUN_007fe048(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_1 + 0x90) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    FUN_00cbd7c0(auStack_30,param_1 + 100);
    puVar1 = auStack_30;
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      return 5;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x60) != 2) {
      FUN_00cbd7c0(auStack_50,param_1 + 100);
      FUN_0078cb94(uVar2,auStack_50);
      goto LAB_007fe0d4;
    }
    FUN_00cbd7c0(auStack_40,param_1 + 100);
    puVar1 = auStack_40;
  }
  FUN_0078cb28(uVar2,puVar1);
LAB_007fe0d4:
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


