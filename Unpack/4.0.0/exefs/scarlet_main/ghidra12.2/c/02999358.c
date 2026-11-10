/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999358; name: FUN_02999358
 */


void FUN_02999358(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [16];
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  FUN_0189372c(auStack_50);
  FUN_01822720(auStack_50,uVar2,uVar4,uVar5);
  uVar6 = FUN_014df9d4(*(undefined8 *)(param_1 + 0x38),uVar1,uVar3);
  FUN_0298d990(uVar6,auStack_50);
  return;
}


