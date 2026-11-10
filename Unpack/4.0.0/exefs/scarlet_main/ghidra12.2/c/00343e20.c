/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00343e20; name: FUN_00343e20
 */


ulong FUN_00343e20(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 != (ulong *)0x0 || param_2 != (ulong *)0x0) {
    if ((param_1 == (ulong *)0x0) || (param_2 == (ulong *)0x0)) {
      uVar5 = 1;
      if (param_1 == (ulong *)0x0) {
        uVar5 = 0xffffffff;
      }
      return (ulong)uVar5;
    }
    uVar9 = *param_1;
    uVar5 = (uint)(*param_2 < uVar9);
    if (uVar9 < *param_2) {
      uVar5 = 0xffffffff;
    }
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
    if (uVar9 != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        iVar3 = *(int *)(param_1[1] + lVar7);
        iVar4 = *(int *)(param_2[1] + lVar7);
        uVar5 = (uint)(iVar4 < iVar3);
        if (iVar3 < iVar4) {
          uVar5 = 0xffffffff;
        }
        uVar6 = (ulong)uVar5;
        if (uVar5 == 0) {
          lVar1 = param_1[1] + lVar7;
          lVar2 = param_2[1] + lVar7;
          uVar5 = strcmp(*(char **)(lVar1 + 8),*(char **)(lVar2 + 8));
          if (uVar5 != 0) {
            return (ulong)uVar5;
          }
          if (iVar3 != 2) {
            if (iVar3 == 1) {
              uVar6 = (ulong)(*(int *)(lVar2 + 0x10) < *(int *)(lVar1 + 0x10));
              if (*(int *)(lVar1 + 0x10) < *(int *)(lVar2 + 0x10)) {
                return 0xffffffff;
              }
            }
            else {
              if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar5 = strcmp(*(char **)(lVar1 + 0x10),*(char **)(lVar2 + 0x10));
              uVar6 = (ulong)uVar5;
            }
            goto LAB_00343e9c;
          }
          if (*(long *)(lVar1 + 0x10) != *(long *)(lVar2 + 0x10)) {
            uVar9 = *(ulong *)(lVar1 + 0x18);
            uVar5 = (uint)(*(ulong *)(lVar2 + 0x18) < uVar9);
            if (uVar9 < *(ulong *)(lVar2 + 0x18)) {
              uVar5 = 0xffffffff;
            }
            uVar6 = (ulong)uVar5;
            if (uVar5 == 0) {
              uVar6 = (**(code **)(uVar9 + 0x10))(*(long *)(lVar1 + 0x10));
            }
            goto LAB_00343e9c;
          }
        }
        else {
LAB_00343e9c:
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          uVar9 = *param_1;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x20;
        if (uVar9 <= uVar8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


