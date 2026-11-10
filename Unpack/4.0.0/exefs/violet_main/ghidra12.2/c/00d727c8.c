/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d727c8; name: FUN_00d727c8
 */


void FUN_00d727c8(long *param_1,undefined1 param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  
  if (*(char *)(param_3 + 0x4c) == '\0') {
    plVar15 = (long *)param_1[9];
    if (plVar15 == (long *)param_1[10]) {
      uVar13 = param_1[0xc];
      lVar16 = (long)plVar15 - param_1[8] >> 3;
      if (0x7ffffffffffffffe < uVar13) {
        uVar13 = 0x7fffffffffffffff;
      }
      uVar1 = lVar16 + 1;
      if (uVar13 < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = param_1[10] - param_1[8];
      uVar10 = lVar5 >> 2;
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (uVar13 >> 1 <= (ulong)(lVar5 >> 3)) {
        uVar1 = uVar13;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*(long *)param_1[0xb] + 0x10))((long *)param_1[0xb],uVar1 << 3,1);
        if (lVar5 == 0) {
          (**(code **)(*(long *)param_1[0xb] + 0xe8))();
        }
      }
      plVar15 = (long *)(lVar5 + lVar16 * 8);
      lVar16 = param_1[0xb];
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        *plVar15 = param_3;
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00d72cf8;
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *plVar15 = param_3;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar16 = param_1[8];
      lVar6 = param_1[9];
      plVar14 = plVar15;
      if (lVar6 != lVar16) {
        do {
          lVar11 = param_1[0xb];
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar7 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar7 == 0) {
            plVar14[-1] = *(long *)(lVar6 + -8);
          }
          else {
            if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00d72cf8;
            *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            plVar14[-1] = *(long *)(lVar6 + -8);
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          }
          lVar6 = lVar6 + -8;
          plVar14 = plVar14 + -1;
        } while (lVar16 != lVar6);
        lVar16 = param_1[8];
      }
      param_1[8] = (long)plVar14;
      param_1[9] = (long)(plVar15 + 1);
      lVar6 = param_1[10];
      param_1[10] = lVar5 + uVar1 * 8;
      if (lVar16 != 0) {
        plVar15 = (long *)param_1[0xb];
        uVar13 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar16,lVar6 - lVar16,1);
        }
        else {
          FUN_00c48fe8(plVar15,lVar16,lVar6 - lVar16,1);
        }
      }
    }
    else {
      lVar16 = param_1[0xb];
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *plVar15 = param_3;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00d72cf8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar16;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *plVar15 = param_3;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      param_1[9] = (long)(plVar15 + 1);
    }
    (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined1 *)(param_3 + 0x4c) = 1;
  }
  *(undefined1 *)(param_3 + 0x30) = param_2;
  *(ulong *)(param_3 + 0x58) = *(ulong *)(param_3 + 0x28) >> 1 & 1;
  uVar8 = 1;
  switch(param_2) {
  case 0:
    break;
  case 1:
    uVar8 = 2;
    break;
  case 2:
    uVar8 = 3;
    break;
  case 3:
    uVar8 = 4;
    break;
  case 4:
    uVar8 = 5;
    break;
  case 5:
    uVar8 = 6;
    break;
  case 6:
    uVar8 = 10;
    break;
  case 7:
    uVar8 = 0xc;
    break;
  case 8:
    uVar8 = 0xf;
    break;
  case 9:
    uVar8 = 0x1e;
    break;
  case 10:
    uVar8 = 0x3c;
    break;
  default:
    uVar8 = 0;
  }
  *(char *)(param_3 + 0x48) = (char)uVar8;
  if (*(char *)(param_3 + 0x20) != *(char *)(param_3 + 0x21)) {
    *(short *)(param_1 + 0x26) = (short)param_1[0x26] + 1;
    uVar8 = (uint)*(byte *)(param_3 + 0x48);
  }
  if (uVar8 < 2) {
    bVar2 = *(byte *)(param_3 + 0x30);
    if (0x81 < bVar2) {
      if (bVar2 == 0x82) {
        *(undefined1 *)(param_3 + 0x49) = 0xff;
        *(undefined1 **)(param_3 + 0x38) = &LAB_02de25b8;
        *(undefined8 *)(param_3 + 0x40) = 0;
        return;
      }
      if (bVar2 == 0x83) {
        *(undefined1 **)(param_3 + 0x38) = &LAB_02de25b8;
        *(undefined8 *)(param_3 + 0x40) = 0;
        *(undefined1 *)(param_3 + 0x49) = 0xff;
        return;
      }
      return;
    }
    if (bVar2 == 0) {
      *(undefined1 *)(param_3 + 0x49) = *(undefined1 *)((long)param_1 + 300);
      puVar9 = &LAB_02de255c;
    }
    else {
      if (bVar2 != 0x81) {
        return;
      }
      *(undefined1 *)(param_3 + 0x49) = *(undefined1 *)((long)param_1 + 300);
      puVar9 = &LAB_02de2564;
    }
    *(undefined1 **)(param_3 + 0x38) = puVar9;
    *(undefined8 *)(param_3 + 0x40) = 0;
    uVar8 = 1;
  }
  else {
    *(undefined1 **)(param_3 + 0x38) = &LAB_02de2554;
    *(undefined8 *)(param_3 + 0x40) = 0;
    if ((int)param_1[0x25] == 1) {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = *(byte *)((long)param_1 + 300) / uVar8;
      }
      uVar12 = (undefined1)(((uVar3 + 1) * uVar8 & 0xffff) % 0x3c);
    }
    else {
      if ((int)param_1[0x25] != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","GetInitStep",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/behavior_container.cpp"
                   ,0x187,"invalid operation");
      }
      uVar12 = *(undefined1 *)((long)param_1 + 300);
    }
    *(undefined1 *)(param_3 + 0x49) = uVar12;
  }
  *(char *)(param_3 + 0x4a) = (char)uVar8;
  return;
}


