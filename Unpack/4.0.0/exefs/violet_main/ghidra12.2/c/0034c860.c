/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034c860; name: FUN_0034c860
 */


void FUN_0034c860(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)PTR_DAT_047cc628;
    uVar2 = *(undefined8 *)(lVar1 + 0xc40);
    uVar4 = *(undefined8 *)(lVar1 + 0xc58);
    uVar3 = *(undefined8 *)(lVar1 + 0xc50);
    param_1[1] = *(undefined8 *)(lVar1 + 0xc48);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    return;
  case 1:
    lVar1 = *(long *)PTR_DAT_047cc628;
    uVar2 = *(undefined8 *)(lVar1 + 0x4c0);
    uVar4 = *(undefined8 *)(lVar1 + 0x4d8);
    uVar3 = *(undefined8 *)(lVar1 + 0x4d0);
    param_1[1] = *(undefined8 *)(lVar1 + 0x4c8);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    return;
  case 2:
    lVar1 = *(long *)PTR_DAT_047cc628;
    uVar2 = *(undefined8 *)(lVar1 + 0x4e0);
    uVar4 = *(undefined8 *)(lVar1 + 0x4f8);
    uVar3 = *(undefined8 *)(lVar1 + 0x4f0);
    param_1[1] = *(undefined8 *)(lVar1 + 0x4e8);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    return;
  case 3:
    lVar1 = *(long *)PTR_DAT_047cc628;
    uVar2 = *(undefined8 *)(lVar1 + 0x500);
    uVar4 = *(undefined8 *)(lVar1 + 0x518);
    uVar3 = *(undefined8 *)(lVar1 + 0x510);
    param_1[1] = *(undefined8 *)(lVar1 + 0x508);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    return;
  default:
    FUN_00367020();
    return;
  }
}


