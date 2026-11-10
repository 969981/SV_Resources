/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03448578; name: FUN_03448578
 */


int * FUN_03448578(uint param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  size_t sVar8;
  void *__dest;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  
  puVar6 = PTR_DAT_047e2fd0;
  piVar7 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,param_1 << 5 | 8);
  if (piVar7 != (int *)0x0) {
    *piVar7 = 1;
    piVar7[1] = param_1;
    if (param_1 != 0) {
      lVar12 = 0;
      uVar11 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + lVar12);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar4 = puVar1[3];
        *(undefined8 *)((long)piVar7 + lVar12 + 0x18) = puVar1[2];
        *(undefined8 *)((long)piVar7 + lVar12 + 0x20) = uVar4;
        *(undefined8 *)((long)piVar7 + lVar12 + 8) = uVar2;
        *(undefined8 *)((long)piVar7 + lVar12 + 0x10) = uVar3;
        if ((char *)puVar1[1] != (char *)0x0) {
          sVar8 = strlen((char *)puVar1[1]);
          uVar9 = (ulong)((int)sVar8 + 1);
          __dest = (void *)(**(code **)(puVar6 + 0x10))(0,uVar9);
          *(void **)((long)piVar7 + lVar12 + 0x10) = __dest;
          if (__dest == (void *)0x0) {
            iVar5 = *piVar7;
            *piVar7 = iVar5 + -1;
            piVar7[1] = uVar11;
            if (iVar5 + -1 == 0) {
              if (uVar11 != 0) {
                uVar9 = 0;
                plVar10 = (long *)(piVar7 + 4);
                do {
                  if (*plVar10 != 0) {
                    (**(code **)(puVar6 + 0x30))(0);
                    uVar11 = piVar7[1];
                  }
                  uVar9 = uVar9 + 1;
                  plVar10 = plVar10 + 4;
                } while (uVar9 < uVar11);
              }
              (**(code **)(puVar6 + 0x30))(0,piVar7);
            }
            return (int *)0x0;
          }
          memcpy(__dest,(void *)puVar1[1],uVar9);
        }
        lVar12 = lVar12 + 0x20;
        uVar11 = uVar11 + 1;
      } while ((ulong)param_1 * 0x20 != lVar12);
    }
  }
  return piVar7;
}


