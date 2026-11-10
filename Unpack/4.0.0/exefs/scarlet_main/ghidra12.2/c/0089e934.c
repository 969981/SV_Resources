/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089e934; name: FUN_0089e934
 */


void FUN_0089e934(long *param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_0088f738(param_2);
  if (uVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = FUN_0088f750(param_2);
      uVar3 = FUN_00894bb8(param_4,lVar2 + lVar4);
      (**(code **)(*param_1 + 0x58))(param_1,uVar3);
      lVar4 = lVar4 + 0x24;
    } while (((ulong)uVar1 + (ulong)uVar1 * 8) * 4 != lVar4);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  param_1[0xb] = param_3;
  param_1[0xc] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0089e9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  return;
}


