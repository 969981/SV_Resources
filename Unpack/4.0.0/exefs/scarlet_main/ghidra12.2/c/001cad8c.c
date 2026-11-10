/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cad8c; name: FUN_001cad8c
 */


undefined8 FUN_001cad8c(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    param_1[2] = param_3 + 1;
    lVar2 = FUN_001ec2f8();
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return 5;
    }
  }
  else {
    uVar1 = param_3 + param_1[2] + 1;
    if ((ulong)param_1[2] < uVar1) {
      param_1[2] = uVar1;
      lVar2 = FUN_001ec318();
      if (lVar2 == 0) {
        FUN_001ec308(param_1[1]);
        return 5;
      }
      param_1[1] = lVar2;
    }
  }
  memcpy((void *)(lVar2 + *param_1),param_2,param_3);
  lVar2 = *param_1;
  *param_1 = lVar2 + param_3;
  *(undefined1 *)(param_1[1] + lVar2 + param_3) = 0;
  return 0;
}


