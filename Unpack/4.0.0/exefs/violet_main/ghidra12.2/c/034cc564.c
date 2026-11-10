/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cc564; name: FUN_034cc564
 */


void FUN_034cc564(float param_1,long param_2,long *param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  float fVar9;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x78);
  if (*(int *)(param_2 + 0x38) != 0) {
    puVar7 = *(undefined4 **)(param_2 + 0x30);
    do {
      uVar3 = *(uint *)(param_3 + 1);
      uVar8 = *(uint *)((long)param_3 + 0xc);
      if (uVar3 < uVar8) {
LAB_034cc5f0:
        if (uVar3 < uVar8) {
          uVar8 = *(uint *)(param_3 + 1);
          *(uint *)(param_3 + 1) = uVar8 + 1;
          if (*param_3 != 0) {
            puVar2 = (undefined8 *)(*param_3 + (ulong)uVar8 * 0x20);
            *puVar2 = uVar6;
            *(undefined4 *)(puVar2 + 1) = *puVar7;
            *(float *)((long)puVar2 + 0xc) = param_1;
            *(undefined8 *)((long)puVar2 + 0x14) = 0;
            *(undefined4 *)(puVar2 + 2) = 3;
          }
        }
      }
      else {
        iVar1 = uVar8 + (uVar8 >> 1);
        if (uVar8 == 0) {
          iVar1 = 1;
        }
        uVar8 = iVar1 + uVar8;
        lVar5 = (**(code **)(puVar4 + 0x20))(0,*param_3,(ulong)uVar8 << 5);
        if (lVar5 != 0) {
          *param_3 = lVar5;
          *(uint *)((long)param_3 + 0xc) = uVar8;
          goto LAB_034cc5f0;
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined4 *)
                       (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 4));
  }
  if ((*(char *)(param_2 + 0xc6) != '\0') &&
     ((param_4 != 0 || (param_4 = *(int *)(param_2 + 0x60), param_4 != 0)))) {
    uVar3 = *(uint *)(param_3 + 1);
    uVar8 = *(uint *)((long)param_3 + 0xc);
    if (uVar8 <= uVar3) {
      iVar1 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar1 = 1;
      }
      uVar8 = iVar1 + uVar8;
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_3,(ulong)uVar8 << 5);
      if (lVar5 == 0) {
        return;
      }
      *param_3 = lVar5;
      *(uint *)((long)param_3 + 0xc) = uVar8;
    }
    if (uVar3 < uVar8) {
      uVar8 = *(uint *)(param_3 + 1);
      *(uint *)(param_3 + 1) = uVar8 + 1;
      if (*param_3 != 0) {
        puVar2 = (undefined8 *)(*param_3 + (ulong)uVar8 * 0x20);
        *(int *)(puVar2 + 1) = param_4;
        fVar9 = *(float *)(param_2 + 100);
        *puVar2 = uVar6;
        *(undefined8 *)((long)puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 2) = 3;
        *(float *)((long)puVar2 + 0xc) = fVar9 * param_1;
      }
    }
  }
  return;
}


