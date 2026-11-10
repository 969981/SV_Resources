/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f29340; name: FUN_00f29340
 */


void FUN_00f29340(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    do {
      do {
        uVar1 = FUN_00f293dc();
        *(undefined8 *)(param_1 + 0x40) = uVar1;
        lVar2 = FUN_00f293dc();
        *(long *)(param_1 + 0x48) = lVar2;
      } while (lVar2 == 0);
    } while (*(long *)(param_1 + 0x40) == 0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x48);
  }
  local_28 = 0;
  local_38 = 0xf4b17a579f18960;
  uStack_30 = 0x82a2b175229d6a5b;
  *(long *)(param_1 + 0x40) = lVar2;
  FUN_018ebec0(&local_38);
  uVar1 = FUN_00f293dc();
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  FUN_017488e0(param_1);
  *(undefined1 *)(param_1 + 0xcd0) = 0;
  return;
}


