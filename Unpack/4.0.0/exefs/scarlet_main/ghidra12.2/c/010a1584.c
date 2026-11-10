/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a1584; name: FUN_010a1584
 */


/* WARNING: Removing unreachable block (ram,0x010a17ac) */
/* WARNING: Removing unreachable block (ram,0x010a17b4) */
/* WARNING: Removing unreachable block (ram,0x010a17bc) */
/* WARNING: Removing unreachable block (ram,0x010a17c4) */
/* WARNING: Removing unreachable block (ram,0x010a1968) */
/* WARNING: Removing unreachable block (ram,0x010a17cc) */

void FUN_010a1584(long param_1,ulong param_2,long *param_3,long param_4)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  long local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined2 local_64;
  
  bVar5 = *(byte *)(*param_3 + 0x60);
  if ((ulong)bVar5 != 0) {
    uVar22 = 0;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
      iVar1 = *(int *)(lVar14 + 0x70) + 1;
      *(int *)(lVar14 + 0x70) = iVar1;
      local_98 = CONCAT44(local_98._4_4_,iVar1);
      puVar9 = (uint *)FUN_01078064(lVar14 + 8,&local_98);
      *puVar9 = (uint)param_2 & 0xff;
      *(char *)(puVar9 + 1) = (char)uVar22;
      local_9c = (undefined4)local_98;
      plVar21 = *(long **)(*param_3 + uVar22 * 8 + 0x30);
      lVar14 = (**(code **)(*plVar21 + 0x68))(plVar21);
      if (lVar14 == -0x55b9ee5fee87d0a6) {
        local_98 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70);
        lVar14 = FUN_010a19f8(*(undefined8 *)(param_1 + 8),&local_98,param_1 + 0x10);
        if (lVar14 != 0) {
          lVar19 = *(long *)(lVar14 + 0x30);
          if (*(long *)(lVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar2 = (short *)(lVar19 + 0x1a);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
            *(undefined8 *)(lVar19 + 8) = uVar16;
            *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
          }
          else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        local_a8 = lVar14;
      }
      else {
        plVar10 = *(long **)(param_1 + 0x20);
        if (plVar10 == (long *)0x0) {
          local_a8 = 0;
        }
        else {
          (**(code **)(*plVar10 + 0x68))
                    (&local_a8,plVar10,lVar14,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70),
                     *(undefined8 *)(param_1 + 0x10));
        }
      }
      plVar10 = (long *)FUN_010a1b68(param_1 + 0x140,&local_9c);
      plVar11 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar11 != (long *)0x0) {
        lVar14 = plVar11[6];
        psVar2 = (short *)(lVar14 + 0x1a);
        do {
          sVar4 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *plVar10 = local_a8;
      local_a8 = 0;
      puVar12 = (undefined8 *)FUN_010a1b68(param_1 + 0x140,&local_9c);
      uVar8 = local_9c;
      puVar15 = (undefined8 *)(param_4 + uVar22 * 0x1c);
      local_98 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
      uStack_90 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      local_80 = local_9c;
      local_7c = *puVar15;
      local_74 = puVar15[1];
      local_6c = puVar15[2];
      local_64 = *(undefined2 *)(puVar15 + 3);
      local_88 = plVar21;
      (**(code **)(*(long *)*puVar12 + 0x68))((long *)*puVar12,&local_98);
      FUN_010a1f30(param_1,param_2 & 0xffffffff,uVar8);
      uVar22 = uVar22 + 1;
    } while (uVar22 != bVar5);
  }
  FUN_010a29d0(param_1,param_2 & 0xffffffff);
  param_2 = param_2 & 0xff;
  pbVar17 = (byte *)(param_1 + param_2 * 0x38 + 0x58);
  if (*pbVar17 != 0) {
    uVar18 = 0;
    uVar22 = 0;
    do {
      uVar13 = (**(code **)(**(long **)(param_1 + param_2 * 0x38 + uVar22 * 8 + 0x28) + 0x208))();
      uVar20 = (uint)uVar22;
      if ((uVar13 & 1) == 0) {
        uVar3 = uVar20 & 0xff;
        uVar13 = (ulong)uVar3;
        uVar16 = *(undefined8 *)(param_1 + param_2 * 0x38 + uVar13 * 8 + 0x28);
        if ((int)(uVar20 & 0xff) < (int)(*pbVar17 - 1)) {
          lVar14 = param_1 + param_2 * 0x38 + 0x28;
          *(undefined8 *)(lVar14 + (ulong)uVar3 * 8) =
               *(undefined8 *)(lVar14 + (ulong)(uVar3 + 1) * 8);
          uVar3 = uVar20 + 1;
          uVar13 = (ulong)uVar3;
          if ((int)(uVar3 & 0xff) < (int)(*pbVar17 - 1)) {
            lVar14 = param_1 + param_2 * 0x38 + 0x28;
            *(undefined8 *)(lVar14 + (uVar13 & 0xff) * 8) =
                 *(undefined8 *)(lVar14 + (ulong)((uVar3 & 0xff) + 1) * 8);
            uVar20 = uVar20 + 2;
            uVar13 = (ulong)uVar20;
            if ((int)(uVar20 & 0xff) < (int)(*pbVar17 - 1)) {
              do {
                uVar3 = uVar20 & 0xff;
                uVar20 = uVar3 + 1;
                uVar13 = (ulong)uVar20;
                lVar14 = param_1 + param_2 * 0x38 + 0x28;
                *(undefined8 *)(lVar14 + (ulong)uVar3 * 8) = *(undefined8 *)(lVar14 + uVar13 * 8);
              } while ((int)(uVar20 & 0xff) < (int)(*pbVar17 - 1));
            }
          }
          uVar13 = uVar13 & 0xff;
        }
        *(undefined8 *)(param_1 + param_2 * 0x38 + uVar13 * 8 + 0x28) = uVar16;
      }
      else {
        uVar22 = (ulong)(uVar20 + 1);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *pbVar17);
  }
  return;
}


