/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ccae0; name: FUN_003ccae0
 */


undefined8 FUN_003ccae0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  ulong __n;
  undefined1 auStack_28 [8];
  
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x898) != 4) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
         (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (uVar2 = FUN_003ccd70(param_1), (int)uVar2 == 0)) {
      return uVar2;
    }
  }
  piVar5 = *(int **)(param_1 + 8);
  uVar8 = *(uint *)(*(long *)(piVar5 + 0x30) + 0x60);
  if ((((uVar8 >> 3 & 1) == 0) && (0x303 < *piVar5)) && (*piVar5 != 0x10000)) {
    iVar1 = FUN_003a4580(param_1 + 0x948);
    if (iVar1 != 0) {
      uVar2 = 10;
      uVar3 = 0xb6;
      uVar4 = 0x339;
      goto LAB_003ccc40;
    }
    piVar5 = *(int **)(param_1 + 8);
    uVar8 = *(uint *)(*(long *)(piVar5 + 0x30) + 0x60);
  }
  if ((((uVar8 >> 3 & 1) == 0) && (0x303 < *piVar5)) && (*piVar5 != 0x10000)) {
    lVar6 = *(long *)(param_1 + 0xa8);
  }
  else {
    lVar6 = *(long *)(param_1 + 0xa8);
    if (*(int *)(lVar6 + 0xf0) == 0) {
      uVar2 = 10;
      uVar3 = 0x9a;
      uVar4 = 0x340;
      goto LAB_003ccc40;
    }
  }
  *(undefined4 *)(lVar6 + 0xf0) = 0;
  __n = *(ulong *)(lVar6 + 0x220);
  if (__n == param_2[1]) {
    iVar1 = FUN_003f6d80(*param_2,lVar6 + 0x1a0,__n);
    if (iVar1 == 0) {
      if (__n < 0x41) {
        lVar6 = *(long *)(param_1 + 0xa8);
        if (*(int *)(param_1 + 0x38) == 0) {
          memcpy((void *)(lVar6 + 0x390),(void *)(lVar6 + 0x1a0),__n);
          puVar7 = (ulong *)(*(long *)(param_1 + 0xa8) + 0x3d0);
        }
        else {
          memcpy((void *)(lVar6 + 0x348),(void *)(lVar6 + 0x1a0),__n);
          puVar7 = (ulong *)(*(long *)(param_1 + 0xa8) + 0x388);
        }
        *puVar7 = __n;
        lVar6 = *(long *)(*(int **)(param_1 + 8) + 0x30);
        if ((((*(byte *)(lVar6 + 0x60) >> 3 & 1) != 0) ||
            (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
          return 1;
        }
        if (*(int *)(param_1 + 0x38) == 0) {
          uVar2 = (**(code **)(lVar6 + 0x18))(param_1,param_1 + 0x1bc,param_1 + 0x17c,0,auStack_28);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0x111);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          uVar2 = FUN_003c98a0(param_1);
          iVar1 = (int)uVar2;
        }
        else {
          if (*(int *)(param_1 + 0x898) == 4) {
            return 1;
          }
          uVar2 = (**(code **)(lVar6 + 0x20))(param_1,0x121);
          iVar1 = (int)uVar2;
        }
        if (iVar1 == 0) {
          return uVar2;
        }
        return 1;
      }
      uVar2 = 0x50;
      uVar3 = 0x44;
      uVar4 = 0x359;
    }
    else {
      uVar2 = 0x33;
      uVar3 = 0x95;
      uVar4 = 0x350;
    }
  }
  else {
    uVar2 = 0x32;
    uVar3 = 0x6f;
    uVar4 = 0x349;
  }
LAB_003ccc40:
  FUN_003c3950(param_1,uVar2,0x16c,uVar3,"external/openssl/ssl/statem/statem_lib.c",uVar4);
  return 0;
}


