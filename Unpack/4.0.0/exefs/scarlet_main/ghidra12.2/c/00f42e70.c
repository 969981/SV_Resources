/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f42e70; name: FUN_00f42e70
 */


uint FUN_00f42e70(long param_1,undefined2 *param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *local_c0 [12];
  undefined1 local_5c [4];
  undefined8 local_58;
  
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 0x58) = 0xc;
  *(undefined2 *)(param_1 + 0x5a) = uVar2;
  if ((*(long *)(param_2 + 0x14) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_2 + 0x14) + 0x10), lVar5 == 0)) {
    uVar3 = 0;
  }
  else {
    local_c0[0] = local_5c;
    local_5c[0] = 0;
    puVar6 = *(undefined8 **)(lVar5 + 0x150);
    puVar1 = *(undefined8 **)(lVar5 + 0x158);
    if (puVar6 != puVar1) {
      local_58 = *puVar6;
      FUN_00f43048(local_c0,&local_58);
      if (puVar6 + 1 != puVar1) {
        local_58 = puVar6[1];
        FUN_00f43048(local_c0,&local_58);
        if (puVar6 + 2 != puVar1) {
          local_58 = puVar6[2];
          FUN_00f43048(local_c0,&local_58);
          if (puVar6 + 3 != puVar1) {
            local_58 = puVar6[3];
            FUN_00f43048(local_c0,&local_58);
            for (puVar6 = puVar6 + 4; puVar6 != puVar1; puVar6 = puVar6 + 1) {
              local_58 = *puVar6;
              FUN_00f43048(local_c0,&local_58);
            }
          }
        }
      }
    }
    FUN_00b1bbe8(local_c0);
    *(undefined1 *)(param_1 + 0x5c) = local_5c[0];
    if (*(long *)(param_2 + 0x34) != 0) {
      FUN_00f4305c();
    }
    lVar5 = FUN_00f43380(lVar5 + -0x28,param_1 + 0x5d,0x3ffb);
    if (lVar5 == 0) {
      uVar3 = 1;
    }
    else {
      plVar4 = *(long **)(param_1 + 0x48);
      uVar3 = 0;
      if (plVar4 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,(undefined1 *)(param_1 + 0x58),(int)lVar5 + 5);
      }
    }
  }
  return uVar3 & 1;
}


