/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f13b9c; name: FUN_00f13b9c
 */


void FUN_00f13b9c(long param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x70);
  bVar1 = *(char *)(lVar5 + 0x19) == '\0';
  if (bVar1) {
    FUN_00e677e8();
    lVar5 = *(long *)(param_1 + 0x70);
  }
  uVar2 = FUN_00cf44f4(lVar5);
  uVar3 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  uVar4 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00f13da0(uVar2,uVar3,uVar4);
  FUN_00f15150(*(undefined8 *)(param_1 + 0x70),uVar2);
  FUN_00f13cb8(param_1,param_2 & 1);
  uVar2 = FUN_00f1415c(param_1);
  FUN_00f15484(*(undefined8 *)(param_1 + 0x70),uVar2);
  uVar2 = FUN_00f142b0(param_1);
  FUN_00f157b8(*(undefined8 *)(param_1 + 0x70),uVar2);
  uVar2 = FUN_00f14560(param_1);
  FUN_00f15e20(*(undefined8 *)(param_1 + 0x70),uVar2);
  uVar2 = FUN_00f146b8(param_1);
  FUN_00f16154(*(undefined8 *)(param_1 + 0x70),uVar2);
  uVar2 = FUN_00f14408(param_1);
  FUN_00f15aec(*(undefined8 *)(param_1 + 0x70),uVar2);
  if ((bVar1) && (*(char *)(*(long *)(param_1 + 0x70) + 0x19) != '\0')) {
    FUN_00e679f0();
    return;
  }
  return;
}


