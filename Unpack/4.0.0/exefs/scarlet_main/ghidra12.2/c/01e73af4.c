/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e73af4; name: FUN_01e73af4
 */


void FUN_01e73af4(ulong *param_1,long *param_2,char *param_3)

{
  int iVar1;
  byte bVar2;
  size_t __n;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60 [4];
  ulong *local_38;
  
  lVar9 = *param_2;
  if (lVar9 == 0) goto LAB_01e73c04;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 01e73cc0 to 01e73cc7 has its CatchHandler @ 01e73cd4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    pvVar7 = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_01e73b74;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar7 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_78 = uVar6 | 1;
    local_70 = __n;
    local_68 = pvVar7;
LAB_01e73b74:
    memcpy(pvVar7,param_3,__n);
  }
  *(undefined1 *)((long)pvVar7 + __n) = 0;
  local_38 = &local_78;
                    /* try { // try from 01e73b94 to 01e73ba3 has its CatchHandler @ 01e73cdc */
  FUN_0025998c(local_60,*(undefined8 *)(lVar9 + 0x20),&local_38,0);
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if (local_60[0] == 0) {
LAB_01e73c04:
    uVar6 = FUN_01cf7e20();
    param_1[2] = 0;
    param_1[3] = uVar6;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar9 = *(long *)(local_60[0] + 8);
  iVar1 = *(int *)(lVar9 + 0x34);
  if (iVar1 == 8) {
    pbVar5 = *(byte **)(lVar9 + 0x28);
    if ((*pbVar5 & 1) != 0) goto LAB_01e73be0;
LAB_01e73c24:
    pbVar5 = pbVar5 + 1;
    if (iVar1 == 8) goto LAB_01e73c30;
LAB_01e73bec:
    bVar2 = *PTR_DAT_047cba80;
    pbVar4 = PTR_DAT_047cba80;
    if ((bVar2 & 1) != 0) goto LAB_01e73bfc;
LAB_01e73c3c:
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    pbVar5 = PTR_DAT_047cba80;
    if ((*PTR_DAT_047cba80 & 1) == 0) goto LAB_01e73c24;
LAB_01e73be0:
    pbVar5 = *(byte **)(pbVar5 + 0x10);
    if (iVar1 != 8) goto LAB_01e73bec;
LAB_01e73c30:
    pbVar4 = *(byte **)(lVar9 + 0x28);
    bVar2 = *pbVar4;
    if ((bVar2 & 1) == 0) goto LAB_01e73c3c;
LAB_01e73bfc:
    uVar6 = *(ulong *)(pbVar4 + 8);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar3;
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 01e73cc8 to 01e73ccf has its CatchHandler @ 01e73cd0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    pvVar7 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_01e73ca4;
  }
  else {
    uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar8,1);
    param_1[1] = uVar6;
    param_1[2] = (ulong)pvVar7;
    *param_1 = uVar8 | 1;
  }
  memcpy(pvVar7,pbVar5,uVar6);
LAB_01e73ca4:
  *(undefined1 *)((long)pvVar7 + uVar6) = 0;
  return;
}


