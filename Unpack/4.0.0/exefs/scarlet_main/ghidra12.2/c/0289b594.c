/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289b594; name: FUN_0289b594
 */


void FUN_0289b594(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *param_3;
  lVar7 = param_3[2];
  lVar5 = lVar7 + 1;
  bVar1 = *(byte *)(lVar4 + lVar7);
  uVar6 = (ulong)bVar1;
  param_3[2] = lVar5;
  if (uVar6 < 0x84) {
    switch(bVar1) {
    case 0x80:
      uVar6 = (ulong)*(byte *)(lVar4 + lVar5);
      lVar5 = lVar7 + 2;
      break;
    case 0x81:
      uVar6 = (ulong)*(ushort *)(lVar4 + lVar5);
      lVar5 = lVar7 + 3;
      break;
    case 0x82:
      uVar6 = (ulong)*(uint *)(lVar4 + lVar5);
      lVar5 = lVar7 + 5;
      break;
    case 0x83:
      uVar6 = *(ulong *)(lVar4 + lVar5);
      lVar5 = lVar7 + 9;
      break;
    default:
      goto switchD_0289b5f0_default;
    }
    param_3[2] = lVar5;
switchD_0289b5f0_default:
    if (uVar6 != 1) {
      uVar3 = 5;
      goto LAB_0289b608;
    }
    cVar2 = *(char *)(lVar4 + lVar5);
    param_3[2] = lVar5 + 1;
    if (cVar2 == -0x47) {
      FUN_01971e7c();
      return;
    }
  }
  uVar3 = 1;
LAB_0289b608:
  *param_1 = uVar3;
  return;
}


