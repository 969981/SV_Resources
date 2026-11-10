/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ad528; name: FUN_008ad528
 */


void FUN_008ad528(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  if (*(byte *)(param_2 + 0xf0) < 4) {
    bVar1 = *(byte *)(param_2 + 0xf1);
    if (bVar1 != 0) {
      lVar3 = param_1 + 0xf0;
      FUN_00892800(lVar3);
      FUN_0089283c(lVar3,bVar1);
      FUN_00892898(lVar3,(ulong)bVar1);
      lVar6 = 0;
      iVar5 = 0;
      do {
        FUN_00892950(lVar3,iVar5,*(long *)(param_2 + 0xf8) + lVar6);
        lVar6 = lVar6 + 0x20;
        iVar5 = iVar5 + 1;
      } while ((ulong)bVar1 * 0x20 != lVar6);
    }
    lVar3 = *(long *)(param_2 + 0xd8);
  }
  else {
    FUN_008ad6c0(param_1,param_2);
    lVar3 = *(long *)(param_2 + 0xd8);
  }
  local_80 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  if ((lVar3 == 0) || (uStack_78 = 0, (*(byte *)(lVar3 + 0x49) & 1) != 0)) {
    uStack_78 = 0;
    *(long *)(param_1 + 0xd8) = lVar3;
  }
  else {
    lVar6 = FUN_00896e78(0x50);
    if (lVar6 != 0) {
      FUN_008a199c(lVar6,lVar3,&local_80);
    }
    *(long *)(param_1 + 0xd8) = lVar6;
  }
  FUN_008a6694(param_1,6);
  lVar3 = FUN_00d36bcc(param_1,0x12);
  if (lVar3 != 0) {
    lVar6 = FUN_0113ca0c(param_1);
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    lVar6 = FUN_0113ca0c(param_1);
    uVar4 = FUN_008942ac(uVar4,*(undefined2 *)(lVar6 + 0x4a));
    uVar2 = FUN_008f1cbc(uVar4,4,3,"uProceduralShape");
    *(undefined4 *)(lVar3 + 4) = uVar2;
  }
  return;
}


