/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ad330; name: FUN_034ad330
 */


void FUN_034ad330(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint local_34;
  
  while ((((*(byte *)(param_1 + 0xdb) >> 5 & 1) == 0 && (*(long *)(param_1 + 0x98) != 0)) &&
         (*(long *)(param_1 + 0xa0) == 0))) {
    param_1 = *(long *)(param_1 + 0x98);
  }
  local_34 = DAT_048b022c._4_4_;
  puVar7 = *(uint **)(param_1 + 0xb0);
  if (puVar7 != (uint *)0x0) {
    bVar3 = (byte)*puVar7;
    uVar1 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar1 = 1;
    }
    uVar9 = (ulong)uVar1;
    puVar5 = (uint *)((long)puVar7 + ((ulong)(bVar3 + 4) & 0x1fc));
    puVar8 = puVar7;
    do {
      puVar7 = puVar5;
      puVar8 = (uint *)((long)puVar8 + 1);
      if (*(char *)puVar8 == '9') goto LAB_034ad3b0;
      uVar9 = uVar9 - 1;
      puVar5 = puVar7 + 1;
    } while (uVar9 != 0);
    puVar7 = (uint *)0x0;
  }
LAB_034ad3b0:
  puVar8 = &local_34;
  if (puVar7 != (uint *)0x0) {
    puVar8 = puVar7;
  }
  uVar1 = *puVar8;
  if (uVar1 == 0xffffffff) {
    plVar6 = (long *)*param_2;
    *param_2 = 0;
  }
  else {
    lVar10 = *(long *)PTR_DAT_047e6f28;
    nn::os::LockMutex((MutexType *)(lVar10 + 0x268));
    uVar2 = *(uint *)(lVar10 + 0x290);
    if (uVar2 == 0) {
      lVar11 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      for (lVar11 = *(long *)(*(long *)(lVar10 + 0x288) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
          lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        if (*(uint *)(lVar11 + 0x10) == uVar1) {
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(lVar10 + 0x268));
    plVar6 = (long *)*param_2;
    *param_2 = lVar11;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}


