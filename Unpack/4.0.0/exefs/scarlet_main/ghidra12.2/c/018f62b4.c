/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f62b4; name: FUN_018f62b4
 */


void FUN_018f62b4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  long lVar2;
  
  if (*(char *)param_1[2] == '\0') {
    param_3 = *(undefined8 *)(*param_1 + 0x118);
    lVar2 = 0;
  }
  else {
    lVar2 = *param_1 + 0xa0;
  }
  uVar1 = FUN_018f6308(param_2,param_3,lVar2,param_1[1]);
  *(undefined2 *)param_1[3] = uVar1;
  return;
}


