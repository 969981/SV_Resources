/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02138b10; name: FUN_02138b10
 */


undefined8
FUN_02138b10(ulong *param_1,uint param_2,long param_3,ulong param_4,ulong *param_5,ulong param_6)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = ((param_4 & 0xffffffff) - (ulong)param_2) + (param_3 - (long)param_1) * 8;
  if (0 < (long)uVar3) {
    if (param_2 != 0) {
      uVar5 = (ulong)(0x40 - param_2);
      uVar2 = (uint)param_6;
      uVar7 = (ulong)(0x40 - uVar2);
      uVar4 = uVar3;
      if ((long)uVar5 <= (long)uVar3) {
        uVar4 = uVar5;
      }
      uVar6 = 0xffffffffffffffffU >> (uVar5 - uVar4 & 0x3f) & -1L << ((ulong)param_2 & 0x3f) &
              *param_1;
      uVar5 = uVar7;
      if (uVar4 <= uVar7) {
        uVar5 = uVar4;
      }
      if (param_2 < uVar2) {
        uVar8 = uVar6 << ((ulong)(uVar2 - param_2) & 0x3f);
      }
      else {
        uVar8 = uVar6 >> ((ulong)(param_2 - uVar2) & 0x3f);
      }
      if ((0xffffffffffffffffU >> (uVar7 - uVar5 & 0x3f) & -1L << (param_6 & 0x3f) & *param_5) !=
          uVar8) {
        return 0;
      }
      uVar7 = param_6 & 0xffffffff;
      param_6 = uVar4 - uVar5;
      uVar7 = uVar5 + uVar7;
      param_5 = (ulong *)((long)param_5 + (uVar7 >> 3 & 0x1ffffffffffffff8));
      if ((long)param_6 < 1) {
        param_6 = (ulong)((uint)uVar7 & 0x3f);
      }
      else if ((*param_5 & 0xffffffffffffffffU >> (-param_6 & 0x3f)) !=
               uVar6 >> (uVar5 + param_2 & 0x3f)) {
        return 0;
      }
      uVar3 = uVar3 - uVar4;
      param_1 = param_1 + 1;
    }
    uVar2 = 0x40 - (int)param_6;
    uVar4 = -1L << (param_6 & 0x3f);
    if (0x3f < (long)uVar3) {
      uVar7 = *param_5;
      uVar5 = uVar3;
      do {
        if ((uVar7 & uVar4) != *param_1 << (param_6 & 0x3f)) {
          return 0;
        }
        param_5 = param_5 + 1;
        uVar7 = *param_5;
        if ((uVar7 & ~uVar4) != *param_1 >> ((ulong)uVar2 & 0x3f)) {
          return 0;
        }
        uVar3 = uVar5 - 0x40;
        param_1 = param_1 + 1;
        bVar1 = 0x7f < (long)uVar5;
        uVar5 = uVar3;
      } while (bVar1);
    }
    if (0 < (long)uVar3) {
      uVar7 = *param_1 & 0xffffffffffffffffU >> (-uVar3 & 0x3f);
      uVar5 = (ulong)uVar2;
      if ((long)uVar3 <= (long)(ulong)uVar2) {
        uVar5 = uVar3;
      }
      if (((0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) & uVar4 & *param_5) !=
           uVar7 << (param_6 & 0x3f)) ||
         ((0 < (long)(uVar3 - uVar5) &&
          ((*(ulong *)((long)param_5 + (uVar5 + (param_6 & 0xffffffff) >> 3 & 0x1ffffffffffffff8)) &
           0xffffffffffffffffU >> (-(uVar3 - uVar5) & 0x3f)) != uVar7 >> (uVar5 & 0x3f))))) {
        return 0;
      }
    }
  }
  return 1;
}


