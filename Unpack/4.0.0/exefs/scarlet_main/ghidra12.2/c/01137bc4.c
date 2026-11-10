/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01137bc4; name: FUN_01137bc4
 */


void FUN_01137bc4(long param_1,long param_2)

{
  char *__s;
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  int iVar11;
  long *plVar12;
  uint *puVar13;
  size_t sVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  long *plVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  code *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long alStack_1d0 [12];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long alStack_150 [12];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [14];
  
  lVar23 = *(long *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (lVar23 != 0) {
    plVar12 = *(long **)(param_1 + 0x238);
    uVar16 = *(undefined8 *)(param_1 + 0x240);
    uVar27 = *(undefined8 *)(param_1 + 0x248);
    uVar28 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar28 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar23,uVar16,uVar27);
    }
    else {
      FUN_00c48fe8(plVar12,lVar23,uVar16,uVar27);
    }
  }
  FUN_00db2500(param_1 + 0xa0);
  FUN_00fba0b8(param_1 + 0xa8,param_2 + 8);
  lVar23 = *(long *)(param_2 + 0x18);
  if (lVar23 != 0) {
    lVar25 = *(long *)(lVar23 + 0x30);
    if (*(long *)(lVar25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar25 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
      *(undefined8 *)(lVar25 + 8) = uVar16;
      *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar12 = *(long **)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar23;
  if (plVar12 != (long *)0x0) {
    lVar23 = plVar12[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 0xc0,param_2 + 0x20);
  FUN_00ceffd4(param_1 + 0xd0,param_2 + 0x30);
  if ((*(long *)(param_1 + 0xa8) == 0) || ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x1e8) & 1) == 0))
  {
    piVar22 = (int *)0x0;
  }
  else {
    puVar13 = (uint *)(**(code **)(**(long **)(param_1 + 0xa8) + 0x70))();
    piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
  }
  local_f0 = &LAB_00dc9d5c;
  local_e8 = FUN_02b3cc8c;
  local_d8 = &LAB_02b3cc9c;
  local_170 = &LAB_01141000;
  local_168 = FUN_02b3cca8;
  local_160 = &LAB_02b3ccac;
  local_e0 = &LAB_02b3cc90;
  local_158 = &LAB_02b3ccb8;
  local_1e0 = &LAB_02b3ccc8;
  local_1f0 = FUN_0216f2cc;
  local_1e8 = FUN_02b3ccc4;
  local_1d8 = &LAB_02b3ccd4;
  alStack_1d0[0] = param_1;
  alStack_150[0] = param_1;
  alStack_d0[0] = param_1;
  FUN_011385c0(param_1 + 0xe0,piVar22,&local_f0,&local_170,&local_1f0,
               *(undefined4 *)(param_1 + 0x3d8));
  pcVar10 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar10)(alStack_1d0);
  }
  pcVar10 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar10)(alStack_150);
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(alStack_d0);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar11 = FUN_011381b8(param_1 + 0xe0);
  plVar12 = (long *)(param_1 + 0x50);
  lVar23 = *plVar12;
  lVar25 = *(long *)(param_1 + 0x58);
  *(int *)(param_1 + 0x4c) = iVar11;
  if (lVar25 != lVar23) {
    if (*(long **)(lVar25 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar25 + -8) + 0x20))();
    }
    if (lVar25 + -0x20 != lVar23) {
      do {
        if (*(long **)(lVar25 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar25 + -0x28) + 0x20))();
        }
        lVar25 = lVar25 + -0x20;
      } while (lVar23 + 0x20 != lVar25);
    }
    iVar11 = *(int *)(param_1 + 0x4c);
  }
  *(long *)(param_1 + 0x58) = lVar23;
  if ((piVar22 != (int *)0x0) && (iVar11 != 0)) {
    if ((4 < *(ushort *)((long)piVar22 - (long)*piVar22)) &&
       (uVar28 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar28 != 0)) {
      uVar29 = (ulong)*(uint *)((long)piVar22 + uVar28);
      puVar13 = (uint *)((long)((long)piVar22 + uVar28) + uVar29);
      uVar6 = *puVar13;
      uVar26 = (ulong)uVar6;
      uVar18 = lVar23 - *plVar12 >> 5;
      if (uVar18 < uVar26) {
        FUN_00d24494(plVar12,uVar26 - uVar18);
      }
      else if (uVar18 != uVar26) {
        lVar25 = *plVar12 + uVar26 * 0x20;
        if (lVar25 != lVar23) {
          if (*(long **)(lVar23 + -8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar23 + -8) + 0x20))();
          }
          if (lVar23 + -0x20 != lVar25) {
            do {
              if (*(long **)(lVar23 + -0x28) != (long *)0x0) {
                (**(code **)(**(long **)(lVar23 + -0x28) + 0x20))();
              }
              lVar23 = lVar23 + -0x20;
            } while (lVar25 + 0x20 != lVar23);
          }
        }
        *(long *)(param_1 + 0x58) = lVar25;
      }
      if (uVar6 != 0) {
        uVar18 = 0;
        lVar23 = (long)piVar22 + uVar29 + uVar28 + 9;
        do {
          puVar3 = puVar13 + uVar18 + 1;
          uVar28 = (ulong)*puVar3;
          piVar2 = (int *)((long)puVar3 + uVar28);
          if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar29 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar29 != 0)) {
            puVar3 = (uint *)((long)piVar2 + uVar29);
            uVar24 = (ulong)*puVar3;
            __s = (char *)((long)puVar3 + uVar24 + 4);
            sVar14 = strlen(__s);
            bVar7 = *(byte *)((long)puVar3 + uVar24 + 4);
            puVar19 = &DAT_cbf29ce484222645;
            if (bVar7 != 0) {
              puVar19 = &DAT_cbf29ce484222645;
              pbVar20 = (byte *)(lVar23 + uVar24 + uVar29 + uVar28);
              do {
                puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar20;
                pbVar20 = pbVar20 + 1;
              } while (bVar7 != 0);
            }
            puVar4 = (undefined8 *)(*plVar12 + uVar18 * 0x20);
            *puVar4 = puVar19;
            puVar4[1] = __s;
            puVar4[2] = sVar14;
            plVar21 = puVar4 + 3;
            plVar15 = (long *)*plVar21;
            *plVar21 = 0;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            *plVar21 = 0;
          }
          uVar18 = uVar18 + 1;
          lVar23 = lVar23 + 4;
        } while (uVar18 != uVar26);
      }
    }
    if (((*(ushort *)((long)piVar22 - (long)*piVar22) < 9) ||
        (uVar28 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[4], uVar28 == 0)) ||
       (iVar11 = *(int *)((long)piVar22 + uVar28), iVar11 == 0x3c)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      if (iVar11 < 0x14) {
        if (iVar11 == 0xc) {
          uVar17 = 4;
        }
        else {
          if (iVar11 != 0xf) {
            return;
          }
          uVar17 = 3;
        }
      }
      else if (iVar11 == 0x14) {
        uVar17 = 2;
      }
      else {
        if (iVar11 != 0x1e) {
          return;
        }
        uVar17 = 1;
      }
      *(undefined4 *)(param_1 + 0x48) = uVar17;
    }
  }
  return;
}


