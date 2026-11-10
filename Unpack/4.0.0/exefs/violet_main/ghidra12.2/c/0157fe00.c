/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157fe00; name: FUN_0157fe00
 */


void FUN_0157fe00(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  long *local_38;
  
  (**(code **)(*(long *)param_2[2] + 0x198))(&local_38);
  plVar19 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar19 != (long *)0x0) {
    lVar21 = plVar19[6];
    psVar2 = (short *)(lVar21 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar3 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar21 + 0x10) = 0;
      (**(code **)(*plVar19 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0158044c;
  }
  param_1[9] = (long)local_38;
  uVar14 = (**(code **)(*local_38 + 0x1a0))();
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 3);
  uVar13 = (**(code **)(*(long *)param_1[9] + 0x80))();
  *(undefined2 *)((long)param_1 + 0x5a) = uVar13;
  uVar13 = (**(code **)(*(long *)param_1[9] + 0x78))();
  *(undefined2 *)(param_1 + 0xb) = uVar13;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x3e4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x3e5) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x3e6) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 999) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((long)param_2 + 0x24);
  uVar13 = *(undefined2 *)((long)param_2 + 0x26);
  *(undefined2 *)((long)param_1 + 0x3ea) = uVar13;
  uVar11 = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x3ec) = uVar11;
  uVar4 = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined1 *)((long)param_1 + 0x3ed) = uVar4;
  uVar5 = *(undefined1 *)((long)param_2 + 0x2a);
  *(undefined1 *)((long)param_1 + 0x3ee) = uVar5;
  uVar6 = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined1 *)((long)param_1 + 0x3ef) = uVar6;
  uVar7 = *(undefined1 *)((long)param_2 + 0x2c);
  *(undefined2 *)((long)param_1 + 0x3f4) = uVar13;
  *(undefined1 *)((long)param_1 + 0x3f6) = uVar11;
  *(undefined1 *)(param_1 + 0x7e) = uVar7;
  *(undefined1 *)((long)param_1 + 0x3f7) = uVar4;
  *(undefined1 *)(param_1 + 0x7f) = uVar5;
  *(undefined1 *)((long)param_1 + 0x3f9) = uVar6;
  *(undefined1 *)((long)param_1 + 0x3fa) = uVar7;
  FUN_015806d0(param_1);
  if (*(short *)((long)param_1 + 0x3f4) != 10) {
    uVar16 = (**(code **)(*param_1 + 0x108))(param_1);
    uVar17 = (**(code **)(*param_1 + 0x110))(param_1);
    uVar18 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],0);
    uVar18 = (uVar18 & 0xffff) * (uint)*(ushort *)((long)param_1 + 0x3f4);
    uVar27 = uVar18 / 10;
    *(short *)(param_1 + 0xb) = (short)uVar27;
    uVar18 = uVar18 / 10;
    if ((uVar17 & 0xffff) < (uVar27 & 0xffff)) {
      (**(code **)(*param_1 + 0x2e8))(param_1,uVar18 - uVar17);
    }
    if (((uVar18 & 0xffff) < (uVar17 & 0xffff)) && ((uVar18 & 0xffff) < (uVar16 & 0xffff))) {
      (**(code **)(*param_1 + 0x2e0))(param_1,uVar16 - uVar18);
    }
  }
  uVar15 = (**(code **)(*(long *)param_1[9] + 0x160))();
  *(short *)((long)param_1 + 0x5c) = (short)uVar15;
  plVar19 = *(long **)(param_1[0xe1] + 400);
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 5;
    do {
      lVar21 = *plVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar21 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar20 = (**(code **)(*plVar19 + 0x58))(plVar19,uVar15);
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 5;
    do {
      lVar21 = *plVar1;
      iVar10 = (int)lVar21 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    else if ((int)lVar21 == 0) {
      pcVar22 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar23 = "DecrementReferenceInternal";
      pcVar24 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar25 = "Reference counter underflows.";
      goto LAB_01580678;
    }
  }
  if ((uVar20 & 1) != 0) {
    *(undefined2 *)((long)param_1 + 0x5c) = 0;
  }
  *(undefined2 *)((long)param_1 + 0x5e) = 0;
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  *(undefined2 *)((long)param_1 + 0x72) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x6e) = 0;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0x138))();
  *(undefined1 *)((long)param_1 + 0x65) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd8))((long *)param_1[9],0);
  *(undefined1 *)((long)param_1 + 0x66) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd8))((long *)param_1[9],1);
  *(undefined1 *)((long)param_1 + 0x67) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd8))((long *)param_1[9],2);
  *(undefined1 *)(param_1 + 0xd) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd8))((long *)param_1[9],3);
  *(undefined1 *)((long)param_1 + 0x69) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd8))((long *)param_1[9],4);
  *(undefined1 *)((long)param_1 + 0x6a) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd8))((long *)param_1[9],5);
  *(undefined1 *)((long)param_1 + 0x6b) = uVar11;
  uVar13 = (**(code **)(*(long *)param_1[9] + 0x140))();
  *(undefined2 *)(param_1 + 0xc) = uVar13;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xb0))();
  *(undefined1 *)((long)param_1 + 0x62) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd0))((long *)param_1[9],1);
  *(undefined1 *)((long)param_1 + 99) = uVar11;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0xd0))((long *)param_1[9],5);
  *(undefined1 *)((long)param_1 + 100) = uVar11;
  *(undefined1 *)((long)param_1 + 0x7d) = 0;
  *(undefined1 *)((long)param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)((long)param_2 + 0x31);
  *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined2 *)((long)param_1 + 0x3fc) = *(undefined2 *)((long)param_2 + 0x34);
  (**(code **)(*param_1 + 0x488))(param_1);
  plVar19 = (long *)param_1[9];
  *(undefined2 *)((long)param_1 + 0x41c) = 0;
  bVar12 = (**(code **)(*plVar19 + 0xe0))(plVar19,0);
  *(byte *)((long)param_1 + 0x41e) = bVar12;
  *(ushort *)((long)param_1 + 0x41c) = *(short *)((long)param_1 + 0x41c) + (ushort)bVar12;
  bVar12 = (**(code **)(*plVar19 + 0xe0))(plVar19,1);
  *(byte *)((long)param_1 + 0x41f) = bVar12;
  *(ushort *)((long)param_1 + 0x41c) = *(short *)((long)param_1 + 0x41c) + (ushort)bVar12;
  bVar12 = (**(code **)(*plVar19 + 0xe0))(plVar19,2);
  *(byte *)(param_1 + 0x84) = bVar12;
  *(ushort *)((long)param_1 + 0x41c) = *(short *)((long)param_1 + 0x41c) + (ushort)bVar12;
  bVar12 = (**(code **)(*plVar19 + 0xe0))(plVar19,3);
  *(byte *)((long)param_1 + 0x422) = bVar12;
  *(ushort *)((long)param_1 + 0x41c) = *(short *)((long)param_1 + 0x41c) + (ushort)bVar12;
  bVar12 = (**(code **)(*plVar19 + 0xe0))(plVar19,4);
  *(byte *)((long)param_1 + 0x423) = bVar12;
  *(ushort *)((long)param_1 + 0x41c) = *(short *)((long)param_1 + 0x41c) + (ushort)bVar12;
  bVar12 = (**(code **)(*plVar19 + 0xe0))(plVar19,5);
  *(byte *)((long)param_1 + 0x421) = bVar12;
  *(ushort *)((long)param_1 + 0x41c) = *(short *)((long)param_1 + 0x41c) + (ushort)bVar12;
  *(undefined1 *)((long)param_1 + 0x424) = 0;
  (**(code **)(*param_1 + 0x7f0))(param_1,0,1,1,1);
  uVar11 = (**(code **)(*param_1 + 0x800))(param_1,plVar19,1);
  *(undefined1 *)((long)param_1 + 0x482) = uVar11;
  *(undefined1 *)((long)param_1 + 0x485) = 0;
  if (*(char *)((long)param_1 + 0x414) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x414) = 6;
  }
  if (*(char *)((long)param_1 + 0x415) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x415) = 6;
  }
  if (*(char *)((long)param_1 + 0x416) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x416) = 6;
  }
  if (*(char *)((long)param_1 + 0x417) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x417) = 6;
  }
  if ((char)param_1[0x83] != '\x06') {
    *(undefined1 *)(param_1 + 0x83) = 6;
  }
  if (*(char *)((long)param_1 + 0x419) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x419) = 6;
  }
  if (*(char *)((long)param_1 + 0x41a) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x41a) = 6;
  }
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  uVar20 = (**(code **)(*(long *)param_1[9] + 0xa0))();
  if ((uVar20 & 0xffff) != 0) {
    lVar21 = FUN_00f7ecd0(param_1[0xe1]);
    plVar19 = *(long **)(lVar21 + 0x148);
    if (plVar19 != (long *)0x0) {
      lVar21 = plVar19[6];
      if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar3 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar3 == 0) {
        uVar26 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        *(undefined8 *)(lVar21 + 8) = uVar26;
        *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
        pcVar22 = "count != 0";
        pcVar23 = "AddReference";
        pcVar24 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar25 = "Reference counter overflows.";
LAB_01580678:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar22,pcVar23,pcVar24,0x58,pcVar25);
      }
      lVar21 = plVar19[6];
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar3 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar19 + 0x50))(plVar19);
      }
      else if (sVar3 == 0) {
LAB_0158044c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar26 = *param_2;
    uVar15 = (**(code **)(*param_1 + 0x98))(param_1);
    auVar28 = FUN_01580a6c(uVar26,uVar20 & 0xffffffff,uVar15,param_2[1],plVar19);
    *(undefined1 (*) [16])(param_1 + (uVar20 & 0xffff) * 2 + 0x10) = auVar28;
    *(undefined1 *)((long)param_1 + (uVar20 & 0xffff) + 0x390) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x48a) = 10000;
  *(undefined2 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((long)param_1 + 0x6f2) = 0;
  *(undefined1 *)((long)param_1 + 0x48e) = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined1 *)((long)param_1 + 0x486) = 0x12;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(undefined1 *)((long)param_1 + 0x484) = 0;
  uVar11 = (**(code **)(*(long *)param_1[9] + 0x150))();
  *(undefined1 *)((long)param_1 + 0x483) = uVar11;
  *(undefined1 *)((long)param_1 + 0x487) = 1;
  *(undefined4 *)((long)param_1 + 0x496) = 0;
  FUN_015807d0(param_1);
  *(undefined2 *)((long)param_1 + 0x49e) = 0;
  *(undefined1 *)((long)param_1 + 0x3c1) = 0;
  memset(param_1 + 0xb4,0,0x151);
  (**(code **)(*(long *)param_1[9] + 0x1a8))((long *)param_1[9],uVar14 & 1);
  return;
}


