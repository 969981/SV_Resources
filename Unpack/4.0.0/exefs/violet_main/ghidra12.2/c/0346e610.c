/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346e610; name: FUN_0346e610
 */


void FUN_0346e610(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  if ((*(byte *)(param_2 + 0x198) >> 6 & 1) != 0) {
    return;
  }
  fVar7 = (float)param_1;
  if (param_3 < 0x2e) {
    switch(param_3) {
    case 0x12:
      *(float *)(param_2 + 0x100) = *(float *)(param_2 + 0x100) + fVar7;
      return;
    case 0x13:
      *(float *)(param_2 + 0x104) = *(float *)(param_2 + 0x104) + fVar7;
      return;
    case 0x14:
      if (*(long *)(param_2 + 0x168) == 0) {
        return;
      }
      fVar7 = (float)FUN_0346e878(param_1,param_2);
      *(float *)(*(long *)(param_2 + 0x168) + 4) =
           *(float *)(*(long *)(param_2 + 0x168) + 4) + fVar7;
      return;
    case 0x15:
      if (*(long *)(param_2 + 0x168) == 0) {
        return;
      }
      fVar7 = (float)FUN_0346e878(param_1,param_2);
      *(float *)(*(long *)(param_2 + 0x168) + 0xc) =
           *(float *)(*(long *)(param_2 + 0x168) + 0xc) + fVar7;
      return;
    case 0x16:
      if (*(long *)(param_2 + 0x168) == 0) {
        return;
      }
      fVar7 = (float)FUN_0346e878(param_1,param_2);
      *(float *)(*(long *)(param_2 + 0x168) + 8) =
           *(float *)(*(long *)(param_2 + 0x168) + 8) + fVar7;
      return;
    case 0x17:
      *(float *)(param_2 + 0x128) = fVar7;
      return;
    case 0x18:
      *(float *)(param_2 + 0x10c) = fVar7;
      return;
    }
    goto switchD_0346e65c_default;
  }
  switch(param_3) {
  case 0x40:
    *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) & 0xf8 | (byte)(int)fVar7 & 7;
    return;
  case 0x41:
    uVar2 = *(ushort *)(param_2 + 0x13c) & 0xff7f | (ushort)(fVar7 != 0.0) << 7;
    break;
  case 0x42:
  case 0x43:
  case 0x44:
    goto switchD_0346e65c_default;
  case 0x45:
    *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) & 0xf7 | (0.0 < fVar7) << 3;
    return;
  case 0x46:
    FUN_0346da24(param_2);
    goto switchD_0346e65c_default;
  default:
    if (param_3 != 0x2e) {
      if (param_3 == 0x3a) {
        *(float *)(param_2 + 0x108) = *(float *)(param_2 + 0x108) + fVar7;
        return;
      }
      goto switchD_0346e65c_default;
    }
    uVar2 = *(ushort *)(param_2 + 0x13c) & 0xffbf | (ushort)(fVar7 != 0.0) << 6;
  }
  *(ushort *)(param_2 + 0x13c) = uVar2;
switchD_0346e65c_default:
  lVar3 = *(long *)(param_2 + 0x168);
  if (lVar3 != 0) {
    if (param_3 == 0x44) {
      *(int *)(lVar3 + 0x10) = (int)fVar7;
    }
    else if (param_3 == 0x43) {
      *(int *)(lVar3 + 0x14) = (int)fVar7;
      uVar4 = *(uint *)(lVar3 + 0x30);
      if ((uVar4 & 0x7fffffff) != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          iVar1 = *(int *)(*(long *)(lVar3 + 0x28) + lVar5 + 8);
          if (0 < iVar1) {
            *(undefined4 *)
             (*(long *)(*(long *)(lVar3 + 0x28) + lVar5) + (ulong)(iVar1 - 1) * 0x10 + 0xc) =
                 *(undefined4 *)(lVar3 + 0x14);
            uVar4 = *(uint *)(lVar3 + 0x30);
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar6 < (uVar4 & 0x7fffffff));
      }
    }
    else if (param_3 == 0x42) {
      *(uint *)(lVar3 + 0x30) = *(uint *)(lVar3 + 0x30) & 0x7fffffff | (uint)(fVar7 != 0.0) << 0x1f;
    }
  }
  return;
}


