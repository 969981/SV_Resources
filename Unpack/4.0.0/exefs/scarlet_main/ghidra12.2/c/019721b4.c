/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019721b4; name: FUN_019721b4
 */


void FUN_019721b4(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = *param_3;
  lVar7 = param_3[2];
  lVar4 = lVar7 + 1;
  bVar1 = *(byte *)(lVar2 + lVar7);
  uVar6 = (ulong)bVar1;
  param_3[2] = lVar4;
  if (0x83 < uVar6) {
    uVar5 = 1;
    goto LAB_01972208;
  }
  switch(bVar1) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar2 + lVar4);
    lVar4 = lVar7 + 2;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar2 + lVar4);
    lVar4 = lVar7 + 3;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar2 + lVar4);
    lVar4 = lVar7 + 5;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar2 + lVar4);
    lVar4 = lVar7 + 9;
    break;
  default:
    goto switchD_01972224_default;
  }
  param_3[2] = lVar4;
switchD_01972224_default:
  if (uVar6 == 9) {
    uVar3 = *(undefined8 *)(lVar2 + lVar4);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)((undefined8 *)(lVar2 + lVar4) + 1);
    *param_2 = uVar3;
    uVar5 = 0;
    param_3[2] = param_3[2] + 9;
  }
  else {
    uVar5 = 4;
  }
LAB_01972208:
  *param_1 = uVar5;
  return;
}


