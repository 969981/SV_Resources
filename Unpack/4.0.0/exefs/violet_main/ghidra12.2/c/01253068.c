/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01253068; name: FUN_01253068
 */


void FUN_01253068(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_3;
  uVar3 = FUN_01689a40(param_1,uVar1);
  uVar5 = FUN_012531d4(param_1,1,uVar3);
  if (2 < uVar5) goto LAB_01253158;
  cVar2 = *(char *)(param_3 + 1);
  if (cVar2 == '\x02') {
    uVar6 = FUN_01243584(param_1);
    FUN_029870ec(uVar6,uVar1,2);
    uVar6 = FUN_01243584(param_1);
    FUN_0297ee68(uVar6,uVar1,0x418);
    iVar4 = FUN_0181a4ec(param_1);
    if (iVar4 < 1) goto LAB_01253158;
    uVar6 = FUN_01243584(param_1);
    uVar7 = 0x35f;
  }
  else {
    if (cVar2 == '\x03') {
      uVar6 = FUN_01243584(param_1);
      FUN_029870ec(uVar6,uVar1,3);
      uVar6 = FUN_01243584(param_1);
      FUN_0297ee68(uVar6,uVar1,0x419);
      iVar4 = FUN_029871b4(param_1);
      if (0 < iVar4) {
        uVar6 = FUN_01243584(param_1);
        FUN_0297ee68(uVar6,uVar1,0x360);
      }
      FUN_029872dc(param_1,uVar1);
      goto LAB_01253158;
    }
    if (cVar2 != '\x01') goto LAB_01253158;
    uVar6 = FUN_01243584(param_1);
    FUN_029870ec(uVar6,uVar1,1);
    uVar6 = FUN_01243584(param_1);
    FUN_0297ee68(uVar6,uVar1,0x417);
    iVar4 = FUN_02987104(param_1);
    if (iVar4 < 1) goto LAB_01253158;
    uVar6 = FUN_01243584(param_1);
    uVar7 = 0x35e;
  }
  FUN_0297ee68(uVar6,uVar1,uVar7);
LAB_01253158:
  uVar6 = FUN_01243584(param_1);
  FUN_012480f8(uVar6,1,uVar3);
  return;
}


