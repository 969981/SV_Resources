/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350cb74; name: FUN_0350cb74
 */


int FUN_0350cb74(long param_1,long *param_2,byte param_3,byte param_4)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  
  lVar9 = param_2[3];
  *(long *)(lVar9 + 0x250) = param_1;
  if ((((param_3 ^ 1) & 1) == 0) && (((param_4 ^ 1) & 1) == 0)) {
    puVar1 = (uint *)(lVar9 + 699);
    uVar5 = *puVar1;
    if ((uVar5 >> 7 & 1) == 0) {
      *puVar1 = uVar5 | 0x80;
      lVar6 = *(long *)(lVar9 + 0x188);
      if ((*(byte *)(lVar6 + 0xdb) >> 4 & 1) == 0) {
        do {
          lVar8 = *(long *)(lVar6 + 0x98);
          if (lVar8 == 0) break;
          lVar6 = lVar8;
        } while ((*(byte *)(lVar8 + 0xdb) >> 4 & 1) == 0);
      }
      uVar7 = *(byte *)(lVar6 + 0xf0) >> 3 & 7;
      *(uint *)(param_1 + 0x148) = uVar7;
      uVar5 = *(byte *)(lVar6 + 0xf1) & 0xf;
      if (uVar5 == 3) {
        uVar4 = (**(code **)(**(long **)(lVar9 + 0x188) + 0x230))
                          (*(long **)(lVar9 + 0x188),*(undefined8 *)(lVar9 + 0x240));
        uVar7 = *(uint *)(param_1 + 0x148);
        uVar5 = 1;
        if ((uVar4 & 1) != 0) {
          uVar5 = 2;
        }
      }
      *puVar1 = uVar7 & 7 | uVar5 << 3 | *puVar1 & 0xffffff80;
    }
    else {
      *(uint *)(param_1 + 0x148) = uVar5 & 7;
      uVar5 = *puVar1 >> 3 & 0xf;
    }
    *(uint *)(param_1 + 0x14c) = uVar5;
    if (*(int *)(lVar9 + 0x16c) == 0) {
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x78);
      *(long *)(lVar9 + 0x160) = lVar6;
      if (lVar6 == 0) {
        iVar3 = 2;
        goto LAB_0350ce84;
      }
      *(undefined4 *)(lVar9 + 0x16c) = 1;
    }
  }
  if (*(int *)(param_1 + 0x14c) == 0) {
LAB_0350cd64:
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      iVar3 = (**(code **)(*param_2 + 0x68))
                        (param_2,*(undefined8 *)(lVar9 + 0x2e0),*(undefined4 *)(lVar9 + 0x2e8));
      if (iVar3 != 0x3f) {
        if (iVar3 != 1) {
LAB_0350ce84:
          (**(code **)(*param_2 + 0x60))(param_2,1);
          (**(code **)*param_2)(param_2);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,param_2);
          return iVar3;
        }
        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
      }
      goto joined_r0x0350ce24;
    }
  }
  else {
    plVar2 = (long *)(lVar9 + 0x18);
    if ((*(ushort *)(lVar9 + 0x1b0) & 1) == 0) {
      (**(code **)(*plVar2 + 0x58))(plVar2,0);
    }
    else if ((*(ushort *)(lVar9 + 0x1b0) >> 4 & 1) != 0) {
      (**(code **)(*plVar2 + 0x60))();
    }
    if (-37.0 <= *(float *)(lVar9 + 0x78) * 0.05) {
      uVar5 = (uint)(*(float *)(lVar9 + 0x78) * 1393317.6 + 1.0653532e+09);
      fVar10 = (float)(uVar5 & 0x7fffff | 0x3f800000);
      fVar10 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar5 & 0xff800000);
    }
    else {
      fVar10 = 0.0;
    }
    if (DAT_047c66c0 < *(float *)(lVar9 + 0xe0) * fVar10) goto LAB_0350cd64;
    if (*(int *)(param_1 + 0x14c) == 1) {
      iVar3 = 3;
      goto LAB_0350ce84;
    }
    if (((*(int *)(param_1 + 0x148) != 0 | param_3 ^ 1 | param_4 ^ 1) & 1) != 0) goto LAB_0350cd64;
    if ((*(int *)(param_1 + 0x14c) != 0) && ((*(byte *)(param_1 + 0x50) & 1) != 0)) {
      FUN_034a5e44(lVar9);
    }
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
  }
  iVar3 = 1;
joined_r0x0350ce24:
  if ((param_3 & 1) == 0) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x118) + 0xb0))();
    if ((((uVar4 & 1) == 0) && (uVar4 = (**(code **)(*param_2 + 0xb0))(param_2), (uVar4 & 1) == 0))
       || (*(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x118) + 0x18) + 0x248) + 0x18) ==
           *(int *)(*(long *)(lVar9 + 0x248) + 0x18))) {
      *(long **)(param_1 + 0x120) = param_2;
    }
    else {
      iVar3 = 0x11;
    }
  }
  else {
    *(long **)(param_1 + 0x118) = param_2;
    lVar6 = 0;
    if (param_2[3] != 0) {
      lVar6 = param_2[3] + 0x18;
    }
    *(long *)(param_1 + 8) = lVar6;
    *(uint *)(lVar9 + 699) = *(uint *)(lVar9 + 699) & 0xfdffffff;
  }
  return iVar3;
}


