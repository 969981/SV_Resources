/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344a698; name: FUN_0344a698
 */


void FUN_0344a698(long param_1,int param_2,long param_3,int param_4,long param_5,uint param_6,
                 uint param_7)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined2 local_64;
  undefined1 local_62;
  
  puVar5 = PTR_DAT_047e6cc0;
  puVar4 = PTR_DAT_047e2fd0;
  if (param_3 == -1) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (DAT_048afc28 == 0) {
    return;
  }
  uVar9 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  if (uVar9 == 0) {
    return;
  }
  uVar3 = 0;
  if (uVar9 != 0) {
    uVar3 = (uint)param_3 / uVar9;
  }
  plVar10 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                      (ulong)((uint)param_3 - uVar3 * uVar9) * 8);
  while( true ) {
    if (plVar10 == (long *)0x0) {
      return;
    }
    if (plVar10[1] == param_3) break;
    plVar10 = (long *)*plVar10;
  }
  lVar16 = plVar10[2];
  if (lVar16 == 0) {
    return;
  }
  plVar10 = *(long **)(param_1 + 8);
  if (plVar10 != (long *)0x0) {
    if (param_4 == 0) {
      do {
        if ((*(int *)((long)plVar10 + 0x3c) == param_2) && (plVar10[2] == lVar16))
        goto LAB_0344a8a0;
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        if (((*(int *)((long)plVar10 + 0x3c) == param_2) &&
            (*(int *)((long)plVar10 + 0x2c) == param_4)) && (plVar10[2] == lVar16))
        goto LAB_0344a8a0;
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != (long *)0x0);
    }
  }
  if (param_4 != 0) {
    plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x78);
    puVar6 = PTR_DAT_047e6fc8;
    if (plVar10 != (long *)0x0) {
      plVar10[4] = 0;
      plVar10[2] = lVar16;
      plVar10[3] = 0;
      *plVar10 = (long)(puVar6 + 0x10);
      plVar10[1] = 0;
      plVar10[6] = 0x400000000;
      *(undefined4 *)(plVar10 + 5) = 0;
      *(int *)((long)plVar10 + 0x2c) = param_4;
      *(undefined1 *)(plVar10 + 7) = 0;
      *(undefined2 *)((long)plVar10 + 0x39) = local_64;
      *(undefined1 *)((long)plVar10 + 0x3b) = local_62;
      *(int *)((long)plVar10 + 0x3c) = param_2;
      plVar10[8] = 0;
      *(undefined1 *)(plVar10 + 9) = 0;
      *(undefined4 *)((long)plVar10 + 0x4c) = 1;
      *(undefined1 *)(plVar10 + 10) = 0;
      uVar9 = *(uint *)(lVar16 + 0x80);
      if (uVar9 < 2) {
        *(uint *)(lVar16 + 0x80) = uVar9 + 1;
        if ((uVar9 != 0) && (*(char *)(lVar16 + 0x84) != '\0')) {
          FUN_034c60b0(*(undefined8 *)puVar5,lVar16);
        }
      }
      else {
        *(uint *)(lVar16 + 0x80) = uVar9 + 1;
      }
      puVar5 = PTR_DAT_047e6fd0;
      plVar10[0xd] = 0;
      plVar10[0xb] = param_1;
      plVar10[0xc] = 0;
      *plVar10 = (long)(puVar5 + 0x10);
      *(byte *)(plVar10 + 0xe) = *(byte *)(plVar10 + 0xe) & 0xf8;
      iVar7 = FUN_0344de44(plVar10);
      if (iVar7 != 1) {
        iVar7 = *(int *)((long)plVar10 + 0x4c) + -1;
        *(int *)((long)plVar10 + 0x4c) = iVar7;
        if (iVar7 == 0) {
          (**(code **)*plVar10)(plVar10);
          (**(code **)(puVar4 + 0x30))(0,plVar10);
        }
        plVar10 = (long *)0x0;
      }
    }
