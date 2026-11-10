/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124f1ec; name: FUN_0124f1ec
 */


void FUN_0124f1ec(long param_1,undefined8 param_2,long *param_3)

{
  undefined2 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 local_34 [2];
  
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar4 = (**(code **)(*param_3 + 0xf0))(param_3);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x30),uVar3);
  FUN_014be3a0(*(undefined8 *)(lVar6 + 0x18),uVar5,uVar4);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x5e,uVar3,uVar4);
  bVar2 = FUN_0124f6fc(param_2,uVar3,local_34);
  if (bVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x30),uVar3);
    FUN_014be3a0(*(undefined8 *)(lVar6 + 0x18),uVar5,local_34[0]);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x5e,uVar3,local_34[0]);
    if (bVar2 != 1) {
      lVar6 = (ulong)bVar2 - 1;
      puVar7 = (undefined2 *)((ulong)local_34 | 2);
      do {
        lVar8 = *(long *)(param_1 + 0x20);
        uVar1 = *puVar7;
        uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x30),uVar3);
        FUN_014be3a0(*(undefined8 *)(lVar8 + 0x18),uVar5,uVar1);
        FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x5e,uVar3,uVar1);
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  return;
}


