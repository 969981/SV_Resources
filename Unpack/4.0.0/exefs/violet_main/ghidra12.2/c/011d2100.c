/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d2100; name: FUN_011d2100
 */


void FUN_011d2100(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  lVar1 = tpidr_el0;
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = lVar3;
  param_1[9] = 0;
  param_1[4] = 0x666666666666666;
  param_1[5] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
      (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) &&
     (lVar3 = *(long *)(lVar1 + 0x30), lVar3 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar3 = DAT_04859430;
    *(long *)(lVar1 + 0x30) = DAT_04859430;
  }
  param_1[10] = lVar3;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x41] = &DAT_cbf29ce484222645;
  param_1[0xb] = 0x666666666666666;
  param_1[0xc] = 0;
  param_1[0x42] = &DAT_03c886bc;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x49] = &DAT_cbf29ce484222645;
  param_1[0x4a] = &DAT_03c886bc;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x51] = &DAT_cbf29ce484222645;
  param_1[0x52] = &DAT_03c886bc;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x59] = &DAT_cbf29ce484222645;
  param_1[0x5a] = &DAT_03c886bc;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x61] = &DAT_cbf29ce484222645;
  param_1[0x62] = &DAT_03c886bc;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x69] = &DAT_cbf29ce484222645;
  param_1[0x6a] = &DAT_03c886bc;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x71] = &DAT_cbf29ce484222645;
  param_1[0x72] = &DAT_03c886bc;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x79] = &DAT_cbf29ce484222645;
  param_1[0x7a] = &DAT_03c886bc;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x81] = &DAT_cbf29ce484222645;
  param_1[0x82] = &DAT_03c886bc;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x89] = &DAT_cbf29ce484222645;
  param_1[0x8a] = &DAT_03c886bc;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x91] = &DAT_cbf29ce484222645;
  param_1[0x92] = &DAT_03c886bc;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x99] = &DAT_cbf29ce484222645;
  param_1[0x9a] = &DAT_03c886bc;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0xa1] = &DAT_cbf29ce484222645;
  param_1[0xa2] = &DAT_03c886bc;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa9] = &DAT_cbf29ce484222645;
  param_1[0xaa] = &DAT_03c886bc;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xb1] = &DAT_cbf29ce484222645;
  param_1[0xb2] = &DAT_03c886bc;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb5] = &DAT_cbf29ce484222645;
  param_1[0xb6] = &DAT_03c886bc;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb9] = &DAT_cbf29ce484222645;
  param_1[0xba] = &DAT_03c886bc;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xbd] = &DAT_cbf29ce484222645;
  param_1[0xbe] = &DAT_03c886bc;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc1] = &DAT_cbf29ce484222645;
  param_1[0xc2] = &DAT_03c886bc;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc5] = &DAT_cbf29ce484222645;
  param_1[0xc6] = &DAT_03c886bc;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc9] = &DAT_cbf29ce484222645;
  param_1[0xca] = &DAT_03c886bc;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xcd] = &DAT_cbf29ce484222645;
  param_1[0xce] = &DAT_03c886bc;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xd1] = &DAT_cbf29ce484222645;
  param_1[0xd2] = &DAT_03c886bc;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd5] = &DAT_cbf29ce484222645;
  param_1[0xd6] = &DAT_03c886bc;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd9] = &DAT_cbf29ce484222645;
  param_1[0xda] = &DAT_03c886bc;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xdd] = &DAT_cbf29ce484222645;
  param_1[0xde] = &DAT_03c886bc;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xe1] = &DAT_cbf29ce484222645;
  param_1[0xe2] = &DAT_03c886bc;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = &DAT_cbf29ce484222645;
  param_1[0xe6] = &DAT_03c886bc;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = &DAT_cbf29ce484222645;
  param_1[0xea] = &DAT_03c886bc;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xed] = &DAT_cbf29ce484222645;
  param_1[0xee] = &DAT_03c886bc;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xf1] = &DAT_cbf29ce484222645;
  param_1[0xf2] = &DAT_03c886bc;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf5] = &DAT_cbf29ce484222645;
  param_1[0xf6] = &DAT_03c886bc;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf9] = &DAT_cbf29ce484222645;
  param_1[0xfa] = &DAT_03c886bc;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfd] = &DAT_cbf29ce484222645;
  param_1[0xfe] = &DAT_03c886bc;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  param_1[0x11] = &DAT_cbf29ce484222645;
  param_1[0x12] = &DAT_03c886bc;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = &DAT_cbf29ce484222645;
  param_1[0x1a] = &DAT_03c886bc;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = &DAT_cbf29ce484222645;
  param_1[0x22] = &DAT_03c886bc;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x29] = &DAT_cbf29ce484222645;
  param_1[0x2a] = &DAT_03c886bc;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = &DAT_cbf29ce484222645;
  param_1[0x32] = &DAT_03c886bc;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = &DAT_cbf29ce484222645;
  param_1[0x3a] = &DAT_03c886bc;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}


