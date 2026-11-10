/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006668e4; name: FUN_006668e4
 */


void FUN_006668e4(long *param_1,long *param_2,long param_3,undefined8 param_4,byte param_5)

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
  int local_60 [2];
  byte local_58;
  undefined8 local_48;
  byte local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  param_1[1] = param_3;
  *param_1 = (long)(PTR_DAT_047cc0a8 + 0x10);
  lVar14 = param_2[5];
  lVar13 = param_2[4];
  lVar10 = param_2[1];
  lVar9 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  *(byte *)(param_1 + 8) = param_5 & 1;
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[5] = lVar12;
  param_1[4] = lVar11;
  param_1[7] = lVar14;
  param_1[6] = lVar13;
  param_1[3] = lVar10;
  param_1[2] = lVar9;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar1 = PTR_DAT_047cc0b0 + 0x10;
  *(undefined1 *)(param_1 + 0x19) = 0;
  plVar8 = param_1 + 9;
  *plVar8 = (long)puVar1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xdf) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x27] = (long)plVar8;
  param_1[0x28] = (long)plVar8;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  puVar1 = PTR_DAT_047cbe90 + 0x10;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x18d) = 0;
  param_1[0x3f] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)puVar1;
  param_1[0x31] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)((long)param_1 + 0x277) = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x54] = 0;
  puVar2 = PTR_DAT_047cc0b8 + 0x10;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  param_1[0x53] = 0;
  param_1[0x4b] = (long)puVar2;
  param_1[0x5a] = (long)(param_1 + 0x4b);
  param_1[0x5b] = (long)(param_1 + 0x4b);
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = (long)puVar1;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 0;
  *(undefined8 *)((long)param_1 + 0x325) = 0;
  param_1[100] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_00665ccc(local_60,param_1 + 0xf,param_4,&local_28);
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_30);
  }
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  if (local_60[0] != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)((long)param_1 + 0xb1) = 1;
  if ((param_5 & 1) != 0) {
    lVar9 = param_1[1];
    bVar3 = *(byte *)(lVar9 + 1);
    bVar4 = *(byte *)(lVar9 + 3);
    bVar5 = *(byte *)(lVar9 + 4);
    bVar6 = *(byte *)(lVar9 + 2);
    bVar7 = *(byte *)(lVar9 + 0x130);
    *(undefined1 *)((long)param_1 + 0x51) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(uint *)((long)param_1 + 0x54) =
         (uint)bVar3 << 5 | (uint)bVar4 << 4 | (uint)bVar5 << 6 | (uint)bVar6 << 7 |
         (uint)bVar7 << 8;
    param_1[0xc] = lVar9 + 0x98;
  }
  return;
}


