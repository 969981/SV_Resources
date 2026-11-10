/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1bb38; name: FUN_00c1bb38
 */


long * FUN_00c1bb38(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  void *__src;
  undefined1 auVar16 [16];
  undefined8 *local_a8;
  long local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_68;
  
  plVar14 = param_1 + 1;
  plVar6 = (long *)*param_1;
  local_68 = param_3;
  do {
    if (plVar6 == plVar14) {
      return param_1;
    }
    if (*(char *)((long)plVar6 + 0x31) == '\0') {
      if ((*(byte *)((long)plVar6 + 0x32) & 1) == 0) goto LAB_00c1bb98;
    }
    else {
      param_1 = (long *)FUN_00c1ff04(plVar6 + 5);
      if (0 < (int)param_1) {
LAB_00c1bb98:
        lVar12 = plVar6[7];
        if (lVar12 == 0) {
          param_3 = (long *)(ulong)*(uint *)(plVar6 + 4);
          plVar9 = (long *)FUN_00b7c264(local_68,param_2);
          puVar1 = (undefined8 *)param_4[1];
          param_1 = plVar9;
          if (puVar1 < (undefined8 *)param_4[2]) {
            *puVar1 = plVar9;
            param_4[1] = puVar1 + 1;
          }
          else {
            __src = (void *)*param_4;
            plVar8 = (long *)((long)puVar1 - (long)__src);
            lVar12 = (long)plVar8 >> 3;
            uVar5 = lVar12 + 1;
            if (uVar5 >> 0x3d != 0) goto LAB_00c1bfe4;
            lVar15 = (long)param_4[2] - (long)__src;
            uVar13 = lVar15 >> 2;
            if (uVar5 <= uVar13) {
              uVar5 = uVar13;
            }
            if (0xffffffffffffffe < (ulong)(lVar15 >> 3)) {
              uVar5 = 0x1fffffffffffffff;
            }
            if (uVar5 == 0) {
              plVar11 = (long *)0x0;
            }
            else {
              if (uVar5 >> 0x3d != 0) goto LAB_00c1bfec;
              lVar10 = uVar5 << 3;
              lVar15 = tpidr_el0;
              plVar11 = *(long **)(lVar15 + 0x30);
              if (plVar11 == (long *)0x0) {
                local_70 = lVar10;
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar11 = DAT_04859430;
                *(long **)(lVar15 + 0x30) = DAT_04859430;
                lVar10 = local_70;
              }
              param_3 = (long *)&DAT_00000008;
              plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,lVar10);
              param_1 = plVar11;
            }
            plVar11[lVar12] = (long)plVar9;
            if (0 < (long)plVar8) {
              param_1 = memcpy(plVar11,__src,(size_t)plVar8);
              param_3 = plVar8;
            }
            *param_4 = plVar11;
            param_4[1] = plVar11 + lVar12 + 1;
            param_4[2] = plVar11 + uVar5;
            if (__src != (void *)0x0) {
              lVar12 = tpidr_el0;
              plVar9 = *(long **)(lVar12 + 0x30);
              if (plVar9 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar9 = DAT_04859430;
                *(long **)(lVar12 + 0x30) = DAT_04859430;
              }
              goto LAB_00c1bdbc;
            }
          }
        }
        else {
          plVar9 = (long *)param_4[1];
          if (plVar9 == (long *)param_4[2]) {
            __src = (void *)*param_4;
            plVar9 = (long *)((long)plVar9 - (long)__src);
            lVar15 = (long)plVar9 >> 3;
            uVar5 = lVar15 + 1;
            if (uVar5 >> 0x3d != 0) {
LAB_00c1bfe4:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar10 = (long)param_4[2] - (long)__src;
            uVar13 = lVar10 >> 2;
            if (uVar5 <= uVar13) {
              uVar5 = uVar13;
            }
            if (0xffffffffffffffe < (ulong)(lVar10 >> 3)) {
              uVar5 = 0x1fffffffffffffff;
            }
            lVar10 = tpidr_el0;
            if (uVar5 == 0) {
              plVar8 = (long *)0x0;
            }
            else {
              if (uVar5 >> 0x3d != 0) {
LAB_00c1bfec:
                auVar16 = FUN_00c1f920();
                lVar12 = auVar16._8_8_;
                uStack_98 = 0xc1bff0;
                local_a0 = (long)register0x00000008 + -0x60;
                local_90 = plVar14;
                uStack_88 = param_2;
                local_80 = uVar5;
                puStack_78 = param_4;
                uVar5 = FUN_00c202f0(auVar16._0_8_,*(undefined4 *)(lVar12 + 0x38),lVar12,&local_a8);
                if ((uVar5 & 1) == 0) {
                  bVar2 = *(byte *)((long)local_a8 + 10);
                  *(byte *)((long)local_a8 + 10) = bVar2 & 0xf0;
                  if ((bVar2 >> 4 & 1) == 0) {
                    plVar6 = (long *)*local_a8;
                  }
                  else {
                    plVar6 = (long *)*local_a8;
                    uVar7 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(lVar12 + 0x68));
                    plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,uVar7);
                  }
                }
                else {
                  *(char *)(local_a8 + 1) = (char)*(undefined4 *)(lVar12 + 0x3c);
                  *(undefined1 *)((long)local_a8 + 9) = 0;
                  *(undefined1 *)((long)local_a8 + 0xb) = 0;
                  plVar6 = (long *)(**(code **)(*param_3 + 0x10))
                                             (param_3,*(undefined8 *)(lVar12 + 0x68));
                  *(byte *)((long)local_a8 + 10) = *(byte *)((long)local_a8 + 10) & 0xf;
                  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))
                                             (plVar6,*(undefined8 *)(auVar16._0_8_ + 0x18));
                  *local_a8 = plVar6;
                  *(byte *)((long)local_a8 + 10) = *(byte *)((long)local_a8 + 10) & 0xf0;
                }
                return plVar6;
              }
              plVar8 = *(long **)(lVar10 + 0x30);
              if (plVar8 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar8 = DAT_04859430;
                *(long **)(lVar10 + 0x30) = DAT_04859430;
              }
              param_3 = (long *)&DAT_00000008;
              param_1 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar5 << 3);
              lVar12 = plVar6[7];
              plVar8 = param_1;
            }
            plVar8[lVar15] = lVar12;
            if (0 < (long)plVar9) {
              param_1 = memcpy(plVar8,__src,(size_t)plVar9);
              param_3 = plVar9;
            }
            *param_4 = plVar8;
            param_4[1] = plVar8 + lVar15 + 1;
            param_4[2] = plVar8 + uVar5;
            if (__src != (void *)0x0) {
              plVar9 = *(long **)(lVar10 + 0x30);
              if (plVar9 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar9 = DAT_04859430;
                *(long **)(lVar10 + 0x30) = DAT_04859430;
              }
LAB_00c1bdbc:
              uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
              if (((uVar5 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                param_3 = (long *)0x0;
                param_1 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,__src,0,8);
              }
              else {
                param_3 = (long *)0x0;
                param_1 = (long *)FUN_00c48fe8(plVar9,__src,0,8);
              }
            }
          }
          else {
            *plVar9 = lVar12;
            param_4[1] = plVar9 + 1;
          }
        }
      }
    }
    plVar9 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar9 = plVar6 + 2;
      bVar3 = (long *)*(long *)*plVar9 != plVar6;
      plVar6 = (long *)*plVar9;
      if (bVar3) {
        do {
          lVar12 = *plVar9;
          plVar9 = (long *)(lVar12 + 0x10);
          plVar6 = (long *)*plVar9;
        } while (*(long *)*plVar9 != lVar12);
      }
    }
    else {
      do {
        plVar6 = plVar9;
        plVar9 = (long *)*plVar6;
      } while (plVar9 != (long *)0x0);
    }
  } while( true );
}


