/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344ae80; name: FUN_0344ae80
 */


void FUN_0344ae80(long param_1,int param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_047e2fd0;
  plVar10 = (long *)(param_1 + 8);
  plVar8 = (long *)*plVar10;
  if (plVar8 != (long *)0x0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        do {
          plVar5 = (long *)plVar8[1];
          FUN_0344bd98(param_1,plVar8);
          plVar6 = *(long **)(param_1 + 8);
          plVar7 = (long *)0x0;
          plVar9 = plVar6;
          if ((plVar6 != (long *)0x0) && (plVar8 != plVar6)) {
            do {
              plVar7 = plVar9;
              plVar9 = (long *)plVar7[1];
            } while (plVar9 != (long *)0x0 && plVar8 != plVar9);
          }
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar10;
            if (plVar9 != plVar6) {
              plVar1 = plVar7 + 1;
            }
            *plVar1 = plVar9[1];
          }
          (**(code **)(*plVar8 + 0x40))(plVar8);
          iVar2 = *(int *)((long)plVar8 + 0x4c) + -1;
          *(int *)((long)plVar8 + 0x4c) = iVar2;
          if (iVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            (**(code **)(puVar3 + 0x30))(0,plVar8);
          }
          plVar8 = plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          plVar10 = (long *)plVar8[1];
          if (param_2 == 1) {
            if ((plVar8[0xb] != 0) && ((*(byte *)(plVar8 + 0xe) >> 2 & 1) == 0)) {
              FUN_0344c724(plVar8[0xb],plVar8);
            }
            bVar4 = *(byte *)(plVar8 + 0xe) | 4;
LAB_0344af8c:
            *(byte *)(plVar8 + 0xe) = bVar4;
          }
          else if (param_2 == 2) {
            if ((plVar8[0xb] != 0) && ((*(byte *)(plVar8 + 0xe) >> 2 & 1) != 0)) {
              FUN_0344c8b0(plVar8[0xb],plVar8);
            }
            bVar4 = *(byte *)(plVar8 + 0xe) & 0xfb;
            goto LAB_0344af8c;
          }
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    else if (param_2 == 0) {
      do {
        plVar9 = (long *)plVar8[1];
        if (*(int *)((long)plVar8 + 0x2c) == param_3) {
          FUN_0344bd98(param_1,plVar8);
          plVar5 = *(long **)(param_1 + 8);
          plVar6 = (long *)0x0;
          plVar7 = plVar5;
          if ((plVar5 != (long *)0x0) && (plVar8 != plVar5)) {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)plVar6[1];
            } while (plVar7 != (long *)0x0 && plVar8 != plVar7);
          }
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar10;
            if (plVar7 != plVar5) {
              plVar1 = plVar6 + 1;
            }
            *plVar1 = plVar7[1];
          }
          (**(code **)(*plVar8 + 0x40))(plVar8);
          iVar2 = *(int *)((long)plVar8 + 0x4c) + -1;
          *(int *)((long)plVar8 + 0x4c) = iVar2;
          if (iVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            (**(code **)(puVar3 + 0x30))(0,plVar8);
          }
        }
        plVar8 = plVar9;
      } while (plVar9 != (long *)0x0);
    }
    else {
      do {
        plVar10 = (long *)plVar8[1];
        if (*(int *)((long)plVar8 + 0x2c) == param_3) {
          if (param_2 == 2) {
            if ((plVar8[0xb] != 0) && ((*(byte *)(plVar8 + 0xe) >> 2 & 1) != 0)) {
              FUN_0344c8b0(plVar8[0xb],plVar8);
            }
            bVar4 = *(byte *)(plVar8 + 0xe) & 0xfb;
          }
          else {
            if (param_2 != 1) goto LAB_0344af24;
            if ((plVar8[0xb] != 0) && ((*(byte *)(plVar8 + 0xe) >> 2 & 1) == 0)) {
              FUN_0344c724(plVar8[0xb],plVar8);
            }
            bVar4 = *(byte *)(plVar8 + 0xe) | 4;
          }
          *(byte *)(plVar8 + 0xe) = bVar4;
        }
LAB_0344af24:
        plVar8 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}


