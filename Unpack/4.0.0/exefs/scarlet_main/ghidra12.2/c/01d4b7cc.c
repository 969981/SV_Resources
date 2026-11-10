/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4b7cc; name: FUN_01d4b7cc
 */


void FUN_01d4b7cc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  lVar8 = *param_1;
  uVar6 = ((long)param_3 - (long)param_2 >> 3) * -0x3333333333333333;
  lVar7 = param_1[2];
  if ((ulong)((lVar7 - lVar8 >> 3) * -0x3333333333333333) < uVar6) {
    if (lVar8 != 0) {
      lVar9 = param_1[1];
      if (lVar9 == lVar8) {
        lVar9 = lVar8;
      }
      else {
        if (*(long **)(lVar9 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x10) + 0x20))();
        }
        if (lVar9 + -0x28 != lVar8) {
          if (*(long **)(lVar9 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar9 + -0x38) + 0x20))();
          }
          if (lVar9 + -0x50 != lVar8) {
            if (*(long **)(lVar9 + -0x60) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + -0x60) + 0x20))();
            }
            if (lVar9 + -0x78 != lVar8) {
              if (*(long **)(lVar9 + -0x88) != (long *)0x0) {
                (**(code **)(**(long **)(lVar9 + -0x88) + 0x20))();
              }
              if (lVar9 + -0xa0 != lVar8) {
                if (*(long **)(lVar9 + -0xb0) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar9 + -0xb0) + 0x20))();
                }
                if (lVar9 + -200 != lVar8) {
                  if (*(long **)(lVar9 + -0xd8) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar9 + -0xd8) + 0x20))();
                  }
                  if (lVar9 + -0xf0 != lVar8) {
                    do {
                      if (*(long **)(lVar9 + -0x100) != (long *)0x0) {
                        (**(code **)(**(long **)(lVar9 + -0x100) + 0x20))();
                      }
                      lVar9 = lVar9 + -0x28;
                    } while (lVar8 + 0xf0 != lVar9);
                  }
                }
              }
            }
          }
        }
        lVar7 = param_1[2];
        lVar9 = *param_1;
      }
      plVar5 = (long *)param_1[3];
      param_1[1] = lVar8;
      uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar7 - lVar9,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar9,lVar7 - lVar9,8);
      }
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar3 = FUN_01d4be54(param_1,uVar6);
    uVar6 = param_1[4];
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar4 = (undefined8 *)
             (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar3 * 0x28,8);
    if (puVar4 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    *param_1 = (long)puVar4;
    param_1[1] = (long)puVar4;
    param_1[2] = (long)(puVar4 + uVar3 * 5);
    puVar1 = PTR_LAB_047d3900;
    for (; param_2 != param_3; param_2 = param_2 + 5) {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 != 0) {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01d4bd8c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar7;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      }
      *puVar4 = *param_2;
      puVar4[1] = param_2[1];
      puVar4[2] = param_2[2];
      plVar5 = (long *)param_2[3];
      puVar4[3] = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 4);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      puVar4 = puVar4 + 5;
    }
    param_1[1] = (long)puVar4;
  }
  else {
    lVar7 = param_1[1] - lVar8 >> 3;
    if ((ulong)(lVar7 * -0x3333333333333333) < uVar6) {
      puVar4 = param_2 + lVar7;
      FUN_01d4bdb0(param_2,puVar4,lVar8);
      puVar1 = PTR_LAB_047d3900;
      puVar10 = (undefined8 *)param_1[1];
      for (; puVar4 != param_3; puVar4 = puVar4 + 5) {
        lVar7 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01d4bd8c;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar7;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        *puVar10 = *puVar4;
        puVar10[1] = puVar4[1];
        puVar10[2] = puVar4[2];
        plVar5 = (long *)puVar4[3];
        puVar10[3] = plVar5;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar4 + 4);
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        puVar10 = puVar10 + 5;
      }
      param_1[1] = (long)puVar10;
    }
    else {
      lVar7 = FUN_01d4bdb0(param_2,param_3,lVar8);
      lVar8 = param_1[1];
      if (lVar8 != lVar7) {
        if (*(long **)(lVar8 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x10) + 0x20))();
        }
        if (lVar8 + -0x28 != lVar7) {
          if (*(long **)(lVar8 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar8 + -0x38) + 0x20))();
          }
          if (lVar8 + -0x50 != lVar7) {
            if (*(long **)(lVar8 + -0x60) != (long *)0x0) {
              (**(code **)(**(long **)(lVar8 + -0x60) + 0x20))();
            }
            if (lVar8 + -0x78 != lVar7) {
              if (*(long **)(lVar8 + -0x88) != (long *)0x0) {
                (**(code **)(**(long **)(lVar8 + -0x88) + 0x20))();
              }
              if (lVar8 + -0xa0 != lVar7) {
                if (*(long **)(lVar8 + -0xb0) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar8 + -0xb0) + 0x20))();
                }
                if (lVar8 + -200 != lVar7) {
                  if (*(long **)(lVar8 + -0xd8) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar8 + -0xd8) + 0x20))();
                  }
                  if (lVar8 + -0xf0 != lVar7) {
                    do {
                      if (*(long **)(lVar8 + -0x100) != (long *)0x0) {
                        (**(code **)(**(long **)(lVar8 + -0x100) + 0x20))();
                      }
                      lVar8 = lVar8 + -0x28;
                    } while (lVar7 + 0xf0 != lVar8);
                  }
                }
              }
            }
          }
        }
      }
      param_1[1] = lVar7;
    }
  }
  return;
}


