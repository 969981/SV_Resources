/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1c488; name: FUN_00d1c488
 */


void FUN_00d1c488(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  param_1[0x4c] = 0;
  *param_1 = &DAT_04569ca8;
  param_1[4] = &PTR_LAB_04569d28;
  param_1[5] = &DAT_04569d78;
  param_1[0x4a] = &DAT_cbf29ce484222645;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x4b] = &DAT_03c886bc;
  param_1[0x4d] = 0;
  param_1[0x58] = &DAT_cbf29ce484222645;
  param_1[0x59] = &DAT_03c886bc;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x66] = &DAT_cbf29ce484222645;
  param_1[0x67] = &DAT_03c886bc;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x74] = &DAT_cbf29ce484222645;
  param_1[0x75] = &DAT_03c886bc;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x82] = &DAT_cbf29ce484222645;
  param_1[0x83] = &DAT_03c886bc;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x90] = &DAT_cbf29ce484222645;
  param_1[0x91] = &DAT_03c886bc;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x9e] = &DAT_cbf29ce484222645;
  param_1[0x9f] = &DAT_03c886bc;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xac] = &DAT_cbf29ce484222645;
  param_1[0xad] = &DAT_03c886bc;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xba] = &DAT_cbf29ce484222645;
  param_1[0xbb] = &DAT_03c886bc;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[200] = &DAT_cbf29ce484222645;
  param_1[0xc9] = &DAT_03c886bc;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xd6] = &DAT_cbf29ce484222645;
  param_1[0xd7] = &DAT_03c886bc;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xe4] = &DAT_cbf29ce484222645;
  param_1[0xe5] = &DAT_03c886bc;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xf2] = &DAT_cbf29ce484222645;
  param_1[0xf3] = &DAT_03c886bc;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  param_1[0x100] = &DAT_cbf29ce484222645;
  param_1[0x101] = &DAT_03c886bc;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x10e] = &DAT_cbf29ce484222645;
  param_1[0x10f] = &DAT_03c886bc;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x11c] = &DAT_cbf29ce484222645;
  param_1[0x11d] = &DAT_03c886bc;
  param_1[0x11f] = 0;
  param_1[0x11e] = 0;
  param_1[0x12a] = &DAT_cbf29ce484222645;
  param_1[299] = &DAT_03c886bc;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  param_1[0x138] = &DAT_cbf29ce484222645;
  param_1[0x139] = &DAT_03c886bc;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x20] = &DAT_cbf29ce484222645;
  param_1[0x21] = &DAT_03c886bc;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x2e] = &DAT_cbf29ce484222645;
  param_1[0x2f] = &DAT_03c886bc;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x3c] = &DAT_cbf29ce484222645;
  param_1[0x3d] = &DAT_03c886bc;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  param_1[0x13d] = 0;
  param_1[0x13c] = puVar1;
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  param_1[0x149] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x145] = 0;
  param_1[0x144] = puVar1;
  param_1[0x156] = 0;
  param_1[0x155] = 0;
  param_1[0x154] = 0;
  param_1[0x153] = 0;
  param_1[0x152] = 0;
  param_1[0x151] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = puVar1;
  param_1[0x15e] = 0;
  param_1[0x15d] = 0;
  param_1[0x15c] = 0;
  param_1[0x15b] = 0;
  param_1[0x15a] = 0;
  param_1[0x159] = 0;
  param_1[0x158] = 0;
  param_1[0x157] = puVar1;
  param_1[0x16c] = &DAT_cbf29ce484222645;
  param_1[0x16d] = &DAT_03c886bc;
  param_1[0x16f] = 0;
  param_1[0x16e] = 0;
  param_1[0x17a] = &DAT_cbf29ce484222645;
  param_1[0x17b] = &DAT_03c886bc;
  param_1[0x17d] = 0;
  param_1[0x17c] = 0;
  param_1[0x188] = &DAT_cbf29ce484222645;
  param_1[0x189] = &DAT_03c886bc;
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  param_1[0x196] = &DAT_cbf29ce484222645;
  param_1[0x197] = &DAT_03c886bc;
  param_1[0x199] = 0;
  param_1[0x198] = 0;
  param_1[0x1a4] = &DAT_cbf29ce484222645;
  param_1[0x1a5] = &DAT_03c886bc;
  param_1[0x1a7] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1b2] = &DAT_cbf29ce484222645;
  param_1[0x1b3] = &DAT_03c886bc;
  param_1[0x1b5] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1c0] = &DAT_cbf29ce484222645;
  param_1[0x1c1] = &DAT_03c886bc;
  param_1[0x1c3] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1ce] = &DAT_cbf29ce484222645;
  param_1[0x1cf] = &DAT_03c886bc;
  param_1[0x1d1] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1dc] = &DAT_cbf29ce484222645;
  param_1[0x1dd] = &DAT_03c886bc;
  param_1[0x1df] = 0;
  param_1[0x1de] = 0;
  param_1[0x1ea] = &DAT_cbf29ce484222645;
  param_1[0x1eb] = &DAT_03c886bc;
  param_1[0x1ed] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1f8] = &DAT_cbf29ce484222645;
  param_1[0x1f9] = &DAT_03c886bc;
  param_1[0x1fb] = 0;
  param_1[0x1fa] = 0;
  param_1[0x206] = &DAT_cbf29ce484222645;
  param_1[0x207] = &DAT_03c886bc;
  param_1[0x209] = 0;
  param_1[0x208] = 0;
  param_1[0x215] = &DAT_03c886bc;
  param_1[0x223] = &DAT_03c886bc;
  param_1[0x231] = &DAT_03c886bc;
  param_1[0x23f] = &DAT_03c886bc;
  param_1[0x24d] = &DAT_03c886bc;
  param_1[0x25b] = &DAT_03c886bc;
  param_1[0x269] = &DAT_03c886bc;
  param_1[0x277] = &DAT_03c886bc;
  param_1[0x285] = &DAT_03c886bc;
  param_1[0x214] = &DAT_cbf29ce484222645;
  param_1[0x217] = 0;
  param_1[0x216] = 0;
  param_1[0x222] = &DAT_cbf29ce484222645;
  param_1[0x225] = 0;
  param_1[0x224] = 0;
  param_1[0x230] = &DAT_cbf29ce484222645;
  param_1[0x233] = 0;
  param_1[0x232] = 0;
  param_1[0x23e] = &DAT_cbf29ce484222645;
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  param_1[0x24c] = &DAT_cbf29ce484222645;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  param_1[0x25a] = &DAT_cbf29ce484222645;
  param_1[0x25d] = 0;
  param_1[0x25c] = 0;
  param_1[0x268] = &DAT_cbf29ce484222645;
  param_1[0x26b] = 0;
  param_1[0x26a] = 0;
  param_1[0x276] = &DAT_cbf29ce484222645;
  param_1[0x279] = 0;
  param_1[0x278] = 0;
  param_1[0x284] = &DAT_cbf29ce484222645;
  param_1[0x287] = 0;
  param_1[0x286] = 0;
  param_1[0x28f] = 0;
  param_1[0x28e] = 0;
  param_1[0x28d] = 0;
  param_1[0x28c] = 0;
  param_1[0x28b] = 0;
  param_1[0x28a] = 0;
  param_1[0x289] = 0;
  param_1[0x288] = puVar1;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x294] = 0;
  param_1[0x293] = 0;
  param_1[0x292] = 0;
  param_1[0x291] = 0;
  param_1[0x290] = puVar1;
  param_1[0x2a2] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a0] = 0;
  param_1[0x29f] = 0;
  param_1[0x29e] = 0;
  param_1[0x29d] = 0;
  param_1[0x29c] = 0;
  param_1[0x29b] = puVar1;
  param_1[0x2aa] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a3] = puVar1;
  param_1[0x2b6] = 0xf4b17a579f18960;
  param_1[0x2b7] = 0x82a2b175229d6a5b;
  param_1[0x2b8] = 0;
  FUN_00d1ca68(param_1 + 700);
  *(undefined4 *)(param_1 + 0x2ba) = 0xffffffff;
  param_1[0x2c7] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2b9] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x2c3) = 0;
  *(undefined8 *)((long)param_1 + 0x15d4) = 0;
  *(undefined4 *)((long)param_1 + 0x15dc) = 0;
  FUN_00d1af18(param_1 + 0x2b6);
  pcVar9 = (code *)param_1[0x2c5];
  if (pcVar9 != (code *)0x0) {
    param_1[0x2c6] = 0;
    param_1[0x2c7] = 0;
    param_1[0x2c4] = 0;
    param_1[0x2c5] = 0;
    (*pcVar9)(param_1 + 0x2c8);
  }
  param_1[0x2c4] = FUN_01095ff4;
  param_1[0x2c8] = param_1;
  param_1[0x2c5] = &LAB_02a3b7a4;
  param_1[0x2c6] = &LAB_02a3b7a8;
  param_1[0x2c7] = &LAB_02a3b7b4;
  return;
}


