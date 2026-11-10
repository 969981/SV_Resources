/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bd8520; name: FUN_01bd8520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd8520(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x590,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar9 = 0;
    puVar9[1] = 0;
    uVar5 = _UNK_03cab0d8;
    uVar4 = _DAT_03cab0d0;
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[8] = 0;
    *(undefined1 *)(puVar9 + 9) = 1;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[0xb] = uVar5;
    puVar9[10] = uVar4;
    memset(puVar9 + 0xc,0,0x44);
    uVar7 = _UNK_03cabe58;
    uVar6 = _DAT_03cabe50;
    puVar9[0x16] = 0;
    puVar9[0x17] = 0;
    puVar9[0x1a] = 0;
    puVar9[0x1b] = 0;
    uVar5 = _UNK_03caaf48;
    uVar4 = _DAT_03caaf40;
    puVar9[0x1c] = 0;
    puVar9[0x1d] = 0;
    puVar9[0x1f] = uVar7;
    puVar9[0x1e] = uVar6;
    puVar9[0x18] = 0x3f00000000000000;
    *(undefined1 *)(puVar9 + 0x28) = 0;
    *(undefined4 *)(puVar9 + 0x3c) = 0;
    *(undefined4 *)(puVar9 + 0x26) = 0;
    puVar9[0x20] = 0;
    puVar9[0x21] = 0;
    puVar9[0x22] = 0;
    puVar9[0x23] = 0;
    puVar9[0x24] = 0;
    puVar9[0x25] = 0;
    puVar1 = PTR_DAT_047d5400 + 0x10;
    puVar9[0x3e] = puVar1;
    puVar9[0x41] = 0;
    puVar9[0x40] = 0;
    puVar2 = PTR_DAT_047d53f0 + 0x10;
    puVar9[0x42] = puVar2;
    puVar9[0x43] = 0;
    puVar9[0x44] = 0;
    puVar9[0x47] = 0;
    puVar9[0x46] = 0;
    puVar3 = PTR_DAT_047d53f8 + 0x10;
    puVar9[0x74] = puVar1;
    puVar9[0x8a] = 0x3f80000040000000;
    *(undefined4 *)(puVar9 + 0x8b) = 3;
    puVar9[0x8e] = 0x200000001;
    puVar9[0x78] = puVar2;
    puVar9[0x48] = puVar3;
    puVar9[0x4a] = 0;
    puVar9[0x4b] = 0;
    puVar9[0x4c] = 0;
    puVar9[0x4d] = 0;
    puVar9[0x4e] = 0x33f4ccccd;
    *(undefined4 *)(puVar9 + 0x4f) = 0x3f000000;
    *(undefined4 *)(puVar9 + 0x52) = 0;
    *(undefined1 *)((long)puVar9 + 0x294) = 1;
    *(undefined1 *)(puVar9 + 0x54) = 0;
    puVar9[0xb0] = &DAT_cbf29ce484222645;
    puVar9[0x49] = 0;
    puVar9[0x58] = 0x3f800000;
    *(undefined4 *)(puVar9 + 0x59) = 0;
    *(undefined1 *)(puVar9 + 0x5e) = 0;
    *(undefined4 *)(puVar9 + 0x72) = 0;
    puVar9[0x7a] = 0;
    puVar9[0x79] = 0;
    puVar9[0x7e] = puVar3;
    puVar9[0x7f] = 0;
    puVar9[0x80] = 0;
    puVar9[0x81] = 0;
    puVar9[0x82] = 0;
    puVar9[0x83] = 0;
    puVar9[0x84] = 0x33f4ccccd;
    *(undefined4 *)(puVar9 + 0x85) = 0x3f000000;
    *(undefined4 *)(puVar9 + 0x88) = 0;
    *(undefined1 *)((long)puVar9 + 0x444) = 1;
    *(undefined1 *)(puVar9 + 0x96) = 0;
    puVar9[0x95] = 0;
    puVar9[0x94] = 0;
    puVar9[0x93] = 0;
    puVar9[0x92] = 0;
    puVar9[0x91] = 0;
    puVar9[0x90] = 0;
    puVar9[0x9f] = 0;
    puVar9[0x9e] = 0;
    puVar9[0x9d] = 0;
    puVar9[0x9c] = 0;
    puVar9[0x9b] = 0;
    puVar9[0x9a] = 0;
    puVar9[0x99] = 0;
    puVar9[0x98] = 0;
    puVar9[0xa4] = 0;
    *(undefined4 *)(puVar9 + 0xa5) = 0;
    puVar9[0xaf] = 0;
    puVar9[0xae] = 0;
    puVar9[0xad] = 0;
    puVar9[0xac] = 0;
    puVar9[0xab] = 0;
    puVar9[0xaa] = 0;
    *(undefined4 *)(puVar9 + 0xb1) = 0;
    puVar9[0x51] = uVar5;
    puVar9[0x50] = uVar4;
    puVar9[0x57] = 0;
    puVar9[0x56] = 0;
    puVar9[0x77] = 0;
    puVar9[0x76] = 0;
    puVar9[0x7d] = 0;
    puVar9[0x7c] = 0;
    puVar9[0x87] = uVar5;
    puVar9[0x86] = uVar4;
    puVar9[0x8d] = 0;
    puVar9[0x8c] = 0;
    puVar9[0xa1] = uVar7;
    puVar9[0xa0] = uVar6;
    puVar9[0xa3] = uVar7;
    puVar9[0xa2] = uVar6;
    puVar9[0xa7] = 0;
    puVar9[0xa6] = 0;
    puVar9[0xa9] = uVar7;
    puVar9[0xa8] = uVar6;
    puVar9[0x5b] = 0;
    puVar9[0x5a] = 0;
    puVar9[0x5d] = uVar7;
    puVar9[0x5c] = uVar6;
    *param_1 = puVar9;
    param_1[1] = param_2;
    param_1[2] = 0x590;
    param_1[3] = 0x10;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  return;
}


