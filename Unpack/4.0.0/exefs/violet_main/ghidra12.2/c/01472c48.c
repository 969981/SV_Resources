/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01472c48; name: FUN_01472c48
 */


void FUN_01472c48(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  *param_1 = &PTR_FUN_04561068;
  (**(code **)(*param_2 + 0x18))(local_58,param_2);
  plVar3 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar3 = param_2 + 5;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  puVar10 = local_58[0];
  if ((long *)local_58[0][2] == plVar3) {
    FUN_00c9ea00(param_1 + 1,local_58);
    puVar10 = local_58[0];
  }
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
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
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  param_1[4] = 0;
  param_1[5] = 0x10000270f;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x10000270f;
  param_1[6] = 1;
  param_1[7] = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0x101;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((long)param_1 + 0x164) = 0x101;
  *(undefined4 *)(param_1 + 0x2e) = param_3;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x38] = &DAT_03c886bc;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = &DAT_cbf29ce484222645;
  param_1[0x50] = &DAT_03c886bc;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x101;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)((long)param_1 + 0x2c4) = 0x101;
  *(undefined4 *)(param_1 + 0x5a) = 2;
  *(undefined4 *)((long)param_1 + 0x2d4) = param_4;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[8] = &DAT_03c886bc;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = &DAT_cbf29ce484222645;
  param_1[0xc] = &DAT_03c886bc;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = &DAT_cbf29ce484222645;
  param_1[0x24] = &DAT_03c886bc;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x32] = 1;
  param_1[0x33] = &DAT_cbf29ce484222645;
  param_1[0x34] = &DAT_03c886bc;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = &DAT_cbf29ce484222645;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,param_1 + 0x60);
    uVar11 = param_5[3];
    param_1[0x5d] = param_5[1];
    param_1[0x5f] = uVar11;
    uVar11 = *param_5;
    param_1[0x5e] = param_5[2];
    param_1[0x5c] = uVar11;
  }
  param_1[0x6c] = param_1 + 0x6c;
  param_1[0x6d] = param_1 + 0x6c;
  param_1[0x6e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar7 = tpidr_el0;
    lVar9 = *(long *)(lVar7 + 0x30);
    if (lVar9 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar9 = DAT_04859430;
      *(long *)(lVar7 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x6f] = lVar9;
  param_1[0x70] = 0xc30c30c30c30c3;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((long)param_1 + 0x415) = 0;
  param_1[0x81] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((long)param_1 + 0x435) = 0;
  *(undefined2 *)(param_1 + 0x89) = 0;
  *(undefined1 *)((long)param_1 + 0x44a) = 0;
  memset(param_1 + 0x73,0,0x65);
  return;
}


