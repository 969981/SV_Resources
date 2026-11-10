/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008de4e0; name: FUN_008de4e0
 */


long FUN_008de4e0(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  uint uVar15;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (0 < iVar3) {
    lVar13 = *(long *)(param_1 + 0x30);
    iVar7 = 0;
    iVar8 = *(int *)(param_1 + 0x28);
    do {
      pcVar14 = (char *)(lVar13 + (long)iVar8 * 0x90 + 0x84);
      if (*pcVar14 == '\0') {
        lVar12 = lVar13 + (long)iVar8 * 0x90;
        uVar15 = (uint)*(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x14);
        lVar5 = (**(code **)(*(long *)(param_2 + 0x828) + 0x10))
                          (param_2 + 0x828,(ulong)uVar15 << 6,0x80);
        plVar6 = (long *)(lVar12 + 0x50);
        *plVar6 = lVar5;
        if (lVar5 != 0) {
          uVar4 = uVar15 - 1;
          if (uVar4 != 0) {
            if (uVar4 == 1) {
              uVar9 = 0;
            }
            else {
              lVar10 = 0;
              uVar9 = 0;
              do {
                *(long *)(lVar5 + lVar10 + 0x30) = lVar5 + lVar10 + 0x40;
                lVar5 = *plVar6 + lVar10;
                lVar10 = lVar10 + 0x80;
                *(long *)(lVar5 + 0x70) = lVar5 + 0x80;
                lVar5 = *plVar6;
                uVar9 = uVar9 + 2;
              } while (((ulong)uVar4 & 0xfffffffe) != uVar9);
            }
            if ((uVar4 & 1) != 0) {
              lVar5 = lVar5 + uVar9 * 0x40;
              *(long *)(lVar5 + 0x30) = lVar5 + 0x40;
              lVar5 = *plVar6;
            }
            if (1 < uVar15) {
              uVar9 = (ulong)uVar15 - 1;
              if (uVar15 == 2) {
                lVar10 = 1;
              }
              else {
                lVar10 = 0;
                uVar1 = 0;
                do {
                  uVar11 = uVar1;
                  *(long *)(lVar5 + lVar10 + 0x78) = lVar5 + lVar10;
                  lVar5 = *plVar6 + lVar10;
                  lVar10 = lVar10 + 0x80;
                  *(long *)(lVar5 + 0xb8) = lVar5 + 0x40;
                  lVar5 = *plVar6;
                  uVar1 = uVar11 + 2;
                } while ((uVar9 & 0xfffffffffffffffe) != uVar1);
                lVar10 = uVar11 + 3;
              }
              if ((uVar9 & 1) != 0) {
                lVar5 = lVar5 + lVar10 * 0x40;
                *(long *)(lVar5 + 0x38) = lVar5 + -0x40;
                lVar5 = *plVar6;
              }
            }
          }
          *(long *)(lVar5 + (ulong)uVar4 * 0x40 + 0x30) = lVar5;
          *(ulong *)(*plVar6 + 0x38) = *plVar6 + (ulong)uVar4 * 0x40;
          lVar13 = lVar13 + (long)iVar8 * 0x90;
          lVar5 = *plVar6;
          *(long *)(lVar13 + 0x58) = lVar5;
          *(long *)(lVar13 + 0x60) = lVar5;
          *pcVar14 = '\x01';
          *(undefined4 *)(lVar13 + 0x70) = 0;
          *(undefined8 *)(lVar13 + 0x78) = 0;
          *(undefined8 *)(lVar13 + 0x68) = 0;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          return lVar12;
        }
        FUN_008d43d0(param_2,0x4000);
        pcVar14 = "Buffer for stripe history is not enough\n";
        goto LAB_008de55c;
      }
      iVar7 = iVar7 + 1;
      iVar2 = 0;
      if (iVar8 + 1 < iVar3) {
        iVar2 = iVar8 + 1;
      }
      *(int *)(param_1 + 0x28) = iVar2;
      iVar8 = iVar2;
    } while (iVar7 < iVar3);
  }
  FUN_008d43d0(param_2,0x2000);
  pcVar14 = "There is no available Stripe instance.\n";
LAB_008de55c:
  FUN_008d43e0(pcVar14);
  return 0;
}


