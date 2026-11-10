/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf8cd8; name: FUN_00cf8cd8
 */


undefined1  [16] FUN_00cf8cd8(long param_1)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  char *pcVar13;
  byte *pbVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  byte *__s;
  bool bVar21;
  undefined1 *puVar22;
  undefined1 auVar23 [16];
  char local_a0 [8];
  long *local_98;
  int *local_90;
  char local_88 [16];
  char local_78;
  long *local_70 [4];
  long *local_50;
  
  puVar8 = PTR_DAT_047d8c40;
  if (((*PTR_DAT_047d8c40 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar10 = PTR_DAT_047d8c50;
  puVar9 = PTR_DAT_047d8c48;
  uVar12 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar12;
  FUN_00cf9078(local_88,uVar12,param_1 + 0x40);
  puVar3 = (undefined8 *)PTR_PTR_047d4508;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
  }
  __s = (byte *)*puVar3;
  if ((local_88[0] != '\0') && (local_78 != '\0')) {
    puVar22 = &DAT_cbf29ce484222645;
    pcVar13 = strchr((char *)__s,0x3a);
    pbVar14 = __s;
    if (pcVar13 != (char *)0x0) {
      pbVar14 = (byte *)(pcVar13 + 2);
    }
    bVar5 = *pbVar14;
    while (bVar5 != 0) {
      pbVar14 = pbVar14 + 1;
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar14;
    }
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    uVar12 = *(undefined8 *)puVar9;
    *(undefined8 *)puVar10 = uVar12;
    FUN_00cfa2c4(local_a0,uVar12,local_70,puVar22);
    if (local_a0[0] != '\0') {
      FUN_00cf9178(param_1 + 0x148,&local_98);
      *(int **)(param_1 + 0x150) = local_90;
      if (local_90 != (int *)0x0) {
        puVar19 = (uint *)((long)local_90 +
                          (ulong)*(ushort *)((long)local_90 + (4 - (long)*local_90)));
        puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
        puVar17 = puVar19 + 1;
        uVar18 = (ulong)*puVar19;
        lVar16 = uVar18 * 2;
        if (uVar18 == 0) {
          puVar19 = puVar17;
        }
        else {
          puVar15 = puVar17;
          do {
            uVar20 = uVar18 >> 1;
            puVar19 = puVar15 + uVar20 * 2 + 2;
            uVar18 = uVar18 + (uVar18 >> 1 ^ 0xffffffffffffffff);
            if (puVar22 <= *(undefined1 **)(puVar15 + uVar20 * 2)) {
              puVar19 = puVar15;
              uVar18 = uVar20;
            }
            puVar15 = puVar19;
          } while (uVar18 != 0);
        }
        if ((puVar19 == puVar17 + lVar16) || (*(undefined1 **)puVar19 != puVar22))
        goto LAB_00cf8fe8;
        *(long *)(param_1 + 0xa0) = (long)puVar19 - (long)puVar17 >> 3;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        uVar12 = 0;
        if (local_90 != (int *)0x0) {
          puVar15 = (uint *)((long)local_90 +
                            (ulong)*(ushort *)((long)local_90 + (6 - (long)*local_90)));
          puVar15 = (uint *)((long)puVar15 +
                            ((ulong)((long)puVar19 - (long)puVar17) >> 3 & 0xffffffff) * 4 +
                            (ulong)*puVar15 + 4);
          piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
             (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar18 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)((long)piVar2 + uVar18);
          }
        }
        *(undefined8 *)(param_1 + 0x1d8) = uVar12;
        if (local_a0[0] != '\0') {
          bVar21 = false;
          goto LAB_00cf8ec8;
        }
LAB_00cf8f04:
        uVar20 = 0;
        uVar18 = 0x100000000;
        goto LAB_00cf8f0c;
      }
LAB_00cf8fe8:
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
      if (local_a0[0] != '\0') {
        bVar21 = true;
LAB_00cf8ec8:
        if (local_98 != (long *)0x0) {
          lVar16 = local_98[6];
          psVar1 = (short *)(lVar16 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar16 + 0x10) = 0;
            (**(code **)(*local_98 + 0x50))();
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if (!bVar21) goto LAB_00cf8f04;
      }
    }
  }
  auVar23 = FUN_00cf9fc0(param_1 + 0xb0,__s,1);
  uVar18 = auVar23._0_8_;
  if ((uVar18 & 0xff00000000) != 0 && auVar23._8_4_ == 0) {
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined1 *)(param_1 + 0x1e9) = 1;
  }
  uVar20 = auVar23._8_8_ & 0xffffffff;
LAB_00cf8f0c:
  if (local_88[0] != '\0') {
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  auVar23._8_8_ = uVar20;
  auVar23._0_8_ = uVar18;
  return auVar23;
}


