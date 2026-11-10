/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bd5b8; name: FUN_008bd5b8
 */


void FUN_008bd5b8(undefined8 param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  lVar4 = *(long *)(param_3 + 0x28);
  uVar2 = *(uint *)(lVar4 + (long)param_5 * 0x10 + 4);
  if ((int)uVar2 < 1) {
    return;
  }
  lVar5 = 0;
  lVar6 = (ulong)uVar2 - 1;
  do {
    bVar3 = *(byte *)(*(long *)(lVar4 + (long)param_5 * 0x10 + 8) + lVar5);
    fVar7 = *(float *)(*(long *)(*(long *)(param_4 + 0x18) + (long)param_5 * 0x10 + 8) + lVar5 * 4);
    uVar2 = bVar3 - 0x1c;
    if (bVar3 < 0x1c || uVar2 == 0) {
      fVar7 = fVar7 + 0.5;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (255.0 < fVar7) {
        fVar7 = 255.0;
      }
      FUN_008903f8(param_2,bVar3,(int)fVar7);
      goto joined_r0x008bd65c;
    }
    uVar1 = bVar3 - 0x19;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = (int)uVar1 >> 2;
    if (1 < uVar1) goto joined_r0x008bd65c;
    switch(uVar2 & 3) {
    case 0:
      *(float *)(*(long *)(param_2 + 8) + (ulong)uVar1 * 0x10) = fVar7;
      if (lVar6 == lVar5) {
        return;
      }
      goto LAB_008bd6d4;
    case 1:
      *(float *)(*(long *)(param_2 + 8) + (ulong)uVar1 * 0x10 + 4) = fVar7;
      break;
    case 2:
      *(float *)(*(long *)(param_2 + 8) + (ulong)uVar1 * 0x10 + 8) = fVar7;
      break;
    case 3:
      *(float *)(*(long *)(param_2 + 8) + (ulong)uVar1 * 0x10 + 0xc) = fVar7;
    }
joined_r0x008bd65c:
    if (lVar6 == lVar5) {
      return;
    }
LAB_008bd6d4:
    lVar4 = *(long *)(param_3 + 0x28);
    lVar5 = lVar5 + 1;
  } while( true );
}


