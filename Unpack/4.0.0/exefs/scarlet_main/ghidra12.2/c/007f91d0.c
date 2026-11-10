/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f91d0; name: FUN_007f91d0
 */


void FUN_007f91d0(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_007ec2e0();
  puVar1 = PTR_DAT_047d1598;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0079704c(param_1 + 0xd);
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(0x14,uVar2);
  if (lVar3 != 0) {
    FUN_00792120(lVar3);
  }
  param_1[0xc] = lVar3;
  return;
}


