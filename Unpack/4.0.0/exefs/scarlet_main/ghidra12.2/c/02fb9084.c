/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb9084; name: FUN_02fb9084
 */


/* WARNING: Removing unreachable block (ram,0x02fb911c) */

void FUN_02fb9084(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  void *pvVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  puVar7 = PTR_DAT_047d1a08;
  uVar2 = *(int *)((long)param_1 + 0xc) * 2;
  uVar5 = (ulong)uVar2;
  if (uVar2 < 3) {
    uVar5 = 2;
  }
  if (0x7ffffffd < uVar5) {
    uVar5 = 0x7ffffffe;
  }
  local_68 = uVar5 * 0x28;
  pvVar4 = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar6 = pvVar4;
    if (uVar2 == 1) {
    }
    else {
      iVar9 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar6,__src,0x28);
        memcpy((void *)((long)pvVar6 + 0x28),(void *)((long)__src + 0x28),0x28);
        pvVar6 = (void *)((long)pvVar6 + 0x50);
        __src = (void *)((long)__src + 0x50);
        iVar9 = iVar9 + 2;
      } while (iVar9 != 0);
      puVar7 = PTR_DAT_047d1a08;
      if ((uVar2 & 1) == 0) goto LAB_02fb917c;
    }
    memcpy(pvVar6,__src,0x28);
  }
LAB_02fb917c:
  uVar1 = uVar5 * 0x28 + 0x28;
  uVar8 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x28;
    uVar8 = uVar5 | 1;
    if (uVar1 <= local_68) {
      uVar8 = uVar8 + (local_68 + uVar5 * -0x28) / 0x28;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar7 + 8))(puVar3[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = pvVar4;
  return;
}


