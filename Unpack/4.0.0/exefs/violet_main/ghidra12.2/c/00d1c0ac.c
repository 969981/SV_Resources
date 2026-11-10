/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1c0ac; name: FUN_00d1c0ac
 */


void FUN_00d1c0ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00d0a71c(&local_38);
  FUN_00d1cba4(param_1,&local_38,param_3);
  puVar7 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_38 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_38 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
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
  param_1[0x47] = 0;
  *param_1 = &PTR_FUN_045692f0;
  param_1[0x46] = 0;
  param_1[0x44] = &DAT_cbf29ce484222645;
  param_1[4] = &PTR_LAB_04569370;
  param_1[5] = &DAT_045693c0;
  param_1[0x45] = &DAT_03c886bc;
  param_1[0x52] = &DAT_cbf29ce484222645;
  param_1[0x53] = &DAT_03c886bc;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x60] = &DAT_cbf29ce484222645;
  param_1[0x61] = &DAT_03c886bc;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x6e] = &DAT_cbf29ce484222645;
  param_1[0x6f] = &DAT_03c886bc;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x7c] = &DAT_cbf29ce484222645;
  param_1[0x7d] = &DAT_03c886bc;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x8a] = &DAT_cbf29ce484222645;
  param_1[0x8b] = &DAT_03c886bc;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x98] = &DAT_cbf29ce484222645;
  param_1[0x99] = &DAT_03c886bc;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0xa6] = &DAT_cbf29ce484222645;
  param_1[0xa7] = &DAT_03c886bc;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xb4] = &DAT_cbf29ce484222645;
  param_1[0xb5] = &DAT_03c886bc;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xc2] = &DAT_cbf29ce484222645;
  param_1[0xc3] = &DAT_03c886bc;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xd0] = &DAT_cbf29ce484222645;
  param_1[0xd1] = &DAT_03c886bc;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xde] = &DAT_cbf29ce484222645;
  param_1[0xdf] = &DAT_03c886bc;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xec] = &DAT_cbf29ce484222645;
  param_1[0xed] = &DAT_03c886bc;
  param_1[0xef] = 0;
  param_1[0xee] = 0;
  param_1[0xfa] = &DAT_cbf29ce484222645;
  param_1[0xfb] = &DAT_03c886bc;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0x108] = &DAT_cbf29ce484222645;
  param_1[0x109] = &DAT_03c886bc;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x116] = &DAT_cbf29ce484222645;
  param_1[0x117] = &DAT_03c886bc;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x124] = &DAT_cbf29ce484222645;
  param_1[0x125] = &DAT_03c886bc;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[0x132] = &DAT_cbf29ce484222645;
  param_1[0x133] = &DAT_03c886bc;
  param_1[0x135] = 0;
  param_1[0x134] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x1a] = &DAT_cbf29ce484222645;
  param_1[0x1b] = &DAT_03c886bc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x28] = &DAT_cbf29ce484222645;
  param_1[0x29] = &DAT_03c886bc;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x36] = &DAT_cbf29ce484222645;
  param_1[0x37] = &DAT_03c886bc;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  param_1[0x136] = puVar1;
  param_1[0x13e] = puVar1;
  param_1[0x149] = puVar1;
  param_1[0x151] = puVar1;
  param_1[0x159] = 0xf4b17a579f18960;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = 0;
  param_1[0x14e] = 0;
  param_1[0x14d] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  param_1[0x158] = 0;
  param_1[0x157] = 0;
  param_1[0x156] = 0;
  param_1[0x155] = 0;
  param_1[0x154] = 0;
  param_1[0x153] = 0;
  param_1[0x152] = 0;
  param_1[0x15a] = 0x82a2b175229d6a5b;
  param_1[0x15b] = 0;
  param_1[0x163] = 0;
  param_1[0x162] = 0;
  param_1[0x161] = 0;
  param_1[0x160] = 0;
  FUN_00d1af18(param_1 + 0x159);
  *(undefined4 *)((long)param_1 + 0xaec) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  param_1[0x15c] = 0;
  *(undefined8 *)((long)param_1 + 0xaf4) = 0;
  pcVar9 = (code *)param_1[0x161];
  *(undefined4 *)((long)param_1 + 0xafc) = 3;
  if (pcVar9 != (code *)0x0) {
    param_1[0x162] = 0;
    param_1[0x163] = 0;
    param_1[0x160] = 0;
    param_1[0x161] = 0;
    (*pcVar9)(param_1 + 0x164);
  }
  param_1[0x160] = FUN_00f3e2f4;
  param_1[0x164] = param_1;
  param_1[0x161] = &LAB_02a3ad18;
  param_1[0x162] = &LAB_02a3ad1c;
  param_1[0x163] = &LAB_02a3ad28;
  return;
}


