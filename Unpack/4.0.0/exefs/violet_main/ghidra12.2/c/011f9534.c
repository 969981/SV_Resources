/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f9534; name: FUN_011f9534
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f9534(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  ushort uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  long *plVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  ushort *puVar18;
  long lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  
  FUN_00d1a240(param_1,0x80048180);
  *param_1 = &PTR_FUN_045a96e8;
  param_1[4] = &PTR_LAB_045a9838;
  param_1[5] = &DAT_045a9960;
  puVar10 = PTR_DAT_047d9c80;
  param_1[6] = &PTR_LAB_045a99b8;
  param_1[7] = &PTR_LAB_045a99e0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x24] = puVar10 + 0x10;
  param_1[0x25] = 0;
  FUN_00fba0b8(param_1 + 0x25,param_2 + 8);
  lVar19 = *(long *)(param_2 + 0x18);
  if (lVar19 != 0) {
    lVar15 = *(long *)(lVar19 + 0x30);
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar14;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar12 = (long *)param_1[0x27];
  param_1[0x27] = lVar19;
  if (plVar12 != (long *)0x0) {
    lVar19 = plVar12[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 0x28,param_2 + 0x20);
  FUN_00ceffd4(param_1 + 0x2a,param_2 + 0x30);
  puVar10 = PTR_DAT_047ddae8;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2c] = 0;
  param_1[0x24] = puVar10 + 0x10;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined2 *)((long)param_1 + 0x191) = 1;
  uVar9 = _UNK_03cab918;
  uVar8 = _DAT_03cab910;
  uVar7 = _UNK_03caadd8;
  uVar14 = _DAT_03caadd0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x39] = uVar9;
  param_1[0x38] = uVar8;
  param_1[0x3b] = uVar7;
  param_1[0x3a] = uVar14;
  if ((param_1[0x25] == 0) || ((*(byte *)(param_1[0x25] + 0x1e8) & 1) == 0)) {
    param_1[0x2c] = 0;
  }
  else {
    puVar13 = (uint *)(**(code **)(*(long *)param_1[0x25] + 0x70))();
    piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
    param_1[0x2c] = piVar2;
    if (puVar13 != (uint *)0x0) {
      uVar20 = 0x3f800000;
      if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar17 != 0)) {
        uVar20 = *(undefined4 *)((long)piVar2 + uVar17);
      }
      *(undefined4 *)((long)param_1 + 0x174) = uVar20;
      uVar20 = 0;
      uVar21 = 0;
      if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = *(undefined4 *)((long)piVar2 + uVar17);
        }
      }
      *(undefined4 *)(param_1 + 0x2f) = uVar21;
      uVar21 = 0;
      if (0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = *(undefined4 *)((long)piVar2 + uVar17);
        }
      }
      *(undefined4 *)((long)param_1 + 0x17c) = uVar21;
      uVar21 = 0;
      if (0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8];
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = *(undefined4 *)((long)piVar2 + uVar17);
        }
      }
      *(undefined4 *)(param_1 + 0x30) = uVar21;
      uVar21 = 0;
      if (0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = *(undefined4 *)((long)piVar2 + uVar17);
        }
      }
      *(undefined4 *)((long)param_1 + 0x184) = uVar21;
      if ((0x14 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10], uVar17 != 0)) {
        uVar20 = *(undefined4 *)((long)piVar2 + uVar17);
      }
      *(undefined4 *)(param_1 + 0x31) = uVar20;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2d) {
        bVar11 = false;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x16];
        bVar11 = false;
        if (uVar17 != 0) {
          bVar11 = *(char *)((long)piVar2 + uVar17) != '\0';
        }
      }
      *(bool *)(param_1 + 0x32) = bVar11;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) ||
         (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17], uVar17 == 0)) {
        uVar16 = 1;
      }
      else {
        uVar16 = *(undefined1 *)((long)piVar2 + uVar17);
      }
      *(undefined1 *)((long)param_1 + 0x191) = uVar16;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x31) {
        bVar11 = false;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x18];
        bVar11 = false;
        if (uVar17 != 0) {
          bVar11 = *(char *)((long)piVar2 + uVar17) != '\0';
        }
      }
      *(bool *)((long)param_1 + 0x192) = bVar11;
      lVar19 = -(long)*piVar2;
      puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
      if ((0x32 < *puVar18) && (uVar17 = (ulong)puVar18[0x19], uVar17 != 0)) {
        puVar3 = (undefined8 *)((long)piVar2 + uVar17);
        uVar14 = *puVar3;
        param_1[0x35] = (ulong)*(uint *)(puVar3 + 1);
        param_1[0x34] = uVar14;
        lVar19 = -(long)*piVar2;
      }
      if (*(ushort *)((long)piVar2 + lVar19) < 0x1f) {
        bVar11 = false;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar2 + lVar19))[0xf];
        bVar11 = false;
        if (uVar17 != 0) {
          bVar11 = *(char *)((long)piVar2 + uVar17) != '\0';
        }
      }
      *(bool *)(param_1 + 0x36) = bVar11;
      puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar5 = *puVar18;
      if (uVar5 < 0x21) {
        uVar21 = 0x3f800000;
        uVar20 = 0x3dcccccd;
        uVar22 = 0x3f800000;
      }
      else {
        uVar22 = 0x3f800000;
        uVar21 = 0x3f800000;
        if ((ulong)puVar18[0x10] != 0) {
          uVar21 = *(undefined4 *)((long)piVar2 + (ulong)puVar18[0x10]);
        }
        if (uVar5 < 0x23) {
          uVar20 = 0x3dcccccd;
        }
        else {
          if ((ulong)puVar18[0x11] == 0) {
            uVar20 = 0x3dcccccd;
          }
          else {
            uVar20 = *(undefined4 *)((long)piVar2 + (ulong)puVar18[0x11]);
          }
          if ((0x24 < uVar5) && ((ulong)puVar18[0x12] != 0)) {
            uVar22 = *(uint *)((long)piVar2 + (ulong)puVar18[0x12]);
          }
        }
      }
      param_1[0x39] = (ulong)uVar22;
      param_1[0x38] = CONCAT44(uVar20,uVar21);
      puVar18 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar5 = *puVar18;
      if (uVar5 < 0x27) {
        uVar21 = 0;
        uVar20 = 0xbd4ccccd;
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        uVar21 = 0;
        if ((ulong)puVar18[0x13] != 0) {
          uVar21 = *(undefined4 *)((long)piVar2 + (ulong)puVar18[0x13]);
        }
        if (uVar5 < 0x29) {
          uVar20 = 0xbd4ccccd;
        }
        else {
          if ((ulong)puVar18[0x14] == 0) {
            uVar20 = 0xbd4ccccd;
          }
          else {
            uVar20 = *(undefined4 *)((long)piVar2 + (ulong)puVar18[0x14]);
          }
          if ((0x2a < uVar5) && ((ulong)puVar18[0x15] != 0)) {
            uVar22 = *(uint *)((long)piVar2 + (ulong)puVar18[0x15]);
          }
        }
      }
      param_1[0x3b] = (ulong)uVar22;
      param_1[0x3a] = CONCAT44(uVar20,uVar21);
    }
  }
  return;
}