LAB_0344a8a0:
    puVar4 = PTR_DAT_047e2fd0;
    if ((param_6 != 0) && (plVar10 != (long *)0x0)) {
      plVar1 = plVar10 + 0xd;
      uVar11 = 0;
      if ((param_7 & 1) == 0) {
        do {
          uVar11 = uVar11 & 0xffff;
          if ((*(byte *)(plVar10 + 0xe) >> 1 & 1) == 0) {
            uVar9 = *(uint *)(param_5 + uVar11 * 0x14 + 0xc);
            puVar8 = (undefined8 *)(**(code **)(puVar4 + 0x10))(0,0x18);
            if (puVar8 != (undefined8 *)0x0) {
              puVar13 = (undefined8 *)(param_5 + uVar11 * 0x14);
              uVar2 = *(undefined4 *)(puVar13 + 1);
              *puVar8 = *puVar13;
              puVar8[2] = 0;
              *(undefined4 *)(puVar8 + 1) = uVar2;
              *(uint *)((long)puVar8 + 0xc) = uVar9;
              lVar16 = *plVar1;
              if ((lVar16 == 0) || (uVar9 < *(uint *)(lVar16 + 0xc))) {
                plVar14 = plVar1;
                lVar15 = lVar16;
              }
              else {
                do {
                  plVar14 = (long *)(lVar16 + 0x10);
                  lVar16 = *plVar14;
                  if (lVar16 == 0) {
                    lVar15 = 0;
                    goto LAB_0344aa24;
                  }
                } while (*(uint *)(lVar16 + 0xc) <= uVar9);
                lVar15 = lVar16;
              }
LAB_0344aa24:
              puVar8[2] = lVar15;
              *plVar14 = (long)puVar8;
              if (lVar16 == 0) {
                plVar10[0xc] = (long)puVar8;
              }
            }
          }
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar9;
        } while ((uVar9 & 0xffff) < param_6);
      }
      else {
        do {
          uVar11 = uVar11 & 0xffff;
          lVar16 = *(long *)(param_5 + uVar11 * 0x14 + 0xc);
          if (((DAT_048afc38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048afc38), iVar7 != 0))
          {
            DAT_048afc30 = *(int *)PTR_DAT_047e6fa0 * 0xe10;
            __cxa_guard_release(&DAT_048afc38);
          }
          uVar12 = lVar16 - *(long *)(param_1 + 0x30);
          uVar9 = 0;
          if (uVar12 <= DAT_048afc30) {
            uVar9 = (uint)uVar12;
          }
          if (((*(byte *)(plVar10 + 0xe) >> 1 & 1) == 0) &&
             (puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18),
             puVar8 != (undefined8 *)0x0)) {
            puVar13 = (undefined8 *)(param_5 + uVar11 * 0x14);
            uVar2 = *(undefined4 *)(puVar13 + 1);
            *puVar8 = *puVar13;
            puVar8[2] = 0;
            *(undefined4 *)(puVar8 + 1) = uVar2;
            *(uint *)((long)puVar8 + 0xc) = uVar9;
            lVar16 = *plVar1;
            if ((lVar16 == 0) || (uVar9 < *(uint *)(lVar16 + 0xc))) {
              plVar14 = plVar1;
              lVar15 = lVar16;
            }
            else {
              do {
                plVar14 = (long *)(lVar16 + 0x10);
                lVar16 = *plVar14;
                if (lVar16 == 0) {
                  lVar15 = 0;
                  goto LAB_0344a944;
                }
              } while (*(uint *)(lVar16 + 0xc) <= uVar9);
              lVar15 = lVar16;
            }
LAB_0344a944:
            puVar8[2] = lVar15;
            *plVar14 = (long)puVar8;
            if (lVar16 == 0) {
              plVar10[0xc] = (long)puVar8;
            }
          }
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar9;
        } while ((uVar9 & 0xffff) < param_6);
      }
    }
  }
  return;
}


