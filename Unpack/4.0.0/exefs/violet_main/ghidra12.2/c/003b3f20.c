/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b3f20; name: FUN_003b3f20
 */


ulong FUN_003b3f20(long *param_1,int param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (param_1 == (long *)0x0) {
    if ((param_2 == 0x66) || (param_2 == 0x62)) {
      iVar5 = FUN_003d7ff0(0,param_4,0);
      return (long)iVar5;
    }
    if (param_2 == 0x5c) {
      iVar5 = FUN_003d5a90(0,0,param_4);
      return (long)iVar5;
    }
  }
  else {
    uVar7 = (uint)param_3;
    switch(param_2) {
    case 0x10:
      param_1[0x2b] = param_4;
      return 1;
    default:
                    /* WARNING: Could not recover jumptable at 0x003b3fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*param_1 + 0x88))();
      return uVar6;
    case 0x14:
      uVar6 = FUN_00451cc0(param_1[5]);
      return uVar6;
    case 0x15:
      return (long)(int)param_1[0xe];
    case 0x16:
      return (long)(int)param_1[0xf];
    case 0x17:
      return (long)*(int *)((long)param_1 + 0x74);
    case 0x18:
      return (long)*(int *)((long)param_1 + 0x7c);
    case 0x19:
      return (long)*(int *)((long)param_1 + 0x84);
    case 0x1a:
      return (long)(int)param_1[0x10];
    case 0x1b:
      return (long)*(int *)((long)param_1 + 0x94);
    case 0x1c:
      return (long)(int)param_1[0x13];
    case 0x1d:
      return (long)(int)param_1[0x11];
    case 0x1e:
      return (long)*(int *)((long)param_1 + 0x8c);
    case 0x1f:
      return (long)(int)param_1[0x12];
    case 0x21:
      uVar7 = *(uint *)((long)param_1 + 300) | uVar7;
      *(uint *)((long)param_1 + 300) = uVar7;
      return (ulong)uVar7;
    case 0x28:
      return (long)(int)param_1[0x29];
    case 0x29:
      lVar4 = param_1[0x29];
      *(uint *)(param_1 + 0x29) = uVar7;
      return (long)(int)lVar4;
    case 0x2a:
      if (-1 < (long)param_3) {
        uVar6 = param_1[6];
        param_1[6] = param_3;
        return uVar6;
      }
      break;
    case 0x2b:
      return param_1[6];
    case 0x2c:
      uVar1 = *(uint *)(param_1 + 9);
      *(uint *)(param_1 + 9) = uVar7;
      return (ulong)uVar1;
    case 0x2d:
      return (ulong)*(uint *)(param_1 + 9);
    case 0x32:
      return param_1[0x27];
    case 0x33:
      if (-1 < (long)param_3) {
        uVar6 = param_1[0x27];
        param_1[0x27] = param_3;
        return uVar6;
      }
      break;
    case 0x34:
      if (param_3 - 0x200 < 0x3e01) {
        param_1[0x37] = param_3;
        if ((ulong)param_1[0x36] <= param_3) {
          return 1;
        }
LAB_003b4374:
        param_1[0x36] = param_3;
        return 1;
      }
      break;
    case 0x4e:
      uVar7 = *(uint *)((long)param_1 + 300) & ~uVar7;
      *(uint *)((long)param_1 + 300) = uVar7;
      return (ulong)uVar7;
    case 99:
      uVar7 = *(uint *)(param_1[0x28] + 0x1c) | uVar7;
      *(uint *)(param_1[0x28] + 0x1c) = uVar7;
      return (ulong)uVar7;
    case 100:
      uVar7 = *(uint *)(param_1[0x28] + 0x1c) & ~uVar7;
      *(uint *)(param_1[0x28] + 0x1c) = uVar7;
      return (ulong)uVar7;
    case 0x7b:
      uVar3 = *(uint *)((long)param_1 + 0x134);
      uVar1 = uVar7 & 0xffffff00;
      uVar2 = uVar3 & 0xffffff00;
      if ((((uVar3 == 0) || (uVar7 != 0x100 && uVar1 != 0xfe00)) || (uVar3 == 0x100)) ||
         (uVar2 == 0xfe00)) {
        if ((uVar7 == 0) ||
           (uVar3 != 0x100 && uVar2 != 0xfe00 || (uVar7 == 0x100 || uVar1 == 0xfe00))) {
          if ((uVar7 != 0x100 && uVar1 != 0xfe00) && (uVar3 != 0x100 && uVar2 != 0xfe00)) {
            if (((uVar7 != 0) && ((int)uVar7 < 0x300)) && (uVar3 == 0 || 0x2ff < (int)uVar3)) {
              return 0;
            }
          }
          puVar8 = (undefined4 *)*param_1;
          param_1 = param_1 + 0x26;
LAB_003b433c:
          iVar5 = FUN_003cdd20(*puVar8,param_3 & 0xffffffff,param_1);
          return (ulong)(iVar5 != 0);
        }
      }
      break;
    case 0x7c:
      uVar3 = *(uint *)(param_1 + 0x26);
      uVar1 = uVar3 & 0xffffff00;
      uVar2 = uVar7 & 0xffffff00;
      if ((((uVar7 == 0) || (uVar3 != 0x100 && uVar1 != 0xfe00)) || (uVar7 == 0x100)) ||
         (uVar2 == 0xfe00)) {
        if (((uVar3 == 0) ||
            (uVar7 != 0x100 && uVar2 != 0xfe00 || (uVar3 == 0x100 || uVar1 == 0xfe00))) &&
           ((((uVar7 == 0x100 || uVar2 == 0xfe00) || (uVar3 == 0x100 || uVar1 == 0xfe00) ||
             ((uVar7 != 0 && (int)uVar7 < 0x300 || (uVar3 == 0)))) || (0x2ff < (int)uVar3)))) {
          puVar8 = (undefined4 *)*param_1;
          param_1 = (long *)((long)param_1 + 0x134);
          goto LAB_003b433c;
        }
      }
      break;
    case 0x7d:
      if (param_3 - 1 < (ulong)param_1[0x37]) goto LAB_003b4374;
      break;
    case 0x7e:
      if (param_3 - 1 < 0x20) {
        param_1[0x38] = param_3;
        return 1;
      }
      break;
    case 0x82:
      return (long)(int)param_1[0x26];
    case 0x83:
      return (long)*(int *)((long)param_1 + 0x134);
    }
  }
  return 0;
}


