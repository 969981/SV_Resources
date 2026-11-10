/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00100580; name: FUN_00100580
 */


undefined8 FUN_00100580(long param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_290 [576];
  
  FUN_00120280(auStack_290,0x20);
  if (*(long *)(param_1 + 0x6a8) != 0) {
    return 0;
  }
  iVar4 = FUN_0010c810(*(undefined4 *)(param_1 + 0x118));
  if (iVar4 == 0) {
    uVar6 = param_2[1];
    param_3 = 0xfffffff0;
    iVar4 = 0xf;
  }
  else {
    if (param_3 < 0x41) {
      param_3 = 0x40;
    }
    iVar4 = param_3 - 1;
    param_3 = -param_3;
    uVar6 = param_2[1] + iVar4 & param_3;
  }
  if (*param_2 == 3) {
    *param_2 = 2;
LAB_00100624:
    lVar7 = 0;
    bVar5 = false;
    param_3 = param_2[3] + iVar4 & param_3;
    uVar1 = param_2[8];
    puVar2 = (uint *)(param_2 + 0xd);
    while( true ) {
      if (uVar1 != 0) {
        FUN_001202a0(auStack_290,puVar2 + -7,param_2[2] * uVar6);
        bVar5 = true;
        puVar2[-4] = uVar6;
      }
      if (puVar2[-1] != 0) {
        FUN_001202a0(auStack_290,puVar2 + -3,param_2[4] * param_3);
        bVar5 = true;
        *puVar2 = param_3;
      }
      if (puVar2[3] != 0) {
        FUN_001202a0(auStack_290,puVar2 + 1,param_2[4] * param_3);
        bVar5 = true;
        puVar2[4] = param_3;
      }
      if (puVar2[7] != 0) {
        FUN_001202a0(auStack_290,puVar2 + 5,param_2[2] * uVar6);
        bVar5 = true;
        puVar2[8] = uVar6;
      }
      if (puVar2[0xb] != 0) {
        FUN_001202a0(auStack_290,puVar2 + 9,param_2[2] * uVar6);
        bVar5 = true;
        puVar2[0xc] = uVar6;
      }
      lVar7 = lVar7 + 1;
      if (*param_2 <= lVar7) break;
      uVar1 = puVar2[0xf];
      puVar2 = puVar2 + 0x14;
    }
    if (2 < (uint)lVar7) goto LAB_0010074c;
  }
  else {
    if (0 < *param_2) goto LAB_00100624;
    bVar5 = false;
    lVar7 = 0;
  }
  param_2 = param_2 + lVar7 * 0x14 + 0xe;
  lVar7 = lVar7 + -3;
  do {
    param_2[-4] = 0;
    param_2[-3] = 0;
    bVar3 = lVar7 != -1;
    lVar7 = lVar7 + 1;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[-8] = 0;
    param_2[-7] = 0;
    param_2 = param_2 + 0x14;
  } while (bVar3);
LAB_0010074c:
  if (bVar5) {
    lVar7 = FUN_00120300(auStack_290);
    *(long *)(param_1 + 0xe0) = lVar7 + *(long *)(param_1 + 0xe0) + 0x108;
    lVar7 = FUN_00120310(auStack_290,0x108);
    *(long *)(param_1 + 0x6a8) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
  }
  return 1;
}


