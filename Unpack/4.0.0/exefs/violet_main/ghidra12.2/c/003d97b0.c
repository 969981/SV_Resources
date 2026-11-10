/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d97b0; name: FUN_003d97b0
 */


undefined8 FUN_003d97b0(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  
  lVar4 = FUN_00483c90(param_2);
  if (lVar4 == 0) {
    return 0;
  }
  iVar3 = FUN_0043e840();
  if (iVar3 == 0x198) {
    uVar5 = FUN_003d69f0(param_1,lVar4);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lVar4 = FUN_0043e6b0(lVar4);
    if (lVar4 == 0) {
LAB_003d9828:
      uVar7 = 0;
    }
    else {
      FUN_0040c210();
      iVar3 = FUN_0040d580();
      uVar7 = 0;
      piVar6 = &DAT_03cdd004;
      do {
        if (uVar7 == 0x1e) goto LAB_003d9828;
        iVar2 = *piVar6;
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 3;
      } while (iVar2 != iVar3);
    }
    uVar5 = FUN_003d5be0(param_1,uVar7 & 0xffffffff,*(int *)(param_1 + 0x38) == 0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if ((param_3 != 0) && ((*(byte *)(*(long *)(param_1 + 0x550) + 0x1e) & 3) != 0)) {
      uVar1 = (uint)uVar7 & 0xffff;
      if (uVar1 == 0x17) {
        iVar3 = 0x31a;
      }
      else {
        if (uVar1 != 0x18) {
          return 0;
        }
        iVar3 = 0x31b;
      }
      if (*(ulong *)(param_1 + 0x1988) == 0) {
        return 0;
      }
      uVar7 = 0;
      while (iVar3 != *(int *)(*(long *)(*(long *)(param_1 + 0x1980) + uVar7 * 8) + 0x1c)) {
        uVar7 = uVar7 + 1;
        if (*(ulong *)(param_1 + 0x1988) <= uVar7) {
          return 0;
        }
      }
    }
  }
  return 1;
}


