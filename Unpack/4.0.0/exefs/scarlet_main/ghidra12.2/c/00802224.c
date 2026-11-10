/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00802224; name: FUN_00802224
 */


void FUN_00802224(long param_1,ushort *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_80 [32];
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0xb8);
      lVar2 = lVar10 + uVar9 * 0x80;
      plVar11 = (long *)(lVar2 + 0x10);
      if ((*plVar11 != -1) && (*param_2 != 0)) {
        uVar7 = 0;
        piVar1 = (int *)(lVar2 + 0x20);
        do {
          plVar6 = (long *)FUN_008013e4(param_2,uVar7);
          if ((plVar6 != (long *)0x0) && (*plVar6 == *plVar11)) {
            iVar5 = (int)plVar6[2];
            if (iVar5 - 0xdU < 2) {
              if ((iVar5 == 0xd) && (*piVar1 == 0xb)) goto LAB_008022d4;
            }
            else {
              if (*piVar1 == iVar5) break;
              lVar3 = *plVar11;
              lVar4 = *(long *)(lVar2 + 0x18);
              *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(lVar2 + 0x20);
              *plVar6 = lVar3;
              plVar6[1] = lVar4;
              FUN_0284e39c(plVar6 + 3,lVar2 + 0x28);
              FUN_0284e39c(plVar6 + 7,lVar2 + 0x48);
              plVar6[0xb] = *(long *)(lVar2 + 0x68);
              if (1 < *piVar1 - 0xdU) break;
              if (*piVar1 == 0xe) {
                FUN_00801318(param_2,*plVar11);
                FUN_00800348(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(lVar2 + 0x18));
              }
            }
            FUN_00801cb8(*(long *)(param_1 + 0xb8) + uVar9 * 0x80);
            lVar10 = lVar10 + uVar9 * 0x80;
            *plVar11 = -1;
            *(undefined8 *)(lVar10 + 0x18) = 0;
            *piVar1 = 0;
            FUN_0078b184(lVar10 + 0x28);
            FUN_0078b184(lVar10 + 0x48);
            *(undefined2 *)(lVar10 + 0x68) = 0;
            *(undefined1 *)(lVar10 + 0x6a) = 0;
            *(undefined4 *)(lVar10 + 0x6c) = 0;
            break;
          }
LAB_008022d4:
          uVar7 = uVar7 + 1;
        } while (uVar7 < *param_2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0xc0));
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d0a08;
  FUN_007cd7dc(uVar8);
  if (*param_2 != 0) {
    uVar7 = 0;
    do {
      plVar11 = (long *)FUN_008013e4(param_2,uVar7);
      if ((((plVar11 != (long *)0x0) && (*plVar11 != -1)) && (*plVar11 != *(long *)(param_1 + 0xa0))
          ) && ((int)plVar11[2] - 0xdU < 2)) {
        FUN_007fedb0(auStack_80,*(undefined8 *)(param_1 + 0xb0));
        FUN_007cd7e4(uVar8,auStack_80,(int)plVar11[2] == 0xd);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *param_2);
  }
  return;
}


