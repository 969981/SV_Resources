/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012482a0; name: FUN_012482a0
 */


void FUN_012482a0(undefined8 param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = FUN_012483f4(param_1,*param_3,param_3[1],param_3[2]);
  *param_2 = uVar1 & 0xff;
  uVar2 = FUN_01243584(param_1);
  FUN_012483cc(uVar2,*param_3,param_3[1],param_3[2],param_3[3]);
  FUN_0124838c(param_1,0xc,*param_2);
  FUN_0124838c(param_1,0x16,*param_2);
  FUN_0124838c(param_1,0x20,*param_2);
  FUN_01582534(param_1);
  uVar2 = FUN_0123df30();
  uVar3 = FUN_0157992c(uVar2,0);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_01248380(param_1,*param_3,param_3[1]), lVar4 == 0)) {
    return;
  }
  uVar2 = FUN_01243584(param_1);
  FUN_01248470(uVar2,lVar4,0x12);
  return;
}


