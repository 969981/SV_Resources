/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f69cb4; name: FUN_00f69cb4
 */


void FUN_00f69cb4(undefined8 *param_1,long param_2,code *param_3,ulong param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  size_t sVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  ulong *puVar10;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(param_2 + ((long)param_4 >> 1)));
    }
    puVar4 = (undefined8 *)(*param_3)();
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
    puVar3 = PTR_PTR_047d1a50;
    uVar2 = *(uint *)(puVar4 + 1);
    if ((int)uVar2 < 1) {
      *param_1 = 0;
      param_1[1] = 0x8000000000000000;
    }
    else {
      pvVar8 = (void *)*puVar4;
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar2 << 6);
      *param_1 = pvVar5;
      *(uint *)(param_1 + 1) = uVar2;
      *(uint *)((long)param_1 + 0xc) = uVar2;
      memcpy(pvVar5,pvVar8,0x34);
      *(undefined8 *)((long)pvVar5 + 0x38) = 0;
      pcVar1 = (char *)(*(ulong *)((long)pvVar8 + 0x38) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar6 = strlen(pcVar1);
        sVar6 = (size_t)((int)sVar6 + 1);
        pvVar7 = (void *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,sVar6);
        memcpy(pvVar7,pcVar1,sVar6);
        *(ulong *)((long)pvVar5 + 0x38) = (ulong)pvVar7 | 1;
      }
      if (uVar2 != 1) {
        memcpy((void *)((long)pvVar5 + 0x40),(void *)((long)pvVar8 + 0x40),0x34);
        *(undefined8 *)((long)pvVar5 + 0x78) = 0;
        pcVar1 = (char *)(*(ulong *)((long)pvVar8 + 0x78) & 0xfffffffffffffffe);
        if (pcVar1 != (char *)0x0) {
          sVar6 = strlen(pcVar1);
          sVar6 = (size_t)((int)sVar6 + 1);
          pvVar7 = (void *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,sVar6);
          memcpy(pvVar7,pcVar1,sVar6);
          *(ulong *)((long)pvVar5 + 0x78) = (ulong)pvVar7 | 1;
        }
        if (uVar2 != 2) {
          memcpy((void *)((long)pvVar5 + 0x80),(void *)((long)pvVar8 + 0x80),0x34);
          *(undefined8 *)((long)pvVar5 + 0xb8) = 0;
          pcVar1 = (char *)(*(ulong *)((long)pvVar8 + 0xb8) & 0xfffffffffffffffe);
          if (pcVar1 != (char *)0x0) {
            sVar6 = strlen(pcVar1);
            sVar6 = (size_t)((int)sVar6 + 1);
            pvVar7 = (void *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,sVar6);
            memcpy(pvVar7,pcVar1,sVar6);
            *(ulong *)((long)pvVar5 + 0xb8) = (ulong)pvVar7 | 1;
          }
          iVar9 = uVar2 - 3;
          if (iVar9 != 0) {
            pvVar8 = (void *)((long)pvVar8 + 0xc0);
            puVar10 = (ulong *)((long)pvVar5 + 0xf8);
            do {
              memcpy(puVar10 + -7,pvVar8,0x34);
              *puVar10 = 0;
              pcVar1 = (char *)(*(ulong *)((long)pvVar8 + 0x38) & 0xfffffffffffffffe);
              if (pcVar1 != (char *)0x0) {
                sVar6 = strlen(pcVar1);
                sVar6 = (size_t)((int)sVar6 + 1);
                pvVar5 = (void *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,sVar6);
                memcpy(pvVar5,pcVar1,sVar6);
                *puVar10 = (ulong)pvVar5 | 1;
              }
              iVar9 = iVar9 + -1;
              puVar10 = puVar10 + 8;
              pvVar8 = (void *)((long)pvVar8 + 0x40);
            } while (iVar9 != 0);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar4 + 2);
  }
  return;
}


