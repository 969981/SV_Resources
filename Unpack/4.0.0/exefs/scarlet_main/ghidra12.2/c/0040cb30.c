/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040cb30; name: FUN_0040cb30
 */


void FUN_0040cb30(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x18);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x10), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  if ((int)param_1[0x13] == 5) {
    FUN_0040e5d0(param_1[0x14]);
  }
  param_1[0x14] = 0;
  FUN_003eccf0(param_1[0x12]);
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar2 + 0x60);
    if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*plVar2 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)(plVar2);
    }
    FUN_00453260(plVar2,0x30,"external/openssl/crypto/ec/ec_lib.c",699);
  }
  FUN_003eb490(param_1[2]);
  FUN_003eb490(param_1[3]);
  FUN_00453260(param_1[6],param_1[7],"external/openssl/crypto/ec/ec_lib.c",0x7e);
  FUN_00453260(param_1,0xa8,"external/openssl/crypto/ec/ec_lib.c",0x7f);
  return;
}


