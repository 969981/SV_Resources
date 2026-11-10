/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e672f4; name: FUN_00e672f4
 */


void FUN_00e672f4(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  bVar1 = param_6 == 0;
  uVar2 = 3;
  if (!bVar1) {
    uVar2 = 7;
  }
  uVar3 = 5;
  if (bVar1) {
    uVar3 = 1;
  }
  uVar4 = 2;
  if (!bVar1) {
    uVar4 = 6;
  }
  FUN_00e673a8(*param_1,uVar2,param_2);
  FUN_00e673a8(*param_1,(ulong)!bVar1 << 2,param_3 % 100);
  FUN_00e673a8(*param_1,uVar3,param_4);
  FUN_00e673a8(*param_1,uVar4,param_5);
  return;
}


