/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eda910; name: FUN_01eda910
 */


undefined8 FUN_01eda910(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_0168d1b0();
  *(undefined1 *)(param_1 + 0xc36) = uVar1;
  uVar1 = FUN_0168d1c0();
  *(undefined1 *)(param_1 + 0xc37) = uVar1;
  uVar3 = FUN_01b60f20();
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_01b61a00(auStack_40);
    iVar2 = snprintf((char *)(param_1 + 8),0x1d,"%s",auStack_40);
    lVar4 = FUN_01e5f910(iVar2);
    uVar5 = 0;
    if (lVar4 != 0) {
      snprintf((char *)(param_1 + 0x25),0xc00,"%s",lVar4);
      uVar5 = 1;
    }
  }
  return uVar5;
}


