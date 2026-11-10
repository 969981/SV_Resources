/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f37f8; name: FUN_022f37f8
 */


void FUN_022f37f8(float param_1,long param_2,char *param_3)

{
  int iVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  float local_28;
  float fStack_24;
  
  lVar4 = *(long *)(param_2 + 0x80);
  if ((ulong)*(uint *)(param_3 + 4) <
      (ulong)((*(long *)(param_2 + 0x88) - lVar4 >> 4) * -0x5555555555555555)) {
    lVar6 = (ulong)*(uint *)(param_3 + 4) * 0x30;
    pfVar2 = (float *)(lVar4 + lVar6 + 0x28);
    fVar12 = *pfVar2;
    piVar5 = *(int **)(lVar4 + lVar6);
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
    if (*puVar7 < 7) {
      fVar13 = 0.0;
      fVar14 = 0.0;
    }
    else {
      fVar14 = 0.0;
      fVar13 = 0.0;
      if ((ulong)puVar7[3] != 0) {
        fVar13 = *(float *)((long)piVar5 + (ulong)puVar7[3]);
      }
      if ((8 < *puVar7) && ((ulong)puVar7[4] != 0)) {
        fVar14 = *(float *)((long)piVar5 + (ulong)puVar7[4]);
      }
    }
    if (param_1 <= fVar14) {
      fVar14 = param_1;
    }
    if (fVar13 <= fVar14) {
      fVar13 = fVar14;
    }
    *pfVar2 = fVar13;
    uVar3 = (ulong)*(uint *)(param_3 + 4);
    lVar4 = *(long *)(param_2 + 0x80);
    if (uVar3 < (ulong)((*(long *)(param_2 + 0x88) - lVar4 >> 4) * -0x5555555555555555)) {
      fVar13 = *(float *)(lVar4 + uVar3 * 0x30 + 0x28);
      if (fVar12 != fVar13 && *(long *)(param_2 + 0x1e8) != 0) {
        if (*param_3 == '\0') {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar8 = (undefined8 *)PTR_DAT_047d3e30
             , iVar1 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          else {
            puVar8 = (undefined8 *)PTR_DAT_047d3e30;
          }
        }
        else {
          puVar8 = (undefined8 *)(lVar4 + uVar3 * 0x30 + 8);
        }
        uVar10 = *(undefined8 *)param_3;
        local_50 = *puVar8;
        uStack_48 = puVar8[1];
        local_40 = puVar8[2];
        plVar9 = (long *)puVar8[3];
        local_38 = plVar9;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        plVar11 = *(long **)(param_2 + 0x1c0);
        local_30 = uVar10;
        local_28 = fVar12;
        fStack_24 = fVar13;
        if (plVar11 != (long *)0x0) {
          do {
            (*(code *)plVar11[6])(plVar11 + 10,&local_50);
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
          plVar9 = local_38;
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


