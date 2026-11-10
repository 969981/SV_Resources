/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f5710; name: FUN_001f5710
 */


undefined8 FUN_001f5710(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[4] = param_2;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[6] = 0x1000;
  lVar1 = FUN_001f45a0(param_2,0x400);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    uVar2 = 0;
    param_1[3] = 0;
    param_1[1] = 0x7f;
    param_1[2] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return uVar2;
}


