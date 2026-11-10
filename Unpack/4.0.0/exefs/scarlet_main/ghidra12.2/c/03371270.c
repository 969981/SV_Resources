/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03371270; name: FUN_03371270
 */


ulong FUN_03371270(long *param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  byte *__s2;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  
  iVar1 = (int)param_1[3];
  uVar4 = ((long)(int)param_1[1] + 1) * 3;
  if (((((uint)((long)iVar1 << 1) < (uint)uVar4 && -2 < (int)param_1[1]) && uVar4 >> 0x20 == 0) &&
      (-1 < iVar1)) && (((long)iVar1 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 2);
  }
  __s2 = (byte *)*param_2;
  if (__s2 == (byte *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*__s2;
    uVar6 = 0x811c9dc5;
    if (*__s2 != 0) {
      pbVar2 = __s2;
      do {
        pbVar2 = pbVar2 + 1;
        uVar6 = (uVar6 ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar2;
      } while (uVar5 != 0);
    }
  }
  uVar5 = *(uint *)(param_1 + 3);
  lVar8 = param_1[2];
  puVar7 = (uint *)(lVar8 + (ulong)(uVar5 & uVar6) * 8);
  puVar3 = puVar7 + 1;
  uVar9 = *puVar3;
  if (-1 < (int)uVar9) {
    do {
      if ((*puVar7 == uVar6) &&
         ((pbVar2 = *(byte **)(*param_1 + (ulong)uVar9 * 0x10), pbVar2 == __s2 ||
          (((__s2 != (byte *)0x0 && (pbVar2 != (byte *)0x0)) &&
           (iVar1 = strcmp((char *)pbVar2,(char *)__s2), iVar1 == 0)))))) {
        uVar4 = (long)puVar7 - lVar8;
        goto LAB_033713a8;
      }
      puVar7 = (uint *)(lVar8 + (((ulong)((long)puVar7 - lVar8) >> 3) + 1 & (long)(int)uVar5) * 8);
      puVar3 = puVar7 + 1;
      uVar9 = *puVar3;
    } while (-1 < (int)uVar9);
  }
  uVar5 = *(uint *)(param_1 + 1);
  *puVar7 = uVar6;
  *puVar3 = uVar5;
  uVar9 = *(uint *)(param_1 + 1);
  uVar4 = (long)puVar7 - param_1[2];
LAB_033713a8:
  return (ulong)uVar9 | (uVar4 >> 3) << 0x20;
}


