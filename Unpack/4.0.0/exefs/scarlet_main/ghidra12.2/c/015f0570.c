/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f0570; name: FUN_015f0570
 */


void FUN_015f0570(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__dest;
  size_t sVar5;
  void *__dest_00;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  void *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar4 = PTR_PTR_047d1a50;
  local_78 = (void *)0x0;
  local_70 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    __dest = (void *)0x0;
    uVar2 = 0;
    local_78 = (void *)0x0;
    local_70 = 0x8000000000000000;
    uVar11 = 0x80000000;
  }
  else {
    pvVar8 = (void *)*param_2;
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(ulong)uVar2 << 6);
    local_70 = CONCAT44(uVar2,uVar2);
    local_78 = __dest;
    memcpy(__dest,pvVar8,0x34);
    *(undefined8 *)((long)__dest + 0x38) = 0;
    pcVar1 = (char *)(*(ulong *)((long)pvVar8 + 0x38) & 0xfffffffffffffffe);
    if (pcVar1 != (char *)0x0) {
      sVar5 = strlen(pcVar1);
      sVar5 = (size_t)((int)sVar5 + 1);
      __dest_00 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar5);
      memcpy(__dest_00,pcVar1,sVar5);
      *(ulong *)((long)__dest + 0x38) = (ulong)__dest_00 | 1;
    }
    uVar11 = uVar2;
    if (uVar2 != 1) {
      puVar12 = (ulong *)((long)pvVar8 + 0x78);
      puVar9 = (ulong *)((long)__dest + 0x78);
      uVar10 = 1;
      do {
        memcpy(puVar9 + -7,puVar12 + -7,0x34);
        *puVar9 = 0;
        pcVar1 = (char *)(*puVar12 & 0xfffffffffffffffe);
        if (pcVar1 != (char *)0x0) {
          sVar5 = strlen(pcVar1);
          sVar5 = (size_t)((int)sVar5 + 1);
          pvVar8 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar5);
          memcpy(pvVar8,pcVar1,sVar5);
          *puVar9 = (ulong)pvVar8 | 1;
        }
        uVar10 = uVar10 + 1;
        puVar12 = puVar12 + 8;
        puVar9 = puVar9 + 8;
      } while (uVar2 != uVar10);
    }
  }
  local_68 = *(undefined4 *)(param_2 + 2);
  FUN_015f078c(param_1,&local_78);
  puVar3 = PTR_DAT_047d1a08;
  if (uVar2 != 0) {
    uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar2 << 6;
    do {
      uVar6 = *(ulong *)((long)__dest + (uVar7 - 8));
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar3 + 8))(0,uVar6 - 1,0);
      }
      uVar7 = uVar7 - 0x40;
    } while (uVar7 != 0);
  }
  local_70 = local_70 & 0xffffffff00000000;
  if ((__dest == (void *)0x0) || ((int)uVar11 < 0)) {
    return;
  }
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4,__dest,(ulong)uVar11 << 6);
  return;
}


