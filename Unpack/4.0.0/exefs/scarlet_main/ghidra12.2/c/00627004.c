/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00627004; name: FUN_00627004
 */


void FUN_00627004(long *param_1,long *param_2,long param_3,undefined8 param_4,byte param_5,
                 long param_6)

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
  int local_70 [2];
  byte local_68;
  undefined8 local_58;
  byte local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar1 = PTR_DAT_047cef40 + 0x50;
  *param_1 = (long)(PTR_DAT_047cef40 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = param_3;
  lVar14 = param_2[5];
  lVar13 = param_2[4];
  lVar10 = param_2[1];
  lVar9 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  param_1[0x10] = 0;
  *(byte *)(param_1 + 9) = param_5 & 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[6] = lVar12;
  param_1[5] = lVar11;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[8] = lVar14;
  param_1[7] = lVar13;
  param_1[4] = lVar10;
  param_1[3] = lVar9;
  puVar1 = PTR_DAT_047ce3d8 + 0x10;
  *(undefined2 *)(param_1 + 0x17) = 0;
  plVar8 = param_1 + 10;
  *plVar8 = (long)puVar1;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x18] = (long)plVar8;
  param_1[0x19] = (long)plVar8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar1 = PTR_DAT_047cbe90 + 0x10;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x21] = (long)puVar1;
  param_1[0x22] = 0;
  *(undefined8 *)((long)param_1 + 0x115) = 0;
  param_1[0x30] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x3c] = (long)(PTR_DAT_047ce3d0 + 0x10);
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x4b] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = (long)(param_1 + 0x3c);
  param_1[0x40] = (long)(param_1 + 0x3c);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((long)param_1 + 0x24d) = 0;
  param_1[0x57] = 0;
  param_1[0x48] = (long)puVar1;
  param_1[0x49] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((long)param_1 + 0x347) = 0;
  param_1[99] = (long)(PTR_DAT_047ceef8 + 0x10);
  param_1[0x6a] = (long)(param_1 + 99);
  param_1[0x6b] = (long)(param_1 + 99);
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x73] = (long)puVar1;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 0x77) = 0;
  *(undefined8 *)((long)param_1 + 0x3a5) = 0;
  param_1[0x74] = 0;
  param_1[0x82] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x95] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  puVar2 = PTR_DAT_047ce3e0 + 0x10;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  param_1[0x94] = 0;
  param_1[0x8e] = (long)puVar2;
  param_1[0x9b] = (long)(param_1 + 0x8e);
  param_1[0x9c] = (long)(param_1 + 0x8e);
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa4] = (long)puVar1;
  param_1[0xa7] = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)((long)param_1 + 0x52d) = 0;
  param_1[0xa5] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_00624fb4(local_70,param_1 + 0x10,param_4,&local_38);
  if ((local_50 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_40);
  }
  if ((local_68 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  if (local_70[0] != 0) {
LAB_00627390:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)((long)param_1 + 0xb9) = 1;
  if ((param_5 & 1) == 0) {
    if (param_6 != 0) goto LAB_00627390;
  }
  else {
    lVar9 = param_1[2];
    bVar3 = *(byte *)(lVar9 + 1);
    bVar4 = *(byte *)(lVar9 + 3);
    bVar5 = *(byte *)(lVar9 + 4);
    bVar6 = *(byte *)(lVar9 + 2);
    bVar7 = *(byte *)(lVar9 + 0x130);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((long)param_1 + 0x59) = 1;
    param_1[0xd] = lVar9 + 0x98;
    param_1[0x19] = param_6;
    *(uint *)((long)param_1 + 0x5c) =
         (uint)bVar3 << 5 | (uint)bVar4 << 4 | (uint)bVar5 << 6 | (uint)bVar6 << 7 |
         (uint)bVar7 << 8;
    (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_1 + 10,param_1 + 3);
  }
  return;
}


