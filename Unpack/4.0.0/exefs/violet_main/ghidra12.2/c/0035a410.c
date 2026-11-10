/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035a410; name: FUN_0035a410
 */


void FUN_0035a410(long *param_1,undefined2 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  uint16_t uVar6;
  int *piVar7;
  long lVar8;
  size_t sVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  uint uVar12;
  ulong local_148;
  undefined *local_140;
  ulong local_138;
  char acStack_130 [48];
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  char *local_70;
  undefined *puStack_68;
  ulong local_60;
  undefined *puStack_58;
  
  piVar7 = __errno_location();
  iVar3 = *piVar7;
  if ((param_3 & 1) == 0) {
    cVar4 = *(char *)((long)param_2 + 1);
LAB_0035a478:
    pbVar11 = (byte *)((long)param_2 + 1);
    if (cVar4 == '\x1c') {
LAB_0035a4a8:
      pbVar11 = (byte *)((long)param_2 + 1);
      puVar10 = param_2 + 4;
      uVar6 = ntohs(param_2[1]);
      uVar12 = *(uint *)(param_2 + 0xc);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (puVar10 != (undefined2 *)0x0) goto LAB_0035a52c;
    }
    else {
      if (cVar4 == '\x02') goto LAB_0035a50c;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
LAB_0035a5e0:
    local_148 = (ulong)*pbVar11;
    local_140 = PTR_FUN_047ccb10;
                    /* try { // try from 0035a5f0 to 0035a60b has its CatchHandler @ 0035a680 */
    FUN_00391b20(&local_70,"(sockaddr family=%d)",0x14,&local_148,1);
  }
  else {
    if (&local_100 == param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    cVar4 = *(char *)((long)param_2 + 1);
    if (cVar4 != '\x1c') goto LAB_0035a478;
    if (*(long *)(param_2 + 4) != 0 || *(int *)(param_2 + 8) != -0x10000) goto LAB_0035a4a8;
    pbVar11 = (byte *)((ulong)&local_100 | 1);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    puVar1 = (undefined4 *)(param_2 + 10);
    puVar10 = param_2 + 1;
    param_2 = &local_100;
    _local_100 = CONCAT44(*puVar1,CONCAT22(*puVar10,0x200));
    local_80 = 0x10;
LAB_0035a50c:
    puVar10 = param_2 + 2;
    uVar6 = ntohs(param_2[1]);
    uVar12 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (puVar10 == (undefined2 *)0x0) goto LAB_0035a5e0;
LAB_0035a52c:
                    /* try { // try from 0035a530 to 0035a53f has its CatchHandler @ 0035a684 */
    lVar8 = FUN_0035b590(*pbVar11,puVar10,acStack_130,0x2e);
    if (lVar8 == 0) goto LAB_0035a5e0;
    if (uVar12 != 0) {
      local_70 = acStack_130;
      puStack_68 = PTR_LAB_047cc7b8;
      local_60 = (ulong)uVar12;
      puStack_58 = PTR_FUN_047cc7b0;
                    /* try { // try from 0035a56c to 0035a58b has its CatchHandler @ 0035a67c */
      FUN_00391b20(&local_148,"%s%%25%u",8,&local_70,2);
      puVar2 = (undefined *)(local_148 >> 1 & 0x7f);
      uVar5 = (ulong)&local_148 | 1;
      if ((local_148 & 1) != 0) {
        puVar2 = local_140;
        uVar5 = local_138;
      }
                    /* try { // try from 0035a5a8 to 0035a5b3 has its CatchHandler @ 0035a668 */
      FUN_0038edc0(&local_70,uVar5,puVar2,uVar6);
      param_1[2] = local_60;
      param_1[1] = (long)puStack_68;
      *param_1 = (long)local_70;
      if ((local_148 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_138);
      }
      goto LAB_0035a61c;
    }
    sVar9 = strlen(acStack_130);
                    /* try { // try from 0035a64c to 0035a65b has its CatchHandler @ 0035a664 */
    FUN_0038edc0(&local_70,acStack_130,sVar9,uVar6);
  }
  param_1[2] = local_60;
  param_1[1] = (long)puStack_68;
  *param_1 = (long)local_70;
LAB_0035a61c:
                    /* try { // try from 0035a61c to 0035a61f has its CatchHandler @ 0035a684 */
  piVar7 = __errno_location();
  *piVar7 = iVar3;
  return;
}


