/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec5674; name: FUN_01ec5674
 */


void FUN_01ec5674(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_e0 [35];
  uint local_54;
  long *local_50 [4];
  undefined8 local_30;
  int local_28 [2];
  
  local_30 = param_4;
  FUN_01267a34(local_50,param_2,param_3);
  plVar3 = local_50[0];
  if (local_50[0] == (long *)0x0) goto LAB_01ec5830;
  lVar6 = local_50[0][2];
  bVar1 = *(byte *)(*local_50[0] + lVar6);
  local_50[0][2] = lVar6 + 1;
  if (0x80 < bVar1) goto LAB_01ec5830;
  if (bVar1 == 0x80) {
    bVar1 = *(byte *)(*local_50[0] + lVar6 + 1);
    local_50[0][2] = lVar6 + 2;
  }
  if (bVar1 != 3) {
    if (bVar1 != 2) {
      if (bVar1 == 1) {
        local_54 = 0;
        memset(local_e0,0,0x8c);
        uVar4 = FUN_01ec58a0(plVar3,&local_54);
        if ((((uVar4 & 1) != 0) && (local_50[0] != (long *)0x0)) &&
           (cVar2 = *(char *)(*local_50[0] + local_50[0][2]), local_50[0][2] = local_50[0][2] + 1,
           cVar2 == -0x47)) {
          FUN_01ec58fc(local_28,local_e0);
          if (local_28[0] == 0) {
            FUN_01ec5990(param_1,&local_54,local_e0,&local_30);
          }
        }
      }
      goto LAB_01ec5830;
    }
    local_e0[0] = 0;
    uVar4 = FUN_01ec58a0(local_50[0],local_e0);
    if (((uVar4 & 1) == 0) || (local_50[0] == (long *)0x0)) goto LAB_01ec5830;
    lVar7 = *local_50[0];
    lVar8 = local_50[0][2];
    lVar6 = lVar8 + 1;
    bVar1 = *(byte *)(lVar7 + lVar8);
    uVar5 = (ushort)bVar1;
    local_50[0][2] = lVar6;
    if (0x81 < bVar1) goto LAB_01ec5830;
    if (bVar1 == 0x80) {
      uVar5 = (ushort)*(byte *)(lVar7 + lVar6);
      lVar6 = lVar8 + 2;
LAB_01ec5860:
      local_50[0][2] = lVar6;
    }
    else if (bVar1 == 0x81) {
      uVar5 = *(ushort *)(lVar7 + lVar6);
      lVar6 = lVar8 + 3;
      goto LAB_01ec5860;
    }
    bVar1 = *(byte *)(lVar7 + lVar6);
    local_50[0][2] = lVar6 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(lVar7 + lVar6 + 1);
        local_50[0][2] = lVar6 + 2;
      }
      FUN_01ec5a68(param_1,local_e0,uVar5,bVar1);
    }
    goto LAB_01ec5830;
  }
  local_28[0] = 0;
  local_54 = local_54 & 0xffff0000;
  uVar4 = FUN_01ec58a0(local_50[0],local_28);
  if (((uVar4 & 1) == 0) || (local_50[0] == (long *)0x0)) goto LAB_01ec5830;
  lVar8 = *local_50[0];
  lVar7 = local_50[0][2];
  lVar6 = lVar7 + 1;
  bVar1 = *(byte *)(lVar8 + lVar7);
  uVar5 = (ushort)bVar1;
  local_50[0][2] = lVar6;
  if (0x81 < bVar1) goto LAB_01ec5830;
  if (bVar1 == 0x80) {
    uVar5 = (ushort)*(byte *)(lVar8 + lVar6);
    lVar7 = lVar7 + 2;
LAB_01ec5850:
    local_50[0][2] = lVar7;
  }
  else if (bVar1 == 0x81) {
    uVar5 = *(ushort *)(lVar8 + lVar6);
    lVar7 = lVar7 + 3;
    goto LAB_01ec5850;
  }
  FUN_01e94dc0(local_e0,&local_54);
  if (local_e0[0] == 0) {
    FUN_01ec5b44(param_1,local_28,uVar5,(undefined2)local_54);
  }
LAB_01ec5830:
  FUN_01267b4c(local_50);
  return;
}


