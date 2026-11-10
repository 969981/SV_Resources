/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f04fc; name: FUN_026f04fc
 */


void FUN_026f04fc(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  plVar3 = (long *)(param_1 + 0x80d8);
  puVar11 = (undefined8 *)*plVar3;
  if (puVar11 != *(undefined8 **)(param_1 + 0x80e0)) {
    do {
      local_70 = *puVar11;
      lVar12 = puVar11[3];
      if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) ||
         (lVar12 = FUN_0265dff4(lVar12 + 0xe0,&local_68), lVar12 == 0)) {
        puVar11 = (undefined8 *)FUN_026f0848(plVar3,puVar11);
      }
      else {
        uVar10 = FUN_0111b1ec(*(undefined8 *)(param_1 + 0x60),local_70);
        if ((uVar10 & 1) != 0) {
          local_80 = (undefined8 *)0x0;
          uStack_78 = 0;
          FUN_00ca1a48(&local_80,puVar11 + 3);
          uVar8 = FUN_026f08d4(&local_80,puVar11[1],puVar11[2],param_1 + 0x68);
          puVar7 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_80 + 3);
            do {
              sVar4 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 1) {
              piVar2 = (int *)((long)local_80 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_68 = *puVar7;
                FUN_00c44438(lVar13 + 0x8040,&local_68);
              }
            }
            else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          uVar10 = (**(code **)(**(long **)(param_1 + 0x60) + 0x68))
                             (*(long **)(param_1 + 0x60),param_1 + 0x68,uVar8,&local_70);
          if ((uVar10 & 1) != 0) {
            puVar11 = (undefined8 *)FUN_026f0848(plVar3,puVar11);
            FUN_026f0930(lVar12,&local_70);
            goto LAB_026f0604;
          }
        }
        puVar11 = puVar11 + 5;
      }
LAB_026f0604:
    } while (puVar11 != *(undefined8 **)(param_1 + 0x80e0));
  }
  return;
}


