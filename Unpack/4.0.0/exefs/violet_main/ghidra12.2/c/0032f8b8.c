/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032f8b8; name: FUN_0032f8b8
 */


long * FUN_0032f8b8(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *plStack_48;
  
  plVar4 = param_1;
  plVar6 = DAT_047ef4b8;
  if (DAT_047ef4b8 == (long *)0x0) {
    plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    plVar6 = plVar4;
    if (plVar4 != (long *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
    }
  }
  DAT_047ef4b8 = plVar6;
  if (((ulong)param_1 & 1) != 0) {
    plVar3 = (long *)*plVar6;
    lVar17 = *plVar6;
    plVar4 = (long *)plVar6[1];
    lVar14 = (long)plVar3 - lVar17 >> 3;
    if (plVar4 < (long *)plVar6[2]) {
      plVar13 = plVar3;
      if (plVar3 == plVar4) {
        lVar17 = *param_2;
        *param_2 = 0;
        *plVar3 = lVar17;
        plVar6[1] = (long)(plVar3 + 1);
      }
      else {
        plVar16 = plVar4 + -1;
        lVar7 = (long)plVar4 + (-8 - (long)plVar3);
        plVar5 = plVar4;
        if (plVar16 < plVar4) {
          plVar9 = plVar4;
          plVar10 = plVar16;
          do {
            lVar12 = *plVar10;
            plVar11 = plVar10 + 1;
            *plVar10 = 0;
            plVar5 = plVar9 + 1;
            *plVar9 = lVar12;
            plVar9 = plVar5;
            plVar10 = plVar11;
          } while (plVar11 < plVar4);
        }
        plVar6[1] = (long)plVar5;
        puVar2 = PTR_LAB_047cba48;
        if (lVar7 != 0) {
          lVar7 = (lVar7 >> 3) << 3;
          lVar17 = lVar17 + lVar14 * 8 + -8;
          do {
            lVar14 = *(long *)(lVar17 + lVar7);
            *(undefined8 *)(lVar17 + lVar7) = 0;
            puVar15 = (undefined8 *)*plVar16;
            *plVar16 = lVar14;
            if (puVar15 != (undefined8 *)0x0) {
              (**(code **)*puVar15)(puVar15);
              FUN_0049e790(puVar2,puVar15);
            }
            plVar16 = plVar16 + -1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        lVar17 = *param_2;
        *param_2 = 0;
        puVar15 = (undefined8 *)*plVar3;
        *plVar3 = lVar17;
        if (puVar15 != (undefined8 *)0x0) {
          (**(code **)*puVar15)(puVar15);
          FUN_0049e790(PTR_LAB_047cba48,puVar15);
        }
      }
    }
    else {
      uVar1 = ((long)plVar4 - lVar17 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar17 = plVar6[2] - lVar17;
      uVar8 = lVar17 >> 2;
      if (uVar1 <= uVar8) {
        uVar1 = uVar8;
      }
      plStack_48 = plVar6 + 2;
      if (0xffffffffffffffe < (ulong)(lVar17 >> 3)) {
        uVar1 = 0x1fffffffffffffff;
      }
      local_50 = (long *)0x0;
      if (uVar1 == 0) {
        local_68 = (long *)0x0;
      }
      else {
        local_68 = (long *)FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      }
      local_60 = local_68 + lVar14;
      local_50 = local_68 + uVar1;
                    /* try { // try from 0032fc08 to 0032fc13 has its CatchHandler @ 0032fd40 */
      local_58 = local_60;
      FUN_0032ff18(&local_68,param_2);
      plVar13 = local_60;
      plVar4 = (long *)*plVar6;
      if (plVar4 != plVar3) {
        plVar5 = plVar3;
        do {
          plVar5 = plVar5 + -1;
          lVar17 = *plVar5;
          *plVar5 = 0;
          local_60[-1] = lVar17;
          local_60 = local_60 + -1;
        } while (plVar4 != plVar5);
      }
      plVar4 = (long *)plVar6[1];
      if (plVar4 == plVar3) {
        plVar3 = local_58;
      }
      else {
        do {
          lVar17 = *plVar3;
          plVar5 = plVar3 + 1;
          *plVar3 = 0;
          *local_58 = lVar17;
          local_58 = local_58 + 1;
          plVar3 = plVar5;
        } while (plVar4 != plVar5);
        plVar4 = (long *)plVar6[1];
        plVar3 = local_58;
      }
      local_58 = plVar4;
      plVar4 = (long *)*plVar6;
      *plVar6 = (long)local_60;
      plVar6[1] = (long)plVar3;
      lVar17 = plVar6[2];
      plVar6[2] = (long)local_50;
      puVar2 = PTR_LAB_047cba48;
      local_68 = plVar4;
      local_60 = plVar4;
      local_50 = (long *)lVar17;
      if (local_58 != plVar4) {
        do {
          plVar6 = local_58 + -1;
          puVar15 = (undefined8 *)local_58[-1];
          local_58[-1] = 0;
          local_58 = plVar6;
          if (puVar15 != (undefined8 *)0x0) {
            (**(code **)*puVar15)(puVar15);
            FUN_0049e790(puVar2,puVar15);
          }
        } while (local_58 != plVar4);
      }
      if (local_68 != (long *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48,local_68);
      }
    }
    return plVar13;
  }
  plVar3 = (long *)plVar6[1];
  if (plVar3 < (long *)plVar6[2]) {
    lVar17 = *param_2;
    *param_2 = 0;
    *plVar3 = lVar17;
    plVar6[1] = (long)(plVar3 + 1);
  }
  else {
    lVar17 = (long)plVar3 - *plVar6 >> 3;
    uVar1 = lVar17 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = plVar6[2] - *plVar6;
    uVar8 = lVar14 >> 2;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0xffffffffffffffe < (ulong)(lVar14 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
    }
    lVar14 = *param_2;
    plVar3 = plVar4 + lVar17;
    *param_2 = 0;
    plVar16 = plVar3 + 1;
    *plVar3 = lVar14;
    plVar13 = (long *)*plVar6;
    plVar5 = (long *)plVar6[1];
    if (plVar5 == plVar13) {
      *plVar6 = (long)plVar3;
      plVar6[1] = (long)plVar16;
      plVar6[2] = (long)(plVar4 + uVar1);
    }
    else {
      do {
        plVar5 = plVar5 + -1;
        lVar17 = *plVar5;
        *plVar5 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar17;
      } while (plVar13 != plVar5);
      plVar13 = (long *)*plVar6;
      plVar5 = (long *)plVar6[1];
      *plVar6 = (long)plVar3;
      plVar6[1] = (long)plVar16;
      plVar6[2] = (long)(plVar4 + uVar1);
      puVar2 = PTR_LAB_047cba48;
      if (plVar5 != plVar13) {
        do {
          plVar5 = plVar5 + -1;
          puVar15 = (undefined8 *)*plVar5;
          *plVar5 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            (**(code **)*puVar15)(puVar15);
            plVar4 = (long *)FUN_0049e790(puVar2,puVar15);
          }
        } while (plVar13 != plVar5);
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar4 = (long *)FUN_0049e790(PTR_LAB_047cba48,plVar13);
      return plVar4;
    }
  }
  return plVar4;
}


