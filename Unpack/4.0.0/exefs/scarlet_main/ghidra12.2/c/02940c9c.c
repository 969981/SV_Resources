/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02940c9c; name: FUN_02940c9c
 */


void FUN_02940c9c(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [12];
  undefined1 auStack_184 [36];
  undefined1 auStack_160 [88];
  undefined1 auStack_108 [176];
  undefined1 auStack_58 [24];
  
  *param_2 = 0;
  uVar2 = FUN_014813f4(param_1,*param_3);
  uVar3 = FUN_014813f4(param_1,param_3[1]);
  FUN_029835e4(auStack_58);
  uVar4 = FUN_01246e90(param_1);
  FUN_0107a750(uVar4,*(undefined2 *)((long)param_3 + 10),*(undefined2 *)((long)param_3 + 10),0,uVar2
               ,auStack_58);
  FUN_01243d84(auStack_108);
  FUN_01247a58(auStack_108,uVar3);
  FUN_02958f98(auStack_108,1);
  FUN_01582534(param_1);
  uVar3 = FUN_014813e4();
  FUN_02924064(auStack_108,uVar3);
  uVar5 = FUN_0167ee90(auStack_108);
  if ((uVar5 & 1) == 0) {
    FUN_029835f0(auStack_160);
    FUN_01246154(auStack_184);
    FUN_0295caf0(auStack_190);
    uVar5 = FUN_0298364c(param_1,auStack_160,uVar2,auStack_58,auStack_190,auStack_108);
    if ((uVar5 & 1) == 0) {
      lVar6 = FUN_0149b698(param_1);
      FUN_02923f64(auStack_1d8,lVar6 + 0x10);
      lVar6 = FUN_0149b698(param_1);
      FUN_0137399c(lVar6 + 0x10);
      lVar6 = FUN_0149b698(param_1);
      FUN_01582534(param_1);
      uVar3 = FUN_014813e4();
      FUN_01678ab4(lVar6 + 0x10,uVar2,auStack_108,uVar3);
      lVar6 = FUN_0149b698(param_1);
      FUN_02983698(lVar6 + 0x10,*(undefined1 *)(param_3 + 2));
      lVar6 = FUN_0149b698(param_1);
      FUN_0149b690(lVar6 + 0x10,1);
      FUN_029836a0(param_1,uVar2,auStack_58,auStack_160,auStack_108,auStack_190);
      lVar6 = FUN_0149b698(param_1);
      bVar1 = FUN_029836e0(lVar6 + 0x10);
      *param_2 = bVar1 & 1;
      lVar6 = FUN_0149b698(param_1);
      FUN_02924040(lVar6 + 0x10,auStack_1d8);
    }
  }
  else {
    uVar2 = FUN_01243584(param_1);
    FUN_0167a95c(uVar2,*param_3);
  }
  return;
}


