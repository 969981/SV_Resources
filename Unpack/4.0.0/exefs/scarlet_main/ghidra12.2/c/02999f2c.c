/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999f2c; name: FUN_02999f2c
 */


void FUN_02999f2c(undefined2 *param_1,uint param_2,byte param_3)

{
  byte bVar1;
  
  *param_1 = (short)param_2;
  *(undefined4 *)((long)param_1 + 5) = 0;
  if ((param_2 & 0xffff) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_00cf5fe0(param_2,0);
  }
  if (bVar1 <= param_3 || param_3 == 0) {
    param_3 = bVar1;
  }
  *(byte *)((long)param_1 + 3) = param_3;
  *(byte *)(param_1 + 1) = param_3;
  return;
}


