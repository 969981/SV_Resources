/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943e50; name: FUN_02943e50
 */


void FUN_02943e50(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*param_3 != 0) {
    FUN_01582534(param_1);
    FUN_0170ad2c();
    uVar1 = FUN_0297d7c8();
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_01243584(param_1);
      FUN_0297d7f0(uVar2,*param_3);
      *param_2 = 1;
    }
  }
  if (*(byte *)(param_3 + 1) < 2) {
    uVar2 = FUN_01243584(param_1);
    FUN_0297d824(uVar2,(char)param_3[1]);
    return;
  }
  return;
}


