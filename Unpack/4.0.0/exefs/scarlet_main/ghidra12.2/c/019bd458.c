/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bd458; name: FUN_019bd458
 */


bool FUN_019bd458(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int local_18 [2];
  
  cVar1 = *(char *)(*param_1 + param_1[2]);
  param_1[2] = param_1[2] + 1;
  if (cVar1 == -0x47) {
    FUN_019bd4b4(local_18,param_2,param_1);
    bVar2 = local_18[0] == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


