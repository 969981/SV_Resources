/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03509b90; name: FUN_03509b90
 */


void FUN_03509b90(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  
  if (*(int *)(param_1 + 0x130) != 1) {
    if (*(int *)(param_1 + 0x130) == 3) {
      lVar7 = *(long *)(param_1 + 0x118);
      lVar4 = *(long *)(param_1 + 0x128);
      if (lVar4 == 0) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x44));
        fVar9 = (fVar9 * 1.5258789e-05) / *(float *)(lVar4 + 0x74);
      }
      *(byte *)(*(long *)(lVar7 + 0x18) + 0x2ba) =
           *(byte *)(*(long *)(lVar7 + 0x18) + 0x2ba) & 0x9f | 0x18;
      puVar8 = *(undefined8 **)PTR_DAT_047e6988;
      iVar1 = *(int *)(*(long *)(lVar7 + 0x18) + 0x228);
      nn::os::LockMutex((MutexType *)(puVar8 + 4));
      piVar5 = (int *)*puVar8;
      uVar2 = *(uint *)(puVar8 + 1);
      piVar6 = piVar5;
      if (uVar2 == 0) {
LAB_03509c90:
        if (piVar6 != piVar5 + (ulong)uVar2 * 0xc) {
          *(undefined8 *)(piVar6 + 4) = puVar8[8];
          piVar6[7] = (int)fVar9;
        }
      }
      else {
        lVar4 = (ulong)uVar2 * 0x30;
        do {
          if ((*piVar6 == iVar1) && (*(long *)(piVar6 + 2) == lVar7)) goto LAB_03509c90;
          lVar4 = lVar4 + -0x30;
          piVar6 = piVar6 + 0xc;
        } while (lVar4 != 0);
      }
      nn::os::UnlockMutex((MutexType *)(puVar8 + 4));
      uVar3 = 1;
    }
    else {
      if (*(long *)(param_1 + 0x118) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
        *(byte *)(lVar4 + 0x2ba) = *(byte *)(lVar4 + 0x2ba) & 0x87;
      }
      uVar3 = 2;
    }
    *(undefined4 *)(param_1 + 0x130) = uVar3;
  }
  return;
}


