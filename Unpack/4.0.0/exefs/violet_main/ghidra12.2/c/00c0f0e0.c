/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0f0e0; name: FUN_00c0f0e0
 */


void FUN_00c0f0e0(string *param_1,string *param_2,undefined8 param_3)

{
  string *psVar1;
  string sVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  string *psVar9;
  size_t sVar10;
  string *psVar11;
  long *plVar12;
  string *psVar13;
  ulong uVar14;
  ulong uVar15;
  string *psVar16;
  string *psVar17;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  sVar2 = *param_2;
  if ((sVar2 == (string)0x0) || (param_2[1] != (string)0x0)) {
    sVar2 = *param_1;
    uVar7 = *(ulong *)(param_1 + 8);
    psVar11 = *(string **)(param_1 + 0x10);
    if (((byte)sVar2 & 1) == 0) {
      uVar15 = (ulong)((byte)sVar2 >> 1);
      psVar16 = param_1 + 1;
    }
    else {
      uVar15 = uVar7;
      psVar16 = psVar11;
    }
    sVar4 = strlen((char *)param_2);
    if (uVar15 != 0) {
      psVar17 = psVar16;
      if (sVar4 == 0) {
LAB_00c0f170:
        uVar15 = (long)psVar17 - (long)psVar16;
        if (uVar15 != 0xffffffffffffffff) {
          while( true ) {
            psVar16 = param_1 + 1;
            uVar14 = (ulong)((byte)sVar2 >> 1);
            if (((byte)sVar2 & 1) != 0) {
              psVar16 = psVar11;
              uVar14 = uVar7;
            }
            sVar4 = strlen((char *)param_2);
            if ((sVar4 == 0) || (uVar14 <= uVar15)) break;
            psVar17 = psVar16 + uVar15;
LAB_00c0f1b4:
            sVar10 = 0;
            while (*psVar17 != param_2[sVar10]) {
              sVar10 = sVar10 + 1;
              if (sVar4 == sVar10) goto code_r0x00c0f1d4;
            }
            if ((psVar17 == psVar16 + uVar14) ||
               (uVar14 = (long)psVar17 - (long)psVar16, uVar14 == 0xffffffffffffffff)) break;
            std::string::string((string *)&local_78,param_1,uVar15,uVar14 - uVar15,
                                (allocator *)param_1);
            FUN_00c10df8(param_3,&local_78);
            pvVar5 = local_68;
            if (((local_78 & 1) != 0) && (local_68 != (void *)0x0)) {
              lVar8 = tpidr_el0;
              plVar12 = *(long **)(lVar8 + 0x30);
              if (plVar12 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar12 = DAT_04859430;
                *(long **)(lVar8 + 0x30) = DAT_04859430;
              }
              uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,pvVar5,0,8);
              }
              else {
                FUN_00c48fe8(plVar12,pvVar5,0,8);
              }
            }
            sVar2 = *param_1;
            uVar7 = *(ulong *)(param_1 + 8);
            psVar11 = *(string **)(param_1 + 0x10);
            uVar15 = (ulong)((byte)sVar2 >> 1);
            psVar9 = param_1 + 1;
            if (((byte)sVar2 & 1) != 0) {
              uVar15 = uVar7;
              psVar9 = psVar11;
            }
            sVar4 = strlen((char *)param_2);
            if (uVar15 <= uVar14) {
              return;
            }
            psVar13 = psVar9 + uVar14;
            if (sVar4 != 0) {
              psVar16 = psVar16 + (uVar15 - (long)psVar17);
              while (pvVar5 = memchr(param_2,(uint)(byte)*psVar13,sVar4), pvVar5 != (void *)0x0) {
                psVar13 = psVar13 + 1;
                psVar16 = psVar16 + -1;
                if (psVar16 == (string *)0x0) {
                  return;
                }
              }
            }
            uVar15 = (long)psVar13 - (long)psVar9;
            if (uVar15 == 0xffffffffffffffff) {
              return;
            }
          }
LAB_00c0f5d4:
          std::string::string((string *)&local_78,param_1,uVar15,0xffffffffffffffff,
                              (allocator *)param_1);
          FUN_00c10df8(param_3,&local_78);
          if ((((byte)local_78._0_1_ & 1) != 0) && (local_68 != (void *)0x0)) {
            lVar8 = tpidr_el0;
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,local_68,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,local_68,0,8);
            }
          }
        }
      }
      else {
        do {
          pvVar5 = memchr(param_2,(uint)(byte)*psVar17,sVar4);
          if (pvVar5 == (void *)0x0) goto LAB_00c0f170;
          psVar17 = psVar17 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8);
    psVar11 = *(string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      psVar11 = param_1 + 1;
      uVar7 = (ulong)((byte)*param_1 >> 1);
    }
    if (uVar7 != 0) {
      psVar16 = psVar11 + uVar7;
      lVar8 = tpidr_el0;
      psVar17 = psVar11 + (uVar7 - 1);
      do {
        psVar9 = psVar11;
        if (*psVar11 == sVar2) {
          psVar11 = psVar11 + 1;
        }
        else {
          do {
            if (psVar17 == psVar9) {
              psVar13 = psVar16;
              break;
            }
            psVar13 = psVar9 + 1;
            psVar1 = psVar9 + 1;
            psVar9 = psVar13;
          } while (*psVar1 != sVar2);
          uVar7 = (long)psVar13 - (long)psVar11;
          if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar7 < 0x17) {
            local_78 = CONCAT71(local_78._1_7_,(char)((int)uVar7 << 1));
            pvVar5 = (void *)((ulong)&local_78 | 1);
            if (uVar7 != 0) goto LAB_00c0f414;
          }
          else {
            uVar15 = uVar7 + 0x10 & 0xfffffffffffffff0;
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            pvVar5 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar15,8);
            local_78 = uVar15 | 1;
            local_70 = uVar7;
            local_68 = pvVar5;
LAB_00c0f414:
            memcpy(pvVar5,psVar11,uVar7);
          }
          *(undefined1 *)((long)pvVar5 + uVar7) = 0;
          FUN_00c10df8(param_3,&local_78);
          pvVar5 = local_68;
          psVar11 = psVar13;
          if (((local_78 & 1) != 0) && (local_68 != (void *)0x0)) {
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,pvVar5,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,pvVar5,0,8);
            }
          }
        }
      } while (psVar11 != psVar16);
    }
  }
  return;
code_r0x00c0f1d4:
  psVar17 = psVar17 + 1;
  if (psVar17 == psVar16 + uVar14) goto LAB_00c0f5d4;
  goto LAB_00c0f1b4;
}


