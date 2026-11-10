/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015190e8; name: FUN_015190e8
 */


void FUN_015190e8(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_3;
  lVar4 = param_2[4];
  uVar1 = FUN_0216625c();
  if ((ulong)param_2[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 * 0x28,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*param_2 + 0xe8))();
  }
  FUN_021662c8(param_2,lVar2,uVar1,lVar3,param_4);
  *param_1 = param_2[4] + (lVar3 - lVar4);
  return;
}


