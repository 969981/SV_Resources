/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb6030; name: FUN_00eb6030
 */


void FUN_00eb6030(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  
  param_1[2] = 0;
  puVar7 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d3008;
  param_1[1] = lVar11;
  param_1[4] = (long)&PTR_LAB_045d3040;
  lVar9 = *param_2;
  param_1[6] = lVar9;
  if (lVar9 != 0) {
    piVar4 = (int *)(lVar9 + 0x28);
    do {
      iVar8 = *piVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = iVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[8] = 0;
  plVar16 = param_1 + 7;
  *plVar16 = 0;
  FUN_00eb6344(param_1 + 9);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_00eb6344(param_1 + 0x12);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_00eb6344(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  pvVar10 = (void *)*plVar16;
  uVar13 = (ulong)*(byte *)(param_1[6] + 0x1b8);
  pvVar12 = (void *)param_1[8];
  uVar14 = (long)pvVar12 - (long)pvVar10 >> 2;
  if (uVar14 < uVar13) {
    FUN_00c6d688(plVar16,uVar13 - uVar14);
    pvVar10 = (void *)param_1[7];
    pvVar12 = (void *)param_1[8];
  }
  else if (uVar13 < uVar14) {
    pvVar12 = (void *)((long)pvVar10 + uVar13 * 4);
    param_1[8] = (long)pvVar12;
  }
  if ((long)pvVar12 - (long)pvVar10 != 0) {
    memset(pvVar10,0,(long)pvVar12 - (long)pvVar10);
  }
  uVar13 = (ulong)*(byte *)(param_1[6] + 0x1b9);
  pvVar10 = (void *)param_1[0x10];
  pvVar12 = (void *)param_1[0x11];
  uVar14 = (long)pvVar12 - (long)pvVar10 >> 2;
  if (uVar14 < uVar13) {
    FUN_00c6d688(param_1 + 0x10,uVar13 - uVar14);
    pvVar10 = (void *)param_1[0x10];
    pvVar12 = (void *)param_1[0x11];
  }
  else if (uVar13 < uVar14) {
    pvVar12 = (void *)((long)pvVar10 + uVar13 * 4);
    param_1[0x11] = (long)pvVar12;
  }
  if ((long)pvVar12 - (long)pvVar10 != 0) {
    memset(pvVar10,0,(long)pvVar12 - (long)pvVar10);
  }
  uVar13 = (ulong)*(byte *)(param_1[6] + 0x1b9);
  pvVar10 = (void *)param_1[0x17];
  pvVar12 = (void *)param_1[0x18];
  uVar14 = (long)pvVar12 - (long)pvVar10 >> 2;
  if (uVar14 < uVar13) {
    FUN_00c6d688(param_1 + 0x17,uVar13 - uVar14);
    pvVar10 = (void *)param_1[0x17];
    pvVar12 = (void *)param_1[0x18];
  }
  else if (uVar13 < uVar14) {
    pvVar12 = (void *)((long)pvVar10 + uVar13 * 4);
    param_1[0x18] = (long)pvVar12;
  }
  if ((long)pvVar12 - (long)pvVar10 != 0) {
    memset(pvVar10,0,(long)pvVar12 - (long)pvVar10);
  }
  lVar15 = param_1[6];
  lVar9 = *(long *)(lVar15 + 0xd8);
  lVar11 = *(long *)(lVar15 + 0xe0);
  if (lVar9 != lVar11) {
    do {
      lVar15 = param_1[7];
      uVar13 = (ulong)*(byte *)(lVar9 + 0x5a);
      if ((ulong)(param_1[8] - lVar15 >> 2) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      pbVar1 = (byte *)(lVar9 + 0x58);
      puVar3 = (uint *)(lVar9 + 0x5c);
      pbVar2 = (byte *)(lVar9 + 0x5b);
      lVar9 = lVar9 + 0x60;
      *(uint *)(lVar15 + uVar13 * 4) =
           (uint)*pbVar1 << (ulong)(*pbVar2 & 0x1f) |
           *(uint *)(lVar15 + uVar13 * 4) & (*puVar3 ^ 0xffffffff);
    } while (lVar11 != lVar9);
    lVar15 = param_1[6];
  }
  lVar9 = *(long *)(lVar15 + 0x110);
  lVar11 = *(long *)(lVar15 + 0x118);
  while( true ) {
    if (lVar9 == lVar11) {
      FUN_00eb6400(param_1);
      return;
    }
    uVar13 = (ulong)*(byte *)(lVar9 + 0x5a) - (ulong)*(byte *)(lVar9 + 0x59);
    lVar15 = param_1[0x10];
    if ((ulong)(param_1[0x11] - lVar15 >> 2) <= uVar13) break;
    pbVar1 = (byte *)(lVar9 + 0x58);
    puVar3 = (uint *)(lVar9 + 0x5c);
    pbVar2 = (byte *)(lVar9 + 0x5b);
    lVar9 = lVar9 + 0x60;
    *(uint *)(lVar15 + uVar13 * 4) =
         (uint)*pbVar1 << (ulong)(*pbVar2 & 0x1f) |
         *(uint *)(lVar15 + uVar13 * 4) & (*puVar3 ^ 0xffffffff);
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


