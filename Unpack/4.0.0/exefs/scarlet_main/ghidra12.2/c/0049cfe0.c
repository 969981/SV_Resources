/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049cfe0; name: FUN_0049cfe0
 */


byte * FUN_0049cfe0(byte *param_1,int param_2,FILE *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  long local_168;
  byte local_160 [256];
  
  pbVar9 = param_1;
  if (*(FILE **)PTR_stdout_047cb860 == param_3 || *(FILE **)PTR_stderr_047cb8b8 == param_3) {
    if (param_2 == 1) {
      fputc((uint)*param_1,param_3);
    }
    else {
      pbVar11 = &DAT_03c08ca3;
      if (param_1 != (byte *)0x0) {
        pbVar11 = param_1;
      }
      fputs((char *)pbVar11,param_3);
    }
  }
  else if (*(FILE **)PTR_stdin_047cb840 != param_3) {
    iVar10 = 0;
    iVar3 = param_2 + -1;
    pbVar11 = param_1;
    while( true ) {
      local_168 = -1;
      local_160[0xe8] = 0;
      local_160[0xe9] = 0;
      local_160[0xea] = 0;
      local_160[0xeb] = 0;
      local_160[0xec] = 0;
      local_160[0xed] = 0;
      local_160[0xee] = 0;
      local_160[0xef] = 0;
      local_160[0xe0] = 0;
      local_160[0xe1] = 0;
      local_160[0xe2] = 0;
      local_160[0xe3] = 0;
      local_160[0xe4] = 0;
      local_160[0xe5] = 0;
      local_160[0xe6] = 0;
      local_160[0xe7] = 0;
      local_160[0xf8] = 0;
      local_160[0xf9] = 0;
      local_160[0xfa] = 0;
      local_160[0xfb] = 0;
      local_160[0xfc] = 0;
      local_160[0xfd] = 0;
      local_160[0xfe] = 0;
      local_160[0xff] = 0;
      local_160[0xf0] = 0;
      local_160[0xf1] = 0;
      local_160[0xf2] = 0;
      local_160[0xf3] = 0;
      local_160[0xf4] = 0;
      local_160[0xf5] = 0;
      local_160[0xf6] = 0;
      local_160[0xf7] = 0;
      local_160[200] = 0;
      local_160[0xc9] = 0;
      local_160[0xca] = 0;
      local_160[0xcb] = 0;
      local_160[0xcc] = 0;
      local_160[0xcd] = 0;
      local_160[0xce] = 0;
      local_160[0xcf] = 0;
      local_160[0xc0] = 0;
      local_160[0xc1] = 0;
      local_160[0xc2] = 0;
      local_160[0xc3] = 0;
      local_160[0xc4] = 0;
      local_160[0xc5] = 0;
      local_160[0xc6] = 0;
      local_160[199] = 0;
      local_160[0xd8] = 0;
      local_160[0xd9] = 0;
      local_160[0xda] = 0;
      local_160[0xdb] = 0;
      local_160[0xdc] = 0;
      local_160[0xdd] = 0;
      local_160[0xde] = 0;
      local_160[0xdf] = 0;
      local_160[0xd0] = 0;
      local_160[0xd1] = 0;
      local_160[0xd2] = 0;
      local_160[0xd3] = 0;
      local_160[0xd4] = 0;
      local_160[0xd5] = 0;
      local_160[0xd6] = 0;
      local_160[0xd7] = 0;
      local_160[0xa8] = 0;
      local_160[0xa9] = 0;
      local_160[0xaa] = 0;
      local_160[0xab] = 0;
      local_160[0xac] = 0;
      local_160[0xad] = 0;
      local_160[0xae] = 0;
      local_160[0xaf] = 0;
      local_160[0xa0] = 0;
      local_160[0xa1] = 0;
      local_160[0xa2] = 0;
      local_160[0xa3] = 0;
      local_160[0xa4] = 0;
      local_160[0xa5] = 0;
      local_160[0xa6] = 0;
      local_160[0xa7] = 0;
      local_160[0xb8] = 0;
      local_160[0xb9] = 0;
      local_160[0xba] = 0;
      local_160[0xbb] = 0;
      local_160[0xbc] = 0;
      local_160[0xbd] = 0;
      local_160[0xbe] = 0;
      local_160[0xbf] = 0;
      local_160[0xb0] = 0;
      local_160[0xb1] = 0;
      local_160[0xb2] = 0;
      local_160[0xb3] = 0;
      local_160[0xb4] = 0;
      local_160[0xb5] = 0;
      local_160[0xb6] = 0;
      local_160[0xb7] = 0;
      local_160[0x88] = 0;
      local_160[0x89] = 0;
      local_160[0x8a] = 0;
      local_160[0x8b] = 0;
      local_160[0x8c] = 0;
      local_160[0x8d] = 0;
      local_160[0x8e] = 0;
      local_160[0x8f] = 0;
      local_160[0x80] = 0;
      local_160[0x81] = 0;
      local_160[0x82] = 0;
      local_160[0x83] = 0;
      local_160[0x84] = 0;
      local_160[0x85] = 0;
      local_160[0x86] = 0;
      local_160[0x87] = 0;
      local_160[0x98] = 0;
      local_160[0x99] = 0;
      local_160[0x9a] = 0;
      local_160[0x9b] = 0;
      local_160[0x9c] = 0;
      local_160[0x9d] = 0;
      local_160[0x9e] = 0;
      local_160[0x9f] = 0;
      local_160[0x90] = 0;
      local_160[0x91] = 0;
      local_160[0x92] = 0;
      local_160[0x93] = 0;
      local_160[0x94] = 0;
      local_160[0x95] = 0;
      local_160[0x96] = 0;
      local_160[0x97] = 0;
      local_160[0x68] = 0;
      local_160[0x69] = 0;
      local_160[0x6a] = 0;
      local_160[0x6b] = 0;
      local_160[0x6c] = 0;
      local_160[0x6d] = 0;
      local_160[0x6e] = 0;
      local_160[0x6f] = 0;
      local_160[0x60] = 0;
      local_160[0x61] = 0;
      local_160[0x62] = 0;
      local_160[99] = 0;
      local_160[100] = 0;
      local_160[0x65] = 0;
      local_160[0x66] = 0;
      local_160[0x67] = 0;
      local_160[0x78] = 0;
      local_160[0x79] = 0;
      local_160[0x7a] = 0;
      local_160[0x7b] = 0;
      local_160[0x7c] = 0;
      local_160[0x7d] = 0;
      local_160[0x7e] = 0;
      local_160[0x7f] = 0;
      local_160[0x70] = 0;
      local_160[0x71] = 0;
      local_160[0x72] = 0;
      local_160[0x73] = 0;
      local_160[0x74] = 0;
      local_160[0x75] = 0;
      local_160[0x76] = 0;
      local_160[0x77] = 0;
      local_160[0x48] = 0;
      local_160[0x49] = 0;
      local_160[0x4a] = 0;
      local_160[0x4b] = 0;
      local_160[0x4c] = 0;
      local_160[0x4d] = 0;
      local_160[0x4e] = 0;
      local_160[0x4f] = 0;
      local_160[0x40] = 0;
      local_160[0x41] = 0;
      local_160[0x42] = 0;
      local_160[0x43] = 0;
      local_160[0x44] = 0;
      local_160[0x45] = 0;
      local_160[0x46] = 0;
      local_160[0x47] = 0;
      local_160[0x58] = 0;
      local_160[0x59] = 0;
      local_160[0x5a] = 0;
      local_160[0x5b] = 0;
      local_160[0x5c] = 0;
      local_160[0x5d] = 0;
      local_160[0x5e] = 0;
      local_160[0x5f] = 0;
      local_160[0x50] = 0;
      local_160[0x51] = 0;
      local_160[0x52] = 0;
      local_160[0x53] = 0;
      local_160[0x54] = 0;
      local_160[0x55] = 0;
      local_160[0x56] = 0;
      local_160[0x57] = 0;
      local_160[0x28] = 0;
      local_160[0x29] = 0;
      local_160[0x2a] = 0;
      local_160[0x2b] = 0;
      local_160[0x2c] = 0;
      local_160[0x2d] = 0;
      local_160[0x2e] = 0;
      local_160[0x2f] = 0;
      local_160[0x20] = 0;
      local_160[0x21] = 0;
      local_160[0x22] = 0;
      local_160[0x23] = 0;
      local_160[0x24] = 0;
      local_160[0x25] = 0;
      local_160[0x26] = 0;
      local_160[0x27] = 0;
      local_160[0x38] = 0;
      local_160[0x39] = 0;
      local_160[0x3a] = 0;
      local_160[0x3b] = 0;
      local_160[0x3c] = 0;
      local_160[0x3d] = 0;
      local_160[0x3e] = 0;
      local_160[0x3f] = 0;
      local_160[0x30] = 0;
      local_160[0x31] = 0;
      local_160[0x32] = 0;
      local_160[0x33] = 0;
      local_160[0x34] = 0;
      local_160[0x35] = 0;
      local_160[0x36] = 0;
      local_160[0x37] = 0;
      local_160[8] = 0;
      local_160[9] = 0;
      local_160[10] = 0;
      local_160[0xb] = 0;
      local_160[0xc] = 0;
      local_160[0xd] = 0;
      local_160[0xe] = 0;
      local_160[0xf] = 0;
      local_160[0] = 0;
      local_160[1] = 0;
      local_160[2] = 0;
      local_160[3] = 0;
      local_160[4] = 0;
      local_160[5] = 0;
      local_160[6] = 0;
      local_160[7] = 0;
      local_160[0x18] = 0;
      local_160[0x19] = 0;
      local_160[0x1a] = 0;
      local_160[0x1b] = 0;
      local_160[0x1c] = 0;
      local_160[0x1d] = 0;
      local_160[0x1e] = 0;
      local_160[0x1f] = 0;
      local_160[0x10] = 0;
      local_160[0x11] = 0;
      local_160[0x12] = 0;
      local_160[0x13] = 0;
      local_160[0x14] = 0;
      local_160[0x15] = 0;
      local_160[0x16] = 0;
      local_160[0x17] = 0;
      uVar4 = nn::fs::ReadFile(&local_168,*(undefined8 *)param_3,param_3->_IO_read_ptr,local_160,
                               0x100);
      if (uVar4 != 0) break;
      pbVar9 = param_1;
      if (local_168 == 0) goto LAB_0049d1d8;
      pbVar7 = (byte *)0x0;
      if ((iVar10 < iVar3) && (0 < (int)local_168)) {
        lVar8 = 0;
        do {
          param_3->_IO_read_ptr = param_3->_IO_read_ptr + 1;
          bVar2 = local_160[lVar8];
          pbVar11[lVar8] = bVar2;
          iVar5 = (int)lVar8;
          if (bVar2 == 0 || bVar2 == 10) {
            pbVar7 = param_1;
            goto LAB_0049d128;
          }
          lVar8 = lVar8 + 1;
        } while ((iVar10 + 1 + iVar5 < iVar3) && (lVar8 < (int)local_168));
        pbVar7 = (byte *)0x0;
LAB_0049d128:
        pbVar11 = pbVar11 + lVar8;
        iVar10 = iVar10 + iVar5 + 1;
      }
      if (iVar10 != param_2 + -2) {
        pbVar9 = pbVar7;
      }
      if ((iVar3 <= iVar10) || (pbVar9 != (byte *)0x0)) goto LAB_0049d1d8;
    }
    if ((uVar4 & 0x1ff) != 2) {
LAB_0049d194:
      *(undefined4 *)((long)&param_3->_IO_read_end + 4) = 0xffff;
      goto LAB_0049d2b0;
    }
    uVar1 = uVar4 & 0x3ffe00;
    if (uVar1 == 0x400) {
      uVar6 = 0x11;
    }
    else if (uVar1 == 0x200) {
      uVar6 = 2;
    }
    else {
      uVar4 = uVar4 >> 9 & 0x1fff;
      if (uVar4 - 0x1e < 0x10) {
        uVar6 = 0x1c;
      }
      else if (uVar1 < 0x1a00) {
        if (uVar1 == 0xe00) {
          uVar6 = 0x10;
        }
        else if (uVar1 == 0x1000) {
          uVar6 = 0x27;
        }
        else {
LAB_0049d274:
          if (299 < uVar4 - 0xc80) {
            if (999 < uVar4 - 4000) goto LAB_0049d194;
            *(undefined4 *)((long)&param_3->_IO_read_end + 4) = 5;
            goto LAB_0049d2b0;
          }
          uVar6 = 0xc;
        }
      }
      else if (uVar1 == 0x1a00) {
        uVar6 = 0xb;
      }
      else if (uVar1 == 0x177200) {
        uVar6 = 0x26;
      }
      else {
        if (uVar1 != 0x177a00) goto LAB_0049d274;
        uVar6 = 0x1d;
      }
    }
    pbVar9 = (byte *)0x0;
    *(undefined4 *)((long)&param_3->_IO_read_end + 4) = uVar6;
LAB_0049d1d8:
    if (pbVar9 == (byte *)0x0) {
LAB_0049d2b0:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (0 < iVar10) {
        pbVar11 = pbVar11 + 1;
      }
      *pbVar11 = 0;
    }
  }
  return pbVar9;
}


