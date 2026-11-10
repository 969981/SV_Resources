/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fb6b0; name: FUN_028fb6b0
 */


bool FUN_028fb6b0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  char *__s_00;
  undefined1 auVar4 [16];
  char *local_48;
  char *pcStack_40;
  
  __s_00 = (char *)*param_2;
  __s = (char *)*param_1;
  sVar2 = strlen(__s_00);
  if (sVar2 == 0) {
    bVar1 = true;
  }
  else {
    sVar3 = strlen(__s);
    local_48 = __s_00;
    pcStack_40 = __s_00 + sVar2;
    auVar4 = FUN_028fd4a4(&local_48,__s,__s + sVar3);
    bVar1 = auVar4._0_8_ != auVar4._8_8_;
  }
  return bVar1;
}


