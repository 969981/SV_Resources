/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d967a8; name: FUN_00d967a8
 */


void FUN_00d967a8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_60;
  long local_58 [4];
  undefined4 local_38 [2];
  
  if ((((*(long *)(param_1 + 0x38) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 != 0)) &&
      (uVar2 = FUN_00ea2b08(lVar5 + -0x28), (uVar2 & 1) != 0)) &&
     ((*(long *)(param_1 + 0x50) != 0 &&
      (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 != 0)))) {
    if (*(char *)(param_1 + 0xb18) != -1) {
      FUN_01eaf920(param_1,(long)*(char *)(param_1 + 0xb18),param_1 + 0xb20);
    }
    if (*(char *)(param_1 + 0xb30) != -1) {
      FUN_01eaf920(param_1,(long)*(char *)(param_1 + 0xb30),param_1 + 0xb38);
    }
    if (*(char *)(param_1 + 0xb48) != -1) {
      FUN_01eaf920(param_1,(long)*(char *)(param_1 + 0xb48),param_1 + 0xb50);
    }
    plVar6 = (long *)(lVar5 + -0x28);
    if (*(char *)(param_1 + 0xb60) != -1) {
      FUN_01eaf920(param_1,(long)*(char *)(param_1 + 0xb60),param_1 + 0xb68);
    }
    lVar5 = param_1 + 0x178;
    uVar2 = FUN_00d96ac0(lVar5);
    if ((uVar2 & 1) == 0) {
      FUN_016947d8(local_58);
      local_38[0] = 4;
      if (local_58[0] != 0) {
        FUN_01eaf354(&local_60,local_38,local_58[0] + 8);
        if (local_58[0] != 0) {
          FUN_01eb0220(&local_60,lVar5,local_58[0] + 8);
        }
      }
      uVar3 = FUN_014c27b0(local_58);
      uVar4 = FUN_014c27c8(local_58);
      uVar2 = (**(code **)(*plVar6 + 0x70))(plVar6,uVar3,uVar4);
      if ((uVar2 & 1) != 0) {
        FUN_01eb0128(lVar5,1);
      }
      FUN_01694aa8(local_58);
    }
    if (*(char *)(param_1 + 0xbe8) != '\0') {
      FUN_016947d8(local_58);
      local_38[0] = 10;
      if (local_58[0] != 0) {
        FUN_01eaf354(&local_60,local_38,local_58[0] + 8);
      }
      uVar3 = FUN_014c27b0(local_58);
      uVar4 = FUN_014c27c8(local_58);
      bVar1 = (**(code **)(*plVar6 + 0x70))(plVar6,uVar3,uVar4);
      *(byte *)(param_1 + 0xbe8) = ~bVar1 & 1;
      FUN_01694aa8(local_58);
    }
    if (*(char *)(param_1 + 0xacc) != '\0') {
      FUN_016947d8(local_58);
      local_38[0] = 0xc;
      if (local_58[0] != 0) {
        FUN_01eaf354(&local_60,local_38,local_58[0] + 8);
        if (local_58[0] != 0) {
          FUN_01eb0220(&local_60,lVar5,local_58[0] + 8);
        }
      }
      if (*(char *)(param_1 + 0xacc) == '\0') goto LAB_00d96abc;
      if (local_58[0] != 0) {
        FUN_01eb02ac(&local_60,param_1 + 0xac0,local_58[0] + 8);
      }
      uVar3 = FUN_014c27b0(local_58);
      uVar4 = FUN_014c27c8(local_58);
      uVar2 = (**(code **)(*plVar6 + 0x70))(plVar6,uVar3,uVar4);
      if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0xacc) != '\0')) {
        *(undefined1 *)(param_1 + 0xacc) = 0;
      }
      FUN_01694aa8(local_58);
    }
    if (*(char *)(param_1 + 0xab0) != '\0') {
      FUN_016947d8(local_58);
      local_38[0] = 0xe;
      if (local_58[0] != 0) {
        FUN_01eaf354(&local_60,local_38,local_58[0] + 8);
      }
      if (*(char *)(param_1 + 0xab0) == '\0') {
LAB_00d96abc:
                    /* WARNING: Subroutine does not return */
        FUN_01eb02a0();
      }
      local_60 = *(undefined8 *)(param_1 + 0xaa0);
      if (local_58[0] != 0) {
        FUN_01eb032c(local_38,&local_60,local_58[0] + 8);
      }
      uVar3 = FUN_014c27b0(local_58);
      uVar4 = FUN_014c27c8(local_58);
      uVar2 = (**(code **)(*plVar6 + 0x70))(plVar6,uVar3,uVar4);
      if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 0xab0) != '\0')) {
        *(undefined1 *)(param_1 + 0xab0) = 0;
      }
      FUN_01694aa8(local_58);
    }
  }
  return;
}


