/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b2a44; name: FUN_007b2a44
 */


void FUN_007b2a44(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(short *)(param_1 + 0x114e) != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_007967e8(*(long *)(*(long *)(param_1 + 0x88) + uVar5 * 8) + 0x10,param_1 + 0xb8);
      if ((uVar3 & 1) != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x88) + uVar5 * 8);
        *(undefined2 *)(lVar6 + 8) = 0xff00;
        *(undefined1 *)(lVar6 + 10) = 0;
        FUN_007965fc(lVar6 + 0x10);
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(param_1 + 0x114e));
  }
  lVar6 = *(long *)(param_1 + 0x120);
  uVar5 = FUN_00796784(param_1 + 0xb8);
  if (((uVar5 & 1) != 0) && (*(short *)(lVar6 + 0x38) != 0)) {
    lVar8 = 0;
    lVar7 = 0;
    uVar5 = 0;
    do {
      uVar3 = FUN_007967e8(param_1 + 0xb8,*(long *)(lVar6 + 0x30) + lVar8);
      if ((uVar3 & 1) != 0) {
        if ((~(uint)uVar5 & 0xffff) == 0) {
          return;
        }
        iVar1 = *(int *)(lVar6 + (lVar7 >> 0x2a) + 0x108);
        if (*(int *)(param_1 + 0x1260) == iVar1) {
          lVar6 = 0;
          puVar4 = (undefined4 *)(param_1 + 0x1260);
        }
        else if (*(int *)(param_1 + 0x126c) == iVar1) {
          puVar4 = (undefined4 *)(param_1 + 0x126c);
          lVar6 = 1;
        }
        else if (*(int *)(param_1 + 0x1278) == iVar1) {
          puVar4 = (undefined4 *)(param_1 + 0x1278);
          lVar6 = 2;
        }
        else if (*(int *)(param_1 + 0x1284) == iVar1) {
          puVar4 = (undefined4 *)(param_1 + 0x1284);
          lVar6 = 3;
        }
        else if (*(int *)(param_1 + 0x1290) == iVar1) {
          puVar4 = (undefined4 *)(param_1 + 0x1290);
          lVar6 = 4;
        }
        else if (*(int *)(param_1 + 0x129c) == iVar1) {
          puVar4 = (undefined4 *)(param_1 + 0x129c);
          lVar6 = 5;
        }
        else if (*(int *)(param_1 + 0x12a8) == iVar1) {
          puVar4 = (undefined4 *)(param_1 + 0x12a8);
          lVar6 = 6;
        }
        else {
          if (*(int *)(param_1 + 0x12b4) != iVar1) {
            return;
          }
          puVar4 = (undefined4 *)(param_1 + 0x12b4);
          lVar6 = 7;
        }
        uVar2 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
        param_1 = param_1 + lVar6 * 0xc;
        *puVar4 = uVar2;
        *(undefined2 *)(param_1 + 0x1268) = 0;
        *(undefined4 *)(param_1 + 0x1264) = 0;
        return;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x1000000000000;
      lVar8 = lVar8 + 0x20;
    } while (uVar5 < *(ushort *)(lVar6 + 0x38));
  }
  return;
}


