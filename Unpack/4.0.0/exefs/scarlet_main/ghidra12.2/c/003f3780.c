/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f3780; name: FUN_003f3780
 */


ulong FUN_003f3780(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  ulong uVar9;
  
  if ((((param_3 == 0) && (param_2 == 0)) && (param_4 == 0)) && (param_5 == 0)) {
    if (*(int *)(param_1 + 0x11) == -1) {
      return 0;
    }
    uVar4 = FUN_0043a990(*param_1,0,0,0,&DAT_03cde07e);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    iVar2 = FUN_0043b650(*param_1);
    __n = (size_t)iVar2;
  }
  else {
    if (param_4 == 0) {
      if (param_2 == 0) {
        return 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
      iVar2 = FUN_0043a990(*param_1,param_4,param_5,0,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return (ulong)(iVar2 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    lVar5 = FUN_0043b170(*param_1);
    uVar4 = 0;
    if (((lVar5 == 0) || (uVar4 = FUN_0043ad00(*param_1,param_3 & 0xffffffff), (int)uVar4 == 0)) ||
       (uVar4 = FUN_0043a990(*param_1,0,0,param_2,&DAT_03cde07e), (int)uVar4 == 0)) {
      return uVar4;
    }
    iVar2 = FUN_0043b650(*param_1);
    iVar3 = FUN_0043b660(*param_1,param_1 + 9,&DAT_03cde07e,iVar2);
    if (iVar3 < 1) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 9);
    bVar7 = cVar1 << 1;
    if (iVar2 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)(iVar2 - 1);
      pbVar8 = (byte *)((long)param_1 + 0x49);
      uVar9 = uVar4;
      do {
        pbVar8[-0x41] = bVar7 | *pbVar8 >> 7;
        bVar7 = *pbVar8 << 1;
        pbVar8 = pbVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    bVar6 = 0x87;
    if (iVar2 != 0x10) {
      bVar6 = 0x1b;
    }
    *(byte *)((long)param_1 + uVar4 + 8) = bVar7 ^ bVar6 & cVar1 >> 7;
    cVar1 = *(char *)(param_1 + 1);
    bVar7 = cVar1 << 1;
    if (iVar2 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)(iVar2 - 1);
      pbVar8 = (byte *)(param_1 + 5);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 - 1;
        *pbVar8 = bVar7 | pbVar8[-0x1f] >> 7;
        bVar7 = pbVar8[-0x1f] << 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 != 0);
    }
    __n = (size_t)iVar2;
    *(byte *)((long)param_1 + uVar4 + 0x28) = bVar7 ^ bVar6 & cVar1 >> 7;
    FUN_00453300(param_1 + 9,__n);
    uVar4 = FUN_0043a990(*param_1,0,0,0,&DAT_03cde07e);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  memset(param_1 + 9,0,__n);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 1;
}


