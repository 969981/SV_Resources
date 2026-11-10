/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d6390; name: FUN_007d6390
 */


void FUN_007d6390(undefined8 param_1,long *param_2,int param_3,ulong param_4,ulong param_5,
                 undefined1 param_6,undefined1 param_7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 uVar10;
  undefined1 auStack_680 [16];
  undefined1 auStack_670 [32];
  int local_650 [4];
  undefined1 auStack_640 [32];
  undefined4 local_620;
  undefined1 local_61c;
  undefined1 local_61b;
  undefined1 local_61a;
  undefined1 local_619;
  uint local_618;
  ulong local_614;
  undefined2 local_60c;
  undefined1 local_60a;
  undefined1 local_609;
  undefined1 local_608;
  undefined1 local_607;
  undefined1 local_606;
  undefined1 local_605;
  undefined1 local_604;
  undefined1 local_603;
  undefined1 local_602;
  undefined1 local_601;
  undefined2 local_600;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  undefined1 local_5fb;
  undefined1 local_5fa;
  undefined1 local_5f9;
  undefined1 local_5f8;
  
  lVar7 = *param_2;
  param_5 = param_5 & 0xffffffff;
  if ((param_3 != 1) || ((lVar7 != 0 && (*(char *)(lVar7 + 0x28) != -3)))) {
    lVar8 = *(long *)PTR_DAT_047d0a08;
    FUN_00796584(auStack_640);
    local_650[0] = 0;
    local_620 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_650 | 4),(Result *)&local_620);
    if (lVar7 == 0) {
      lVar9 = param_2[5];
      uVar2 = (undefined2)param_2[6];
      FUN_00796828(auStack_640,param_2 + 1);
      uVar10 = 0;
      local_5fb = 0;
      uVar1 = 0xfd;
    }
    else {
      FUN_007e5190(&local_620);
      FUN_007e1c44(auStack_670,lVar7,&local_620);
      FUN_018ff39c(local_650,auStack_670);
      if (local_650[0] != 0) {
        FUN_007e51d0(&local_620);
        return;
      }
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar2 = FUN_007e5330(&local_620);
      FUN_007e5304(auStack_670,&local_620);
      FUN_00796828(auStack_640,auStack_670);
      uVar1 = *(undefined1 *)(lVar7 + 0x28);
      uVar10 = *(undefined2 *)(lVar7 + 0xf0);
      FUN_007e51d0(&local_620);
      local_5fb = (undefined1)((ushort)uVar10 >> 8);
    }
    local_61c = (undefined1)(param_5 >> 0x18);
    local_61b = (undefined1)(param_5 >> 0x10);
    local_620 = CONCAT13((char)param_3,CONCAT12(param_7,CONCAT11(param_6,2)));
    local_61a = (undefined1)(param_5 >> 8);
    local_619 = (undefined1)param_5;
    FUN_007c70a8(auStack_670);
    uVar4 = FUN_007c7184(auStack_670);
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    local_618 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar5 = FUN_007e5328(lVar8 + 0x178);
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    local_614 = uVar5 >> 0x20 | uVar5 << 0x20;
    uVar3 = FUN_007e5330(lVar8 + 0x178);
    local_608 = (undefined1)((ulong)lVar9 >> 0x38);
    local_607 = (undefined1)((ulong)lVar9 >> 0x30);
    local_606 = (undefined1)((ulong)lVar9 >> 0x28);
    local_605 = (undefined1)((ulong)lVar9 >> 0x20);
    local_604 = (undefined1)((ulong)lVar9 >> 0x18);
    local_603 = (undefined1)((ulong)lVar9 >> 0x10);
    local_602 = (undefined1)((ulong)lVar9 >> 8);
    local_60a = (undefined1)((ushort)uVar3 >> 8);
    local_601 = (undefined1)lVar9;
    local_600 = 0;
    local_5fd = (undefined1)uVar2;
    local_5fa = (undefined1)uVar10;
    local_5f9 = (undefined1)((param_4 & 0xffffffff) >> 8);
    local_60c = 0;
    local_609 = (undefined1)uVar3;
    local_5f8 = (undefined1)(param_4 & 0xffffffff);
    if ((param_3 == 1) && (lVar7 != 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    local_5fe = (char)((ushort)uVar2 >> 8);
    local_5fc = uVar1;
    FUN_007d5520(auStack_680,param_1,auStack_640,&local_620,0x29,uVar6);
    FUN_018ff39c(local_650,auStack_680);
  }
  return;
}


