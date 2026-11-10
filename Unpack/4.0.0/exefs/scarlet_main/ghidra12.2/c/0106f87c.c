/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106f87c; name: FUN_0106f87c
 */


undefined8 FUN_0106f87c(long *param_1,long param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)(param_1[1] + 0x310);
  if (*(int *)(lVar10 + 0x70) == 0) {
    if (*(char *)(lVar10 + 0x8d) == '\0') {
      if (param_2 == 0) {
        if (*(short *)((long)param_1 + 0x12) != 0) {
          lVar10 = FUN_0106fc68(lVar10);
          if (lVar10 == 0) {
            return 0;
          }
          plVar9 = (long *)FUN_0106fc68(*(undefined8 *)(param_1[1] + 0x310));
          uVar4 = (**(code **)(*plVar9 + 0x108))();
          plVar9 = (long *)FUN_0106fc68(*(undefined8 *)(param_1[1] + 0x310));
          uVar6 = (**(code **)(*plVar9 + 0x110))();
          uVar3 = 0;
          if ((uVar6 & 0xffff) != 0) {
            uVar3 = ((uVar4 & 0xffff) * 100) / (uVar6 & 0xffff);
          }
          if (uVar3 <= *(ushort *)((long)param_1 + 0x12)) {
            uVar3 = *(uint *)((long)param_1 + 0x7c);
            if (3 < uVar3) {
              return 1;
            }
            *(undefined1 *)((long)param_1 + (ulong)uVar3 * 8 + 0x5c) = 1;
            *(undefined4 *)(param_1 + (ulong)uVar3 + 0xc) = 0;
            goto LAB_0106f994;
          }
        }
      }
      else {
        uVar1 = *(ushort *)((long)param_1 + 0x14);
        if (uVar1 != 0) {
          lVar10 = *(long *)(param_1[1] + 0x290);
          sVar2 = *(short *)(*(long *)(lVar10 + 0x10) + 0x8a);
          if (sVar2 != 0) {
            lVar8 = FUN_01091070(param_2,sVar2,
                                 (long)*(short *)(*(long *)(*(long *)(lVar10 + 8) + 0x1b0) + 8));
            uVar11 = (ulong)*(ushort *)(*(long *)(lVar10 + 0x10) + 0x8a);
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = (uint)((ulong)(lVar8 * 100) / uVar11);
            }
            if (uVar1 <= uVar3 && uVar3 != uVar1) {
              return 0;
            }
          }
          uVar7 = FUN_01070af0(param_2,*(undefined2 *)(*param_1 + 0x8a));
          uVar3 = *(uint *)((long)param_1 + 0x7c);
          if (3 < uVar3) {
            return 1;
          }
          *(undefined1 *)((long)param_1 + (ulong)uVar3 * 8 + 0x5c) = 1;
          *(undefined4 *)(param_1 + (ulong)uVar3 + 0xc) = uVar7;
LAB_0106f994:
          *(int *)((long)param_1 + 0x7c) = *(int *)((long)param_1 + 0x7c) + 1;
          return 1;
        }
      }
    }
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    if (*(int *)(lVar10 + 0x70) != 1) {
      return 0;
    }
    if ((short)param_1[3] != 0) {
      lVar10 = FUN_0106fc68(lVar10);
      if (lVar10 == 0) {
        return 0;
      }
      plVar9 = (long *)FUN_0106fc68(*(undefined8 *)(param_1[1] + 0x310));
      uVar4 = (**(code **)(*plVar9 + 0x110))();
      iVar5 = FUN_01070010(*(undefined8 *)(param_1[1] + 0x310));
      uVar3 = 0;
      if ((uVar4 & 0xffff) != 0) {
        uVar3 = (uint)(iVar5 * 100) / (uVar4 & 0xffff);
      }
      if (*(ushort *)(param_1 + 3) <= uVar3) {
        uVar3 = *(uint *)((long)param_1 + 0x7c);
        if (3 < uVar3) {
          return 1;
        }
        *(undefined1 *)((long)param_1 + (ulong)uVar3 * 8 + 0x5c) = 2;
        *(undefined4 *)(param_1 + (ulong)uVar3 + 0xc) = 1;
        goto LAB_0106f994;
      }
    }
  }
  return 0;
}


