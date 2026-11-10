/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0184b470; name: FUN_0184b470
 */


void FUN_0184b470(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  piVar5 = (int *)*param_2;
  puVar10 = (ushort *)((long)piVar5 - (long)*piVar5);
  if (*puVar10 < 0xb) {
    iVar7 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (*puVar10 < 9) goto LAB_0184b4cc;
  }
  else {
    iVar2 = 0;
    if ((ulong)puVar10[5] != 0) {
      iVar2 = *(int *)((long)piVar5 + (ulong)puVar10[5]);
    }
  }
  iVar7 = iVar2;
  if ((ulong)puVar10[4] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((long)piVar5 + (ulong)puVar10[4]);
  }
LAB_0184b4cc:
  if (iVar7 - iVar3 == 1) {
    return;
  }
  uVar6 = param_2[0x2c];
  if (uVar6 == 0) {
    return;
  }
  uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar9 = uVar6 - 1 & 0x55c0d7a581349f0f;
  }
  else {
    uVar9 = 0x55c0d7a581349f0f;
    if (uVar6 < 0x55c0d7a581349f10) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x55c0d7a581349f0f / uVar6;
      }
      uVar9 = 0x55c0d7a581349f0f - uVar9 * uVar6;
    }
  }
  plVar11 = *(long **)(param_2[0x2b] + uVar9 * 8);
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return;
  }
  if (1 < uVar8) {
    do {
      uVar8 = plVar11[1];
      if (uVar8 == 0x55c0d7a581349f0f) {
        if (plVar11[2] == 0x55c0d7a581349f0f) goto LAB_0184b5e8;
      }
      else {
        if (uVar6 <= uVar8) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar8 / uVar6;
          }
          uVar8 = uVar8 - uVar1 * uVar6;
        }
        if (uVar8 != uVar9) {
          return;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar11[1] == 0x55c0d7a581349f0f) {
      if (plVar11[2] == 0x55c0d7a581349f0f) goto LAB_0184b5e8;
    }
    else if ((plVar11[1] & uVar6 - 1) != uVar9) {
      return;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_0184b758:
  fVar14 = *(float *)(plVar11 + 6);
  goto LAB_0184b75c;
LAB_0184b5e8:
  local_60 = 0xe7bc0a0f771bb5de;
  pcStack_58 = "Roll";
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar6 = FUN_01180d38(param_2,&local_60);
  fVar14 = 0.0;
  fVar13 = 0.0;
  if ((uVar6 & 0xff) != 0) {
    fVar13 = ((float)(uVar6 >> 0x20) * 3.1415927) / 180.0;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar6 = param_2[0x2c];
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x55c0d7a581349f0f;
    }
    else {
      uVar9 = 0x55c0d7a581349f0f;
      if (uVar6 < 0x55c0d7a581349f10) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = 0x55c0d7a581349f0f / uVar6;
        }
        uVar9 = 0x55c0d7a581349f0f - uVar9 * uVar6;
      }
    }
    plVar11 = *(long **)(param_2[0x2b] + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x55c0d7a581349f0f) {
            if (plVar11[2] == 0x55c0d7a581349f0f) goto LAB_0184b758;
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x55c0d7a581349f0f) {
            if (plVar11[2] == 0x55c0d7a581349f0f) goto LAB_0184b758;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar1 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_0184b75c:
  local_60 = 0x12d7b82ec399ec60;
  pcStack_58 = "EasingType";
  local_50 = 10;
  local_48 = (long *)0x0;
  uVar6 = FUN_01470908(param_2,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar8 = 0;
  if ((uVar6 & 0xff) != 0) {
    uVar8 = uVar6 >> 0x20;
  }
  fVar12 = (float)(**(code **)(PTR_PTR_047d9248 + uVar8 * 8))(param_1);
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar4;
  FUN_0184b86c(fVar14 + (fVar13 - fVar14) * fVar12,uVar4,param_2);
  return;
}


