/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167e9fc; name: FUN_0167e9fc
 */


void FUN_0167e9fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = FUN_0167ea90(param_3[3]);
  FUN_0167fe88(param_1,*param_3,param_3[1],param_3[2],param_3[3]);
  if ((1 < uVar1) && (uVar3 = FUN_0167ee90(param_3[3]), (uVar3 & 1) != 0)) {
    uVar4 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*(long *)param_3[2] + 0x98))();
    FUN_0167a95c(uVar4,uVar2);
    lVar5 = FUN_0149b698(param_1);
    *(undefined1 *)(lVar5 + 0xc0) = 1;
  }
  return;
}


