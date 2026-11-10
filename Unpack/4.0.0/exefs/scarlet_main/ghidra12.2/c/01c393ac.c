/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c393ac; name: FUN_01c393ac
 */


void FUN_01c393ac(void *param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_848 [2072];
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    memset(auStack_848,0,0x814);
    FUN_01674c60(lVar1,auStack_848);
    memcpy(param_1,auStack_848,0x814);
  }
  return;
}


