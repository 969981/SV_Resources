/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005b85c8; name: FUN_005b85c8
 */


void FUN_005b85c8(long *param_1,long *param_2,long param_3,byte param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  param_1[3] = param_3;
  puVar1 = PTR_DAT_047ce3c0;
  param_1[2] = (long)(PTR_DAT_047ce3c0 + 0x98);
  puVar2 = PTR_DAT_047ce3d0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x68);
  lVar14 = param_2[5];
  lVar13 = param_2[4];
  lVar10 = param_2[1];
  lVar9 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  plVar8 = param_1 + 0xb;
  *plVar8 = (long)(puVar2 + 0x10);
  *(byte *)(param_1 + 10) = param_4 & 1;
  param_1[9] = lVar14;
  param_1[8] = lVar13;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[7] = lVar12;
  param_1[6] = lVar11;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[5] = lVar10;
  param_1[4] = lVar9;
  param_1[0xd] = 0;
  param_1[0xe] = (long)plVar8;
  param_1[0xf] = (long)plVar8;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar1 = PTR_DAT_047cbe90 + 0x10;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((long)param_1 + 0xc5) = 0;
  param_1[0x26] = 0;
  param_1[0x30] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x17] = (long)puVar1;
  param_1[0x18] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x1bf) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x32] = (long)(PTR_DAT_047ce3c8 + 0x10);
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x39] = (long)(param_1 + 0x32);
  param_1[0x3a] = (long)(param_1 + 0x32);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((long)param_1 + 0x21d) = 0;
  param_1[0x51] = 0;
  param_1[0x5b] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x42] = (long)puVar1;
  param_1[0x43] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x69] = 0;
  *(undefined1 *)((long)param_1 + 0x351) = 0;
  param_1[0x5d] = (long)(PTR_DAT_047ce3d8 + 0x10);
  param_1[0x6b] = (long)(param_1 + 0x5d);
  param_1[0x6c] = (long)(param_1 + 0x5d);
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x74] = (long)puVar1;
  param_1[0x77] = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined8 *)((long)param_1 + 0x3ad) = 0;
  param_1[0x75] = 0;
  param_1[0x83] = 0;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x96] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  puVar2 = PTR_DAT_047ce3e0 + 0x10;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  param_1[0x95] = 0;
  param_1[0x8f] = (long)puVar2;
  param_1[0x9c] = (long)(param_1 + 0x8f);
  param_1[0x9d] = (long)(param_1 + 0x8f);
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = (long)puVar1;
  param_1[0xa8] = 0;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)((long)param_1 + 0x535) = 0;
  param_1[0xa6] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  if ((param_4 & 1) == 0) {
    if (param_5 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    bVar3 = *(byte *)(param_3 + 1);
    bVar4 = *(byte *)(param_3 + 3);
    bVar5 = *(byte *)(param_3 + 4);
    bVar6 = *(byte *)(param_3 + 2);
    bVar7 = *(byte *)(param_3 + 0x130);
    *(undefined1 *)(param_1 + 0x62) = 0;
    *(undefined1 *)((long)param_1 + 0x2f1) = 1;
    *(uint *)((long)param_1 + 0x2f4) =
         (uint)bVar3 << 5 | (uint)bVar4 << 4 | (uint)bVar5 << 6 | (uint)bVar6 << 7 |
         (uint)bVar7 << 8;
    param_1[0x60] = param_3 + 0x98;
    if (bVar7 == 0) {
      param_1[0x6c] = param_5;
                    /* WARNING: Could not recover jumptable at 0x005b88a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],param_1 + 0x5d,param_1 + 4);
      return;
    }
  }
  return;
}


