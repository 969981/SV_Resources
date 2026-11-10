/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050d96c; name: FUN_0050d96c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0050d96c(long *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  void *__s1;
  byte *__s2;
  byte local_98 [16];
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong local_40;
  ulong uStack_38;
  ulong local_30;
  
  bVar3 = *(byte *)(param_1 + 6);
  uVar8 = (ulong)(bVar3 >> 1);
  __n = uVar8;
  if ((bVar3 & 1) != 0) {
    __n = param_1[7];
  }
  bVar4 = *param_2;
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n != sVar1) {
LAB_0050da08:
    FUN_004a8ec0(local_98,"Expected \"",param_2);
                    /* try { // try from 0050da1c to 0050da2f has its CatchHandler @ 0050dc14 */
    puVar6 = (ulong *)FUN_0021d540(local_98,"\", found \"",10);
    uStack_78 = puVar6[1];
    local_80 = *puVar6;
    local_70 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = param_1[7];
    lVar2 = param_1[8];
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      lVar2 = (long)param_1 + 0x31;
      uVar8 = (ulong)(*(byte *)(param_1 + 6) >> 1);
    }
                    /* try { // try from 0050da60 to 0050da67 has its CatchHandler @ 0050dbec */
    puVar6 = (ulong *)FUN_0021d540(&local_80,lVar2,uVar8);
    uStack_58 = puVar6[1];
    local_60 = *puVar6;
    local_50 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 0050da80 to 0050da93 has its CatchHandler @ 0050dbc4 */
    puVar6 = (ulong *)FUN_0021d540(&local_60,&DAT_03bfbda2,2);
    uStack_38 = puVar6[1];
    local_40 = *puVar6;
    local_30 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    plVar7 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 0050dac8 to 0050dacf has its CatchHandler @ 0050db7c */
      (**(code **)(*plVar7 + 0x10))
                (plVar7,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_40);
    }
    if ((local_40 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_30);
    }
    if ((local_60 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_50);
    }
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    if ((local_98[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
    return 0;
  }
  __s1 = (void *)param_1[8];
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)((long)param_1 + 0x31);
  }
  __s2 = *(byte **)(param_2 + 0x10);
  if ((bVar4 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pbVar9 = (byte *)((long)param_1 + 0x31);
      do {
        if (*pbVar9 != *__s2) goto LAB_0050da08;
        uVar8 = uVar8 - 1;
        pbVar9 = pbVar9 + 1;
        __s2 = __s2 + 1;
      } while (uVar8 != 0);
    }
  }
  else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_0050da08;
  FUN_004fcda0(param_1 + 5);
  return 1;
}


