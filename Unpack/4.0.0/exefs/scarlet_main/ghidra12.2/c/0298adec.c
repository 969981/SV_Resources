/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298adec; name: FUN_0298adec
 */


void FUN_0298adec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  char local_48 [8];
  
  iVar3 = FUN_0167ea90(param_3[2]);
  if (iVar3 == 0) {
    uVar7 = FUN_01243584(param_1);
    uVar4 = (**(code **)(*(long *)param_3[1] + 0x98))();
    FUN_0167a95c(uVar7,uVar4);
    return;
  }
  uVar1 = FUN_01893e2c(*(undefined2 *)*param_3);
  uVar2 = FUN_01893e94(*(undefined2 *)*param_3);
  FUN_01243d7c(param_3[2]);
  lVar5 = FUN_0168003c(param_3[2]);
  if (lVar5 != 0) {
    bVar6 = false;
    do {
      FUN_0189372c(&local_a8);
      FUN_0297db40(param_1,uVar2,param_3[1],&local_a8);
      uVar7 = param_3[1];
      local_88 = 0;
      local_98 = 0;
      lStack_90 = 0;
      FUN_0189372c(&local_80);
      local_80 = local_a8;
      uStack_78 = uStack_a0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0x101;
      local_66 = 0;
      local_98 = uVar7;
      lStack_90 = lVar5;
      local_88 = uVar1;
      FUN_01461214(param_1);
      uVar7 = FUN_01893738();
      FUN_0189498c(uVar7,local_48,&local_98);
      if (local_48[0] != '\0') {
        lVar5 = FUN_0149b698(param_1);
        FUN_0167a950(lVar5 + 0x10);
        bVar6 = true;
      }
      lVar5 = FUN_0168003c(param_3[2]);
    } while (lVar5 != 0);
    if (bVar6) {
      return;
    }
  }
  lVar5 = FUN_0149b698(param_1);
  if (*(char *)(lVar5 + 0xc0) == '\0') {
    uVar7 = FUN_01243584(param_1);
    uVar4 = (**(code **)(*(long *)param_3[1] + 0x98))();
    FUN_0167a95c(uVar7,uVar4);
  }
  return;
}


