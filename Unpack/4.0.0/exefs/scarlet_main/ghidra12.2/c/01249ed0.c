/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249ed0; name: FUN_01249ed0
 */


void FUN_01249ed0(undefined8 param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  
  if (param_3[8] == '\0') {
    cVar1 = FUN_01249f50(param_1,*param_3,param_3[1]);
    *param_2 = cVar1;
    if (cVar1 != '\0') {
      return;
    }
  }
  else {
    *param_2 = '\0';
  }
  FUN_0124bde4(param_1,*param_3,param_3[1],param_3[2],*(undefined4 *)(param_3 + 4),param_3[9]);
  return;
}


