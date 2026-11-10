/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349b478; name: FUN_0349b478
 */


void FUN_0349b478(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar4 = PTR_DAT_047e2fd0;
  if (param_2 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar7 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0xb0);
      puVar1 = (undefined8 *)0x0;
      puVar5 = puVar10;
      do {
        puVar12 = puVar5;
        puVar11 = puVar1;
        if (puVar12 == (undefined8 *)0x0) goto LAB_0349b510;
        puVar1 = puVar12;
        puVar5 = (undefined8 *)puVar12[1];
      } while (puVar7 != puVar12);
      puVar1 = (undefined8 *)(param_1 + 0xb0);
      if (puVar7 != puVar10) {
        puVar1 = puVar11 + 1;
      }
      *puVar1 = (undefined8 *)puVar12[1];
      if (*(undefined8 **)(param_1 + 0xa8) == puVar7) {
        *(undefined8 **)(param_1 + 0xa8) = puVar11;
      }
      (**(code **)*puVar12)();
      (**(code **)(puVar4 + 0x30))(5,puVar12);
LAB_0349b510:
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    puVar7 = (undefined8 *)(**(code **)(puVar4 + 0x10))(5,0x58);
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 100);
      if (*(char *)(param_1 + 0x470) != '\0') {
        puVar2 = (undefined4 *)(param_1 + 0x118);
      }
      uVar3 = *puVar2;
      *puVar7 = &PTR_LAB_047c39e8;
      puVar7[1] = 0;
      puVar7[6] = 0;
      puVar7[4] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)((long)puVar7 + 0x2c) = 0x2b;
      *(undefined8 *)((long)puVar7 + 0x3c) = 0x3f800000ffffffff;
      *(undefined4 *)((long)puVar7 + 0x34) = 0;
      *(undefined4 *)(puVar7 + 7) = 0;
      *(undefined8 *)((long)puVar7 + 0x44) = 0x1ffffffff;
      *(short *)(puVar7 + 6) = (short)*(undefined4 *)PTR_DAT_047e6d08;
      *(undefined4 *)(puVar7 + 5) = uVar3;
      FUN_034768d8();
      *puVar7 = &PTR_LAB_047c3a20;
      puVar7[10] = 0;
      if (((DAT_048afcf0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_048afcf0), iVar6 != 0)) {
        DAT_048afce0 = (undefined8 *)(PTR_DAT_047e6fb8 + 0x10);
        DAT_048afce8 = 0;
        __cxa_guard_release(&DAT_048afcf0);
      }
      puVar2 = (undefined4 *)(param_1 + 100);
      if (*(char *)(param_1 + 0x470) != '\0') {
        puVar2 = (undefined4 *)(param_1 + 0x118);
      }
      uVar8 = (*(code *)*DAT_048afce0)
                        (&DAT_048afce0,param_2,*(undefined4 *)PTR_DAT_047e6fa0,0x10,1,*puVar2);
      puVar7[10] = uVar8;
      *(undefined8 **)(param_1 + 0xa0) = puVar7;
      puVar7[1] = 0;
      plVar9 = (long *)(param_1 + 0xb0);
      if (*plVar9 != 0) {
        plVar9 = (long *)(*(long *)(param_1 + 0xa8) + 8);
      }
      *plVar9 = (long)puVar7;
      *(undefined8 **)(param_1 + 0xa8) = puVar7;
    }
  }
  return;
}


