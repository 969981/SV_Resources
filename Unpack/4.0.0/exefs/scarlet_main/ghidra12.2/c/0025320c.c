/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025320c; name: FUN_0025320c
 */


void FUN_0025320c(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  uVar3 = nn::os::GetSystemTick();
  lVar4 = 0;
  iVar5 = 1;
  *param_1 = uVar3;
  while( true ) {
    uVar3 = (int)lVar4 + (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    param_1[lVar4 + 1] = uVar3;
    if (lVar4 == 0x26e) break;
    iVar1 = iVar5 + 1;
    iVar5 = iVar5 + 2;
    iVar2 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965;
    uVar3 = iVar2 + iVar1;
    param_1[lVar4 + 2] = (int)lVar4 + iVar2 + 2;
    lVar4 = lVar4 + 2;
  }
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0xffffffff;
  return;
}


