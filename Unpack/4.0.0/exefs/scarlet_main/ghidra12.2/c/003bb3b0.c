/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bb3b0; name: FUN_003bb3b0
 */


undefined8 FUN_003bb3b0(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_24;
  
  local_24 = 0x70;
  uVar4 = FUN_003b5740();
  lVar10 = *(long *)(param_1 + 0x660);
  if ((lVar10 == 0) || (lVar11 = *(long *)(param_1 + 0x878), lVar11 == 0)) {
    uVar8 = 0x44;
    uVar9 = 0x3c4;
    uVar7 = 0x50;
  }
  else {
    if (*(code **)(lVar10 + 0x1e0) == (code *)0x0) {
      if (*(code **)(lVar11 + 0x1e0) == (code *)0x0) {
        iVar5 = 3;
        iVar6 = *(int *)(param_1 + 0x38);
      }
      else {
        iVar5 = (**(code **)(lVar11 + 0x1e0))(param_1,&local_24,*(undefined8 *)(lVar11 + 0x1e8));
        iVar6 = *(int *)(param_1 + 0x38);
      }
    }
    else {
      iVar5 = (**(code **)(lVar10 + 0x1e0))(param_1,&local_24,*(undefined8 *)(lVar10 + 0x1e8));
      iVar6 = *(int *)(param_1 + 0x38);
    }
    if ((((iVar6 != 0) && (param_3 != 0)) && (iVar5 == 0)) && (*(int *)(param_1 + 200) == 0)) {
      FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x218),
                   "external/openssl/ssl/statem/extensions.c",0x3da);
      lVar10 = FUN_0045abd0(*(undefined8 *)(param_1 + 0x700),
                            "external/openssl/ssl/statem/extensions.c",0x3db);
      *(long *)(*(long *)(param_1 + 0x5d0) + 0x218) = lVar10;
      if ((lVar10 == 0) && (*(long *)(param_1 + 0x700) != 0)) {
        FUN_003c3950(param_1,0x50,0x22e,0x44,"external/openssl/ssl/statem/extensions.c",0x3de);
      }
    }
    if (((*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0) ||
        (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)) &&
       ((*(long *)(param_1 + 0x660) != *(long *)(param_1 + 0x878) &&
        (*(int *)(param_1 + 0x5a0) == 0)))) {
      piVar1 = (int *)(*(long *)(param_1 + 0x660) + 0x7c);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      piVar1 = (int *)(*(long *)(param_1 + 0x878) + 0x7c);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    switch(iVar5) {
    case 0:
      if ((uVar4 >> 0xe & 1) != 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x740) == 0) {
        return 1;
      }
      uVar4 = FUN_003b5740(param_1);
      if ((uVar4 >> 0xe & 1) == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x740) = 0;
      if (*(int *)(param_1 + 200) != 0) {
        return 1;
      }
      lVar10 = FUN_003b8ac0(param_1);
      if (lVar10 == 0) {
        uVar7 = 0x50;
        uVar8 = 0x44;
        uVar9 = 0x407;
      }
      else {
        FUN_00452f80(*(undefined8 *)(lVar10 + 0x220),"external/openssl/ssl/statem/extensions.c",
                     0x3fb);
        *(undefined8 *)(lVar10 + 0x228) = 0;
        *(undefined8 *)(lVar10 + 0x220) = 0;
        *(undefined4 *)(lVar10 + 0x238) = 0;
        *(undefined8 *)(lVar10 + 0x230) = 0;
        iVar6 = FUN_003b8f50(param_1,lVar10);
        if (iVar6 != 0) {
          return 1;
        }
        uVar7 = 0x50;
        uVar8 = 0x44;
        uVar9 = 0x402;
      }
      break;
    case 1:
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
          (iVar6 = **(int **)(param_1 + 8), iVar6 < 0x304)) || (iVar6 == 0x10000)) {
        FUN_003ad170(param_1,1,local_24);
      }
    case 3:
      *(undefined4 *)(param_1 + 0x870) = 0;
    default:
      return 1;
    case 2:
      uVar8 = 0xea;
      uVar9 = 0x40f;
      uVar7 = local_24;
    }
  }
  FUN_003c3950(param_1,uVar7,0x22e,uVar8,"external/openssl/ssl/statem/extensions.c",uVar9);
  return 0;
}


