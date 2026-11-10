/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c37e4; name: FUN_016c37e4
 */


bool FUN_016c37e4(void)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  char acStack_20 [16];
  
  uVar2 = FUN_00d0c374();
  snprintf(acStack_20,0xf,PTR_s_save_d___047dd9d0,uVar2 & 0xffffffff);
  __n = strlen(acStack_20);
  iVar1 = strncmp("backup",acStack_20,__n);
  return iVar1 == 0;
}


