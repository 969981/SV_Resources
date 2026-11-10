/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024af44c; name: FUN_024af44c
 */


void FUN_024af44c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    uVar1 = *param_2;
    if (uVar1 == 0) {
      uVar1 = *param_1;
      if (uVar1 != 0) {
        if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
          (**(code **)(uVar1 & 0xfffffffffffffffe))(param_1 + 1,param_1 + 1,2);
        }
        *param_1 = 0;
      }
    }
    else {
      *param_1 = uVar1;
      if ((uVar1 & 1) == 0) {
        (**(code **)(uVar1 & 0xfffffffffffffffe))(param_2 + 1,param_1 + 1,1);
      }
      else {
        uVar1 = param_2[1];
        uVar2 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = uVar2;
        param_1[1] = uVar1;
      }
      *param_2 = 0;
    }
  }
  return;
}


