/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c54b4; name: FUN_034c54b4
 */


void FUN_034c54b4(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long local_68;
  
  puVar4 = PTR_DAT_047e2fd0;
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar13 = (long *)**(undefined8 **)(param_1 + 0x30);
    if (plVar13 == (long *)0x0) {
      uVar15 = 0;
      do {
        if (*(int *)(param_1 + 0x38) - 1 == uVar15) {
          return;
        }
        uVar15 = uVar15 + 1;
        plVar13 = (long *)(*(undefined8 **)(param_1 + 0x30))[uVar15 & 0xffffffff];
      } while (plVar13 == (long *)0x0);
    }
    else {
      uVar15 = 0;
    }
    plVar14 = (long *)0x0;
    do {
      uVar5 = plVar13[1];
      if (uVar5 == 0xfffffffffffffffe) {
LAB_034c5534:
        plVar11 = (long *)*plVar13;
        if (plVar11 == (long *)0x0) {
          uVar8 = (int)uVar15 + 1;
          if (*(uint *)(param_1 + 0x38) <= uVar8) {
            return;
          }
          uVar5 = (ulong)uVar8;
          while (plVar11 = *(long **)(*(long *)(param_1 + 0x30) + uVar5 * 8), plVar11 == (long *)0x0
                ) {
            uVar5 = uVar5 + 1;
            if (*(uint *)(param_1 + 0x38) == uVar5) {
              return;
            }
          }
          plVar14 = (long *)0x0;
        }
        else {
          uVar5 = uVar15 & 0xffffffff;
          plVar14 = plVar13;
        }
      }
      else {
        puVar12 = (undefined8 *)plVar13[2];
        if ((param_2 != 0) && (uVar8 = *(uint *)(param_2 + 0x18), uVar8 != 0)) {
          iVar9 = 0;
          do {
            iVar1 = iVar9 + (uVar8 >> 1);
            uVar10 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
            if (uVar10 == uVar5) goto LAB_034c5534;
            if (uVar10 < uVar5) {
              iVar9 = iVar1 + 1;
            }
            uVar8 = uVar8 - (uVar10 < uVar5) >> 1;
          } while (uVar8 != 0);
        }
        iVar9 = *(int *)(puVar12 + 0x10);
        uVar8 = iVar9 - 1;
        *(undefined1 *)((long)puVar12 + 0x84) = 0;
        *(uint *)(puVar12 + 0x10) = uVar8;
        if (iVar9 == 0 || uVar8 == 0) {
          if (uVar8 == 0) {
            lVar6 = puVar12[5];
            if (lVar6 != 0) {
              uVar8 = ((uint)lVar6 ^ (uint)lVar6 >> 0x10) * -0x7a143595;
              uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
              local_68 = lVar6;
              FUN_034c6294(&DAT_048b02b8,&local_68,uVar8 ^ uVar8 >> 0x10);
              uVar8 = *(uint *)(puVar12 + 0x10);
              goto joined_r0x034c561c;
            }
LAB_034c5620:
            (**(code **)*puVar12)(puVar12);
            (**(code **)(puVar4 + 0x30))(4,puVar12);
          }
        }
        else if (uVar8 < 2) {
joined_r0x034c561c:
          if (uVar8 == 0) goto LAB_034c5620;
        }
        plVar7 = (long *)*plVar13;
        uVar5 = uVar15 & 0xffffffff;
        plVar11 = plVar7;
        plVar3 = plVar14;
        if (plVar7 == (long *)0x0) {
          uVar2 = *(uint *)(param_1 + 0x38);
          uVar8 = (int)uVar15 + 1;
          uVar5 = (ulong)uVar8;
          if (uVar8 < uVar2) {
            do {
              plVar11 = *(long **)(*(long *)(param_1 + 0x30) + uVar5 * 8);
              if (plVar11 != (long *)0x0) {
                plVar3 = (long *)0x0;
                goto joined_r0x034c56e4;
              }
              uVar8 = (int)uVar5 + 1;
              uVar5 = (ulong)uVar8;
            } while (uVar2 != uVar8);
            uVar5 = (ulong)uVar2;
            plVar11 = (long *)0x0;
            plVar3 = (long *)0x0;
          }
          else {
            plVar11 = (long *)0x0;
          }
        }
joined_r0x034c56e4:
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)(*(long *)(param_1 + 0x30) + (uVar15 & 0xffffffff) * 8);
        }
        *plVar14 = (long)plVar7;
        (**(code **)(puVar4 + 0x30))(0,plVar13);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        plVar14 = plVar3;
      }
      uVar15 = uVar5 & 0xffffffff;
      plVar13 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  return;
}


