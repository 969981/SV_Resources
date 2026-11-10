/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294ec30; name: FUN_0294ec30
 */


void FUN_0294ec30(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  undefined8 uVar12;
  uint local_68;
  uint local_64;
  
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar6 = (**(code **)(*param_3 + 0x98))(param_3);
  lVar8 = FUN_0129b478(uVar12,4,uVar5);
  lVar9 = FUN_0129b478(uVar12,4,uVar6);
  if (lVar8 != 0) {
    FUN_014608b0(param_1,lVar8);
  }
  if (lVar9 != 0) {
    FUN_014608b0(param_1,lVar9);
  }
  sVar4 = (**(code **)(*param_2 + 0xf0))(param_2);
  uVar10 = 1;
  psVar11 = &DAT_045f6a70;
  do {
    if (psVar11[-8] == sVar4) {
      uVar10 = uVar10 - 1;
LAB_0294ed28:
      lVar8 = (**(code **)((uVar10 & 0xffffffff) * 0x10 + 0x45f6a68))(&local_68);
      if (lVar8 != 0) {
        uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
        uVar7 = (**(code **)(*param_2 + 0xe0))(param_2);
        uVar3 = local_68;
        local_68 = local_68 & 0xffff;
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
        uVar5 = *(undefined4 *)(param_1 + 0x80);
        lVar9 = FUN_0129baac(uVar12,0xffffffff);
        if (lVar9 != 0) {
          uVar2 = uVar3 >> 0x10;
          uVar1 = 0x2000000;
          if (uVar2 != 0) {
            uVar1 = ~uVar2 * 0x1000000 + 0x9000000;
          }
          *(undefined4 *)(lVar9 + 0x12) = 0xee00ee;
          memset((void *)(lVar9 + 0x18),0,0x58);
          *(undefined1 *)(lVar9 + 0x28) = 4;
          *(uint *)(lVar9 + 0x2c) = uVar1 | uVar7 & 0xffff;
          *(long *)(lVar9 + 0x20) = lVar8;
          *(char *)(lVar9 + 0x3e) = (char)uVar3;
          *(short *)(lVar9 + 0x30) = sVar4;
          *(undefined4 *)(lVar9 + 0x34) = uVar6;
          *(undefined4 *)(lVar9 + 0x38) = uVar6;
          *(short *)(lVar9 + 0x3c) = (short)uVar5;
          *(undefined1 *)(lVar9 + 0x44) = 1;
          FUN_0129b6cc(uVar12,lVar9);
        }
      }
      goto LAB_0294ee24;
    }
    if (*psVar11 == sVar4) goto LAB_0294ed28;
    uVar10 = uVar10 + 2;
    psVar11 = psVar11 + 0x10;
  } while (uVar10 != 0x131);
  local_68 = 0;
LAB_0294ee24:
  sVar4 = (**(code **)(*param_3 + 0xf0))(param_3);
  uVar10 = 1;
  psVar11 = &DAT_045f6a70;
  while (psVar11[-8] != sVar4) {
    if (*psVar11 == sVar4) goto LAB_0294ee78;
    uVar10 = uVar10 + 2;
    psVar11 = psVar11 + 0x10;
    if (uVar10 == 0x131) {
      return;
    }
  }
  uVar10 = uVar10 - 1;
LAB_0294ee78:
  lVar8 = (**(code **)((uVar10 & 0xffffffff) * 0x10 + 0x45f6a68))(&local_64);
  if (lVar8 == 0) {
    return;
  }
  uVar6 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar7 = (**(code **)(*param_3 + 0xe0))(param_3);
  uVar3 = local_64;
  local_64 = local_64 & 0xffff;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
  uVar5 = *(undefined4 *)(param_1 + 0x80);
  lVar9 = FUN_0129baac(uVar12,0xffffffff);
  if (lVar9 == 0) {
    return;
  }
  uVar2 = uVar3 >> 0x10;
  uVar1 = 0x2000000;
  if (uVar2 != 0) {
    uVar1 = ~uVar2 * 0x1000000 + 0x9000000;
  }
  *(undefined4 *)(lVar9 + 0x12) = 0xee00ee;
  memset((void *)(lVar9 + 0x18),0,0x58);
  *(undefined1 *)(lVar9 + 0x28) = 4;
  *(uint *)(lVar9 + 0x2c) = uVar1 | uVar7 & 0xffff;
  *(long *)(lVar9 + 0x20) = lVar8;
  *(char *)(lVar9 + 0x3e) = (char)uVar3;
  *(short *)(lVar9 + 0x30) = sVar4;
  *(undefined4 *)(lVar9 + 0x34) = uVar6;
  *(undefined4 *)(lVar9 + 0x38) = uVar6;
  *(short *)(lVar9 + 0x3c) = (short)uVar5;
  *(undefined1 *)(lVar9 + 0x44) = 1;
  FUN_0129b6cc(uVar12,lVar9);
  return;
}


