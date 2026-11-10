/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021666f8; name: FUN_021666f8
 */


void FUN_021666f8(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_3;
  lVar4 = param_2[4];
  uVar1 = FUN_021667b4();
  if ((ulong)param_2[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 * 0x30,0x10);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*param_2 + 0xe8))();
  }
  FUN_02166820(param_2,lVar2,uVar1,lVar3,param_4);
  *param_1 = param_2[4] + (lVar3 - lVar4);
  return;
}


