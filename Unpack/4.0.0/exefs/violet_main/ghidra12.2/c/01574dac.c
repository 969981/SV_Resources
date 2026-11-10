/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01574dac; name: FUN_01574dac
 */


void FUN_01574dac(int *param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar13 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + uVar13);
    puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar14);
    uVar7 = param_2[1] - *param_2 >> 3;
    uVar6 = (ulong)*puVar1;
    if (uVar7 < uVar6) {
      FUN_028b514c(param_2,uVar6 - uVar7);
    }
    else if (uVar6 < uVar7) {
      FUN_028b5228(param_2,*param_2 + uVar6 * 8);
    }
    if (*puVar1 != 0) {
      lVar3 = FUN_01575d40((long)(puVar1 + 1) + (ulong)puVar1[1]);
      lVar8 = *(long *)*param_2;
      *(long *)*param_2 = lVar3;
      if (lVar8 != 0) {
        lVar3 = tpidr_el0;
        plVar10 = *(long **)(lVar3 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar10,lVar8,0,8);
        }
      }
      if (1 < *puVar1) {
        uVar6 = 1;
        lVar8 = tpidr_el0;
        lVar3 = 8;
        puVar11 = (uint *)((long)param_1 + uVar14 + uVar13 + 8);
        do {
          uVar4 = FUN_01575d40((long)puVar11 + (ulong)*puVar11);
          lVar9 = *(long *)(*param_2 + lVar3);
          *(undefined8 *)(*param_2 + lVar3) = uVar4;
          if (lVar9 != 0) {
            plVar10 = *(long **)(lVar8 + 0x30);
            if (plVar10 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar10 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar13 = (**(code **)(*plVar10 + 0xf8))(plVar10);
            if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar10,lVar9,0,8);
            }
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 8;
          puVar11 = puVar11 + 1;
        } while (uVar6 < *puVar1);
      }
    }
  }
  if ((6 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar13 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + uVar13);
    plVar10 = param_2 + 3;
    puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar14);
    uVar6 = (ulong)*puVar1;
    uVar7 = param_2[4] - *plVar10 >> 3;
    if (uVar7 < uVar6) {
      FUN_028b514c(plVar10,uVar6 - uVar7);
    }
    else if (uVar6 < uVar7) {
      FUN_028b5228(plVar10,*plVar10 + uVar6 * 8);
    }
    if (*puVar1 != 0) {
      lVar3 = FUN_01575d40((long)(puVar1 + 1) + (ulong)puVar1[1]);
      lVar8 = *(long *)*plVar10;
      *(long *)*plVar10 = lVar3;
      if (lVar8 != 0) {
        lVar3 = tpidr_el0;
        plVar12 = *(long **)(lVar3 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,lVar8,0,8);
        }
      }
      if (1 < *puVar1) {
        uVar6 = 1;
        lVar8 = tpidr_el0;
        lVar3 = 8;
        puVar11 = (uint *)((long)param_1 + uVar14 + uVar13 + 8);
        do {
          uVar4 = FUN_01575d40((long)puVar11 + (ulong)*puVar11);
          lVar9 = *(long *)(*plVar10 + lVar3);
          *(undefined8 *)(*plVar10 + lVar3) = uVar4;
          if (lVar9 != 0) {
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar9,0,8);
            }
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 8;
          puVar11 = puVar11 + 1;
        } while (uVar6 < *puVar1);
      }
    }
  }
  if ((8 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar13 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + uVar13);
    plVar10 = param_2 + 6;
    puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar14);
    uVar6 = (ulong)*puVar1;
    uVar7 = param_2[7] - *plVar10 >> 3;
    if (uVar7 < uVar6) {
      FUN_028b514c(plVar10,uVar6 - uVar7);
    }
    else if (uVar6 < uVar7) {
      FUN_028b5228(plVar10,*plVar10 + uVar6 * 8);
    }
    if (*puVar1 != 0) {
      lVar3 = FUN_01575d40((long)(puVar1 + 1) + (ulong)puVar1[1]);
      lVar8 = *(long *)*plVar10;
      *(long *)*plVar10 = lVar3;
      if (lVar8 != 0) {
        lVar3 = tpidr_el0;
        plVar12 = *(long **)(lVar3 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,lVar8,0,8);
        }
      }
      if (1 < *puVar1) {
        uVar6 = 1;
        lVar8 = tpidr_el0;
        lVar3 = 8;
        puVar11 = (uint *)((long)param_1 + uVar14 + uVar13 + 8);
        do {
          uVar4 = FUN_01575d40((long)puVar11 + (ulong)*puVar11);
          lVar9 = *(long *)(*plVar10 + lVar3);
          *(undefined8 *)(*plVar10 + lVar3) = uVar4;
          if (lVar9 != 0) {
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar9,0,8);
            }
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 8;
          puVar11 = puVar11 + 1;
        } while (uVar6 < *puVar1);
      }
    }
  }
  if ((10 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar13 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + uVar13);
    plVar10 = param_2 + 9;
    puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar14);
    uVar6 = (ulong)*puVar1;
    uVar7 = param_2[10] - *plVar10 >> 3;
    if (uVar7 < uVar6) {
      FUN_028b514c(plVar10,uVar6 - uVar7);
    }
    else if (uVar6 < uVar7) {
      FUN_028b5228(plVar10,*plVar10 + uVar6 * 8);
    }
    if (*puVar1 != 0) {
      lVar3 = FUN_01575d40((long)(puVar1 + 1) + (ulong)puVar1[1]);
      lVar8 = *(long *)*plVar10;
      *(long *)*plVar10 = lVar3;
      if (lVar8 != 0) {
        lVar3 = tpidr_el0;
        plVar12 = *(long **)(lVar3 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,lVar8,0,8);
        }
      }
      if (1 < *puVar1) {
        uVar6 = 1;
        lVar8 = tpidr_el0;
        lVar3 = 8;
        puVar11 = (uint *)((long)param_1 + uVar14 + uVar13 + 8);
        do {
          uVar4 = FUN_01575d40((long)puVar11 + (ulong)*puVar11);
          lVar9 = *(long *)(*plVar10 + lVar3);
          *(undefined8 *)(*plVar10 + lVar3) = uVar4;
          if (lVar9 != 0) {
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar9,0,8);
            }
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 8;
          puVar11 = puVar11 + 1;
        } while (uVar6 < *puVar1);
      }
    }
  }
  if ((0xc < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar13 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + uVar13);
    plVar10 = param_2 + 0xc;
    puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar14);
    uVar6 = (ulong)*puVar1;
    uVar7 = param_2[0xd] - *plVar10 >> 3;
    if (uVar7 < uVar6) {
      FUN_028b514c(plVar10,uVar6 - uVar7);
    }
    else if (uVar6 < uVar7) {
      FUN_028b5228(plVar10,*plVar10 + uVar6 * 8);
    }
    if (*puVar1 != 0) {
      lVar3 = FUN_01575d40((long)(puVar1 + 1) + (ulong)puVar1[1]);
      lVar8 = *(long *)*plVar10;
      *(long *)*plVar10 = lVar3;
      if (lVar8 != 0) {
        lVar3 = tpidr_el0;
        plVar12 = *(long **)(lVar3 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,lVar8,0,8);
        }
      }
      if (1 < *puVar1) {
        uVar6 = 1;
        lVar8 = tpidr_el0;
        lVar3 = 8;
        puVar11 = (uint *)((long)param_1 + uVar14 + uVar13 + 8);
        do {
          uVar4 = FUN_01575d40((long)puVar11 + (ulong)*puVar11);
          lVar9 = *(long *)(*plVar10 + lVar3);
          *(undefined8 *)(*plVar10 + lVar3) = uVar4;
          if (lVar9 != 0) {
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar9,0,8);
            }
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 8;
          puVar11 = puVar11 + 1;
        } while (uVar6 < *puVar1);
      }
    }
  }
  if ((0xe < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar13 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_1 + uVar13);
    puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar14);
    plVar10 = param_2 + 0xf;
    uVar6 = (ulong)*puVar1;
    uVar7 = param_2[0x10] - *plVar10 >> 3;
    if (uVar7 < uVar6) {
      FUN_028b514c(plVar10,uVar6 - uVar7);
    }
    else if (uVar6 < uVar7) {
      FUN_028b5228(plVar10,*plVar10 + uVar6 * 8);
    }
    if (*puVar1 != 0) {
      lVar3 = FUN_01575d40((long)(puVar1 + 1) + (ulong)puVar1[1]);
      lVar8 = *(long *)*plVar10;
      *(long *)*plVar10 = lVar3;
      if (lVar8 != 0) {
        lVar3 = tpidr_el0;
        plVar12 = *(long **)(lVar3 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,lVar8,0,8);
        }
      }
      if (1 < *puVar1) {
        uVar6 = 1;
        lVar8 = tpidr_el0;
        lVar3 = 8;
        puVar11 = (uint *)((long)param_1 + uVar14 + uVar13 + 8);
        do {
          uVar4 = FUN_01575d40((long)puVar11 + (ulong)*puVar11);
          lVar9 = *(long *)(*plVar10 + lVar3);
          *(undefined8 *)(*plVar10 + lVar3) = uVar4;
          if (lVar9 != 0) {
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar9,0,8);
            }
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 8;
          puVar11 = puVar11 + 1;
        } while (uVar6 < *puVar1);
      }
    }
  }
  return;
}


