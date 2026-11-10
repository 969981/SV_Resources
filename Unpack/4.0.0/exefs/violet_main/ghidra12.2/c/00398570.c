/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00398570; name: FUN_00398570
 */


void FUN_00398570(long param_1,long param_2,long param_3,ulong param_4,ulong param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_6 < 0x3c) {
    if (param_5 < 0x3c) {
      if (param_4 < 0x18) {
        if ((param_2 - 1U < 0xc) && (param_3 - 1U < 0x1c)) {
          return;
        }
        if (param_2 != 0xc) {
          lVar4 = param_2 / 0xc;
          param_2 = param_2 % 0xc;
          param_1 = lVar4 + param_1;
          if (param_2 < 1) {
            param_1 = param_1 + -1;
            param_2 = param_2 + 0xc;
          }
        }
        lVar4 = 0;
      }
      else {
        lVar8 = param_2 % 0xc;
        lVar6 = (long)param_4 % 0x18;
        lVar1 = param_2 / 0xc + param_1;
        lVar7 = lVar8;
        if (lVar8 < 1) {
          lVar7 = lVar8 + 0xc;
        }
        lVar4 = (long)param_4 / 0x18 + (lVar6 >> 0x3f);
        if (lVar8 < 1) {
          lVar1 = lVar1 + -1;
        }
        bVar3 = param_2 != 0xc;
        param_2 = 0xc;
        if (bVar3) {
          param_1 = lVar1;
          param_2 = lVar7;
        }
        uVar2 = (uint)lVar6 + 0x18;
        if (-1 < lVar6) {
          uVar2 = (uint)lVar6;
        }
        param_4 = (ulong)uVar2;
      }
    }
    else {
      lVar5 = (long)param_5 % 0x3c;
      lVar4 = (long)param_5 / 0x3c + (lVar5 >> 0x3f);
      lVar1 = lVar4 % 0x18 + (long)param_4 % 0x18;
      lVar7 = param_2 / 0xc + param_1;
      lVar6 = param_2 % 0xc;
      lVar8 = lVar1 % 0x18;
      if (lVar6 < 1) {
        lVar7 = lVar7 + -1;
        lVar6 = lVar6 + 0xc;
      }
      bVar3 = param_2 != 0xc;
      param_2 = 0xc;
      if (bVar3) {
        param_1 = lVar7;
        param_2 = lVar6;
      }
      lVar4 = lVar4 / 0x18 + (long)param_4 / 0x18 + lVar1 / 0x18 + (lVar8 >> 0x3f);
      uVar2 = (uint)lVar8 + 0x18;
      if (-1 < lVar8) {
        uVar2 = (uint)lVar8;
      }
      param_4 = (ulong)uVar2;
      uVar2 = (uint)lVar5 + 0x3c;
      if (-1 < lVar5) {
        uVar2 = (uint)lVar5;
      }
      param_5 = (ulong)uVar2;
    }
  }
  else {
    lVar7 = (long)param_6 % 0x3c;
    lVar4 = (long)param_6 / 0x3c + (lVar7 >> 0x3f);
    lVar1 = lVar4 % 0x3c + (long)param_5 % 0x3c;
    uVar2 = (uint)lVar7 + 0x3c;
    if (-1 < lVar7) {
      uVar2 = (uint)lVar7;
    }
    param_6 = (ulong)uVar2;
    lVar8 = lVar1 % 0x3c;
    lVar4 = lVar4 / 0x3c + (long)param_5 / 0x3c + lVar1 / 0x3c + (lVar8 >> 0x3f);
    lVar1 = lVar4 % 0x18 + (long)param_4 % 0x18;
    lVar5 = lVar1 % 0x18;
    lVar7 = param_2 / 0xc + param_1;
    lVar6 = param_2 % 0xc;
    if (lVar6 < 1) {
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + 0xc;
    }
    bVar3 = param_2 != 0xc;
    lVar4 = lVar4 / 0x18 + (long)param_4 / 0x18 + lVar1 / 0x18 + (lVar5 >> 0x3f);
    param_2 = 0xc;
    if (bVar3) {
      param_1 = lVar7;
      param_2 = lVar6;
    }
    uVar2 = (uint)lVar5 + 0x18;
    if (-1 < lVar5) {
      uVar2 = (uint)lVar5;
    }
    param_4 = (ulong)uVar2;
    uVar2 = (uint)lVar8 + 0x3c;
    if (-1 < lVar8) {
      uVar2 = (uint)lVar8;
    }
    param_5 = (ulong)uVar2;
  }
  FUN_003988b0(param_1,param_2,param_3,lVar4,param_4,param_5,param_6);
  return;
}


