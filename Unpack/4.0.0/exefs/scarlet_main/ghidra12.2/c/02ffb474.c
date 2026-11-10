/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ffb474; name: FUN_02ffb474
 */


void FUN_02ffb474(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  lVar5 = tpidr_el0;
  lVar3 = *(long *)(lVar5 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar3;
  }
  plVar6 = *(long **)(lVar3 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      (**(code **)(lVar3 + 0x18))("CharacterProxyDeferredUpdate",0x1c,*(undefined8 *)(lVar3 + 0x28))
      ;
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtCharacterProxyDeferredUpdate";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar3 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
  }
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*param_2 + lVar7);
      (**(code **)(**(long **)(param_1 + 0x50) + 0xd0))
                (*(long **)(param_1 + 0x50),*puVar1,puVar1 + 2,puVar1 + 4,0);
      lVar3 = lVar3 + 1;
      lVar7 = lVar7 + 0x30;
    } while (lVar3 < (int)param_2[1]);
  }
  if (*(long *)(param_1 + 0x38) != -1) {
    local_60 = (double)(float)*(undefined8 *)(param_1 + 0x90);
    dStack_58 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
    local_50 = (double)(float)*(undefined8 *)(param_1 + 0x98);
    dStack_48 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x88))
              (*(long **)(param_1 + 0x50),*(long *)(param_1 + 0x38),param_1 + 0x60,&local_60,0);
  }
  lVar3 = *(long *)(lVar5 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar3;
  }
  plVar6 = *(long **)(lVar3 + 0x3e0);
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    if (((*(byte *)(lVar5 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
      puVar1 = (undefined8 *)plVar6[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar6[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (*(code **)(lVar5 + 0x20) != (code *)0x0) {
      (**(code **)(lVar5 + 0x20))(*(undefined8 *)(lVar5 + 0x28));
    }
  }
  return;
}


