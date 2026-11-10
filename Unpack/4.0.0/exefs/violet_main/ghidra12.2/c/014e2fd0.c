/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e2fd0; name: FUN_014e2fd0
 */


void FUN_014e2fd0(long param_1,int param_2,uint param_3,uint param_4,ulong param_5,uint param_6)

{
  int iVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = 3;
  }
  iVar1 = 2;
  if ((param_5 & 1) == 0) {
    iVar1 = iVar4;
  }
  if (iVar1 == 0) {
    lVar8 = 0x68bc;
  }
  else if (iVar1 == 3) {
    lVar8 = 0x68b0;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    lVar8 = 0x68da;
  }
  lVar8 = *(long *)(param_1 + 0x1a8) + lVar8;
  lVar5 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),param_2,param_3,param_4);
  if (lVar5 == 0) {
    return;
  }
  sVar3 = FUN_00e974e0(*(undefined8 *)(lVar5 + 0x70));
  lVar5 = *(long *)(param_1 + 0x1b0);
  if ((((*(short *)(lVar5 + 0xbf6) == 0) || (*(int *)(lVar5 + 0xbf0) != param_2)) ||
      (*(byte *)(lVar5 + 0xbf4) != param_3)) || (*(byte *)(lVar5 + 0xbf5) != param_4)) {
    uVar2 = *(undefined1 *)(lVar8 + (ulong)param_4);
    sVar6 = sVar3;
  }
  else {
    uVar2 = *(undefined1 *)(lVar8 + (ulong)param_4);
    sVar6 = 0;
  }
  FUN_01dd6918(lVar5,sVar6,0,uVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  if ((param_6 & 1) == 0) {
    if ((*(char *)(param_1 + 0x1714) == '\0') ||
       (iVar4 = FUN_014e94fc(param_1,param_2,param_3,param_4), iVar4 != 2)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  FUN_014e56f4(uVar9,iVar1,param_4,uVar7,sVar3 == 0);
  return;
}


