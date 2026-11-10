/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145b6a4; name: FUN_0145b6a4
 */


void FUN_0145b6a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 4);
  (**(code **)PTR_DAT_047d3258)();
  (**(code **)PTR_DAT_047d3260)(param_1,param_3[4] & 1);
  (**(code **)PTR_DAT_047d3268)(param_1,(byte)param_3[4] >> 1 & 1);
  (**(code **)PTR_DAT_047d3278)(param_1,(byte)param_3[4] >> 2 & 1);
  uVar3 = FUN_008f1308(*param_3);
  (**(code **)PTR_DAT_047d3270)(param_1,uVar3);
  uVar3 = FUN_008f1328(param_3[0x1b]);
  puVar1 = PTR_DAT_047d3280;
  (**(code **)PTR_DAT_047d3280)(param_1,2,uVar3);
  uVar3 = FUN_008f1318(param_3[0x18]);
  uVar4 = FUN_008f1318(param_3[0x19]);
  uVar5 = FUN_008f1318(param_3[0x1a]);
  puVar2 = PTR_DAT_047d3288;
  (**(code **)PTR_DAT_047d3288)(param_1,2,uVar3,uVar4,uVar5);
  uVar3 = FUN_008f1328(param_3[0xb]);
  (**(code **)puVar1)(param_1,1,uVar3);
  uVar3 = FUN_008f1318(param_3[8]);
  uVar4 = FUN_008f1318(param_3[9]);
  uVar5 = FUN_008f1318(param_3[10]);
  (**(code **)puVar2)(param_1,1,uVar3,uVar4,uVar5);
  *(uint *)(param_1 + 0x10) = (uint)(byte)param_3[0x1c];
  *(uint *)(param_1 + 0x14) = (uint)(byte)param_3[0xc];
  *(uint *)(param_1 + 8) = (uint)(byte)param_3[1];
  *(uint *)(param_1 + 0xc) = (uint)(byte)param_3[2];
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


