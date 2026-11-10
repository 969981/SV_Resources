/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00210fd0; name: FUN_00210fd0
 */


void FUN_00210fd0(undefined4 *param_1,uint *param_2)

{
  long *plVar1;
  undefined *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  size_t *psVar8;
  bool bVar9;
  ostream *poVar10;
  char *pcVar11;
  size_t sVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_1e0 [8];
  undefined8 local_1d8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined *local_1a8 [8];
  ulong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long *plStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined *local_138 [17];
  undefined8 local_b0;
  undefined4 local_a8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  ulong local_90;
  long *plStack_88;
  size_t *local_80;
  size_t local_78;
  void *local_70;
  long *plStack_68;
  
  puVar5 = PTR_DAT_047cbcc8;
  uVar4 = *param_2;
  if (0x10 < uVar4) {
LAB_002111bc:
    local_138[0] = PTR_DAT_047cbcd0 + 0x40;
    local_1c0 = (undefined8 *)(PTR_DAT_047cbcd0 + 0x18);
    puVar2 = PTR_DAT_047cbcc8 + 0x40;
    local_1b8 = 0;
    local_1b0 = puVar2;
                    /* try { // try from 002111f0 to 002111fb has its CatchHandler @ 00211438 */
    std::ios_base::init((ios *)local_138);
    local_a8 = 0xffffffff;
    local_1c0 = (undefined8 *)(puVar5 + 0x18);
    local_138[0] = puVar5 + 0x68;
    local_b0 = 0;
    local_1b0 = puVar2;
                    /* try { // try from 0021121c to 00211223 has its CatchHandler @ 00211430 */
    std::streambuf::streambuf((streambuf *)local_1a8);
    puVar2 = PTR_DAT_047cbcd8;
    local_1a8[0] = PTR_DAT_047cbcd8 + 0x10;
    plStack_150 = (long *)FUN_01cf7e20();
    local_158 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_148 = 0;
    local_140 = 0x18;
    uVar15 = (ulong)(byte)((byte)param_2[2] >> 1);
    pcVar11 = (char *)((long)param_2 + 9);
    if (((byte)param_2[2] & 1) != 0) {
      uVar15 = *(ulong *)(param_2 + 4);
      pcVar11 = *(char **)(param_2 + 6);
    }
                    /* try { // try from 00211270 to 002112b7 has its CatchHandler @ 00211440 */
    poVar10 = std::__put_character_sequence<char,std::char_traits<char>>
                        ((ostream *)&local_1b0,pcVar11,uVar15);
    poVar10 = std::__put_character_sequence<char,std::char_traits<char>>
                        (poVar10," (Auth RPC result, original status code: ",0x29);
    pcVar11 = (char *)FUN_0024d990(*param_2);
    sVar12 = strlen(pcVar11);
    poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10,pcVar11,sVar12);
    std::__put_character_sequence<char,std::char_traits<char>>(poVar10,")",1);
                    /* try { // try from 002112b8 to 002112c3 has its CatchHandler @ 0021142c */
    FUN_00213290(&local_a0,(streambuf *)local_1a8);
    uVar7 = local_90;
    bVar6 = local_a0;
    local_78 = 0;
    local_70 = (void *)FUN_01cf7e20();
    plStack_68 = (long *)0x0;
                    /* try { // try from 002112e8 to 002112f7 has its CatchHandler @ 002113f4 */
    local_80 = &local_78;
    FUN_01e76990(auStack_1e0,param_2 + 10,&local_80);
    uVar15 = (ulong)&local_a0 | 1;
    if ((bVar6 & 1) != 0) {
      uVar15 = uVar7;
    }
    FUN_01cfa44c(&local_80,local_78);
    FUN_0020eeac(param_1,0x10,uVar15,auStack_1e0);
    FUN_01cfa44c(auStack_1e0,local_1d8);
    if ((local_a0 & 1) != 0) {
      (**(code **)(*plStack_88 + 0x18))
                (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
    }
    local_1c0 = (undefined8 *)(puVar5 + 0x18);
    local_138[0] = puVar5 + 0x68;
    local_1b0 = puVar5 + 0x40;
    local_1a8[0] = puVar2 + 0x10;
    if ((local_168 & 1) != 0) {
      (**(code **)(*plStack_150 + 0x18))(plStack_150,local_158,local_168 & 0xfffffffffffffffe,1);
    }
    std::streambuf::~streambuf((streambuf *)local_1a8);
    std::iostream::~iostream((iostream *)&local_1c0);
    std::ios::~ios((ios *)local_138);
    return;
  }
  if ((1 << (ulong)(uVar4 & 0x1f) & 0x16004U) == 0) {
    if (uVar4 == 0) {
      *param_1 = 0;
      uVar17 = *(undefined8 *)(param_2 + 4);
      uVar16 = *(undefined8 *)(param_2 + 2);
      uVar18 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 6) = uVar18;
      *(undefined8 *)(param_1 + 4) = uVar17;
      *(undefined8 *)(param_1 + 2) = uVar16;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      if ((char)param_2[10] == '\0') {
        return;
      }
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      uVar16 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar16;
      lVar13 = *(long *)(param_2 + 0x12);
      plVar1 = (long *)(param_1 + 0xe);
      *(long *)(param_1 + 0x12) = lVar13;
      if (lVar13 == 0) {
        *(long **)(param_1 + 0xc) = plVar1;
      }
      else {
        *(long **)(*plVar1 + 0x10) = plVar1;
        *(uint **)(param_2 + 0xc) = param_2 + 0xe;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
      }
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    goto LAB_002111bc;
  }
  plStack_68 = *(long **)(param_2 + 8);
  local_70 = (void *)0x0;
  local_80 = (size_t *)0x0;
  local_78 = 0;
  bVar9 = ((byte)param_2[2] & 1) != 0;
  sVar12 = (ulong)(byte)((byte)param_2[2] >> 1);
  if (bVar9) {
    sVar12 = *(size_t *)(param_2 + 4);
  }
  pvVar3 = (void *)((long)param_2 + 9);
  if (bVar9) {
    pvVar3 = *(void **)(param_2 + 6);
  }
  if (0xffffffffffffffef < sVar12 + 0x12) {
                    /* try { // try from 002113ec to 002113f3 has its CatchHandler @ 002114c0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 + 0x12 < 0x17) {
    local_80 = (size_t *)(ulong)(byte)((int)sVar12 << 1);
    pvVar14 = (void *)((ulong)&local_80 | 1);
    if (sVar12 == 0) goto LAB_002110a8;
  }
  else {
    uVar15 = sVar12 + 0x22 & 0xfffffffffffffff0;
    pvVar14 = (void *)(**(code **)(*plStack_68 + 0x10))(plStack_68,uVar15,1);
    local_80 = (size_t *)(uVar15 | 1);
    local_78 = sVar12;
    local_70 = pvVar14;
  }
  memcpy(pvVar14,pvVar3,sVar12);
LAB_002110a8:
  *(undefined1 *)((long)pvVar14 + sVar12) = 0;
                    /* try { // try from 002110ac to 002110bf has its CatchHandler @ 002114c0 */
  FUN_0020f8d0(&local_80," (Auth RPC result)",0x12);
  pvVar14 = local_70;
  psVar8 = local_80;
  local_1b8 = 0;
  local_1b0 = (undefined *)FUN_01cf7e20();
  local_1a8[0] = (undefined *)0x0;
                    /* try { // try from 002110e4 to 002110f3 has its CatchHandler @ 002114ac */
  local_1c0 = &local_1b8;
  FUN_01e76990(&local_a0,param_2 + 10,&local_1c0);
  pvVar3 = (void *)((ulong)&local_80 | 1);
  if (((ulong)psVar8 & 1) != 0) {
    pvVar3 = pvVar14;
  }
  FUN_01cfa44c(&local_1c0,local_1b8);
  FUN_0020eeac(param_1,uVar4,pvVar3,&local_a0);
  FUN_01cfa44c(&local_a0,local_98);
  if (((ulong)local_80 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,(ulong)local_80 & 0xfffffffffffffffe,1);
  return;
}


