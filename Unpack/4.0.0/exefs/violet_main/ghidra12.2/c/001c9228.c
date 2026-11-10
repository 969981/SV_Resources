/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c9228; name: FUN_001c9228
 */


long FUN_001c9228(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  char acStack_168 [264];
  
  if ((param_2 != 0) && ((*(ulong *)(param_1 + 0xf40) >> 0x33 & 1) != 0)) {
    lVar10 = 0;
    lVar11 = 0;
    lVar8 = param_2;
    lVar7 = -1;
    do {
      lVar9 = lVar7;
      lVar8 = *(long *)(lVar8 + 0x28);
      lVar7 = lVar9 + 1;
      lVar11 = lVar11 + 4;
      lVar10 = lVar10 + 8;
    } while (lVar8 != 0);
    uVar14 = (uint)lVar7;
    if (uVar14 != 0) {
      uVar13 = lVar9 + 2;
      FUN_001db818(param_1,"Shuffling %i addresses",uVar13 & 0xffffffff);
      plVar5 = (long *)FUN_001ec2f8(lVar10);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      lVar10 = 8;
      *plVar5 = param_2;
      lVar8 = lVar7;
      lVar9 = param_2;
      do {
        lVar9 = *(long *)(lVar9 + 0x28);
        *(long *)((long)plVar5 + lVar10) = lVar9;
        lVar8 = lVar8 + -1;
        lVar10 = lVar10 + 8;
      } while (lVar8 != 0);
      lVar10 = FUN_001ec2f8(lVar11);
      if (lVar10 == 0) goto LAB_001c93e8;
      iVar4 = FUN_001db18c(param_1,lVar10,lVar11);
      if (iVar4 == 0) {
        do {
          uVar1 = *(uint *)(lVar10 + -4 + uVar13 * 4);
          uVar2 = 0;
          uVar12 = (uint)uVar13;
          if (uVar12 != 0) {
            uVar2 = uVar1 / uVar12;
          }
          uVar1 = uVar1 - uVar2 * uVar12;
          lVar11 = plVar5[uVar1];
          plVar5[uVar1] = plVar5[uVar13 - 1];
          plVar5[uVar13 - 1] = lVar11;
          uVar13 = uVar13 - 1;
        } while (1 < (long)uVar13);
        if (uVar14 < 2) {
          uVar14 = 1;
        }
        uVar13 = (ulong)uVar14;
        plVar3 = plVar5;
        do {
          uVar13 = uVar13 - 1;
          *(long *)(*plVar3 + 0x28) = plVar3[1];
          plVar3 = plVar3 + 1;
        } while (uVar13 != 0);
        *(undefined8 *)(plVar5[lVar7] + 0x28) = 0;
        param_2 = *plVar5;
      }
      FUN_001ec308(lVar10);
      FUN_001ec308(plVar5);
    }
  }
  plVar5 = (long *)FUN_001ec338(1,0x18);
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  FUN_001c9414(param_3,param_4,acStack_168);
  sVar6 = strlen(acStack_168);
  *plVar5 = param_2;
  plVar5[2] = 1;
  FUN_001ed1e0(plVar5 + 1);
  if (plVar5[1] == 0) {
    plVar5[1] = 1;
  }
  lVar7 = FUN_001c8974(*(undefined8 *)(param_1 + 200),acStack_168,sVar6 + 1,plVar5);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return lVar7;
  }
LAB_001c93e8:
  FUN_001ec308(plVar5);
  return 0;
}


