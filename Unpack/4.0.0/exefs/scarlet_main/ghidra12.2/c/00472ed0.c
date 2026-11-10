/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00472ed0; name: FUN_00472ed0
 */


long FUN_00472ed0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_80 [96];
  
  lVar2 = 0x47f1b48;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  iVar1 = FUN_00474150(auStack_80);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00472f50(auStack_80,param_1,param_2);
    FUN_00474060(lVar2,auStack_80);
    FUN_00453300(auStack_80,0x60);
  }
  return lVar2;
}


