/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03452768; name: FUN_03452768
 */


void FUN_03452768(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 *param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_047e2fe8;
  puVar2 = PTR_DAT_047e2fd0;
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 != 0) {
    if (param_2 == 0) {
      do {
        if (((*(byte *)(lVar10 + 0x34) & 1) == 0) &&
           (puVar4 = (undefined8 *)(**(code **)(puVar2 + 0x10))(0,0x48), puVar4 != (undefined8 *)0x0
           )) {
          *puVar4 = &PTR_LAB_047c0688;
          puVar4[1] = lVar10;
          *(undefined8 *)((long)puVar4 + 0x1c) = 0;
          *(undefined8 *)((long)puVar4 + 0x24) = 0;
          puVar4[8] = 0;
          *(undefined4 *)(puVar4 + 7) = param_5;
          *(undefined4 *)((long)puVar4 + 0x2c) = 0;
          *(undefined4 *)(puVar4 + 6) = param_4;
          *(undefined8 *)((long)puVar4 + 0x24) = param_6[1];
          *(undefined4 *)((long)puVar4 + 0x2c) = *(undefined4 *)(param_6 + 2);
          piVar6 = (int *)*param_6;
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar6 + 1;
          }
          *(int **)((long)puVar4 + 0x1c) = piVar6;
          FUN_03452a08(*(undefined8 *)puVar3,puVar4,param_7,param_8 & 1);
        }
        lVar10 = *(long *)(lVar10 + 0x18);
      } while (lVar10 != 0);
    }
    else {
      do {
        if ((*(byte *)(lVar10 + 0x34) & 1) == 0) {
          puVar4 = (undefined8 *)(**(code **)(puVar2 + 0x10))(0,0x48);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_LAB_047c0688;
            *(undefined8 *)((long)puVar4 + 0x1c) = 0;
            *(undefined8 *)((long)puVar4 + 0x24) = 0;
            *(undefined8 *)((long)puVar4 + 0x2c) = 0;
            *(undefined4 *)(puVar4 + 7) = 0;
            puVar4[8] = 0;
LAB_0345287c:
            *(undefined4 *)(puVar4 + 7) = param_5;
            puVar4[1] = lVar10;
            piVar9 = *(int **)((long)puVar4 + 0x1c);
            *(undefined4 *)(puVar4 + 6) = param_4;
            *(undefined8 *)((long)puVar4 + 0x24) = param_6[1];
            *(undefined4 *)((long)puVar4 + 0x2c) = *(undefined4 *)(param_6 + 2);
            piVar6 = (int *)*param_6;
            if ((piVar9 != (int *)0x0) && (iVar1 = *piVar9, *piVar9 = iVar1 + -1, iVar1 + -1 == 0))
            {
              uVar5 = piVar9[1];
              if (uVar5 != 0) {
                uVar7 = 0;
                plVar8 = (long *)(piVar9 + 4);
                do {
                  if (*plVar8 != 0) {
                    (**(code **)(puVar2 + 0x30))(0);
                    uVar5 = piVar9[1];
                  }
                  uVar7 = uVar7 + 1;
                  plVar8 = plVar8 + 4;
                } while (uVar7 < uVar5);
              }
              (**(code **)(puVar2 + 0x30))(0,piVar9);
            }
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar6 + 1;
            }
            *(int **)((long)puVar4 + 0x1c) = piVar6;
            FUN_03452a08(*(undefined8 *)PTR_DAT_047e2fe8,puVar4,param_7,param_8 & 1);
          }
        }
        else if ((*(long *)(param_2 + 0x28) != 0) &&
                (puVar4 = (undefined8 *)(**(code **)(puVar2 + 0x10))(0,0x48),
                puVar4 != (undefined8 *)0x0)) {
          *puVar4 = &PTR_LAB_047c0688;
          *(undefined8 *)((long)puVar4 + 0x2c) = 0;
          *(undefined8 *)((long)puVar4 + 0x24) = 0;
          *(undefined8 *)((long)puVar4 + 0x1c) = 0;
          *(undefined4 *)(puVar4 + 7) = 0;
          puVar4[8] = param_2;
          uVar5 = *(uint *)(param_2 + 0x80);
          if (uVar5 < 2) {
            *(uint *)(param_2 + 0x80) = uVar5 + 1;
            if ((uVar5 != 0) && (*(char *)(param_2 + 0x84) != '\0')) {
              FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,param_2);
            }
          }
          else {
            *(uint *)(param_2 + 0x80) = uVar5 + 1;
          }
          goto LAB_0345287c;
        }
        lVar10 = *(long *)(lVar10 + 0x18);
      } while (lVar10 != 0);
    }
  }
  return;
}


