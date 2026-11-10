/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01250a00; name: FUN_01250a00
 */


void FUN_01250a00(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  char local_18 [4];
  undefined1 local_14 [4];
  
  local_14[0] = 0;
  local_18[0] = '\0';
  FUN_01251320(param_1,local_14,local_18,param_3);
  if (local_18[0] == '\0') {
    uVar2 = FUN_0124e528(param_1,1);
    uVar3 = FUN_01250f8c(param_1,*param_3,uVar2);
    if ((uVar3 & 1) == 0) {
      *param_2 = 0;
      return;
    }
  }
  bVar1 = FUN_01250a8c(param_1,*param_3,local_14[0]);
  *param_2 = bVar1 & 1;
  return;
}


