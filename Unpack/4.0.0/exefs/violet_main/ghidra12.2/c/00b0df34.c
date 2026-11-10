/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0df34; name: FUN_00b0df34
 */


void FUN_00b0df34(undefined2 *param_1)

{
  long lVar1;
  int iVar2;
  undefined2 local_170;
  undefined8 local_16e;
  undefined4 local_166;
  undefined2 local_162;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined2 local_148;
  undefined5 uStack_146;
  undefined3 local_141;
  undefined5 uStack_13e;
  undefined1 local_139;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined5 uStack_12a;
  undefined3 local_125;
  undefined5 uStack_122;
  undefined8 local_11d;
  undefined2 local_115;
  undefined1 local_113;
  undefined2 local_112;
  undefined4 local_110;
  undefined2 local_10c;
  undefined5 uStack_10a;
  undefined3 local_105;
  undefined5 uStack_102;
  undefined6 uStack_fd;
  undefined2 local_f7;
  undefined6 uStack_f5;
  undefined4 uStack_ef;
  undefined3 uStack_eb;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined2 local_d4;
  undefined5 uStack_d2;
  undefined3 local_cd;
  undefined5 uStack_ca;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 auStack_be [78];
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined1 local_69;
  undefined2 local_64;
  undefined1 local_62;
  
  if ((DAT_04839420 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839420);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839420);
    }
  }
  lVar1 = DAT_04839410;
  DAT_04839408 = DAT_04839410;
  if (DAT_04839410 != 0) {
    local_170 = *param_1;
    local_162 = param_1[7];
    local_158 = *(undefined8 *)(param_1 + 0xc);
    local_160 = *(undefined4 *)(param_1 + 8);
    uStack_15c = *(undefined4 *)(param_1 + 10);
    local_148 = param_1[0x14];
    local_150 = *(undefined4 *)(param_1 + 0x10);
    uStack_14c = *(undefined4 *)(param_1 + 0x12);
    local_139 = *(undefined1 *)((long)param_1 + 0x37);
    local_138 = *(undefined8 *)(param_1 + 0x1c);
    local_130 = *(undefined4 *)(param_1 + 0x20);
    local_12c = param_1[0x22];
    local_113 = *(undefined1 *)((long)param_1 + 0x5d);
    local_112 = param_1[0x2f];
    local_110 = *(undefined4 *)(param_1 + 0x30);
    local_10c = param_1[0x32];
    local_e8 = *(undefined8 *)(param_1 + 0x44);
    local_e0 = *(undefined1 *)(param_1 + 0x48);
    local_dc = *(undefined4 *)(param_1 + 0x4a);
    uStack_d8 = *(undefined4 *)(param_1 + 0x4c);
    local_d4 = param_1[0x4e];
    local_c5 = *(undefined1 *)((long)param_1 + 0xab);
    local_c4 = *(undefined4 *)(param_1 + 0x56);
    local_c0 = param_1[0x58];
    local_16e = *(undefined8 *)(param_1 + 1);
    local_166 = *(undefined4 *)(param_1 + 5);
    uStack_13e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x2f) >> 0x18);
    uStack_146 = (undefined5)*(undefined8 *)(param_1 + 0x15);
    local_141 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x28);
    uStack_122 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x4b) >> 0x18);
    uStack_12a = (undefined5)*(undefined8 *)(param_1 + 0x23);
    local_125 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x23) >> 0x28);
    local_11d = *(undefined8 *)((long)param_1 + 0x53);
    local_115 = *(undefined2 *)((long)param_1 + 0x5b);
    uStack_102 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x6b) >> 0x18);
    uStack_10a = (undefined5)*(undefined8 *)(param_1 + 0x33);
    local_105 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x33) >> 0x28);
    uStack_f5 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x79) >> 0x10);
    uStack_fd = (undefined6)*(undefined8 *)((long)param_1 + 0x73);
    local_f7 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x73) >> 0x30);
    uStack_ef = *(undefined4 *)((long)param_1 + 0x81);
    uStack_eb = (undefined3)((uint)*(undefined4 *)(param_1 + 0x42) >> 8);
    local_df = *(undefined2 *)((long)param_1 + 0x91);
    local_dd = *(undefined1 *)((long)param_1 + 0x93);
    uStack_ca = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xa3) >> 0x18);
    uStack_d2 = (undefined5)*(undefined8 *)(param_1 + 0x4f);
    local_cd = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x4f) >> 0x28);
    memcpy(auStack_be,param_1 + 0x59,0x4a);
    local_70 = 0xffffffff;
    local_6c = 0;
    local_6b = local_64;
    local_69 = local_62;
    FUN_00b0e164(lVar1,&local_170);
  }
  return;
}


