/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081358c; name: FUN_0081358c
 */


void FUN_0081358c(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long local_88;
  int local_80 [8];
  
  if (*(char *)(param_1 + 0x7c0) != '\x05') {
    local_88 = 0;
    FUN_007935cc(&local_88);
    lVar8 = local_88 - *(long *)(param_1 + 0x858);
    plVar4 = (long *)FUN_0079365c();
    lVar6 = 0;
    if (*plVar4 != 0) {
      lVar6 = lVar8 / *plVar4;
    }
    if (*(int *)(param_1 + 100) < lVar6) {
      *(long *)(param_1 + 0x858) = local_88;
      if (*(char *)(param_1 + 0x7c0) == '\x03') {
        uVar2 = *(undefined2 *)(param_1 + 0x60);
        FUN_0284e338(local_80);
        FUN_0081649c(param_1,2,local_80,uVar2,0);
        FUN_0284e3d4(local_80);
      }
      else if (*(char *)(param_1 + 0x7c0) == '\x02') {
        FUN_00817ab0(local_80,param_1);
      }
    }
    puVar3 = PTR_DAT_047d0860;
    if (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
      uVar7 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x860);
        uVar7 = uVar7 & 0xffff;
        lVar6 = *(long *)(lVar8 + uVar7 * 0xb0 + 8);
        if (lVar6 != 0) {
          switch(*(undefined1 *)(lVar8 + uVar7 * 0xb0)) {
          case 0:
            if (*(char *)(param_1 + 0x7c0) == '\x04') {
              lVar10 = uVar7 * 0xb0;
              FUN_00817234(param_1,7,lVar6,*(undefined2 *)(lVar8 + lVar10 + 0x10));
              FUN_007935cc(*(long *)(param_1 + 0x860) + lVar10 + 0x98);
              *(undefined1 *)(*(long *)(param_1 + 0x860) + lVar10) = 1;
            }
            else if (*(char *)(param_1 + 0x7c0) == '\x01') {
              *(long *)(param_1 + 0x848) = local_88;
              *(long *)(param_1 + 0x858) = local_88;
              FUN_00817ab0(local_80,param_1);
              if (local_80[0] == 0) {
                *(undefined1 *)(param_1 + 0x7c0) = 2;
              }
            }
            break;
          case 1:
            iVar9 = *(int *)(param_1 + 100);
            uVar5 = (**(code **)(**(long **)(param_1 + 0x6e8) + 0x3f8))();
            if ((uVar5 & 1) != 0) {
              iVar9 = *(int *)(param_1 + 0x68);
            }
            lVar8 = local_88 - *(long *)(*(long *)(param_1 + 0x860) + uVar7 * 0xb0 + 0x98);
            plVar4 = (long *)FUN_0079365c();
            lVar6 = 0;
            if (*plVar4 != 0) {
              lVar6 = lVar8 / *plVar4;
            }
            if (iVar9 < lVar6) {
              lVar8 = uVar7 * 0xb0;
              lVar6 = *(long *)(param_1 + 0x860) + lVar8;
              FUN_00817234(param_1,7,*(undefined8 *)(lVar6 + 8),*(undefined2 *)(lVar6 + 0x10));
              FUN_007935cc(*(long *)(param_1 + 0x860) + lVar8 + 0x98);
              *(undefined1 *)(*(long *)(param_1 + 0x860) + lVar8) = 1;
            }
            break;
          case 2:
            lVar8 = local_88 - *(long *)(lVar8 + uVar7 * 0xb0 + 0x98);
            plVar4 = (long *)FUN_0079365c();
            lVar6 = 0;
            if (*plVar4 != 0) {
              lVar6 = lVar8 / *plVar4;
            }
            if (*(int *)(param_1 + 100) < lVar6) {
              lVar6 = *(long *)(param_1 + 0x860);
              if (*(char *)(lVar6 + uVar7 * 0xb0 + 0x90) != '\0') {
                lVar6 = lVar6 + uVar7 * 0xb0;
                FUN_0081649c(param_1,3,lVar6 + 0x18,uVar7,*(undefined2 *)(lVar6 + 0x10));
                lVar6 = *(long *)(param_1 + 0x860);
              }
              if (*(char *)(lVar6 + uVar7 * 0xb0 + 0x91) != '\0') {
                lVar6 = lVar6 + uVar7 * 0xb0;
                FUN_0081649c(param_1,4,lVar6 + 0x38,uVar7,*(undefined2 *)(lVar6 + 0x10));
                lVar6 = *(long *)(param_1 + 0x860);
              }
              FUN_007935cc(lVar6 + uVar7 * 0xb0 + 0x98);
            }
            lVar6 = *(long *)(param_1 + 0x860);
            if ((*(char *)(lVar6 + uVar7 * 0xb0 + 0x90) == '\0') &&
               (*(char *)(lVar6 + uVar7 * 0xb0 + 0x91) == '\0')) {
              FUN_007935cc(lVar6 + uVar7 * 0xb0 + 0x98);
              *(undefined1 *)(*(long *)(param_1 + 0x860) + uVar7 * 0xb0) = 3;
              FUN_007935cc(param_1 + 0x848);
            }
            break;
          case 3:
            lVar8 = local_88 - *(long *)(lVar8 + uVar7 * 0xb0 + 0x98);
            plVar4 = (long *)FUN_0079365c();
            lVar6 = 0;
            if (*plVar4 != 0) {
              lVar6 = lVar8 / *plVar4;
            }
            if (*(int *)(param_1 + 100) < lVar6) {
              lVar8 = uVar7 * 0xb0;
              lVar6 = *(long *)(param_1 + 0x860) + lVar8;
              FUN_0081649c(param_1,10,lVar6 + 0x18,*(undefined2 *)(param_1 + 0x60),
                           *(undefined2 *)(lVar6 + 0x10));
              lVar6 = *(long *)(param_1 + 0x860) + lVar8;
              FUN_008161f0(param_1,0xc,lVar6 + 0x38,*(undefined2 *)(lVar6 + 0x10));
              lVar6 = *(long *)(param_1 + 0x860) + lVar8;
              FUN_0081649c(param_1,0xe,lVar6 + 0x38,*(undefined2 *)(param_1 + 0x60),
                           *(undefined2 *)(lVar6 + 0x10));
              *(long *)(*(long *)(param_1 + 0x860) + lVar8 + 0x98) = local_88;
            }
          }
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
      } while ((int)(uVar1 & 0xffff) < (int)(*(ushort *)(*(long *)puVar3 + 0x50) - 1));
    }
  }
  return;
}


