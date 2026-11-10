/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b2f50; name: FUN_003b2f50
 */


ulong FUN_003b2f50(long param_1,undefined4 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = (uint)param_3;
  switch(param_2) {
  case 0x10:
    *(long **)(param_1 + 0xc0) = param_4;
    return 1;
  default:
                    /* WARNING: Could not recover jumptable at 0x003b3220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1);
    return uVar6;
  case 0x21:
    uVar7 = *(uint *)(param_1 + 0x698) | uVar7;
    *(uint *)(param_1 + 0x698) = uVar7;
    return (ulong)uVar7;
  case 0x28:
    return (long)*(int *)(param_1 + 0x950);
  case 0x29:
    iVar5 = *(int *)(param_1 + 0x950);
    *(uint *)(param_1 + 0x950) = uVar7;
    return (long)iVar5;
  case 0x32:
    return *(ulong *)(param_1 + 0x6a8);
  case 0x33:
    if (-1 < (long)param_3) {
      uVar6 = *(ulong *)(param_1 + 0x6a8);
      *(ulong *)(param_1 + 0x6a8) = param_3;
      return uVar6;
    }
    break;
  case 0x34:
    if (param_3 - 0x200 < 0x3e01) {
      *(ulong *)(param_1 + 0x6c0) = param_3;
      if (*(ulong *)(param_1 + 0x6b8) <= param_3) {
        return 1;
      }
LAB_003b31f4:
      *(ulong *)(param_1 + 0x6b8) = param_3;
      return 1;
    }
    break;
  case 0x4c:
    if (*(long *)(param_1 + 0xa8) != 0) {
      return (long)*(int *)(*(long *)(param_1 + 0xa8) + 0x3d8);
    }
    break;
  case 0x4e:
    uVar7 = *(uint *)(param_1 + 0x698) & ~uVar7;
    *(uint *)(param_1 + 0x698) = uVar7;
    return (ulong)uVar7;
  case 99:
    uVar7 = *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) | uVar7;
    *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) = uVar7;
    return (ulong)uVar7;
  case 100:
    uVar7 = *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) & ~uVar7;
    *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) = uVar7;
    return (ulong)uVar7;
  case 0x6e:
    if (param_4 == (long *)0x0) {
      return 2;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2a8);
    if (lVar8 != 0) {
      *param_4 = lVar8;
      return (long)*(int *)(*(long *)(param_1 + 0xa8) + 0x2b0);
    }
    break;
  case 0x7a:
    if (((*(long *)(param_1 + 0x5d0) == 0) || (iVar5 = FUN_003c38d0(param_1), iVar5 != 0)) ||
       (iVar5 = FUN_003c39f0(param_1), iVar5 != 0)) {
      return 0xffffffffffffffff;
    }
    return (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x270) & 1;
  case 0x7b:
    uVar3 = *(uint *)(param_1 + 0x6a0);
    uVar1 = uVar7 & 0xffffff00;
    uVar2 = uVar3 & 0xffffff00;
    if ((((uVar3 == 0) || (uVar7 != 0x100 && uVar1 != 0xfe00)) || (uVar3 == 0x100)) ||
       (uVar2 == 0xfe00)) {
      if ((uVar7 == 0) || (uVar3 != 0x100 && uVar2 != 0xfe00 || (uVar7 == 0x100 || uVar1 == 0xfe00))
         ) {
        if ((uVar7 != 0x100 && uVar1 != 0xfe00) && (uVar3 != 0x100 && uVar2 != 0xfe00)) {
          if (((uVar7 != 0) && ((int)uVar7 < 0x300)) && (uVar3 == 0 || 0x2ff < (int)uVar3)) {
            return 0;
          }
        }
        uVar4 = *(undefined4 *)**(undefined8 **)(param_1 + 0x660);
        param_1 = param_1 + 0x69c;
LAB_003b31c8:
        iVar5 = FUN_003cdd20(uVar4,param_3 & 0xffffffff,param_1);
        return (ulong)(iVar5 != 0);
      }
    }
    break;
  case 0x7c:
    uVar3 = *(uint *)(param_1 + 0x69c);
    uVar1 = uVar3 & 0xffffff00;
    uVar2 = uVar7 & 0xffffff00;
    if ((((uVar7 == 0) || (uVar3 != 0x100 && uVar1 != 0xfe00)) || (uVar7 == 0x100)) ||
       (uVar2 == 0xfe00)) {
      if (((uVar3 == 0) ||
          (uVar7 != 0x100 && uVar2 != 0xfe00 || (uVar3 == 0x100 || uVar1 == 0xfe00))) &&
         ((((uVar7 == 0x100 || uVar2 == 0xfe00) || (uVar3 == 0x100 || uVar1 == 0xfe00) ||
           ((uVar7 != 0 && (int)uVar7 < 0x300 || (uVar3 == 0)))) || (0x2ff < (int)uVar3)))) {
        uVar4 = *(undefined4 *)**(undefined8 **)(param_1 + 0x660);
        param_1 = param_1 + 0x6a0;
        goto LAB_003b31c8;
      }
    }
    break;
  case 0x7d:
    if (param_3 - 1 < *(ulong *)(param_1 + 0x6c0)) goto LAB_003b31f4;
    break;
  case 0x7e:
    if (0x1f < param_3 - 1) {
      return 0;
    }
    *(ulong *)(param_1 + 0x6c8) = param_3;
    if ((long)param_3 < 2) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x950) = 1;
    return 1;
  case 0x82:
    return (long)*(int *)(param_1 + 0x69c);
  case 0x83:
    return (long)*(int *)(param_1 + 0x6a0);
  }
  return 0;
}


