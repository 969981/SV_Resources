/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c59d4; name: FUN_016c59d4
 */


void FUN_016c59d4(long param_1,long param_2,uint param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  ulong local_60;
  ulong local_58;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0x3d0) + 0x10);
  if (*(long *)(lVar4 + 8) != 0) {
    lVar4 = 0;
  }
  puVar2 = param_4;
  if (param_4 == (undefined2 *)0x0) {
    local_60 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1;
    if (lVar4 == 0) {
      puVar2 = (undefined2 *)(**(code **)PTR_DAT_047d1a08)(1,&local_60,0x40);
    }
    else {
      local_58 = local_60 + 0x3f & 0xffffffffffffffc0;
      if (local_58 <= *(ulong *)(lVar4 + 0x28)) {
        puVar2 = *(undefined2 **)(lVar4 + 0x38);
        if (local_58 + (long)puVar2 <= *(ulong *)(lVar4 + 0x40)) {
          *(ulong *)(lVar4 + 0x38) = local_58 + (long)puVar2;
          goto LAB_016c5a9c;
        }
      }
      puVar2 = (undefined2 *)FUN_031cf3b4(lVar4,&local_58);
    }
  }
LAB_016c5a9c:
  if (0 < (int)param_3) {
    uVar6 = (ulong)param_3;
    puVar7 = puVar2;
    do {
      if (*(int *)(param_1 + 0x58) == -1) {
        uVar1 = 0xffff;
      }
      else {
        uVar1 = FUN_02e82464(param_1,param_2);
      }
      uVar6 = uVar6 - 1;
      param_2 = param_2 + 0x40;
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != 0);
  }
  FUN_02eabb10(param_1,puVar2,param_3);
  if (param_4 == (undefined2 *)0x0) {
    if (lVar4 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar2);
    }
    else {
      uVar6 = (-(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_3 << 1) + 0x3f &
              0xffffffffffffffc0;
      if ((*(ulong *)(lVar4 + 0x28) < uVar6) || (*(long *)(lVar4 + 0x38) != uVar6 + (long)puVar2)) {
        if (puVar2 == (undefined2 *)0x0) goto LAB_016c5af0;
        if (*(ulong *)(lVar4 + 0x28) < uVar6 + 0x40) {
          *(int *)(*(long *)(lVar4 + 0x30) + 0x20) = *(int *)(*(long *)(lVar4 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(lVar4 + 0x10) + 0x18))
                    (*(long **)(lVar4 + 0x10),(long)puVar2 - (long)*(int *)(puVar2 + -2),
                     uVar6 + 0x44);
          goto LAB_016c5af0;
        }
        if (*(long *)(lVar4 + 0x38) != uVar6 + (long)puVar2) {
          FUN_031cf778(lVar4,puVar2);
          goto LAB_016c5af0;
        }
        *(undefined2 **)(lVar4 + 0x38) = puVar2;
      }
      else {
        *(undefined2 **)(lVar4 + 0x38) = puVar2;
        if (*(undefined2 **)(lVar4 + 0x48) != puVar2) goto LAB_016c5af0;
      }
      FUN_031cf578(lVar4);
    }
  }
LAB_016c5af0:
  uVar6 = FUN_00cb2110(param_1);
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar5 = 2;
    if ((uVar6 & 1) != 0) {
      uVar5 = 3;
    }
    FUN_00cb04b4(param_1 + 0xa0,param_1,uVar5);
  }
  return;
}


