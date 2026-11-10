/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02978668; name: FUN_02978668
 */


undefined8 FUN_02978668(long param_1,uint param_2,undefined8 *param_3,undefined2 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  piVar5 = (int *)(param_1 + (ulong)param_2 * 4 + 0xa8);
  if (*piVar5 == 0) {
    uVar8 = 1;
    *piVar5 = 1;
    uVar6 = (ulong)param_2;
    uVar3 = param_3[1];
    lVar1 = param_1 + 8;
    lVar2 = lVar1 + uVar6 * 0x10;
    *(undefined8 *)(lVar2 + 0x340) = *param_3;
    lVar7 = param_1 + uVar6 * 0x2c;
    *(undefined8 *)(lVar2 + 0x348) = uVar3;
    lVar2 = lVar1 + uVar6 * 4;
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x68) = 0;
    *(undefined2 *)(lVar1 + uVar6 * 2 + 0x14) = param_4;
    *(undefined4 *)(lVar7 + 0x108) = 0;
    *(undefined8 *)(lVar7 + 0xe0) = 0;
    *(undefined8 *)(lVar7 + 0xf8) = 0;
    *(undefined8 *)(lVar7 + 0x100) = 0;
    *(undefined8 *)(lVar7 + 0xe8) = 0;
    *(undefined8 *)(lVar7 + 0xf0) = 0;
    iVar4 = FUN_0194a110(param_3);
    if (iVar4 != 0) {
      FUN_02978714(param_1,param_2,iVar4);
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


