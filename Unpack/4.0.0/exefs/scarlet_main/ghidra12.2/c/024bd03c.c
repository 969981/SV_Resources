/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024bd03c; name: FUN_024bd03c
 */


void FUN_024bd03c(long *param_1,undefined8 *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_4 <= (ulong)(param_2[3] - param_2[2])) {
    lVar3 = *param_3;
    lVar4 = param_2[1];
    FUN_024bd150(param_2);
    *param_1 = param_2[1] + (lVar3 - lVar4);
    return;
  }
  lVar3 = *param_3;
  lVar4 = param_2[1];
  uVar1 = FUN_024bd26c(param_2,param_4);
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 * 0x28,8);
  FUN_024bd2dc(param_2,uVar2,uVar1,lVar3,param_4);
  *param_1 = param_2[1] + (lVar3 - lVar4);
  return;
}


