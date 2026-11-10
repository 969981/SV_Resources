/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086151c; name: FUN_0086151c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0086151c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long *local_70;
  undefined4 local_68;
  ulong local_60;
  uint local_58;
  
  plVar18 = *(long **)(param_1 + 0x70);
  if (plVar18 != (long *)0x0) {
    do {
      if (0 < (long)(int)plVar18[8] * (long)*(int *)(param_2 + 0x20) +
              (long)*(int *)((long)plVar18 + 0x44) * (long)*(int *)(param_2 + 0x24) + plVar18[10] +
              (long)(int)plVar18[9] * (long)*(int *)(param_2 + 0x28)) {
        lVar9 = FUN_0086075c(param_1 + 0x50);
        local_60 = 0;
        local_58 = 0;
        uVar20 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(lVar9 + 0x10) = uVar20;
        uVar20 = *(undefined8 *)(param_2 + 0x20);
        uVar13 = *(undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar9 + 0x30) = uVar13;
        *(undefined8 *)(lVar9 + 0x20) = uVar20;
        *(undefined4 *)(lVar9 + 0x30) = 0;
        *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
        local_68 = 0;
        local_70 = plVar18;
        FUN_00861828(param_1,lVar9,&local_70,&local_60);
        uVar12 = (ulong)(int)local_58;
        uVar14 = *(ulong *)(local_60 + uVar12 * 8 + 0x28);
        while (3 < uVar14) {
          uVar12 = (ulong)(9U >> (ulong)(((uint)uVar12 & 0xf) << 1) & 3);
          uVar14 = *(ulong *)(local_60 + uVar12 * 8 + 0x28);
        }
        lVar1 = local_60 + (uVar12 & 0xffffffff);
        lVar17 = 0;
        lVar19 = 0;
        while( true ) {
          uVar12 = (ulong)(9U >> (ulong)(((uint)uVar12 & 0xf) << 1) & 3);
          uVar14 = *(ulong *)(local_60 + uVar12 * 8 + 0x28);
          while (3 < uVar14) {
            local_60 = uVar14 & 0xfffffffffffffffc;
            uVar12 = (ulong)(9U >> (ulong)(((uint)uVar14 & 3) << 1) & 3);
            uVar14 = *(ulong *)(local_60 + uVar12 * 8 + 0x28);
          }
          lVar11 = local_60 + uVar12;
          local_58 = (uint)uVar12;
          lVar10 = FUN_00861334(param_1 + 0x68);
          lVar15 = *(long *)(local_60 + 0x10 + (ulong)(9U >> (ulong)((local_58 & 0xf) << 1) & 3) * 8
                            );
          lVar16 = *(long *)(local_60 + 0x10 + (long)(int)local_58 * 8);
          *(long *)(lVar10 + 0x20) = lVar16;
          *(long *)(lVar10 + 0x10) = lVar9;
          *(long *)(lVar10 + 0x18) = lVar15;
          *(undefined8 *)(lVar10 + 0x60) = 0xffffffff00000000;
          *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
          *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 1;
          *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
          iVar3 = *(int *)(lVar15 + 0x20) - *(int *)(lVar9 + 0x20);
          iVar4 = *(int *)(lVar16 + 0x20) - *(int *)(lVar9 + 0x20);
          iVar5 = *(int *)(lVar15 + 0x28) - *(int *)(lVar9 + 0x28);
          iVar6 = *(int *)(lVar15 + 0x24) - *(int *)(lVar9 + 0x24);
          iVar7 = *(int *)(lVar16 + 0x24) - *(int *)(lVar9 + 0x24);
          iVar8 = *(int *)(lVar16 + 0x28) - *(int *)(lVar9 + 0x28);
          iVar2 = iVar8 * iVar6 - iVar7 * iVar5;
          iVar5 = iVar4 * iVar5 - iVar8 * iVar3;
          iVar3 = iVar7 * iVar3 - iVar4 * iVar6;
          *(int *)(lVar10 + 0x40) = iVar2;
          *(int *)(lVar10 + 0x44) = iVar5;
          *(int *)(lVar10 + 0x48) = iVar3;
          *(undefined8 *)(lVar10 + 0x50) = 0;
          if ((iVar5 != 0 || iVar3 != 0) || iVar2 != 0) {
            *(long *)(lVar10 + 0x50) =
                 -((long)*(int *)(lVar9 + 0x24) * (long)iVar5 +
                   (long)*(int *)(lVar9 + 0x20) * (long)iVar2 +
                  (long)*(int *)(lVar9 + 0x28) * (long)iVar3);
          }
          *(long *)(local_60 + (long)(int)local_58 * 8 + 0x28) = lVar10 + 1;
          if (lVar1 == lVar11) break;
          if (lVar10 != 0) {
            *(ulong *)(lVar10 + 0x30) = local_60 + local_58;
          }
          lVar11 = lVar10;
          if (lVar19 != 0) {
            *(long *)(lVar19 + 0x28) = lVar10 + 2;
            if (lVar10 != 0) {
              *(long *)(lVar10 + 0x38) = lVar19;
            }
            lVar11 = lVar17;
          }
          uVar12 = (ulong)local_58;
          lVar17 = lVar11;
          lVar19 = lVar10;
        }
        if (lVar10 == 0) {
          *(undefined8 *)(lVar19 + 0x28) = 2;
          _DAT_00000028 = lVar17 + 2;
        }
        else {
          *(ulong *)(lVar10 + 0x30) = local_60 + local_58;
          *(long *)(lVar19 + 0x28) = lVar10 + 2;
          *(long *)(lVar10 + 0x38) = lVar19;
          *(long *)(lVar10 + 0x28) = lVar17 + 2;
        }
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x38) = lVar10;
        }
        return 1;
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  return 0;
}


