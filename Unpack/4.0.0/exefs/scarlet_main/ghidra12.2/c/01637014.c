/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01637014; name: FUN_01637014
 */


void FUN_01637014(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  
  *param_2 = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = *(undefined2 *)(param_3 + 2);
  uVar6 = FUN_01246e90();
  uVar5 = FUN_0163751c(uVar6,uVar1,uVar2,uVar3);
  if ((uVar5 & 0xffff) != 0) {
    bVar4 = FUN_0163708c(param_1,*param_3,uVar5,*(undefined1 *)((long)param_3 + 0x12));
    *param_2 = bVar4 & 1;
  }
  return;
}


