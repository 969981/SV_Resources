/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344fb0; name: FUN_00344fb0
 */


void FUN_00344fb0(undefined4 *param_1,int *param_2)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  char *__s;
  undefined8 *puVar5;
  char *__s_00;
  ulong uVar6;
  ulong local_208;
  size_t local_200;
  void *local_1f8;
  ulong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  long lStack_1d0;
  long local_1c8;
  byte local_1c0;
  undefined7 uStack_1bf;
  int iStack_1b8;
  uint uStack_1b4;
  void *pvStack_1b0;
  undefined4 local_1a8 [2];
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined8 local_157;
  undefined1 local_14f;
  undefined1 auStack_140 [80];
  undefined1 local_f0;
  char local_ef [8];
  undefined2 local_e7;
  undefined4 local_d8;
  long *local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  ulong *local_48;
  
  uStack_68 = *(undefined8 *)(param_2 + 4);
  local_70 = *(undefined8 *)(param_2 + 2);
  uStack_58 = *(undefined8 *)(param_2 + 8);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  pvVar1 = (void *)FUN_00366f90(&local_70);
  local_1c0 = 0x16;
  uStack_1b4 = uStack_1b4 & 0xffffff00;
  uStack_1bf = s_description_03c32b3a._0_7_;
  iStack_1b8 = CONCAT31(0x6e6f69,s_description_03c32b3a[7]);
                    /* try { // try from 00345014 to 0034501f has its CatchHandler @ 003454c4 */
  FUN_002f0838(local_1a8,pvVar1,0);
  if (2 < *param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003453b0 to 003453b3 has its CatchHandler @ 003453d4 */
    abort();
  }
  local_158 = 0x10;
  local_157 = 0x7974697265766573;
  local_14f = 0;
                    /* try { // try from 00345064 to 0034506b has its CatchHandler @ 00345480 */
  FUN_002f0544(auStack_140,(&PTR_s_CT_INFO_04495e60)[(int)(*param_2 - 1U)],0);
                    /* try { // try from 00345070 to 00345077 has its CatchHandler @ 00345474 */
  FUN_0038cd10(&local_1d8,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc));
  local_c0 = local_1c8;
  lStack_c8 = lStack_1d0;
  local_d0 = local_1d8;
  local_f0 = 0x12;
  local_e7 = 0x70;
  local_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  local_1c8 = 0;
  local_ef[0] = s_timestamp_03c32b46[0];
  local_ef[1] = s_timestamp_03c32b46[1];
  local_ef[2] = s_timestamp_03c32b46[2];
  local_ef[3] = s_timestamp_03c32b46[3];
  local_ef[4] = s_timestamp_03c32b46[4];
  local_ef[5] = s_timestamp_03c32b46[5];
  local_ef[6] = s_timestamp_03c32b46[6];
  local_ef[7] = s_timestamp_03c32b46[7];
  local_d8 = 4;
  puStack_b8 = &local_b0;
  local_90 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
                    /* try { // try from 003450cc to 003450db has its CatchHandler @ 00345448 */
  FUN_003454f0(&local_88,&local_1c0,3);
  FUN_00287f48(&local_f0);
  FUN_00287f48(&local_158);
  FUN_00287f48(&local_1c0);
  if (((ulong)local_1d8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1c8);
  }
                    /* try { // try from 0034510c to 00345113 has its CatchHandler @ 00345434 */
  free(pvVar1);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) goto LAB_00345330;
  if ((*(int *)(lVar3 + 0x10) == 0) || (*(int *)(lVar3 + 0x10) == 1)) {
    __s_00 = "channelId";
    __s = "channelRef";
  }
  else {
    __s_00 = "subchannelId";
    __s = "subchannelRef";
  }
                    /* try { // try from 00345154 to 0034515b has its CatchHandler @ 00345430 */
  FUN_002f09c0(&local_1f0,*(undefined8 *)(lVar3 + 0x18));
  sVar2 = strlen(__s_00);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 003453b4 to 003453bb has its CatchHandler @ 003453cc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_1c0 = (byte)((int)sVar2 << 1);
    pvVar1 = (void *)((ulong)&local_1c0 | 1);
    if (sVar2 != 0) goto LAB_003451b8;
  }
  else {
    uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar1 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_1c0 = (byte)uVar6 | 1;
    uStack_1bf = (undefined7)(uVar6 >> 8);
    uStack_1b4 = (uint)(sVar2 >> 0x20);
    iStack_1b8 = (int)sVar2;
    pvStack_1b0 = pvVar1;
LAB_003451b8:
    memcpy(pvVar1,__s_00,sVar2);
  }
  local_190 = local_1e0;
  uStack_198 = uStack_1e8;
  local_1a0 = local_1f0;
  *(undefined1 *)((long)pvVar1 + sVar2) = 0;
  local_1a8[0] = 4;
  puStack_188 = &local_180;
  local_1e0 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_170 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_168 = 0;
  uStack_160 = 0;
                    /* try { // try from 00345200 to 0034520f has its CatchHandler @ 00345408 */
  FUN_003454f0(&local_1d8,&local_1c0,1);
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 003453bc to 003453c3 has its CatchHandler @ 003453c4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_208 = CONCAT71(local_208._1_7_,(char)((int)sVar2 << 1));
    pvVar1 = (void *)((ulong)&local_208 | 1);
    if (sVar2 != 0) goto LAB_0034526c;
  }
  else {
    uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar1 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_208 = uVar6 | 1;
    local_200 = sVar2;
    local_1f8 = pvVar1;
LAB_0034526c:
    memcpy(pvVar1,__s,sVar2);
  }
  local_48 = &local_208;
  *(undefined1 *)((long)pvVar1 + sVar2) = 0;
                    /* try { // try from 00345288 to 003452a3 has its CatchHandler @ 003453dc */
  lVar3 = FUN_00289114(&local_88,&local_208,&DAT_03cd7566,&local_48,auStack_50);
  puVar5 = (undefined8 *)(lVar3 + 0x60);
  *(undefined4 *)(lVar3 + 0x38) = 5;
  FUN_0025cef0((undefined8 *)(lVar3 + 0x58),*puVar5);
  *(long **)(lVar3 + 0x58) = local_1d8;
  *(long *)(lVar3 + 0x60) = lStack_1d0;
  *(long *)(lVar3 + 0x68) = local_1c8;
  if (local_1c8 == 0) {
    *(undefined8 *)(lVar3 + 0x58) = puVar5;
  }
  else {
    *(undefined8 **)(lStack_1d0 + 0x10) = puVar5;
    local_1d8 = &lStack_1d0;
    lStack_1d0 = 0;
  }
  local_1c8 = 0;
  if ((local_208 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1f8);
  }
  FUN_0025cef0(&local_1d8,lStack_1d0);
  FUN_00287f48(&local_1c0);
  if ((local_1f0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1e0);
  }
LAB_00345330:
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = local_88;
  plVar4 = (long *)(param_1 + 10);
  *plVar4 = local_80;
  *(long *)(param_1 + 0xc) = local_78;
  if (local_78 == 0) {
    *(long **)(param_1 + 8) = plVar4;
  }
  else {
    *(long **)(local_80 + 0x10) = plVar4;
    local_88 = &local_80;
    local_80 = 0;
    local_78 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_0025cef0(&local_88,local_80);
  return;
}


