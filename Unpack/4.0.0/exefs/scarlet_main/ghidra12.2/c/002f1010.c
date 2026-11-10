/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f1010; name: FUN_002f1010
 */


void FUN_002f1010(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar1 = FUN_002ef2f0();
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x98);
    if (lVar2 != 0) {
      uStack_58 = param_2[1];
      local_60 = *param_2;
      uStack_48 = param_2[3];
      uStack_50 = param_2[2];
      local_40 = param_2[4];
      FUN_002f0f18(lVar2,&local_60,param_3,param_4);
    }
    *param_1 = lVar2;
  }
  return;
}


