/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01013f94; name: FUN_01013f94
 */


void FUN_01013f94(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float local_24;
  
  iVar2 = *(int *)(param_1 + 0x120);
  if (iVar2 == 3) {
    FUN_01014118(param_1);
    lVar6 = (*(code *)**(undefined8 **)*param_2)
                      ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
    lVar9 = *(long *)(param_1 + 0xd90);
    if (lVar9 != 0) {
      fVar10 = *(float *)(lVar9 + 0x430);
      fVar11 = fVar10 - *(float *)(lVar9 + 0x434);
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (1.1920929e-07 < fVar10) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar11)) {
          bVar3 = fVar11 < 1.1920929e-07;
          bVar4 = fVar11 == 1.1920929e-07;
          bVar5 = false;
        }
      }
      if (!bVar4 && bVar3 == bVar5) {
        local_24 = *(float *)(lVar9 + 0x434) + (float)((double)*(long *)(lVar6 + 8) / 1000000000.0);
        pfVar1 = (float *)(lVar9 + 0x430);
        if (local_24 <= fVar10) {
          pfVar1 = &local_24;
        }
        fVar11 = *pfVar1;
        *(float *)(lVar9 + 0x434) = fVar11;
        if (fVar10 - fVar11 <= 1.1920929e-07) {
          memcpy((void *)(lVar9 + 0x40),(void *)(lVar9 + 0x2e0),0x150);
          *(undefined8 *)(lVar9 + 0x430) = 0;
        }
      }
      if (*(char *)(param_1 + 600) != '\0') {
        lVar6 = *(long *)(param_1 + 0xd90);
        FUN_00d8fea0(lVar6);
        FUN_00d8fbd8(lVar6);
        *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(lVar6 + 0x248);
        *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(lVar6 + 0x240);
        *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(lVar6 + 0x248);
        *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(lVar6 + 0x240);
      }
    }
  }
  else if (iVar2 == 1) {
    uVar7 = FUN_0101442c(param_1);
    uVar8 = FUN_010147e4(param_1);
    if (((uVar7 & 1) != 0) && ((uVar8 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x120) = 2;
LAB_0101407c:
      FUN_010161a0(param_1);
      *(undefined4 *)(param_1 + 0x120) = 3;
      FUN_013e7a84(param_1);
      return;
    }
  }
  else if (iVar2 == 2) goto LAB_0101407c;
  return;
}


