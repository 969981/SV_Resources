/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a57fc; name: FUN_034a57fc
 */


int FUN_034a57fc(float param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = *(float *)(param_2 + 0x2cc);
  lVar7 = *(long *)(param_2 + 0x158);
  if (lVar7 == 0) {
    uVar2 = *(uint *)(param_2 + 0x144);
    if (uVar2 != 0) {
      lVar7 = *(long *)PTR_DAT_047e6f28;
      pMVar1 = (MutexType *)(lVar7 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar7 + 0x178);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar7 = *(long *)(*(long *)(lVar7 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar2) {
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(param_2 + 0x158) = lVar7;
            goto LAB_034a5824;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      *(undefined8 *)(param_2 + 0x158) = 0;
    }
  }
  else {
LAB_034a5824:
    uVar5 = (ulong)*(byte *)(lVar7 + 0xd8);
    if ((uVar5 != 0xff) && (lVar6 = *(long *)(lVar7 + uVar5 * 0x18 + 0x30), lVar6 != 0)) {
      fVar8 = *(float *)(param_2 + 0x2d0);
      fVar9 = 0.0;
      if (fVar8 != 0.0) {
        fVar9 = *(float *)(lVar6 + (ulong)(*(int *)(lVar7 + uVar5 * 0x18 + 0x38) - 2) * 0xc);
        if ((fVar9 <= param_1) || (fVar9 <= 0.0)) {
          fVar9 = fVar8;
        }
        else {
          fVar9 = (fVar8 * param_1) / fVar9;
        }
      }
      fVar10 = (float)NEON_fminnm(fVar9 + fVar10,0x42c80000);
    }
  }
  return (int)fVar10;
}


