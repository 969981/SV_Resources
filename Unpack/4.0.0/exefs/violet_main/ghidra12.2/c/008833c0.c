/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008833c0; name: FUN_008833c0
 */


undefined4 FUN_008833c0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  if (param_1 == (int *)0x0) {
    return 0x80260201;
  }
  if (param_2 == (int *)0x0) {
    return 0x80260201;
  }
  iVar8 = *param_1;
  if (iVar8 == 0x1020000) {
    if (param_1[1] != 0x70) {
      return 0x80260202;
    }
  }
  else {
    if (iVar8 != 0x1010000) {
      return 0x80260202;
    }
    if (param_1[1] != 0x50) {
      return 0x80260202;
    }
  }
  iVar4 = *param_2;
  iVar2 = iVar8;
  if ((iVar4 != 0x1010000) && (iVar4 != 0x1020000)) {
    *param_2 = iVar8;
    param_2[1] = param_1[1];
    iVar2 = *param_1;
    iVar4 = iVar8;
  }
  uVar3 = 4;
  if (iVar2 != 0x1010000) {
    uVar3 = 6;
  }
  uVar1 = param_1[2];
  uVar5 = 0x80800008;
  if ((uVar1 - 1 < 6) &&
     (((uVar1 < 5 || (iVar4 != 0x1010000)) && (param_2[2] = uVar1, param_1[3] == 0)))) {
    uVar6 = 0;
    piVar7 = param_2 + 7;
    param_1 = param_1 + 7;
    param_2[3] = 0;
    do {
      if (7 < (uint)param_1[-3]) {
        return 0x80800008;
      }
      piVar7[-3] = param_1[-3];
      iVar8 = FUN_00880d60(param_1[-2],0x41200000,0x46bb8000);
      piVar7[-2] = iVar8;
      iVar8 = FUN_00880d60(*param_1,0xc1a00000,0x41a00000);
      *piVar7 = iVar8;
      iVar8 = FUN_00880d60(param_1[-1],0x3dcccccd,0x41400000);
      piVar7[-1] = iVar8;
      uVar1 = param_2[2];
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
      param_1 = param_1 + 4;
    } while (uVar6 < uVar1);
    if (uVar1 < uVar3) {
      memset(param_2 + (ulong)uVar1 * 4 + 4,0,(ulong)(uVar3 + ~uVar1) * 0x10 + 0x10);
    }
    uVar5 = 0;
  }
  return uVar5;
}


