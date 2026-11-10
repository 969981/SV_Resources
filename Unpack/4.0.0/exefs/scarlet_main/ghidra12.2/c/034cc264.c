/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cc264; name: FUN_034cc264
 */


void FUN_034cc264(float param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  
  lVar3 = -4;
  if (*(long *)(param_4 + 0x68) != -1) {
    lVar3 = *(long *)(param_4 + 0x68);
  }
  if ((*(int *)(param_4 + 0x70) != 0) && (0.0 < *(float *)(param_4 + 0x74))) {
    uVar4 = *(uint *)(param_5 + 1);
    uVar6 = *(uint *)((long)param_5 + 0xc);
    if (uVar6 <= uVar4) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_5,(ulong)uVar6 << 5);
      if (lVar5 == 0) goto LAB_034cc344;
      *param_5 = lVar5;
      *(uint *)((long)param_5 + 0xc) = uVar6;
    }
    if (uVar4 < uVar6) {
      uVar6 = *(uint *)(param_5 + 1);
      *(uint *)(param_5 + 1) = uVar6 + 1;
      if (*param_5 != 0) {
        plVar2 = (long *)(*param_5 + (ulong)uVar6 * 0x20);
        *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_4 + 0x70);
        fVar7 = *(float *)(param_4 + 0x74);
        *plVar2 = lVar3;
        *(undefined4 *)((long)plVar2 + 0x14) = param_2;
        *(undefined4 *)(plVar2 + 3) = param_3;
        *(undefined4 *)(plVar2 + 2) = 1;
        *(float *)((long)plVar2 + 0xc) = fVar7 * param_1;
      }
    }
  }
LAB_034cc344:
  lVar3 = -4;
  if (*(long *)(param_4 + 0x80) != -1) {
    lVar3 = *(long *)(param_4 + 0x80);
  }
  if ((*(int *)(param_4 + 0x88) != 0) && (0.0 < *(float *)(param_4 + 0x8c))) {
    uVar4 = *(uint *)(param_5 + 1);
    uVar6 = *(uint *)((long)param_5 + 0xc);
    if (uVar6 <= uVar4) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_5,(ulong)uVar6 << 5);
      if (lVar5 == 0) {
        return;
      }
      *param_5 = lVar5;
      *(uint *)((long)param_5 + 0xc) = uVar6;
    }
    if (uVar4 < uVar6) {
      uVar6 = *(uint *)(param_5 + 1);
      *(uint *)(param_5 + 1) = uVar6 + 1;
      if (*param_5 != 0) {
        plVar2 = (long *)(*param_5 + (ulong)uVar6 * 0x20);
        *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_4 + 0x88);
        fVar7 = *(float *)(param_4 + 0x8c);
        *plVar2 = lVar3;
        *(undefined8 *)((long)plVar2 + 0x14) = 0;
        *(undefined4 *)(plVar2 + 2) = 1;
        *(float *)((long)plVar2 + 0xc) = fVar7 * param_1;
      }
    }
  }
  return;
}


