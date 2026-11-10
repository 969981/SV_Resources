/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0368; name: FUN_021f0368
 */


void FUN_021f0368(long param_1,undefined8 *param_2,code *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  FUN_00e974d8(*param_2);
  uVar2 = FUN_00cf5044();
  lVar7 = 0;
  bVar1 = true;
  switch(uVar2) {
  case 0x14:
    lVar7 = 1;
    bVar1 = true;
    break;
  case 0x15:
    bVar1 = true;
    lVar7 = 2;
    break;
  case 0x16:
    bVar1 = true;
    lVar7 = 3;
    break;
  case 0x17:
    bVar1 = true;
    lVar7 = 4;
    break;
  case 0x18:
    bVar1 = true;
    lVar7 = 5;
    break;
  case 0x19:
    break;
  default:
    lVar7 = 0;
    bVar1 = false;
  }
  FUN_00e974d8(param_2[1]);
  sVar3 = FUN_00cf5044();
  if ((ushort)(sVar3 - 0x14U) < 6) {
    lVar6 = *(long *)(&DAT_03d62c38 + (long)(short)(sVar3 - 0x14U) * 8);
    if ((!bVar1) || (iVar4 = (*param_3)(2), iVar4 != 0)) {
      puVar5 = (undefined1 *)(param_1 + lVar6 + 0x73);
      goto LAB_021f044c;
    }
  }
  else if (!bVar1) {
    return;
  }
  puVar5 = (undefined1 *)(param_1 + lVar7 + 0x6d);
LAB_021f044c:
  *puVar5 = 1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  return;
}


