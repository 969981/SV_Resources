/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030028b0; name: FUN_030028b0
 */


void FUN_030028b0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1[4] = param_2;
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  FUN_03002934();
  if ((int)param_1[1] != 0x80) {
    *(undefined4 *)(param_1 + 1) = 0x80;
  }
  *(undefined8 *)((long)param_1 + 0x14) = 0x7f;
  lVar2 = 0;
  lVar3 = -1;
  do {
    *(undefined8 *)(*param_1 + lVar2 + 0x30) = 0xffffffffffffffff;
    lVar1 = *param_1 + lVar2;
    lVar2 = lVar2 + 0x40;
    *(undefined4 *)(lVar1 + 0x38) = 0xffffffff;
    lVar3 = lVar3 + 1;
  } while (lVar3 < *(int *)((long)param_1 + 0x14));
  return;
}


